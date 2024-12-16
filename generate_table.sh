#!/usr/bin/env bash

array=()

for dir in ./informatyka/*; do
	# Check if it's a regular file
	for file in $dir/*; do
		# Skip if is a directory
		if [ -d "$file" ]; then
			continue
		fi

		# Get only the file name
		file="$(basename "$file")"

		# Check if the file is an Access or an Excel file
		number=$(echo "$file" | grep -oP 'Zadanie \K[0-9]+')

		if [ -z "${number}" ]; then
			# Check if the file is a cpp file
			number=$(echo "$file" | grep -oP -m 1 '^[A-z]+_\K[0-9]+')
		fi
		array+=("$number")
	done
done

tasks=($(printf "%s\n" "${array[@]}" | sort | uniq))

# Generate a title
echo -n "| Matura | "
for task in "${tasks[@]}"; do
	echo -n "$task | "
done
echo
echo -n "|-|"
for task in "${tasks[@]}"; do
	echo -n "-|"
done
echo

# Generate markdown table
for dir in ./informatyka/*; do
	# Check if it's a regular file
	matura_name=$(echo $dir | sed 's#./informatyka/##')
	echo -n "| $matura_name | "

	completed_tasks=()
	for file in $dir/*; do
		# Skip if is a directory
		if [ -d "$file" ]; then
			continue
		fi

		# Get only the file name
		file="$(basename "$file")"
		# Check if the file is an Access or an Excel file
		number=$(echo "$file" | grep -oP 'Zadanie \K[0-9]+')
		if [ -z "${number}" ]; then
			# Check if the file is a cpp file
			number=$(echo "$file" | grep -oP '^[A-z]+_\K[0-9]+')
		fi
		completed_tasks+=("$number")
	done
	completed_tasks=($(printf "%s\n" "${completed_tasks[@]}" | sort | uniq))
	# echo ${completed_tasks[@]}

	i=0
	for task in "${tasks[@]}"; do
		# echo "${completed_tasks[$i]}" "$task"
		if [ "${completed_tasks[$i]}" = "$task" ]; then
			echo -n "✅ | "
			i=$((i + 1))
		else
			echo -n "| "
		fi
	done
	echo ""
done

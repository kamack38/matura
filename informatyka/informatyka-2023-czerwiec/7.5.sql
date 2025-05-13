SELECT Firmy.nazwa, COUNT(*) AS LiczbaInstalacji
FROM Firmy 
INNER JOIN Instalacje ON Firmy.id_firmy = Instalacje.id_firmy
GROUP BY Firmy.id_firmy
ORDER BY COUNT(*) DESC;

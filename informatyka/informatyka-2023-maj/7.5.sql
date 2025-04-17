SELECT Sum(cena)
FROM Sklep
INNER JOIN Gry ON Sklep.id_gry = Gry.id_gry
WHERE Gry.kategoria = "logiczna" AND Sklep.promocja = true;

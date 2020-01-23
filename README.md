# MeleeCombatFP

Prototyp systemu walki bronią białą w perspektywie FP oraz Lock-On targetowaniem z nastawieniem na strategie,
mechanika walki przypomina hybrydę między Mordhau-For Honor,

Klawiszologia:

Ustawienie pozycji miecza/Gardy - środkowy przycisk myszki + ruch myszy po skosie lub po krzyżu,
Blokowanie - przytrzymać prawy przycisk myszy (możliwe że będzie na wcisniecie + timing)
Atak - lewy przycisk myszy (niestety aktualnie źle przesuwa rękę, w dół mimo, że vector Attack_Location dobrze wykrywa lokalizacje ciosu, można w ostatniej sekwencji event_ticka, przypisać do Cur Hand Position, bezposrednio Attack_Localization dla testu

Aktualnie działa:

System zmiany gardy, przekładnie miecza do 9 pozycji, ruchem myszki na 4 skosy (np. góra i lewo), na krzyż oraz bez ruchu środkowa pozycja,

System blokowania, póki co tylko odpowiedni przechył nadgarstka zależnie od kąta ustawienia broni (jednej z 9 pozycji)

System ataku 70%, wykrywa długość przytrzymania przycisku, powyżej 1s szeroki cios, poniżej pchnięcie,
Aktualnie wykrywa poprawnie lokalizacje do pchnięcia, inna zależnie od przyjętej pozycji i aktualnej lokalizacji ręki (takie dynamiczne namierzanie umożliwia wykonywanie ciosów w pół pozycji i tak samo bloków, umożliwiając szerszy zakres ciosów oraz większą istotność uwagi i dobrego wyczucia czasu, refleksu przy blokowaniu dla lepszego efektu,
Założenia: by zablokować pchnięcie, należy blokować z tej samej strony z której atakuje przecinik (lustrzane odbicie),
aby zablokować szeroki cios trzeba wykonać blok po przeciwnej pozie (szeroki cios zmienia lokalizacje, przechodzi przez cale ciało),
wieć aby zablokować pchnięcie z lewej, trzeba użyć bloku z lewej, aby zablokować szeroki cios z_dołu_z_lewj, należy zablokować z_góry_z_prawej, szerokie ciosy są wolniejsze, wymagają zamachu wiec dają czas, by przybrac odpowiednią pozycję

Do zrobienia:
Kontroler AI wykorzystujący gotowy blueprint do walki, kwestia ustawienia podążania za graczem, przemieszczania się na boki względem zalockowanego forward vectora na graczu, oraz pseudo losowe ataki szybkie/wolne, częstotliwość i losowość w czasie reakcji bloków na ataki gracza,

Dorobić Lock-On targeting w głównym BP walki

Physcial animations przy ciosach oraz blokach (odginanie nadgarstka oraz ramienia), aby postacie były fizyczne odpychane przy ciosach,

Semi-Ragdol, jakaś wariacja ragdola z animacją dla ciekawszego efektu

Environment, materiały, efekty 

Priorytety: System Ataku -> Lock-On -> Kontroler AI -> Physical Animations -> Ragdoll -> Enviro, mat/efekty

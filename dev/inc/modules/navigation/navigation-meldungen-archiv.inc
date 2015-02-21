<!-- Modul: Navigation -->

<nav role="navigation" class="navigation">
	<!--Liste als Navigation, enthält pro Navigationselement einen Link mit anschliessender Liste
		des entsprechenden Untermenäs. Das Untermenü enthält eine Liste der entsprechenden Links.
	-->
  <ul>
    <li><a href="index.php">Start</a></li>
    <li><a href="veranstaltung.php">Veranstaltungen</a></li>
    <li><a href="ueberuns-dasteam.php">Über Uns</a></li>
    <li class="has-submenu active">
      <a href="meldungen.php">Meldungen</a>
      <div class="submenu">
        <ul class="special"><!-- special LIs können natürlich zusätzlich eine active-Klasse enthalten -->
            <li><a href="#">Überschwemmung Haiti</a></li>
            <li><a href="#">Flüchtlingsdrama Syrien</a></li>
            <li><a href="#">Flutkatastrophe Philippinen</a></li>
            <li class="archive active"><a href="meldungen-archiv.php">Archiv</a></li>
        </ul>
      </div>
    </li>
    <li><a class="" href="helfen.php">Helfen</a>
    </li>
    <li><a class="" href="presse.php">Presse</a>
    </li>
    <li><a class="" href="kontakt.php">Kontakt</a>
    </li>
  </ul>
</nav>  
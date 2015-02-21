<!-- Modul: Navigation -->

<nav role="navigation" class="navigation">
	<!--Liste als Navigation, enthält pro Navigationselement einen Link mit anschliessender Liste
		des entsprechenden Untermenäs. Das Untermenü enthält eine Liste der entsprechenden Links.
	-->
  <ul>
    <li><a href="index.php">Start</a></li>
    <li><a href="veranstaltung.php">Veranstaltungen</a></li>
    <li class="has-submenu active"><!-- Marker, um bereits an dieser Stelle zu wissen, dass noch ein Submenu kommt, wichtig für JS -->
      <a href="ueberuns-dasteam.php">Über Uns</a>
      <div class="submenu">
        <ul>
          <li><a href="ueberuns-dasteam.php">Das Team</a></li>
          <li><a href="#">Mitwirkende und Helfer</a></li>
          <li class="active"><a href="ueberuns-sponsoren.php">Sponsoren</a></li>
          <li><a href="#">Über terre des hommes</a></li>
          <li><a href="ueberuns-aktivitaeten.php">Unsere Aktivitäten</a></li>
        </ul>
      </div>
    </li>
    <li><a href="meldungen.php">Meldungen</a></li>
    <li><a href="helfen.php">Helfen</a></li>
    <li><a href="presse.php">Presse</a></li>
    <li><a href="kontakt.php">Kontakt</a></li>
  </ul>
</nav>
<!-- Modul: Navigation -->

<nav role="navigation" class="navigation">
	<!--Liste als Navigation, enthält pro Navigationselement einen Link mit anschliessender Liste
		des entsprechenden Untermenäs. Das Untermenü enthält eine Liste der entsprechenden Links.
	-->
  <ul>
    <li class=""><a href="index.php">Start</a>
    </li>
    <li class=""><a href="veranstaltung.php">Veranstaltungen</a>
    </li>
    <li class="has-submenu"><!-- Marker, um bereits an dieser Stelle zu wissen, dass noch ein Submenu kommt, wichtig für JS -->
      <a href="ueberuns-dasteam.php">Über Uns</a>
      <div class="submenu">
        <ul>
          <li><a href="ueberuns-dasteam.php">Das Team</a></li>
          <li><a href="#">Mitwirkende und Helfer</a></li>
          <li><a href="ueberuns-sponsoren.php">Sponsoren</a></li>
          <li><a href="#">Über terre des hommes</a></li>
          <li><a href="ueberuns-aktivitaeten.php">Unsere Aktivitäten</a></li>
        </ul>
      </div>
    </li>
    <li class="has-submenu">
      <a href="meldungen.php">Meldungen</a>
      <div class="submenu">
        <ul>
          <li><a href="#">Januar</a></li>
          <li><a href="#">Februar</a></li>
          <li><a href="#">März</a></li>
          <li><a href="#">April</a></li>
          <li><a href="#">Mai</a></li>
          <li><a href="#">Juni</a></li>
          <li><a href="#">Juli</a></li>
          <li><a href="#">August</a></li>
          <li><a href="#">September</a></li>
          <li><a href="#">Oktober</a></li>
          <li><a href="#">November</a></li>
		  <li><a href="#">Dezember</a></li>
          <li class="special"><a href="#">Überschwemmung Haiti</a></li><!-- special LIs können natürlich zusätzlich eine active-Klasse enthalten -->
          <li class="special"><a href="#">Flüchtlingsdrama Syrien</a></li>
          <li class="special"><a href="#">Flutkatastrophe Philippinen</a></li>
          <li class="archive">
            <select name="meldungen-archiv">
              <option selected>Jahr</option>
              <option value="2014">2014</option>
              <option value="2013">2013</option>
              <option value="2012">2012</option>
              <option value="2011">2011</option>
              <option value="2010">2010</option>
              <option value="2009">2009</option>
              <option value="2008">2008</option>
              <option value="2007">2007</option>
              <option value="2006">2006</option>
              <option value="2005">2005</option>
              <option value="2004">2004</option>
              <option value="2003">2003</option>
              <option value="2002">2002</option>
              <option value="2001">2001</option>
            </select>
          </li>
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
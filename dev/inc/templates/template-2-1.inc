<?php include "inc/templates/template-parts/head.inc"; ?>

<div class="ym-column">
    <!-- Die Inhaltsspalte -->
    <main class="ym-col1">
        <h1 class="logo"><a href="index.php"><img src="images/logo-tdh-murgtal.gif" alt="Logo von Terre des Hommes Murgtal/Mittelbaden"><span class="ym-hideme">terre des hommes Murgtal/Mittelbaden</span></a></h1>
        
        <h2 class="ym-hideme" id="maincnt">Der Inhaltsbereich</h2>
        
        <div class="ym-grid">
            <div class="ym-g66 ym-gl">
              <?php
                  foreach($contentleftincludes as $contentleft) {
                       include 'inc/modules/'.$contentleft;
                  }
              ?>
            </div>
            <div class="ym-g33 ym-gr">
              <?php
                  foreach($contentrightincludes as $contentright) {
                       include 'inc/modules/'.$contentright;
                  }
              ?>
            </div>
        </div>
        <!-- /.ym-grid  -->
        <footer class="sitefooter">
          &copy; 2015 terre des hommes Mittelbaden/Murgtal  <a href="impressum.php">Impressum</a>
        </footer>
    </main>
    <!-- /.ym-col1 -->
    <!-- Die Seitenspalte -->
    <div class="ym-col3">
        <h2 class="ym-hideme" id="sidecnt">Die Seitenspalte</h2>
        <?php
            foreach($sideincludes as $side) {
		         include 'inc/modules/'.$side;
            }
        ?>
    </div>
    <!-- /.ym-col3 -->
</div>
<!-- /.ym-column -->
<?php include "inc/templates/template-parts/footer.inc"; ?>

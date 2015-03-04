<?php include "inc/templates/template-parts/head.inc"; ?>

<div class="ym-column">
    <!-- Die Inhaltsspalte -->
    <main class="ym-col1">
      <h1 class="logo"><a href="index.php"><img src="images/logo-tdh-murgtal.gif" alt="Logo von Terre des Hommes Murgtal/Mittelbaden"><span class="ym-hideme">terre des hommes Murgtal/Mittelbaden</span></a></h1>

      <?php include "inc/templates/template-parts/navigation.inc"; ?>
      
        <h2 class="ym-hideme" id="maincnt">Der Inhaltsbereich</h2>

        <?php
            if (isset($artikelincludes)) {
                foreach($artikelincludes as $artikel) {
                    include 'inc/modules/'.$artikel;
                }
            }
        ?>        

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

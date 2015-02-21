<?php include "inc/templates/template-parts/head.inc"; ?>

<?php
    if (isset($artikelincludes)) {
        foreach($artikelincludes as $artikel) {
            include 'inc/modules/'.$artikel;
        }
    }
?>        
    
<?php include "inc/templates/template-parts/footer.inc"; ?>       

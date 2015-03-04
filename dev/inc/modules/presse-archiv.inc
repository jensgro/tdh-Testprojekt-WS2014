<?php
$titles = [
    "Spenden-Aktion für die Menschen in den Philippinen",
    ["Taifun auf den Pilippinen", "Medizinische Versorgung und Suppenküchen für Kinder"],
    ["Taifun auf den Pilippinen", "terre des hommes-Partnerorganisation in Südostasien mobilisieren Hilfe für die Taifun-Opfer"],
];
?>

<section class="press-archive">
    <h3>Archiv für November 2014</h3>
    <?php foreach ($titles as $title) : ?>
    <div class="teaser">
        <header>
            <?php if (is_array($title)) : ?>
                <h4><?php echo $title[0]; ?></h4>
                <h5><?php echo $title[1]; ?></h5>
            <?php else: ?>
                <h4><?php echo $title; ?></h4>
            <?php endif; ?>
            <time datetime="2014-11-20">Mittwoch, 20. November 2014</time>
        </header>
        <p>Lorem ipsum dolor sit amet, consectetuer adipiscing
            elit. Aenean commodo ligula eget dolor. Aenean massa
            <strong>strong</strong>. Cum sociis natoque penatibus
            et magnis dis parturient montes, nascetur ridiculus
            mus. Donec quam felis, ultricies nec, pellentesque
            eu, pretium quis, sem. Nulla consequat massa quis
            enim. Donec pede justo, fringilla vel, aliquet nec,
            vulputate eget, arcu. In enim justo, rhoncus ut,
            imperdiet a, venenatis vitae, justo. Nullam dictum
            felis eu pede <a class="external ext" href="#">link</a>
            mollis pretium. Integer tincidunt. Cras dapibus.
            Vivamus elementum semper nisi. Aenean vulputate
            eleifend tellus. Aenean leo ligula, porttitor eu,
            consequat vitae, eleifend ac, enim. Aliquam lorem ante,
            dapibus in, viverra quis, feugiat a, tellus. Phasellus
            viverra nulla ut metus varius laoreet. Quisque rutrum.
            Aenean imperdiet. Etiam ultricies nisi vel augue.
            Curabitur ullamcorper ultricies nisi.</p>
        <a href="#" class="goon">zum Artikel</a>
    </div>
    <?php endforeach; ?>
</section>
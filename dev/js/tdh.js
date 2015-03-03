/* individuelles JS */

var TDH = {
    /**
     * Colja
     */
    initAkkordeon: function () {
        "use strict";
        var speed = 700,
            akkordeons = $('.akkordeon');

        for (var i = 0; i < akkordeons.length; i++) {
            var akk = akkordeons[i],
                $articles = $($(akk).find('article'));
            
            $articles.click(function() {
                var $this = $(this);

                $articles
                    .filter('.isOpen')
                    .find('.content')
                    .slideUp(speed);
                $articles.removeClass('isOpen');      
                
                $this
                    .find('.content')
                    .slideDown(speed);
                $this.addClass('isOpen');
            });
        }
    }
};

/*
 When DOM is ready
 */
$(function () {
    // Akkordeon
    if ($('.akkordeon').length > 0) {
        TDH.initAkkordeon();
    }
});
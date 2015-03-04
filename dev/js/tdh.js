/* individuelles JS */

var TDH = {
    /**
     * Colja
     */
    initAccordeon: function () {
        "use strict";
        var speed = 700,
            className = '.accordeon',
            accordeons = $(className),
            // get all the articles of all the accordeons
            articles = $(accordeons).find('article');

        for (var i = 0; i < articles.length; i++) {
            var art = articles[i];
            
            $(art).click(function() {
                if (! $(this).hasClass('isOpen')) {
                    // close all other opened articles of current accordeon
                    var parent = $(this).parents(className),
                        openArticles = $(parent).find('article.isOpen');

                    openArticles
                        .find('.content')
                        .slideUp(speed);
                    openArticles.removeClass('isOpen');

                    // slide down the current content
                    $(this)
                        .find('.content')
                        .slideDown(speed);
                    $(this).addClass('isOpen');
                }
            });
        }
    }
};

/*
 When DOM is ready
 */
$(function () {
    // Akkordeon
    if ($('.accordeon').length > 0) {
        TDH.initAccordeon();
    }
});
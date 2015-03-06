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
                } else {
                    // if it was open, close it
                    $(this)
                        .find('.content')
                        .slideUp(speed);
                    $(this).removeClass('isOpen');
                }
            });
        }
        // do whatever needed
    },


    /**
     * Heilige 3 Könige
     */

    // Init the sorter
    initTablesorter: function () {
        var i = 0;
        var j = 0;

        TDH.tableList = [];

        $("tr td").each(function (){

            if(j % 3 == 0)
            {
                TDH.tableList[i] = [];
            }


            if(j % 3 == 0)
            {
                TDH.tableList[i][3] = $(this).html();

                var innerHTML = $(this).html();
                var splitted = innerHTML.split(">");

                TDH.tableList[i][j % 3] = splitted[1].split("<")[0];
                ++j;
            }
            else if (j % 3 == 1)
            {
                TDH.tableList[i][j % 3] = $(this).html();
                ++j;
            }
            else if(j % 3 == 2)
            {
                TDH.tableList[i][j % 3] = $(this).html();
                ++j;
            }

            if(j % 3 == 0)
            {
                ++i;
            }

        });

    },

    sortTable: function(sortName, descending) {


        if(sortName)
        {
            function sortByName(a, b) {
                if (a[0] === b[0]) {
                    return 0;
                }
                else {
                    return (a[0] < b[0]) ? -1 : 1;
                }
            }

            TDH.tableList.sort(sortByName);

            if(!descending)
                $('.table-employee-name').html("Name<div class=\"triangle-up\" onclick=\"TDH.sortTable(true, true);\"></div>")
            else
                $('.table-employee-name').html("Name<div class=\"triangle-down\" onclick=\"TDH.sortTable(true, false);\"></div>")
        }
        else {
            function sortByCity(a, b) {
                if (a[2] === b[2]) {
                    return 0;
                }
                else {
                    return (a[2] < b[2]) ? -1 : 1;
                }
            }

            TDH.tableList.sort(sortByCity);
            
            if(!descending)
                $('.table-employee-city').html("Ort<div class=\"triangle-up\" onclick=\"TDH.sortTable(false, true);\"></div>")
            else
                $('.table-employee-city').html("Ort<div class=\"triangle-down\" onclick=\"TDH.sortTable(false, false);\"></div>")

        }

        if(descending) {
            TDH.tableList.reverse();
        }


        console.log(TDH.tableList);

        var i = 0;
        var j = 0;
        $("tr td").each(function (){    

            if(i % 3 == 0)
            {
                $(this).html(TDH.tableList[j][3]);
            }
            else if (i % 3 == 1)
            {
                $(this).html(TDH.tableList[j][1]);
            }
            else if(i % 3 == 2)
            {
                $(this).html(TDH.tableList[j][2]);
            }




            if(i % 3 == 2)
                ++j;

            ++i;

        });
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

    if($('#table-employee').length > 0) {
        TDH.initTablesorter();
    }
});
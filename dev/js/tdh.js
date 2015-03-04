/* individuelles JS */

var TDH = {
    /**
     * Colja
     */
    initAkkordeon: function () {
        "use strict";
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

        console.log(TDH.tableList);
        TDH.sortTable(false, false);
    
    },
    
    sortTable: function(sortName, descending) {
        
        
        if(sortName)
        {
            function sortFunction(a, b) {
                if (a[0] === b[0]) {
                    return 0;
                }
                else {
                    return (a[0] < b[0]) ? -1 : 1;
                }
            }
            
            TDH.tableList.sort(sortFunction);
        }
        else {
            function sortFunction(a, b) {
                if (a[2] === b[2]) {
                    return 0;
                }
                else {
                    return (a[2] < b[2]) ? -1 : 1;
                }
            }
            
            TDH.tableList.sort(sortFunction);
        
        }
        
        if(descending)
            TDH.tableList.reverse();
        
        
        var i = 0;
        $("tr td").each(function (){    
            
            if(i % 3 == 0)
            {
                $(this).html(TDH.tableList[i][0]);
            }
            else if (i % 3 == 1)
            {
                $(this).html(TDH.tableList[i][1]);
            }
            else if(i % 3 == 2)
            {
                $(this).html(TDH.tableList[i][2]);
            }
            
            ++i;

            
        });

        
        console.log(TDH.tableList);
    }
};

/*
 When DOM is ready
 */
$(function () {
    // Akkordeon
    if ($('#akkordeon').length > 0) {
        TDH.initAkkordeon();
    }
    
    if($('#tableEmployee').length > 0) {
        TDH.initTablesorter();
    }
});
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
        /*var k = 0;*/
        
        TDH.tableList = [];
        /*TDH.nameList = [];
        TDH.cityList = [];*/
        
        $("tr td").each(function (){
            
            if(j % 3 == 0)
            {
                TDH.tableList[i] = [];
            }
            
            
            if(j % 3 == 0)
            {
                TDH.tableList[i][j % 3] = $(this).html()
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
            
            
           /*if(i % 3 == 0)
            {
                TDH.nameList[j] = $(this).html();
                ++j;
            }
            else if (i % 3 == 2)
            {
                TDH.cityList[k] = $(this).html();
                ++k;
            }
            
            ++i;*/
            
        });
        
        /*alert(TDH.nameList);
        alert(TDH.cityList.sort().reverse());*/
        alert(TDH.tableList);
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
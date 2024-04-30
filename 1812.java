bool squareIsWhite(char* coordinates) {
    
    if(coordinates[0] == 'a'){
        if(coordinates[1] == '1' || coordinates[1] == '3' || coordinates[1] == '5' || coordinates[1] == '7'){
            return false;
        }
        else{
            return true;
        }
    }

    else if(coordinates[0] == 'b'){
         if(coordinates[1] == '1' || coordinates[1] == '3' || coordinates[1] == '5' || coordinates[1] == '7'){
            return true;
        }
        
        else{
            return false;
        }
    }
    
    else if(coordinates[0] == 'c'){
        if(coordinates[1] == '1' || coordinates[1] == '3' || coordinates[1] == '5' || coordinates[1] == '7'){
            return false;
        }
        
        else{
            return true;
        }
    }
    
    else if(coordinates[0] == 'd'){
        if(coordinates[1] == '1' || coordinates[1] == '3' || coordinates[1] == '5' || coordinates[1] == '7'){
            return true;
        }
        
        else{
            return false;
        }
    }
    
    else if(coordinates[0] == 'e'){
        if(coordinates[1] == '1' || coordinates[1] == '3' || coordinates[1] == '5' || coordinates[1] == '7'){
            return false;
        }
        
        else{
            return true;
        }
    }
    
     else if(coordinates[0] == 'f'){
        if(coordinates[1] == '1' || coordinates[1] == '3' || coordinates[1] == '5' || coordinates[1] == '7'){
            return true;
        }
        
        else{
            return false;
        }
    }

    
    else if(coordinates[0] == 'g'){
        if(coordinates[1] == '1' || coordinates[1] == '3' || coordinates[1] == '5' || coordinates[1] == '7'){
            return false;
        }
        
        else{
            return true;
        }
    }

    
    else if(coordinates[0] == 'h'){
        if(coordinates[1] == '1' || coordinates[1] == '3' || coordinates[1] == '5' || coordinates[1] == '7'){
            return true;
        }
        
        else{
            return false;
        }
}
else{
    return true;
}

}
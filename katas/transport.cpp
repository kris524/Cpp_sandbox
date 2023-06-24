int rental_car_cost(int d){
    
    int res = d*40;

    if (d>=3 && d<7){
        res-=20;
    }

    if(d>=7){
        res -= 50;
    }
    return res;

}
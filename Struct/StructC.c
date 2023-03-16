//演示了如何去定义结构体Cube


struct Cube
{
    int lenght;
    int width
};


struct Cube* ShowCube()
{

    struct Cube *cube =  (struct Cube*)(malloc(sizeof (struct Cube)));
    cube->width = 1 ;
    cube->lenght = 2;
    return cube;

}

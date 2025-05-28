#include "Entity.h"
#include <memory>
using namespace std;

int main()
{
    {
        unique_ptr<Entity>entity = make_unique<Entity>();
        entity->print();
    }

    {
        shared_ptr<Entity>e0;
        {
            shared_ptr<Entity>sharedEntity = make_shared<Entity>();
            e0 = sharedEntity;
            sharedEntity->print();

        }
    }
    return 0;
}


#ifndef PEPPER_ORE_IMG_H
#define PEPPER_ORE_IMG_H

#include "leaf.h"


namespace pepper
{
    namespace html
    {
        class img : public leaf
        {
        public:
            img () :
                    leaf ("img")
            {}

            virtual ~img ()
            {}

        private:
        protected:
        };
    }//ns html
}//ns pepper

#endif //PEPPER_ORE_IMG_H
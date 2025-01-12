
#include "index.h"
#include "util.h"

namespace eye {

class IndexRandom : public Index {
public:
    IndexRandom(const size_t dimension, const size_t n);
    virtual ~IndexRandom();
    std::mt19937 rng;
    void Save(const char *filename)override{}
    void Load(const char *filename)override{}
    virtual void Build(size_t n, const float *data, const Parameters &parameters) override;

    virtual void Search(
      int query_id,
      const float *x,
      size_t k,
      const Parameters &parameters,
      unsigned *indices) override ;

};

}

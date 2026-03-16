#pragma once

#include "pch.h"

namespace qos
{
namespace mp
{
class gsc_fields : public Module
{
  public:
    gsc_fields();
    ~gsc_fields();

    const char *get_name() override
    {
        return "gsc_fields";
    };
};
} // namespace mp
} // namespace qos

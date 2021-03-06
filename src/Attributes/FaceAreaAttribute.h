/* This file is part of PyMesh. Copyright (c) 2015 by Qingnan Zhou */
#pragma once

#include "MeshAttribute.h"

namespace PyMesh {

class FaceAreaAttribute : public MeshAttribute {
    public:
        FaceAreaAttribute(const std::string& name) : MeshAttribute(name) {}
        virtual ~FaceAreaAttribute() {}

    public:
        virtual void compute_from_mesh(Mesh& mesh);
};

}

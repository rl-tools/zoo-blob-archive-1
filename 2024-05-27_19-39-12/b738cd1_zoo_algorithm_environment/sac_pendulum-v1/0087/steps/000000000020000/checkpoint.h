// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
namespace rl_tools::checkpoint::actor {
    namespace layer_0 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {192, 230, 24, 63, 6, 21, 179, 190, 135, 63, 146, 190, 47, 200, 148, 190, 112, 247, 157, 190, 95, 187, 204, 62, 187, 111, 230, 190, 58, 130, 177, 62, 126, 52, 235, 61, 197, 89, 147, 190, 80, 202, 225, 63, 159, 147, 152, 62, 212, 22, 53, 63, 15, 126, 150, 63, 191, 194, 207, 62, 85, 246, 53, 63, 102, 191, 142, 63, 226, 110, 99, 62, 165, 87, 254, 61, 69, 73, 65, 191, 247, 190, 158, 62, 90, 189, 28, 63, 28, 240, 163, 191, 61, 241, 193, 190, 98, 89, 57, 63, 26, 17, 57, 63, 120, 77, 237, 62, 9, 147, 51, 63, 110, 40, 115, 191, 108, 235, 131, 189, 211, 85, 218, 188, 127, 19, 101, 62, 103, 12, 131, 190, 92, 231, 207, 62, 53, 92, 181, 62, 202, 203, 237, 62, 131, 144, 228, 189, 135, 231, 155, 191, 95, 118, 207, 190, 42, 53, 232, 190, 253, 191, 56, 62, 40, 185, 192, 61, 175, 113, 125, 63, 119, 8, 146, 191, 49, 2, 178, 189, 141, 118, 149, 62, 110, 65, 72, 191, 228, 34, 233, 190, 7, 82, 218, 62, 161, 210, 100, 63, 81, 50, 202, 62, 57, 220, 83, 62, 226, 38, 194, 190, 65, 129, 52, 63, 99, 240, 231, 62, 159, 27, 1, 62, 199, 102, 249, 62, 134, 192, 116, 62, 153, 214, 88, 190, 200, 238, 49, 63, 95, 43, 105, 191, 204, 146, 69, 191, 186, 152, 10, 61, 120, 140, 12, 63, 176, 130, 101, 63, 185, 70, 157, 62, 31, 37, 147, 191, 187, 59, 127, 190, 125, 26, 10, 62, 222, 10, 141, 189, 134, 169, 157, 191, 207, 143, 253, 189, 139, 86, 82, 191, 130, 210, 58, 190, 252, 70, 46, 190, 86, 254, 4, 191, 58, 174, 165, 63, 64, 146, 230, 62, 133, 96, 226, 190, 125, 124, 155, 63, 63, 72, 28, 63, 29, 104, 1, 62, 44, 212, 50, 191, 64, 37, 230, 62, 145, 14, 166, 190, 162, 10, 61, 63, 154, 1, 254, 190, 161, 16, 94, 63, 172, 254, 21, 63, 87, 163, 147, 62, 140, 157, 182, 190, 104, 55, 115, 190, 135, 217, 62, 188, 145, 78, 248, 61, 48, 145, 153, 190, 252, 143, 219, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {94, 179, 65, 191, 135, 75, 147, 62, 61, 20, 42, 63, 58, 236, 249, 190, 222, 185, 255, 190, 63, 29, 142, 62, 14, 238, 159, 189, 42, 155, 2, 190, 8, 53, 113, 191, 87, 107, 168, 61, 104, 209, 157, 62, 98, 230, 112, 190, 55, 159, 158, 62, 25, 181, 40, 63, 233, 131, 170, 62, 196, 60, 71, 190, 82, 174, 161, 62, 104, 74, 82, 190, 189, 154, 163, 190, 94, 16, 159, 189, 153, 137, 50, 63, 52, 214, 205, 190, 150, 19, 82, 63, 49, 19, 56, 63, 95, 85, 150, 190, 80, 189, 12, 190, 44, 181, 32, 188, 232, 244, 110, 191, 88, 105, 207, 62, 233, 106, 137, 190, 24, 80, 27, 191, 38, 40, 59, 189};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_0 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 3, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_1 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {112, 109, 164, 190, 0, 81, 44, 190, 152, 174, 172, 186, 141, 15, 125, 191, 13, 156, 229, 61, 140, 77, 155, 62, 217, 16, 71, 189, 102, 118, 44, 61, 229, 251, 66, 62, 111, 61, 115, 60, 130, 75, 40, 61, 108, 30, 236, 61, 118, 251, 224, 189, 32, 46, 93, 62, 212, 120, 219, 189, 30, 255, 68, 188, 145, 55, 254, 61, 142, 49, 37, 190, 92, 89, 140, 61, 215, 125, 174, 189, 234, 49, 143, 62, 86, 197, 241, 187, 68, 212, 4, 59, 246, 193, 165, 61, 162, 136, 139, 190, 1, 98, 116, 191, 177, 162, 32, 191, 53, 42, 80, 190, 88, 250, 139, 60, 208, 172, 166, 62, 63, 189, 102, 61, 232, 27, 209, 61, 143, 74, 57, 190, 123, 100, 228, 61, 240, 7, 109, 189, 251, 201, 103, 190, 248, 176, 35, 61, 12, 118, 100, 189, 104, 149, 49, 61, 164, 93, 44, 190, 157, 254, 74, 62, 139, 8, 17, 61, 1, 89, 22, 190, 43, 57, 8, 190, 68, 71, 43, 190, 166, 69, 95, 190, 96, 178, 108, 190, 140, 193, 38, 62, 100, 138, 238, 61, 77, 27, 142, 189, 181, 4, 121, 61, 82, 197, 250, 61, 191, 152, 40, 190, 221, 100, 10, 62, 155, 32, 251, 59, 209, 125, 50, 189, 150, 187, 42, 190, 172, 60, 158, 62, 202, 214, 12, 190, 194, 95, 85, 62, 130, 171, 25, 61, 87, 32, 198, 62, 112, 186, 210, 61, 207, 198, 118, 62, 115, 223, 200, 62, 79, 18, 151, 62, 65, 17, 6, 62, 251, 110, 67, 63, 27, 239, 7, 191, 236, 138, 207, 188, 77, 3, 99, 62, 166, 72, 141, 62, 245, 1, 226, 190, 151, 47, 211, 62, 94, 50, 12, 190, 242, 51, 203, 190, 84, 28, 153, 190, 73, 12, 136, 189, 50, 53, 208, 62, 228, 215, 18, 61, 67, 239, 174, 59, 26, 221, 203, 61, 181, 157, 223, 190, 128, 176, 24, 62, 95, 91, 218, 62, 40, 69, 196, 190, 28, 152, 58, 62, 196, 30, 47, 62, 0, 1, 70, 61, 184, 244, 141, 62, 21, 181, 156, 61, 219, 20, 206, 190, 231, 169, 61, 190, 35, 209, 156, 190, 208, 194, 52, 190, 50, 222, 212, 60, 157, 37, 176, 60, 42, 64, 25, 61, 52, 61, 15, 190, 107, 149, 177, 189, 99, 170, 234, 61, 52, 250, 186, 189, 6, 65, 164, 60, 148, 226, 29, 190, 73, 97, 22, 62, 239, 26, 177, 189, 41, 247, 205, 61, 183, 138, 189, 189, 138, 149, 209, 60, 40, 186, 20, 61, 77, 9, 243, 189, 149, 168, 47, 62, 56, 134, 20, 190, 108, 37, 214, 60, 165, 42, 7, 62, 164, 240, 169, 187, 249, 66, 57, 189, 174, 96, 227, 189, 118, 57, 72, 190, 48, 170, 58, 190, 138, 29, 33, 190, 172, 229, 83, 190, 144, 253, 49, 190, 171, 249, 138, 61, 20, 123, 31, 190, 131, 41, 23, 62, 199, 49, 30, 190, 165, 251, 23, 61, 197, 227, 82, 62, 93, 136, 174, 190, 118, 206, 242, 190, 95, 188, 204, 191, 129, 200, 171, 190, 233, 70, 161, 61, 218, 65, 104, 190, 210, 234, 64, 188, 102, 191, 74, 191, 244, 201, 66, 62, 60, 9, 95, 62, 78, 65, 2, 191, 82, 151, 74, 62, 224, 12, 135, 189, 119, 117, 168, 62, 206, 93, 187, 61, 193, 17, 177, 189, 252, 48, 209, 190, 160, 109, 199, 190, 52, 168, 91, 191, 206, 123, 214, 189, 86, 71, 59, 190, 11, 98, 136, 191, 182, 179, 14, 190, 42, 42, 185, 190, 210, 136, 162, 190, 177, 125, 67, 191, 226, 9, 120, 61, 78, 5, 99, 62, 188, 249, 108, 62, 167, 220, 13, 62, 146, 181, 141, 62, 142, 121, 54, 62, 140, 62, 89, 62, 31, 134, 249, 190, 250, 30, 221, 191, 19, 177, 168, 189, 78, 251, 234, 61, 163, 219, 9, 60, 253, 30, 101, 190, 50, 35, 131, 62, 76, 126, 47, 189, 126, 176, 120, 189, 95, 164, 141, 61, 214, 138, 159, 190, 200, 101, 12, 191, 52, 178, 144, 62, 175, 196, 207, 190, 104, 177, 72, 189, 51, 217, 149, 60, 236, 222, 211, 61, 184, 153, 134, 62, 149, 205, 62, 191, 14, 130, 218, 61, 189, 96, 8, 191, 165, 166, 171, 189, 43, 20, 58, 190, 168, 220, 14, 190, 203, 73, 154, 189, 5, 29, 51, 190, 142, 251, 55, 191, 220, 122, 165, 62, 124, 17, 17, 62, 56, 76, 247, 190, 249, 27, 185, 190, 146, 166, 176, 61, 170, 53, 133, 62, 135, 214, 91, 191, 86, 207, 73, 190, 100, 110, 157, 62, 212, 199, 160, 188, 230, 154, 171, 188, 151, 225, 181, 190, 230, 43, 55, 190, 154, 3, 49, 62, 89, 245, 45, 191, 255, 3, 117, 61, 101, 138, 137, 61, 78, 170, 48, 190, 110, 220, 9, 190, 182, 57, 164, 191, 179, 76, 63, 62, 175, 95, 22, 191, 99, 4, 8, 62, 69, 59, 204, 62, 220, 184, 101, 190, 125, 250, 61, 61, 49, 83, 192, 62, 121, 0, 104, 190, 237, 36, 134, 191, 172, 190, 225, 191, 134, 212, 169, 62, 193, 185, 141, 188, 27, 83, 182, 190, 43, 229, 178, 189, 83, 132, 35, 61, 30, 63, 43, 62, 207, 123, 133, 189, 255, 201, 5, 190, 144, 232, 237, 60, 26, 74, 31, 190, 78, 239, 195, 61, 196, 71, 92, 188, 52, 178, 63, 189, 235, 224, 153, 61, 187, 168, 166, 189, 214, 50, 26, 190, 163, 151, 14, 190, 126, 152, 18, 62, 248, 131, 32, 62, 70, 50, 0, 190, 184, 211, 208, 189, 176, 252, 152, 189, 129, 150, 219, 188, 14, 206, 178, 189, 214, 18, 253, 189, 101, 119, 177, 189, 90, 233, 202, 189, 244, 132, 12, 61, 115, 209, 103, 189, 224, 240, 29, 190, 173, 247, 53, 189, 86, 245, 46, 61, 144, 47, 41, 190, 36, 149, 87, 189, 1, 6, 92, 187, 78, 2, 18, 62, 24, 112, 150, 61, 139, 209, 124, 62, 77, 125, 136, 61, 128, 205, 69, 61, 130, 241, 200, 62, 205, 65, 195, 190, 198, 7, 152, 191, 24, 43, 129, 62, 29, 236, 252, 62, 93, 84, 73, 191, 156, 88, 2, 63, 158, 247, 59, 190, 240, 48, 38, 191, 169, 46, 135, 62, 94, 87, 104, 62, 219, 78, 87, 62, 39, 252, 87, 62, 59, 126, 84, 190, 23, 2, 252, 61, 135, 249, 62, 191, 223, 89, 218, 61, 87, 79, 164, 62, 224, 85, 12, 191, 214, 31, 167, 62, 209, 123, 49, 62, 230, 76, 189, 190, 72, 127, 221, 62, 3, 83, 173, 189, 166, 216, 247, 190, 199, 20, 217, 190, 171, 154, 240, 191, 69, 92, 155, 61, 150, 145, 209, 61, 149, 16, 244, 189, 98, 28, 117, 189, 82, 77, 240, 189, 41, 54, 181, 61, 123, 24, 11, 62, 16, 109, 17, 190, 148, 184, 30, 190, 173, 92, 254, 61, 245, 163, 104, 61, 5, 34, 254, 189, 150, 223, 96, 189, 112, 138, 35, 60, 100, 74, 199, 189, 100, 15, 36, 190, 169, 108, 207, 61, 191, 191, 42, 190, 152, 166, 174, 61, 126, 28, 251, 189, 66, 12, 24, 190, 7, 233, 180, 61, 227, 174, 23, 61, 1, 223, 140, 59, 184, 209, 7, 62, 115, 175, 29, 190, 239, 192, 53, 189, 100, 48, 51, 190, 90, 179, 17, 61, 90, 37, 24, 62, 165, 52, 3, 189, 221, 243, 180, 61, 61, 149, 169, 61, 186, 85, 212, 61, 50, 115, 101, 189, 159, 172, 139, 60, 17, 16, 47, 190, 25, 162, 8, 60, 199, 61, 29, 62, 197, 85, 255, 189, 170, 93, 190, 61, 6, 64, 218, 189, 147, 62, 186, 60, 84, 11, 175, 189, 201, 123, 169, 188, 95, 196, 51, 190, 114, 149, 4, 190, 2, 167, 74, 60, 59, 68, 165, 187, 46, 102, 176, 61, 22, 38, 50, 190, 162, 92, 173, 189, 150, 91, 46, 187, 22, 36, 43, 190, 131, 152, 249, 60, 93, 155, 9, 62, 193, 176, 95, 61, 158, 67, 28, 61, 240, 73, 27, 190, 169, 250, 21, 187, 26, 105, 152, 61, 250, 18, 221, 189, 141, 18, 48, 190, 241, 15, 89, 61, 18, 207, 131, 61, 161, 152, 51, 62, 165, 111, 80, 191, 106, 213, 12, 62, 29, 230, 131, 61, 56, 100, 200, 191, 110, 151, 71, 62, 164, 80, 154, 62, 114, 211, 136, 189, 15, 161, 193, 190, 135, 167, 142, 62, 19, 70, 79, 190, 236, 116, 13, 62, 42, 44, 7, 62, 137, 237, 102, 189, 116, 116, 153, 61, 104, 138, 55, 190, 114, 234, 143, 190, 121, 72, 250, 189, 175, 86, 159, 190, 98, 19, 143, 62, 126, 222, 167, 60, 27, 160, 136, 60, 124, 249, 50, 62, 54, 249, 60, 190, 20, 208, 241, 61, 73, 189, 208, 190, 153, 175, 134, 191, 6, 241, 18, 191, 50, 190, 56, 60, 18, 48, 71, 62, 35, 238, 251, 62, 115, 19, 17, 62, 62, 122, 50, 60, 133, 171, 219, 60, 122, 87, 88, 62, 139, 23, 136, 62, 145, 24, 251, 190, 131, 45, 251, 61, 162, 52, 76, 190, 108, 189, 62, 191, 85, 116, 181, 190, 35, 40, 22, 190, 197, 147, 57, 190, 96, 232, 189, 189, 244, 134, 121, 190, 16, 185, 168, 189, 238, 8, 2, 188, 23, 162, 81, 191, 77, 117, 184, 190, 176, 161, 119, 191, 169, 201, 65, 191, 223, 222, 67, 190, 72, 111, 197, 190, 190, 194, 80, 62, 76, 167, 72, 61, 69, 62, 19, 62, 123, 141, 251, 61, 126, 8, 175, 62, 226, 88, 68, 191, 75, 85, 95, 191, 25, 140, 78, 190, 75, 100, 170, 189, 216, 33, 142, 190, 72, 124, 248, 61, 108, 231, 148, 190, 154, 204, 90, 189, 48, 21, 247, 189, 39, 117, 136, 189, 190, 52, 17, 190, 42, 27, 201, 60, 26, 82, 76, 185, 237, 57, 190, 189, 14, 210, 37, 190, 107, 223, 224, 60, 139, 58, 247, 188, 115, 244, 0, 62, 214, 208, 52, 190, 33, 188, 144, 188, 6, 104, 42, 61, 213, 135, 215, 189, 146, 86, 136, 61, 167, 128, 6, 190, 227, 199, 108, 188, 52, 139, 50, 187, 147, 197, 49, 62, 211, 145, 189, 189, 251, 77, 156, 189, 12, 23, 236, 188, 92, 16, 43, 187, 152, 236, 240, 188, 35, 27, 172, 188, 104, 250, 206, 61, 182, 236, 213, 61, 121, 61, 40, 190, 149, 160, 179, 189, 35, 178, 30, 190, 212, 234, 120, 189, 225, 118, 252, 190, 145, 201, 83, 190, 130, 80, 180, 61, 171, 80, 207, 190, 181, 207, 164, 190, 94, 130, 60, 62, 151, 148, 141, 190, 215, 107, 51, 189, 203, 126, 179, 189, 76, 34, 12, 62, 26, 37, 84, 62, 56, 208, 183, 190, 97, 151, 15, 61, 224, 140, 27, 57, 60, 159, 89, 62, 27, 116, 227, 61, 174, 206, 39, 190, 187, 175, 91, 191, 154, 119, 154, 190, 127, 52, 137, 190, 222, 101, 79, 189, 47, 50, 136, 190, 17, 44, 9, 191, 4, 197, 230, 61, 65, 85, 45, 191, 142, 58, 88, 190, 118, 52, 248, 189, 111, 32, 217, 190, 116, 76, 152, 60, 1, 3, 204, 61, 241, 147, 50, 62, 160, 133, 190, 189, 31, 229, 87, 191, 49, 80, 20, 62, 21, 84, 67, 62, 31, 120, 21, 191, 82, 46, 34, 189, 164, 229, 254, 62, 98, 156, 229, 61, 66, 129, 137, 190, 105, 151, 13, 63, 128, 115, 26, 190, 17, 105, 93, 62, 214, 116, 199, 190, 199, 161, 105, 62, 131, 6, 82, 62, 69, 33, 137, 190, 239, 240, 78, 190, 251, 55, 32, 191, 152, 117, 210, 190, 125, 109, 56, 188, 229, 176, 11, 191, 219, 219, 251, 62, 5, 211, 201, 189, 152, 43, 33, 62, 14, 61, 171, 62, 215, 241, 199, 60, 16, 14, 212, 191, 182, 194, 165, 191, 198, 204, 37, 62, 111, 37, 3, 62, 250, 96, 171, 189, 103, 146, 131, 61, 121, 105, 3, 189, 243, 223, 182, 189, 55, 72, 102, 189, 233, 109, 146, 190, 157, 152, 45, 191, 137, 225, 9, 61, 166, 20, 85, 62, 245, 206, 69, 62, 39, 162, 213, 190, 112, 86, 199, 62, 109, 199, 237, 190, 153, 190, 92, 62, 12, 113, 24, 62, 66, 44, 143, 190, 48, 52, 231, 190, 251, 166, 151, 190, 143, 42, 99, 61, 206, 247, 161, 189, 192, 219, 99, 62, 204, 213, 6, 61, 49, 217, 30, 62, 187, 98, 207, 190, 175, 139, 5, 62, 112, 136, 14, 190, 198, 211, 70, 190, 255, 201, 93, 191, 94, 43, 157, 60, 100, 243, 117, 189, 112, 82, 162, 62, 105, 81, 78, 62, 30, 106, 52, 63, 37, 131, 32, 62, 227, 244, 128, 62, 105, 163, 139, 62, 232, 96, 39, 62, 105, 114, 85, 61, 20, 108, 192, 60, 181, 54, 89, 191, 134, 115, 103, 190, 125, 73, 252, 62, 40, 176, 91, 62, 195, 72, 61, 191, 78, 236, 80, 62, 241, 129, 239, 61, 5, 143, 12, 190, 57, 206, 109, 60, 12, 189, 43, 189, 81, 194, 22, 63, 25, 77, 0, 62, 111, 250, 155, 189, 21, 234, 151, 61, 186, 176, 105, 190, 9, 68, 176, 62, 69, 254, 194, 62, 255, 8, 170, 190, 218, 146, 181, 61, 128, 119, 165, 62, 18, 61, 160, 62, 100, 60, 200, 189, 254, 49, 235, 189, 24, 163, 170, 189, 177, 149, 141, 189, 59, 126, 194, 190, 82, 57, 155, 189, 149, 207, 21, 62, 148, 226, 222, 190, 80, 251, 8, 189, 199, 32, 54, 190, 101, 29, 10, 62, 243, 169, 100, 61, 107, 155, 121, 190, 153, 216, 118, 62, 190, 201, 6, 62, 15, 249, 192, 61, 247, 198, 96, 62, 30, 226, 111, 189, 122, 5, 220, 60, 87, 129, 43, 62, 213, 42, 10, 60, 145, 219, 195, 62, 13, 193, 47, 189, 23, 252, 149, 61, 182, 227, 160, 62, 193, 62, 136, 61, 39, 114, 148, 62, 184, 195, 40, 62, 68, 200, 159, 189, 39, 137, 64, 189, 108, 108, 136, 62, 69, 138, 137, 191, 179, 112, 35, 62, 161, 52, 162, 61, 45, 128, 94, 61, 43, 66, 89, 191, 146, 153, 173, 189, 10, 205, 206, 60, 119, 63, 125, 190, 202, 197, 86, 62, 77, 184, 65, 62, 165, 16, 21, 189, 22, 110, 90, 189, 76, 254, 169, 188, 66, 135, 160, 187, 126, 229, 181, 61, 183, 33, 33, 190, 180, 140, 135, 62, 70, 72, 128, 190, 129, 20, 167, 190, 43, 17, 124, 61, 83, 203, 13, 191, 136, 221, 92, 190, 77, 82, 116, 62, 63, 229, 15, 191, 125, 71, 17, 62, 17, 158, 126, 62, 38, 235, 247, 189, 131, 66, 99, 62, 139, 187, 9, 190, 232, 55, 141, 189, 4, 228, 217, 188, 154, 76, 68, 61, 73, 42, 226, 190, 202, 119, 174, 189, 76, 189, 239, 189, 238, 66, 64, 188, 11, 235, 21, 191, 59, 222, 77, 60, 180, 184, 179, 61, 77, 135, 63, 191, 38, 148, 15, 63, 41, 22, 88, 189, 138, 126, 55, 191, 232, 224, 116, 189, 12, 207, 97, 61, 188, 39, 175, 188, 38, 107, 140, 60, 136, 21, 185, 62, 205, 83, 218, 190, 30, 96, 145, 62, 117, 19, 29, 62, 14, 231, 92, 61, 203, 253, 81, 62, 77, 119, 239, 190, 133, 242, 182, 62, 198, 142, 76, 62, 83, 65, 168, 189, 245, 243, 45, 62, 208, 14, 57, 61, 4, 134, 39, 190, 137, 46, 72, 191, 143, 214, 199, 61, 21, 30, 172, 191, 233, 67, 181, 189, 15, 179, 154, 61, 103, 7, 86, 61, 230, 217, 12, 60, 173, 34, 18, 62, 164, 148, 15, 189, 144, 221, 38, 190, 76, 202, 6, 189, 106, 161, 52, 62, 3, 216, 47, 62, 50, 150, 116, 62, 118, 154, 111, 188, 134, 121, 95, 62, 91, 143, 84, 190, 94, 30, 155, 189, 220, 168, 255, 61, 195, 87, 102, 61, 167, 4, 125, 190, 222, 223, 63, 62, 14, 169, 168, 62, 71, 136, 132, 61, 96, 225, 176, 189, 132, 118, 99, 62, 85, 109, 174, 62, 55, 228, 156, 189, 68, 77, 145, 61, 127, 178, 32, 61, 55, 219, 197, 58, 19, 156, 30, 62, 229, 226, 35, 61, 156, 117, 135, 190, 181, 127, 180, 189, 248, 107, 136, 62, 206, 23, 228, 187, 221, 143, 176, 61, 45, 88, 135, 189, 230, 150, 53, 189, 252, 82, 143, 62, 161, 44, 117, 62, 56, 168, 48, 61, 191, 153, 50, 62, 194, 1, 65, 188, 199, 144, 87, 61, 80, 201, 137, 62, 128, 245, 237, 62, 61, 120, 95, 62, 142, 39, 172, 61, 44, 38, 203, 190, 31, 114, 181, 190, 233, 165, 19, 61, 73, 26, 133, 190, 173, 200, 80, 189, 203, 122, 226, 188, 164, 132, 123, 190, 108, 9, 172, 62, 11, 195, 143, 190, 208, 44, 31, 191, 30, 38, 103, 61, 198, 63, 18, 190, 207, 142, 86, 190, 229, 51, 251, 60, 109, 38, 222, 60, 149, 183, 51, 62, 31, 176, 163, 61, 220, 33, 149, 190, 238, 138, 35, 63, 194, 240, 8, 62, 61, 16, 132, 62, 89, 83, 144, 190, 181, 201, 91, 190, 245, 8, 15, 62, 51, 241, 9, 61, 169, 154, 171, 190, 214, 111, 98, 62, 185, 160, 163, 189, 79, 146, 77, 62, 74, 155, 156, 62, 130, 0, 89, 189, 212, 2, 14, 190, 141, 63, 193, 188, 113, 115, 5, 62, 52, 11, 254, 189, 6, 20, 169, 187, 5, 93, 245, 187, 253, 239, 240, 189, 94, 44, 10, 190, 215, 21, 38, 61, 64, 115, 52, 189, 112, 230, 102, 61, 107, 17, 239, 60, 242, 186, 232, 60, 129, 138, 101, 190, 61, 112, 112, 61, 195, 138, 5, 61, 68, 78, 133, 61, 83, 188, 176, 188, 44, 200, 246, 189, 98, 20, 83, 62, 211, 251, 172, 189, 66, 158, 186, 189, 17, 106, 174, 190, 182, 252, 136, 61, 142, 193, 152, 61, 118, 117, 36, 62, 53, 205, 179, 61, 148, 162, 245, 61, 220, 121, 201, 61, 122, 167, 16, 189, 241, 28, 101, 188, 128, 189, 198, 190, 79, 243, 61, 190, 11, 85, 179, 62, 38, 246, 171, 189, 130, 251, 208, 190, 30, 37, 16, 62, 162, 61, 156, 190, 146, 31, 33, 190, 174, 109, 20, 191, 114, 40, 52, 190, 250, 31, 63, 62, 198, 153, 53, 190, 125, 219, 75, 62, 50, 120, 174, 61, 11, 58, 63, 189, 100, 80, 167, 62, 203, 131, 157, 187, 76, 4, 195, 190, 66, 118, 26, 190, 37, 227, 47, 62, 206, 243, 81, 188, 79, 216, 154, 61, 90, 2, 53, 189, 155, 30, 145, 190, 182, 205, 16, 190, 145, 9, 148, 61, 252, 134, 185, 61, 212, 250, 137, 190, 52, 121, 151, 61, 185, 223, 166, 188, 147, 188, 255, 189, 69, 42, 169, 188, 18, 108, 254, 61, 18, 248, 35, 190, 216, 242, 45, 60, 17, 16, 215, 189, 148, 116, 136, 60, 21, 176, 107, 189, 219, 48, 251, 189, 153, 44, 37, 62, 196, 6, 235, 188, 61, 97, 110, 61, 106, 147, 20, 190, 1, 83, 5, 190, 218, 114, 246, 189, 158, 5, 42, 190, 162, 22, 69, 60, 195, 229, 100, 189, 114, 170, 38, 62, 219, 87, 108, 61, 184, 142, 136, 188, 89, 163, 27, 190, 107, 179, 159, 189, 134, 23, 250, 60, 31, 55, 187, 61, 47, 0, 28, 190, 219, 104, 159, 188, 1, 158, 93, 188, 201, 189, 132, 187, 93, 42, 27, 62, 198, 103, 201, 190, 183, 251, 140, 62, 49, 60, 29, 189, 45, 234, 171, 188, 84, 19, 26, 191, 41, 61, 188, 189, 146, 28, 113, 62, 109, 40, 118, 61, 30, 227, 64, 191, 74, 243, 237, 62, 83, 179, 56, 62, 193, 197, 110, 190, 208, 171, 207, 190, 210, 117, 101, 62, 250, 106, 215, 62, 2, 38, 26, 190, 235, 15, 249, 60, 164, 10, 95, 57, 92, 116, 69, 190, 220, 125, 180, 61, 230, 71, 166, 62, 174, 54, 31, 191, 6, 208, 134, 62, 67, 142, 228, 62, 144, 135, 239, 62, 146, 176, 198, 189, 234, 148, 6, 190, 238, 171, 32, 187, 170, 192, 138, 190, 251, 37, 26, 191, 70, 253, 16, 187, 161, 39, 33, 62, 161, 124, 65, 190, 207, 10, 50, 62, 24, 123, 78, 62, 63, 155, 49, 190, 77, 140, 12, 190, 156, 180, 211, 189, 157, 145, 6, 61, 179, 33, 52, 190, 93, 45, 15, 188, 252, 108, 83, 61, 240, 91, 191, 62, 72, 177, 67, 189, 67, 78, 92, 190, 251, 19, 124, 62, 104, 239, 76, 61, 241, 167, 207, 189, 134, 42, 214, 61, 73, 185, 243, 61, 1, 157, 239, 61, 132, 107, 14, 190, 63, 65, 248, 61, 152, 64, 83, 190, 203, 65, 140, 189, 57, 127, 35, 62, 191, 59, 115, 190, 240, 170, 80, 61, 190, 6, 253, 189, 21, 98, 148, 189, 123, 244, 164, 62, 253, 188, 102, 62, 152, 152, 229, 189, 161, 91, 4, 61, 50, 29, 134, 191, 100, 70, 11, 189, 173, 101, 255, 62, 157, 133, 181, 62, 122, 176, 28, 62, 230, 14, 232, 62, 142, 151, 165, 190, 77, 121, 68, 191, 223, 105, 21, 190, 188, 68, 138, 191, 121, 145, 8, 61, 207, 145, 230, 60, 244, 67, 25, 62, 46, 116, 124, 62, 110, 48, 126, 190, 46, 221, 184, 190, 221, 34, 151, 62, 20, 99, 69, 190, 207, 28, 161, 190, 215, 56, 29, 190, 104, 19, 0, 59, 121, 160, 18, 62, 218, 104, 90, 62, 118, 160, 154, 189, 187, 211, 104, 62, 203, 138, 198, 61, 79, 93, 63, 62, 51, 206, 135, 190, 249, 179, 21, 190, 102, 210, 22, 63, 70, 250, 191, 61, 218, 233, 175, 189, 119, 12, 91, 191, 54, 190, 220, 190, 22, 236, 169, 62, 216, 71, 141, 190, 198, 34, 82, 190, 226, 182, 238, 62, 213, 227, 158, 190, 97, 230, 31, 191, 249, 247, 61, 191, 2, 192, 4, 191, 203, 169, 135, 62, 88, 149, 250, 190, 153, 177, 99, 190, 219, 77, 216, 61, 228, 57, 158, 190, 97, 76, 65, 190, 199, 142, 76, 190, 173, 195, 136, 190, 205, 2, 213, 190, 6, 21, 61, 190, 86, 78, 225, 61, 63, 102, 223, 190, 31, 21, 41, 62, 46, 5, 148, 191, 192, 228, 214, 190, 10, 95, 13, 191, 232, 7, 31, 191, 184, 236, 229, 189, 112, 36, 89, 62, 247, 57, 80, 62, 41, 124, 23, 62, 130, 196, 112, 188, 133, 93, 193, 188, 71, 198, 170, 188, 117, 181, 184, 61, 1, 172, 12, 61, 92, 128, 19, 62, 235, 124, 236, 189, 81, 137, 22, 62, 27, 61, 180, 190, 245, 93, 92, 62, 180, 118, 76, 191, 208, 179, 110, 190, 151, 132, 76, 61, 66, 220, 75, 191, 58, 252, 206, 61, 24, 133, 14, 191, 100, 161, 227, 190, 70, 118, 198, 60, 70, 8, 143, 61, 152, 53, 107, 61, 243, 189, 18, 62, 207, 148, 35, 190, 3, 51, 113, 61, 234, 167, 50, 62, 87, 173, 154, 190, 61, 99, 78, 62, 33, 85, 156, 62, 224, 133, 162, 186, 160, 207, 66, 62, 146, 236, 131, 62, 81, 11, 45, 190, 171, 28, 51, 61, 93, 123, 160, 190, 161, 14, 95, 191, 52, 31, 105, 189, 124, 73, 151, 59, 221, 64, 226, 190, 8, 152, 91, 62, 76, 10, 228, 62, 255, 134, 172, 190, 186, 21, 141, 190, 240, 121, 217, 61, 117, 72, 238, 189, 29, 231, 226, 61, 152, 114, 175, 62, 177, 135, 17, 189, 137, 32, 166, 61, 94, 140, 84, 190, 54, 70, 9, 189, 94, 241, 146, 61, 133, 190, 252, 190, 179, 56, 225, 61, 38, 241, 166, 189, 175, 50, 66, 62, 220, 210, 139, 188, 140, 30, 40, 190, 204, 121, 94, 62, 184, 43, 197, 190, 59, 81, 165, 191, 237, 154, 42, 191, 146, 233, 7, 190, 227, 101, 130, 62, 118, 196, 220, 62, 88, 209, 37, 190, 90, 241, 131, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {185, 149, 192, 62, 87, 125, 241, 188, 51, 53, 112, 62, 37, 11, 71, 190, 141, 202, 157, 61, 159, 120, 23, 189, 254, 4, 39, 62, 224, 116, 50, 190, 211, 125, 46, 60, 218, 163, 192, 189, 218, 89, 4, 190, 160, 69, 165, 62, 131, 74, 5, 62, 62, 59, 36, 190, 55, 213, 136, 62, 128, 149, 200, 61, 32, 220, 54, 190, 81, 75, 118, 62, 156, 153, 168, 189, 94, 169, 222, 61, 26, 164, 141, 190, 190, 7, 107, 62, 119, 122, 88, 62, 75, 176, 26, 62, 206, 45, 157, 60, 215, 140, 12, 190, 87, 99, 169, 62, 151, 201, 226, 61, 182, 35, 211, 62, 212, 166, 51, 61, 250, 58, 171, 190, 14, 189, 104, 62};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_1 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_2 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {242, 225, 162, 190, 57, 68, 149, 189, 46, 169, 18, 63, 100, 253, 12, 62, 105, 78, 224, 61, 100, 89, 218, 190, 78, 150, 83, 191, 180, 141, 248, 189, 163, 61, 173, 191, 226, 186, 152, 187, 10, 206, 218, 60, 142, 83, 66, 191, 218, 199, 104, 191, 96, 236, 50, 190, 18, 216, 202, 189, 103, 246, 143, 191, 23, 30, 58, 191, 40, 193, 24, 63, 169, 148, 202, 190, 129, 65, 174, 189, 39, 11, 30, 63, 1, 167, 145, 61, 99, 43, 154, 62, 215, 143, 18, 60, 189, 205, 118, 62, 150, 13, 24, 189, 194, 149, 108, 63, 49, 224, 124, 60, 157, 45, 240, 62, 32, 113, 137, 191, 83, 117, 153, 190, 192, 201, 12, 191, 59, 223, 110, 190, 100, 21, 239, 188, 224, 51, 217, 61, 142, 150, 0, 190, 195, 205, 61, 191, 69, 196, 202, 61, 188, 121, 38, 60, 166, 49, 15, 190, 8, 39, 152, 62, 45, 2, 189, 189, 73, 47, 5, 190, 31, 147, 34, 189, 138, 119, 45, 189, 11, 229, 64, 61, 130, 165, 239, 190, 89, 10, 82, 62, 22, 27, 112, 60, 80, 156, 156, 188, 3, 168, 54, 61, 13, 84, 98, 190, 197, 76, 245, 60, 113, 201, 147, 190, 94, 211, 19, 188, 187, 79, 233, 189, 75, 251, 97, 190, 17, 234, 46, 61, 12, 32, 254, 189, 57, 239, 130, 190, 62, 81, 144, 61, 54, 120, 166, 189, 22, 58, 72, 188, 66, 69, 201, 189};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 2, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {225, 168, 134, 62, 166, 250, 152, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_2 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::IDENTITY, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace model_definition {
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward; 
        using IF = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::sequential::Interface<CAPABILITY>;
        using MODEL = IF::Module<layer_0::TEMPLATE, IF::Module<layer_1::TEMPLATE, IF::Module<layer_2::TEMPLATE>>>;
    }
    using MODEL = model_definition::MODEL;
    const MODEL model = {layer_0::layer, {layer_1::layer, {layer_2::layer, {}}}};
}
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::input {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {159, 116, 49, 189, 90, 10, 177, 63, 184, 186, 18, 58};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {143, 74, 95, 64, 172, 135, 234, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0087/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
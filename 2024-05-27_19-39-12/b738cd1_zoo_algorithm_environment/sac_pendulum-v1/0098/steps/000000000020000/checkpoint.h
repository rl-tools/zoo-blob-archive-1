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
                alignas(float) const unsigned char memory[] = {108, 34, 58, 191, 125, 129, 175, 186, 146, 114, 27, 191, 112, 62, 32, 62, 191, 0, 49, 190, 215, 232, 160, 190, 145, 48, 27, 190, 17, 97, 68, 63, 235, 122, 10, 191, 46, 140, 191, 61, 37, 18, 136, 191, 6, 222, 18, 62, 154, 98, 8, 63, 36, 57, 150, 63, 193, 38, 115, 62, 218, 151, 39, 63, 143, 120, 23, 191, 168, 170, 247, 190, 127, 152, 196, 190, 13, 151, 78, 191, 189, 239, 237, 62, 195, 236, 122, 59, 87, 106, 150, 191, 243, 208, 64, 190, 103, 76, 136, 62, 198, 239, 11, 63, 26, 235, 104, 190, 38, 181, 36, 63, 189, 20, 216, 190, 2, 52, 211, 190, 8, 69, 201, 190, 10, 52, 102, 63, 251, 224, 154, 62, 35, 28, 44, 191, 225, 187, 114, 63, 78, 128, 75, 62, 32, 170, 68, 190, 132, 241, 220, 62, 136, 204, 169, 190, 189, 80, 158, 191, 20, 50, 190, 190, 26, 20, 162, 188, 41, 118, 159, 62, 198, 251, 135, 191, 124, 254, 41, 63, 192, 124, 27, 63, 148, 151, 17, 191, 184, 80, 74, 61, 127, 215, 10, 190, 47, 221, 61, 61, 180, 16, 59, 63, 158, 253, 144, 190, 242, 53, 139, 191, 75, 198, 211, 190, 178, 188, 21, 63, 23, 93, 59, 62, 207, 68, 17, 63, 132, 251, 91, 63, 120, 197, 64, 191, 142, 60, 174, 190, 52, 102, 231, 190, 13, 23, 130, 191, 146, 227, 147, 190, 229, 207, 158, 189, 232, 132, 196, 63, 75, 202, 157, 62, 234, 139, 100, 63, 39, 152, 105, 191, 212, 36, 49, 190, 95, 27, 169, 62, 57, 244, 241, 190, 161, 194, 15, 63, 130, 119, 232, 190, 168, 126, 153, 191, 206, 38, 143, 190, 202, 74, 185, 190, 129, 76, 20, 63, 129, 212, 158, 62, 237, 211, 14, 63, 142, 248, 177, 191, 196, 2, 34, 190, 94, 64, 17, 191, 135, 117, 13, 190, 99, 17, 129, 188, 55, 34, 95, 191, 127, 72, 78, 62, 254, 226, 165, 189, 4, 185, 238, 190, 150, 214, 110, 63, 66, 107, 212, 62, 70, 180, 205, 190, 92, 33, 208, 190, 56, 140, 1, 191, 205, 21, 223, 190, 181, 81, 143, 63, 25, 240, 133, 62};
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
                alignas(float) const unsigned char memory[] = {254, 116, 61, 191, 22, 220, 8, 60, 255, 191, 153, 60, 80, 108, 74, 190, 150, 141, 246, 189, 254, 194, 168, 190, 99, 102, 157, 62, 122, 18, 241, 190, 72, 100, 77, 62, 58, 10, 207, 189, 166, 80, 131, 189, 153, 2, 61, 62, 67, 22, 27, 63, 228, 18, 179, 62, 170, 68, 208, 190, 63, 50, 3, 62, 119, 74, 106, 62, 156, 40, 186, 62, 187, 151, 207, 190, 199, 143, 45, 191, 54, 86, 36, 63, 136, 10, 191, 62, 69, 76, 128, 62, 93, 254, 214, 61, 48, 85, 44, 62, 173, 39, 222, 190, 98, 181, 3, 191, 194, 37, 7, 63, 53, 61, 75, 63, 56, 43, 150, 62, 1, 32, 90, 191, 215, 76, 209, 62};
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
                alignas(float) const unsigned char memory[] = {97, 66, 161, 190, 87, 16, 144, 62, 184, 192, 10, 63, 73, 87, 174, 62, 234, 250, 182, 62, 206, 125, 221, 61, 202, 242, 31, 188, 26, 103, 156, 189, 185, 138, 125, 62, 41, 255, 130, 61, 137, 249, 206, 190, 173, 114, 53, 191, 128, 143, 120, 62, 129, 225, 45, 191, 16, 208, 161, 62, 154, 222, 79, 189, 81, 78, 190, 61, 171, 152, 63, 190, 162, 45, 192, 62, 110, 143, 42, 188, 103, 18, 150, 191, 130, 104, 65, 62, 128, 65, 163, 190, 213, 194, 11, 62, 49, 227, 221, 189, 191, 167, 154, 61, 154, 7, 147, 59, 114, 63, 171, 190, 128, 172, 10, 191, 94, 51, 123, 189, 162, 254, 92, 61, 12, 104, 27, 189, 179, 226, 115, 60, 219, 237, 8, 190, 233, 215, 223, 61, 28, 171, 169, 189, 144, 100, 200, 189, 107, 68, 31, 190, 242, 21, 218, 61, 134, 54, 47, 61, 175, 141, 48, 62, 26, 191, 129, 61, 41, 178, 7, 190, 57, 37, 32, 190, 239, 61, 40, 190, 67, 252, 239, 189, 143, 242, 33, 190, 48, 210, 51, 189, 219, 79, 58, 60, 199, 182, 25, 190, 71, 0, 21, 61, 162, 22, 201, 61, 87, 15, 22, 190, 124, 83, 191, 189, 127, 35, 150, 59, 29, 223, 137, 189, 243, 141, 159, 189, 18, 246, 46, 62, 187, 5, 190, 61, 26, 8, 199, 189, 218, 107, 96, 61, 184, 145, 20, 190, 133, 187, 176, 188, 15, 201, 30, 62, 94, 97, 174, 189, 202, 117, 136, 189, 251, 249, 191, 61, 84, 3, 235, 61, 80, 126, 16, 190, 18, 159, 194, 187, 196, 61, 27, 62, 162, 107, 66, 190, 200, 53, 117, 61, 90, 254, 14, 188, 157, 236, 236, 61, 25, 214, 182, 61, 107, 99, 130, 62, 190, 87, 136, 61, 241, 168, 156, 61, 219, 149, 28, 190, 42, 63, 247, 61, 147, 250, 13, 62, 11, 104, 59, 190, 194, 50, 105, 190, 120, 209, 158, 62, 209, 134, 214, 189, 23, 246, 63, 62, 226, 106, 7, 189, 107, 169, 145, 60, 102, 24, 161, 59, 152, 203, 55, 63, 148, 142, 136, 62, 255, 27, 176, 61, 35, 118, 99, 62, 143, 144, 29, 190, 37, 99, 89, 189, 128, 1, 140, 62, 30, 179, 25, 62, 149, 105, 218, 189, 182, 54, 170, 189, 249, 21, 8, 191, 11, 163, 84, 190, 105, 158, 120, 62, 81, 11, 200, 61, 79, 122, 30, 190, 27, 154, 194, 190, 239, 5, 45, 191, 95, 92, 94, 190, 75, 17, 101, 60, 128, 125, 204, 62, 148, 64, 23, 63, 38, 197, 234, 189, 240, 135, 148, 191, 60, 248, 184, 62, 220, 10, 137, 190, 84, 33, 94, 191, 219, 112, 178, 62, 200, 165, 53, 190, 44, 195, 219, 189, 252, 187, 175, 190, 231, 234, 139, 62, 169, 132, 190, 191, 4, 218, 63, 190, 61, 60, 224, 61, 54, 93, 78, 62, 140, 0, 173, 190, 4, 122, 145, 190, 25, 4, 13, 61, 203, 5, 70, 189, 45, 251, 137, 61, 88, 75, 85, 62, 5, 253, 80, 191, 246, 160, 151, 60, 136, 88, 80, 190, 81, 127, 5, 191, 136, 245, 14, 191, 240, 119, 114, 62, 80, 140, 255, 189, 190, 218, 95, 191, 108, 104, 10, 191, 86, 230, 106, 62, 90, 147, 32, 61, 125, 232, 213, 190, 50, 205, 93, 62, 85, 66, 110, 189, 133, 123, 57, 62, 107, 235, 229, 62, 2, 183, 64, 191, 19, 128, 161, 61, 100, 212, 164, 61, 246, 187, 23, 61, 220, 34, 122, 62, 38, 215, 142, 190, 118, 116, 125, 191, 60, 89, 191, 187, 28, 211, 71, 61, 205, 5, 128, 62, 132, 65, 187, 190, 226, 167, 10, 190, 118, 99, 29, 62, 93, 73, 7, 190, 93, 137, 30, 190, 155, 126, 160, 61, 177, 184, 242, 61, 202, 4, 18, 62, 104, 239, 131, 61, 88, 181, 23, 62, 228, 20, 110, 60, 141, 116, 157, 189, 250, 188, 151, 61, 90, 13, 243, 60, 155, 112, 200, 189, 248, 248, 23, 188, 168, 215, 167, 60, 66, 34, 163, 189, 102, 148, 51, 61, 27, 74, 171, 187, 93, 207, 21, 190, 112, 80, 239, 61, 57, 84, 209, 189, 133, 111, 69, 61, 145, 227, 2, 61, 54, 29, 245, 189, 5, 251, 51, 190, 18, 239, 35, 190, 15, 171, 247, 189, 220, 37, 154, 59, 55, 34, 7, 190, 239, 200, 245, 189, 11, 175, 163, 189, 61, 223, 19, 189, 108, 97, 127, 189, 51, 209, 150, 191, 126, 247, 143, 190, 234, 179, 41, 191, 18, 4, 193, 62, 183, 185, 247, 190, 109, 36, 45, 62, 106, 200, 0, 62, 157, 44, 89, 191, 83, 249, 247, 61, 169, 185, 248, 61, 229, 100, 153, 190, 42, 235, 221, 188, 96, 237, 169, 61, 242, 72, 143, 62, 192, 78, 243, 187, 219, 18, 39, 62, 25, 167, 136, 190, 7, 15, 155, 190, 124, 163, 126, 190, 54, 152, 151, 190, 151, 150, 247, 188, 194, 74, 49, 62, 164, 13, 26, 62, 149, 193, 127, 190, 109, 6, 6, 62, 229, 37, 112, 189, 210, 88, 183, 191, 165, 215, 106, 62, 88, 94, 119, 62, 137, 65, 199, 189, 226, 137, 143, 190, 2, 191, 184, 189, 28, 255, 131, 190, 139, 251, 216, 61, 67, 99, 224, 189, 56, 217, 132, 191, 165, 209, 74, 189, 9, 254, 65, 62, 139, 20, 130, 190, 228, 69, 72, 191, 87, 181, 129, 62, 187, 167, 168, 61, 175, 55, 155, 190, 145, 57, 2, 191, 179, 162, 165, 62, 117, 47, 218, 190, 111, 17, 45, 60, 1, 59, 105, 187, 36, 190, 110, 191, 20, 75, 45, 190, 231, 157, 22, 191, 197, 228, 231, 189, 203, 230, 168, 190, 20, 33, 121, 62, 210, 18, 130, 61, 138, 245, 138, 190, 149, 122, 59, 188, 203, 95, 54, 190, 203, 69, 171, 191, 10, 195, 117, 61, 44, 179, 220, 190, 164, 242, 12, 190, 92, 254, 71, 190, 233, 62, 223, 61, 211, 238, 173, 190, 44, 119, 158, 61, 193, 125, 150, 190, 221, 51, 115, 62, 194, 191, 18, 191, 60, 151, 57, 62, 86, 19, 124, 61, 9, 162, 201, 190, 153, 192, 153, 190, 131, 234, 13, 61, 190, 27, 46, 190, 146, 167, 201, 59, 206, 223, 81, 189, 249, 193, 34, 62, 88, 9, 197, 189, 190, 102, 154, 62, 131, 133, 3, 188, 159, 14, 150, 62, 134, 126, 144, 190, 154, 220, 105, 62, 160, 17, 176, 62, 154, 255, 109, 191, 141, 61, 49, 62, 110, 243, 136, 62, 32, 31, 71, 189, 246, 53, 81, 190, 121, 94, 65, 63, 50, 142, 30, 190, 238, 26, 204, 189, 232, 229, 61, 190, 152, 206, 129, 190, 56, 78, 255, 190, 117, 233, 5, 191, 105, 182, 248, 61, 16, 233, 22, 63, 129, 255, 172, 62, 71, 199, 241, 60, 133, 168, 132, 62, 180, 249, 131, 61, 240, 184, 42, 61, 219, 146, 132, 62, 165, 252, 39, 59, 54, 116, 176, 190, 1, 40, 34, 191, 234, 59, 207, 59, 39, 53, 14, 191, 93, 6, 79, 190, 70, 143, 66, 62, 203, 1, 162, 61, 5, 74, 147, 190, 83, 55, 32, 62, 172, 98, 8, 61, 174, 228, 220, 190, 207, 17, 117, 189, 252, 100, 161, 62, 92, 140, 190, 62, 103, 32, 82, 191, 250, 245, 31, 190, 188, 179, 38, 63, 182, 236, 21, 190, 91, 40, 168, 190, 87, 101, 94, 61, 124, 0, 76, 60, 53, 152, 201, 188, 67, 135, 82, 191, 241, 124, 120, 61, 246, 65, 92, 190, 48, 169, 42, 62, 235, 135, 5, 190, 70, 116, 4, 62, 112, 180, 126, 62, 160, 142, 1, 191, 253, 71, 75, 62, 255, 133, 166, 61, 175, 36, 52, 62, 201, 44, 8, 62, 243, 250, 19, 60, 62, 9, 34, 62, 224, 236, 1, 190, 162, 115, 1, 190, 19, 35, 69, 61, 185, 129, 148, 189, 33, 254, 120, 190, 193, 164, 125, 190, 193, 67, 39, 62, 7, 59, 32, 61, 207, 85, 119, 188, 59, 19, 192, 60, 77, 234, 83, 61, 245, 231, 149, 61, 181, 15, 127, 190, 168, 155, 54, 60, 156, 156, 18, 59, 140, 165, 253, 61, 62, 154, 189, 190, 113, 29, 149, 61, 80, 193, 200, 60, 84, 113, 113, 61, 44, 68, 154, 62, 80, 138, 130, 61, 138, 213, 163, 60, 149, 232, 45, 62, 195, 67, 34, 62, 45, 232, 143, 188, 226, 137, 108, 189, 208, 164, 236, 61, 71, 47, 158, 190, 119, 153, 253, 190, 165, 100, 10, 62, 131, 125, 29, 62, 93, 216, 178, 61, 187, 164, 193, 62, 128, 79, 148, 61, 133, 202, 214, 61, 159, 43, 17, 189, 200, 46, 220, 189, 25, 207, 164, 62, 114, 209, 179, 189, 105, 150, 70, 62, 48, 252, 158, 62, 79, 46, 139, 59, 181, 103, 144, 190, 184, 38, 162, 62, 186, 233, 231, 60, 42, 175, 66, 62, 169, 213, 107, 189, 29, 35, 240, 189, 178, 227, 125, 188, 89, 163, 186, 190, 207, 228, 105, 190, 242, 197, 132, 188, 88, 214, 90, 191, 135, 233, 57, 63, 38, 201, 94, 190, 27, 193, 247, 190, 195, 83, 9, 62, 185, 19, 130, 62, 40, 96, 82, 190, 219, 237, 13, 190, 169, 30, 123, 62, 105, 188, 24, 190, 30, 163, 87, 191, 9, 9, 157, 190, 248, 112, 67, 191, 124, 175, 87, 190, 233, 93, 233, 190, 37, 172, 227, 187, 192, 102, 40, 62, 128, 215, 73, 191, 132, 151, 165, 62, 20, 119, 142, 191, 40, 132, 99, 190, 114, 105, 64, 190, 208, 148, 173, 190, 62, 202, 159, 189, 125, 167, 154, 190, 62, 241, 219, 190, 159, 80, 133, 61, 145, 0, 242, 61, 1, 245, 74, 62, 43, 148, 190, 61, 41, 102, 212, 61, 130, 182, 198, 189, 191, 228, 168, 61, 92, 83, 192, 61, 157, 253, 126, 61, 234, 122, 28, 189, 218, 63, 225, 188, 147, 24, 20, 189, 19, 243, 212, 189, 153, 167, 207, 189, 137, 126, 106, 57, 32, 171, 8, 190, 121, 217, 174, 188, 6, 221, 15, 190, 142, 146, 16, 62, 90, 241, 45, 190, 244, 172, 62, 185, 199, 135, 33, 190, 92, 5, 170, 61, 32, 193, 59, 61, 125, 150, 130, 189, 241, 69, 106, 189, 158, 66, 220, 61, 168, 207, 23, 190, 64, 153, 201, 186, 12, 101, 47, 189, 194, 104, 177, 189, 245, 130, 203, 61, 0, 104, 101, 61, 126, 170, 27, 62, 194, 228, 50, 62, 113, 185, 152, 189, 144, 37, 102, 62, 147, 195, 201, 189, 244, 20, 22, 63, 226, 93, 177, 190, 102, 241, 204, 62, 181, 210, 142, 62, 236, 159, 66, 190, 218, 43, 175, 61, 200, 253, 111, 62, 211, 186, 48, 191, 109, 188, 91, 191, 124, 193, 61, 62, 251, 226, 11, 191, 73, 152, 210, 61, 50, 5, 145, 62, 2, 131, 51, 189, 12, 88, 234, 189, 245, 152, 10, 61, 102, 142, 32, 62, 230, 198, 67, 61, 248, 6, 25, 190, 3, 64, 201, 62, 117, 244, 1, 188, 65, 105, 13, 190, 161, 178, 17, 190, 165, 229, 140, 190, 116, 214, 120, 190, 224, 140, 197, 190, 118, 98, 99, 190, 24, 57, 90, 62, 51, 243, 162, 191, 185, 102, 38, 189, 103, 140, 57, 190, 97, 128, 248, 62, 164, 133, 6, 62, 168, 155, 177, 60, 37, 114, 92, 189, 154, 228, 211, 61, 10, 84, 28, 62, 186, 101, 5, 62, 189, 56, 166, 61, 147, 86, 75, 62, 248, 220, 185, 61, 72, 104, 202, 189, 64, 250, 35, 62, 199, 39, 157, 61, 236, 170, 85, 62, 100, 129, 247, 61, 15, 118, 216, 189, 195, 66, 32, 190, 67, 130, 233, 189, 50, 64, 170, 189, 187, 116, 193, 61, 46, 163, 25, 62, 59, 5, 163, 61, 227, 74, 125, 188, 103, 64, 48, 62, 110, 81, 175, 62, 51, 105, 20, 62, 94, 109, 50, 61, 125, 60, 234, 189, 120, 65, 38, 62, 1, 103, 145, 62, 81, 58, 161, 188, 126, 86, 129, 61, 126, 20, 74, 62, 85, 205, 217, 61, 196, 171, 174, 62, 146, 162, 88, 62, 136, 223, 131, 190, 187, 157, 98, 190, 213, 194, 110, 189, 149, 181, 135, 60, 197, 39, 220, 62, 138, 203, 152, 62, 213, 224, 63, 62, 6, 99, 203, 190, 68, 211, 174, 62, 231, 223, 21, 63, 56, 212, 155, 191, 21, 127, 45, 61, 247, 219, 54, 191, 162, 186, 199, 62, 77, 73, 24, 190, 21, 182, 101, 190, 135, 140, 109, 62, 242, 98, 153, 190, 209, 135, 12, 62, 91, 133, 9, 61, 44, 128, 19, 190, 139, 53, 135, 190, 22, 36, 118, 190, 72, 104, 116, 191, 248, 197, 22, 61, 218, 150, 5, 191, 16, 157, 3, 61, 21, 137, 24, 62, 212, 35, 68, 61, 99, 96, 251, 61, 173, 55, 35, 190, 234, 137, 149, 60, 171, 212, 12, 190, 223, 207, 38, 190, 88, 123, 191, 60, 6, 48, 173, 189, 202, 112, 187, 188, 113, 104, 16, 190, 159, 28, 65, 190, 226, 195, 200, 60, 165, 247, 176, 189, 41, 230, 35, 61, 22, 240, 22, 62, 160, 195, 119, 61, 211, 57, 60, 189, 166, 124, 19, 190, 184, 106, 32, 190, 115, 147, 85, 61, 98, 140, 92, 61, 200, 238, 11, 189, 60, 132, 209, 189, 217, 12, 246, 60, 63, 32, 10, 62, 39, 46, 228, 60, 232, 145, 24, 190, 130, 66, 76, 188, 151, 184, 35, 60, 61, 115, 11, 189, 25, 150, 0, 62, 246, 116, 217, 61, 183, 31, 72, 61, 34, 8, 152, 61, 193, 128, 31, 191, 175, 31, 163, 62, 73, 43, 7, 62, 92, 91, 141, 191, 228, 75, 148, 62, 66, 32, 223, 62, 17, 26, 12, 191, 83, 223, 207, 190, 191, 150, 94, 60, 218, 2, 56, 191, 220, 245, 221, 62, 74, 254, 177, 62, 244, 27, 196, 60, 181, 61, 73, 189, 77, 243, 111, 190, 52, 65, 13, 190, 205, 205, 89, 190, 104, 62, 14, 191, 217, 254, 184, 62, 55, 122, 6, 62, 34, 204, 159, 189, 71, 138, 250, 189, 200, 33, 153, 191, 219, 21, 77, 189, 90, 35, 18, 191, 25, 227, 101, 190, 206, 79, 163, 188, 173, 170, 174, 191, 5, 138, 197, 191, 30, 206, 56, 191, 87, 185, 192, 191, 207, 142, 140, 62, 38, 146, 95, 191, 163, 249, 64, 189, 94, 112, 201, 62, 66, 189, 209, 190, 236, 75, 249, 189, 43, 80, 185, 189, 39, 113, 142, 187, 244, 10, 37, 61, 122, 188, 173, 190, 123, 132, 168, 62, 139, 188, 113, 190, 214, 15, 42, 62, 59, 241, 39, 190, 211, 220, 231, 190, 69, 69, 142, 190, 180, 243, 107, 190, 0, 148, 11, 63, 226, 9, 37, 190, 253, 126, 153, 62, 31, 163, 237, 187, 245, 131, 224, 190, 2, 237, 68, 62, 98, 173, 149, 190, 149, 59, 45, 62, 102, 143, 119, 62, 155, 99, 10, 62, 183, 106, 8, 190, 73, 162, 53, 62, 190, 172, 118, 189, 206, 197, 148, 60, 190, 197, 236, 62, 110, 145, 125, 62, 69, 46, 18, 62, 229, 176, 219, 190, 252, 26, 217, 190, 79, 100, 216, 190, 21, 41, 205, 62, 99, 133, 222, 189, 196, 232, 105, 191, 118, 13, 26, 191, 43, 169, 137, 62, 136, 2, 133, 190, 20, 22, 23, 189, 243, 182, 177, 189, 4, 85, 213, 189, 153, 59, 191, 60, 163, 173, 196, 62, 108, 229, 179, 191, 57, 254, 1, 190, 195, 68, 24, 62, 12, 190, 165, 60, 142, 66, 109, 62, 52, 42, 244, 190, 20, 222, 238, 190, 128, 19, 110, 189, 205, 106, 59, 61, 124, 10, 7, 189, 57, 79, 20, 191, 158, 165, 3, 191, 0, 95, 110, 62, 152, 49, 212, 191, 110, 7, 45, 191, 166, 222, 1, 191, 128, 209, 165, 61, 12, 50, 69, 190, 217, 172, 179, 190, 233, 4, 103, 62, 213, 82, 63, 60, 197, 90, 206, 62, 1, 62, 159, 60, 181, 243, 61, 62, 230, 42, 146, 62, 112, 246, 179, 62, 159, 127, 79, 62, 40, 230, 121, 190, 188, 224, 171, 190, 105, 10, 176, 61, 122, 249, 39, 190, 38, 68, 131, 190, 239, 153, 138, 189, 168, 224, 205, 61, 141, 208, 21, 61, 2, 193, 18, 191, 16, 19, 43, 190, 172, 233, 114, 62, 151, 82, 74, 61, 149, 121, 181, 190, 177, 191, 50, 60, 113, 85, 218, 62, 63, 0, 106, 62, 102, 50, 164, 190, 62, 219, 62, 62, 241, 95, 209, 189, 245, 20, 181, 189, 84, 205, 75, 62, 151, 153, 252, 190, 24, 111, 84, 190, 62, 234, 229, 60, 222, 21, 61, 190, 208, 252, 28, 61, 156, 63, 14, 189, 241, 203, 38, 62, 105, 43, 232, 61, 217, 66, 8, 190, 234, 201, 22, 190, 88, 186, 156, 190, 207, 64, 145, 189, 70, 166, 48, 190, 19, 165, 242, 188, 116, 0, 5, 61, 122, 174, 129, 189, 244, 61, 161, 62, 152, 112, 144, 58, 16, 196, 221, 190, 60, 35, 230, 61, 170, 145, 252, 61, 176, 168, 13, 190, 193, 198, 238, 61, 190, 118, 157, 61, 80, 87, 122, 190, 179, 52, 136, 190, 119, 189, 169, 189, 184, 237, 151, 61, 223, 97, 231, 190, 222, 236, 1, 191, 79, 20, 195, 189, 54, 22, 161, 190, 4, 248, 121, 61, 106, 217, 157, 58, 136, 183, 223, 61, 252, 111, 144, 61, 2, 212, 64, 191, 7, 85, 122, 62, 98, 187, 89, 60, 57, 68, 253, 189, 144, 125, 15, 61, 137, 194, 114, 62, 170, 11, 36, 62, 162, 7, 25, 190, 116, 8, 38, 190, 202, 86, 203, 189, 136, 76, 174, 59, 240, 102, 31, 190, 159, 253, 17, 191, 143, 13, 238, 61, 50, 33, 147, 61, 53, 23, 157, 61, 192, 209, 159, 190, 227, 235, 121, 62, 104, 59, 203, 190, 11, 191, 148, 191, 252, 248, 155, 61, 174, 109, 226, 61, 224, 211, 74, 61, 95, 62, 143, 190, 254, 137, 164, 188, 130, 49, 148, 190, 78, 95, 107, 189, 187, 74, 50, 62, 92, 109, 244, 61, 141, 180, 199, 61, 13, 155, 188, 189, 47, 237, 19, 62, 37, 29, 117, 191, 130, 32, 110, 62, 36, 118, 142, 189, 3, 0, 133, 188, 109, 119, 154, 62, 124, 193, 16, 62, 88, 179, 45, 61, 121, 209, 213, 61, 130, 156, 101, 190, 111, 254, 238, 61, 77, 217, 133, 62, 47, 35, 27, 190, 0, 117, 164, 190, 9, 227, 48, 189, 255, 167, 58, 189, 219, 243, 240, 61, 163, 97, 49, 190, 155, 131, 83, 190, 233, 122, 196, 189, 70, 224, 32, 191, 9, 138, 244, 61, 244, 53, 228, 60, 134, 52, 159, 61, 229, 175, 26, 188, 16, 248, 201, 189, 229, 254, 0, 191, 63, 59, 51, 190, 198, 170, 176, 190, 207, 82, 222, 62, 54, 205, 82, 191, 135, 126, 6, 187, 227, 177, 202, 62, 10, 218, 28, 191, 117, 49, 151, 60, 115, 71, 155, 60, 119, 9, 201, 190, 213, 95, 155, 190, 237, 83, 162, 190, 180, 9, 136, 62, 156, 242, 113, 190, 113, 57, 78, 61, 156, 64, 132, 61, 34, 237, 29, 190, 9, 214, 58, 190, 253, 194, 156, 189, 60, 128, 248, 61, 38, 240, 135, 190, 167, 30, 114, 62, 196, 185, 132, 189, 6, 13, 162, 190, 6, 128, 11, 190, 230, 189, 201, 189, 229, 143, 36, 62, 124, 209, 16, 62, 75, 198, 114, 190, 197, 226, 51, 190, 34, 7, 81, 190, 31, 18, 109, 189, 152, 93, 9, 190, 52, 157, 36, 61, 112, 56, 25, 190, 80, 18, 218, 61, 143, 6, 232, 189, 46, 1, 21, 62, 153, 226, 41, 190, 31, 241, 86, 190, 208, 124, 11, 62, 183, 58, 29, 190, 93, 54, 52, 61, 152, 254, 56, 190, 158, 133, 16, 190, 101, 44, 30, 190, 79, 86, 189, 188, 6, 163, 252, 188, 105, 124, 138, 61, 80, 230, 192, 188, 118, 136, 28, 190, 173, 75, 102, 61, 138, 254, 66, 61, 249, 42, 2, 61, 28, 183, 58, 190, 57, 131, 22, 189, 215, 36, 191, 61, 208, 25, 232, 189, 227, 113, 63, 190, 236, 82, 85, 189, 187, 178, 53, 190, 126, 172, 251, 61, 199, 23, 188, 189, 114, 228, 196, 61, 104, 177, 15, 190, 39, 8, 144, 61, 205, 205, 93, 61, 107, 37, 154, 61, 126, 241, 31, 189, 153, 234, 28, 190, 248, 234, 23, 62, 143, 186, 92, 61, 37, 145, 224, 60, 69, 133, 231, 61, 138, 93, 103, 188, 197, 128, 55, 190, 128, 48, 185, 61, 100, 92, 181, 189, 18, 250, 232, 61, 83, 116, 168, 189, 209, 77, 141, 189, 254, 159, 192, 189, 192, 151, 139, 189, 61, 207, 235, 60, 171, 78, 47, 190, 191, 71, 2, 190, 58, 58, 12, 190, 176, 139, 9, 61, 77, 211, 42, 62, 27, 73, 160, 61, 147, 79, 20, 190, 68, 63, 160, 189, 70, 8, 204, 189, 187, 207, 137, 187, 142, 251, 236, 189, 226, 140, 8, 60, 242, 80, 140, 61, 83, 213, 74, 188, 4, 217, 44, 62, 170, 146, 36, 190, 235, 255, 183, 186, 35, 105, 146, 61, 198, 64, 209, 60, 219, 141, 198, 61, 114, 234, 71, 61, 65, 252, 103, 61, 10, 90, 27, 62, 23, 183, 52, 190, 132, 65, 16, 190, 28, 64, 133, 61, 219, 243, 36, 189, 115, 193, 236, 189, 251, 9, 220, 187, 181, 183, 174, 189, 24, 181, 186, 61, 110, 122, 175, 189, 253, 234, 43, 190, 132, 186, 207, 189, 175, 4, 23, 190, 39, 149, 246, 189, 162, 3, 15, 62, 152, 121, 45, 190, 154, 176, 194, 189, 123, 7, 182, 188, 32, 217, 123, 60, 83, 184, 170, 61, 242, 121, 241, 189, 214, 126, 26, 60, 241, 193, 77, 61, 52, 43, 181, 60, 184, 161, 214, 62, 235, 172, 197, 190, 40, 225, 190, 62, 208, 153, 52, 62, 186, 54, 65, 190, 167, 124, 133, 60, 93, 31, 190, 62, 128, 251, 95, 190, 134, 241, 147, 190, 13, 137, 151, 189, 43, 7, 251, 190, 74, 150, 246, 61, 54, 198, 79, 62, 13, 175, 21, 190, 150, 41, 161, 61, 180, 101, 130, 190, 101, 111, 200, 62, 21, 157, 86, 57, 1, 110, 136, 190, 175, 12, 225, 62, 178, 24, 228, 186, 244, 215, 150, 190, 43, 128, 188, 60, 37, 188, 133, 190, 138, 16, 246, 189, 227, 43, 1, 191, 113, 91, 45, 62, 166, 245, 14, 61, 179, 106, 100, 191, 204, 213, 78, 188, 46, 133, 248, 61, 33, 200, 193, 189, 247, 216, 220, 62, 104, 200, 146, 191, 18, 73, 225, 62, 143, 150, 160, 62, 16, 37, 149, 60, 126, 229, 41, 62, 221, 110, 90, 62, 205, 175, 162, 190, 253, 92, 250, 190, 224, 209, 175, 189, 194, 164, 120, 190, 62, 186, 207, 61, 14, 103, 252, 60, 137, 184, 206, 189, 175, 90, 19, 190, 98, 82, 106, 190, 185, 245, 167, 62, 38, 134, 31, 190, 94, 123, 204, 190, 197, 254, 48, 62, 176, 214, 59, 190, 88, 231, 177, 61, 110, 78, 151, 188, 46, 178, 150, 61, 4, 13, 81, 189, 18, 47, 155, 190, 202, 198, 250, 61, 141, 13, 195, 62, 22, 7, 21, 191, 24, 203, 55, 62, 117, 177, 39, 188, 155, 50, 10, 62, 124, 16, 136, 190, 3, 186, 195, 62, 50, 98, 234, 60, 99, 150, 221, 189, 161, 46, 128, 62, 123, 183, 79, 189, 245, 201, 9, 190, 6, 188, 185, 62, 63, 160, 244, 62, 151, 97, 187, 189, 146, 124, 209, 190, 226, 39, 233, 61, 246, 102, 94, 190, 50, 223, 228, 61, 99, 100, 76, 62, 138, 212, 141, 62, 213, 70, 35, 63, 255, 240, 102, 189, 188, 184, 1, 62, 130, 238, 36, 190, 93, 62, 167, 189, 195, 208, 128, 62, 209, 93, 35, 190, 196, 100, 145, 62, 189, 79, 16, 190, 46, 51, 136, 60, 28, 83, 193, 189, 136, 103, 86, 62, 162, 184, 99, 61};
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
                alignas(float) const unsigned char memory[] = {38, 10, 158, 189, 195, 76, 241, 189, 11, 48, 154, 62, 59, 212, 142, 62, 226, 244, 6, 62, 183, 151, 124, 188, 178, 234, 97, 62, 8, 235, 34, 62, 216, 27, 139, 61, 185, 191, 3, 62, 200, 100, 125, 62, 220, 33, 167, 61, 203, 218, 22, 62, 115, 181, 35, 190, 11, 194, 206, 189, 63, 132, 168, 188, 133, 7, 186, 189, 95, 78, 117, 189, 95, 154, 66, 62, 47, 72, 19, 62, 234, 111, 169, 62, 119, 134, 23, 189, 82, 142, 136, 190, 249, 50, 151, 62, 239, 180, 148, 62, 244, 194, 163, 61, 209, 229, 210, 61, 214, 139, 73, 190, 110, 38, 236, 61, 53, 173, 60, 189, 234, 245, 65, 190, 162, 225, 235, 190};
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
                alignas(float) const unsigned char memory[] = {219, 104, 118, 191, 183, 78, 44, 190, 224, 229, 52, 189, 105, 233, 82, 191, 80, 96, 16, 191, 254, 2, 157, 60, 74, 73, 41, 63, 247, 87, 128, 62, 183, 218, 23, 190, 52, 113, 35, 191, 171, 13, 138, 61, 185, 225, 28, 190, 80, 71, 54, 63, 206, 93, 146, 58, 27, 182, 23, 63, 167, 170, 233, 189, 229, 27, 193, 62, 132, 182, 94, 189, 124, 10, 84, 63, 160, 153, 91, 63, 72, 71, 115, 191, 60, 188, 75, 63, 97, 180, 138, 190, 125, 120, 48, 62, 103, 34, 42, 60, 83, 217, 52, 63, 158, 8, 198, 189, 5, 145, 132, 61, 75, 167, 9, 188, 199, 35, 2, 63, 45, 253, 25, 63, 146, 138, 157, 62, 151, 114, 226, 61, 19, 50, 44, 189, 26, 135, 178, 190, 187, 55, 205, 62, 231, 209, 34, 62, 207, 205, 112, 189, 174, 220, 184, 62, 147, 47, 2, 191, 10, 103, 53, 191, 92, 254, 41, 190, 37, 209, 68, 190, 194, 190, 151, 190, 94, 195, 74, 190, 95, 166, 105, 189, 207, 5, 76, 190, 23, 53, 127, 189, 175, 133, 143, 59, 255, 173, 150, 61, 45, 69, 161, 190, 158, 151, 99, 62, 143, 180, 173, 62, 239, 47, 69, 62, 95, 96, 201, 62, 254, 10, 253, 189, 101, 29, 81, 189, 44, 235, 110, 62, 5, 211, 112, 189, 114, 221, 60, 61, 186, 19, 50, 62, 90, 209, 105, 190, 191, 39, 209, 62, 208, 200, 106, 61};
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
                alignas(float) const unsigned char memory[] = {73, 200, 62, 190, 28, 223, 165, 190};
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
    alignas(float) const unsigned char memory[] = {215, 76, 134, 191, 64, 56, 143, 61, 177, 40, 25, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {91, 93, 125, 64, 240, 30, 214, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0098/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
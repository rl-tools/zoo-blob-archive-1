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
                alignas(float) const unsigned char memory[] = {227, 255, 32, 191, 75, 158, 10, 63, 77, 207, 204, 190, 71, 69, 166, 60, 215, 236, 58, 63, 114, 115, 153, 190, 63, 61, 111, 62, 160, 176, 137, 62, 79, 231, 228, 190, 29, 101, 135, 190, 13, 49, 80, 63, 59, 225, 28, 190, 234, 124, 129, 61, 207, 189, 16, 190, 137, 62, 164, 190, 255, 230, 91, 190, 242, 91, 90, 190, 139, 142, 135, 62, 203, 149, 198, 189, 4, 73, 94, 191, 153, 185, 147, 62, 112, 140, 79, 191, 41, 148, 36, 191, 36, 167, 88, 188, 143, 207, 14, 61, 168, 159, 234, 190, 7, 10, 13, 63, 255, 90, 62, 63, 185, 99, 148, 190, 232, 81, 5, 191, 248, 56, 10, 62, 56, 105, 82, 63, 115, 65, 198, 62, 190, 34, 32, 190, 91, 145, 85, 189, 28, 36, 87, 191, 41, 247, 227, 59, 142, 219, 173, 189, 90, 171, 209, 62, 202, 35, 206, 190, 24, 3, 14, 63, 141, 247, 3, 188, 29, 114, 105, 190, 194, 85, 105, 191, 205, 224, 24, 63, 184, 194, 7, 63, 88, 43, 137, 191, 179, 241, 145, 189, 174, 17, 255, 188, 77, 140, 190, 63, 118, 6, 10, 63, 32, 85, 185, 62, 158, 132, 55, 62, 180, 2, 62, 62, 7, 220, 194, 190, 93, 88, 81, 191, 5, 221, 118, 190, 90, 219, 1, 63, 31, 171, 80, 191, 33, 176, 65, 190, 45, 113, 193, 190, 195, 133, 153, 63, 94, 123, 173, 62, 57, 140, 244, 62, 126, 104, 90, 190, 135, 195, 19, 63, 164, 82, 171, 190, 153, 183, 16, 191, 21, 162, 25, 191, 220, 159, 80, 63, 58, 141, 187, 62, 54, 238, 32, 63, 255, 178, 63, 63, 197, 253, 68, 63, 178, 236, 168, 62, 188, 39, 164, 61, 5, 149, 74, 63, 30, 236, 9, 63, 110, 10, 32, 63, 217, 224, 55, 191, 15, 96, 4, 191, 81, 182, 86, 63, 213, 163, 156, 62, 118, 18, 88, 62, 245, 109, 69, 62, 25, 78, 10, 63, 171, 90, 192, 62, 45, 204, 51, 191, 243, 243, 231, 190, 170, 84, 177, 190, 190, 77, 30, 191, 60, 121, 192, 61, 17, 199, 228, 62, 104, 172, 32, 62, 125, 186, 137, 63, 172, 228, 238, 62};
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
                alignas(float) const unsigned char memory[] = {1, 106, 223, 190, 148, 105, 13, 190, 64, 152, 94, 62, 59, 183, 133, 189, 147, 16, 7, 191, 124, 162, 4, 63, 105, 158, 238, 62, 24, 173, 33, 63, 171, 252, 137, 60, 154, 190, 82, 63, 82, 223, 28, 191, 10, 162, 181, 61, 118, 128, 187, 62, 201, 250, 238, 62, 195, 97, 146, 190, 72, 234, 158, 62, 144, 150, 8, 189, 157, 176, 18, 191, 68, 228, 182, 190, 80, 127, 219, 190, 226, 187, 134, 190, 120, 30, 14, 62, 61, 126, 130, 62, 113, 134, 207, 185, 71, 157, 105, 190, 176, 157, 84, 61, 135, 69, 25, 191, 144, 151, 72, 62, 109, 55, 113, 190, 202, 231, 244, 190, 30, 79, 55, 191, 46, 70, 207, 62};
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
                alignas(float) const unsigned char memory[] = {252, 244, 4, 63, 121, 14, 54, 191, 252, 33, 163, 60, 128, 59, 236, 61, 225, 246, 144, 189, 206, 103, 118, 62, 14, 167, 147, 62, 97, 117, 0, 61, 45, 32, 137, 62, 10, 171, 234, 60, 11, 192, 82, 190, 169, 84, 152, 191, 139, 213, 69, 62, 251, 92, 119, 61, 253, 200, 0, 190, 124, 253, 49, 62, 45, 129, 163, 61, 184, 24, 244, 190, 184, 59, 233, 62, 56, 101, 59, 190, 132, 69, 161, 61, 155, 187, 107, 190, 219, 37, 190, 190, 34, 97, 177, 190, 236, 120, 172, 190, 208, 253, 39, 62, 190, 207, 245, 60, 67, 213, 172, 189, 242, 214, 181, 190, 172, 169, 160, 191, 149, 74, 71, 62, 229, 68, 143, 60, 116, 207, 0, 189, 100, 50, 161, 62, 250, 186, 179, 61, 236, 108, 205, 62, 159, 111, 146, 190, 70, 48, 7, 188, 176, 124, 84, 190, 228, 127, 87, 190, 224, 167, 137, 190, 213, 139, 183, 189, 179, 181, 223, 188, 72, 52, 187, 60, 104, 98, 3, 190, 138, 171, 183, 60, 20, 42, 3, 187, 3, 194, 110, 190, 32, 82, 161, 61, 193, 166, 82, 61, 248, 0, 11, 190, 11, 26, 221, 190, 33, 134, 14, 190, 180, 54, 127, 62, 4, 238, 17, 61, 122, 209, 248, 61, 59, 166, 176, 62, 0, 147, 203, 61, 194, 143, 238, 190, 124, 164, 132, 62, 172, 190, 51, 62, 218, 134, 94, 62, 153, 37, 71, 190, 201, 210, 95, 62, 45, 82, 95, 190, 182, 6, 115, 62, 35, 41, 154, 61, 182, 69, 155, 62, 203, 191, 87, 190, 158, 76, 239, 61, 194, 31, 223, 189, 214, 154, 187, 189, 83, 237, 184, 189, 0, 43, 18, 190, 171, 74, 254, 61, 248, 57, 34, 62, 148, 230, 82, 62, 123, 164, 65, 62, 107, 28, 40, 62, 54, 101, 192, 190, 175, 42, 216, 61, 68, 110, 56, 62, 63, 225, 169, 190, 73, 195, 3, 191, 133, 34, 165, 189, 118, 243, 164, 61, 191, 112, 190, 188, 225, 2, 24, 62, 151, 102, 166, 62, 179, 105, 242, 189, 136, 208, 239, 190, 21, 250, 242, 61, 9, 43, 137, 188, 139, 251, 24, 62, 190, 76, 130, 190, 196, 42, 209, 189, 230, 188, 18, 62, 54, 138, 138, 190, 3, 48, 2, 62, 13, 103, 78, 190, 12, 142, 73, 62, 23, 189, 83, 62, 88, 3, 205, 62, 109, 253, 182, 61, 236, 181, 4, 62, 39, 137, 53, 62, 135, 204, 160, 190, 121, 13, 179, 61, 255, 73, 238, 61, 10, 247, 159, 189, 184, 225, 27, 190, 82, 231, 190, 62, 159, 49, 99, 189, 137, 34, 136, 190, 230, 18, 43, 62, 4, 40, 245, 190, 136, 62, 181, 62, 79, 47, 240, 189, 182, 151, 118, 190, 10, 23, 206, 190, 13, 100, 227, 190, 238, 111, 135, 60, 253, 34, 118, 62, 161, 85, 216, 61, 127, 187, 146, 190, 199, 94, 137, 190, 139, 244, 230, 62, 178, 28, 129, 61, 52, 220, 11, 190, 205, 43, 97, 190, 254, 97, 93, 62, 101, 201, 176, 190, 30, 0, 236, 61, 110, 29, 135, 190, 122, 7, 226, 189, 92, 22, 122, 189, 188, 161, 23, 62, 169, 219, 52, 62, 199, 30, 2, 191, 121, 224, 23, 62, 43, 158, 0, 62, 82, 143, 81, 190, 40, 167, 171, 189, 148, 73, 174, 62, 181, 192, 16, 191, 5, 228, 38, 190, 210, 249, 205, 188, 79, 175, 47, 191, 171, 6, 109, 190, 29, 47, 237, 188, 109, 251, 251, 188, 158, 207, 108, 189, 236, 142, 216, 189, 166, 10, 159, 189, 205, 20, 12, 190, 18, 86, 190, 62, 73, 228, 103, 190, 120, 38, 33, 190, 142, 137, 53, 190, 236, 22, 230, 189, 1, 193, 179, 187, 184, 239, 219, 189, 133, 48, 111, 61, 240, 153, 68, 189, 164, 227, 18, 61, 85, 43, 6, 190, 141, 38, 150, 62, 198, 147, 10, 62, 31, 166, 159, 60, 243, 245, 139, 62, 111, 213, 71, 190, 136, 125, 97, 61, 200, 195, 93, 61, 106, 16, 238, 190, 106, 81, 140, 60, 160, 83, 25, 63, 222, 104, 3, 191, 150, 70, 192, 190, 26, 139, 214, 190, 73, 121, 136, 62, 211, 163, 106, 190, 62, 75, 3, 62, 4, 59, 146, 186, 254, 124, 1, 62, 217, 225, 215, 190, 43, 84, 100, 188, 110, 248, 181, 62, 35, 113, 230, 61, 251, 58, 225, 189, 202, 2, 201, 190, 149, 91, 100, 190, 156, 244, 223, 190, 9, 215, 52, 62, 45, 5, 241, 190, 56, 237, 12, 62, 109, 36, 125, 190, 137, 94, 102, 188, 178, 12, 143, 62, 119, 101, 188, 62, 44, 20, 61, 62, 242, 7, 130, 62, 250, 102, 0, 62, 136, 176, 204, 190, 140, 113, 4, 191, 214, 41, 223, 61, 14, 94, 125, 190, 17, 217, 129, 190, 53, 248, 14, 63, 133, 210, 168, 190, 104, 247, 186, 190, 165, 120, 249, 62, 209, 15, 241, 190, 213, 171, 243, 189, 214, 208, 166, 189, 66, 81, 123, 190, 190, 232, 175, 190, 123, 206, 135, 190, 29, 202, 197, 188, 103, 192, 203, 62, 220, 225, 151, 189, 80, 171, 106, 190, 253, 61, 137, 191, 145, 205, 89, 61, 62, 238, 160, 61, 3, 31, 67, 189, 207, 248, 151, 190, 176, 207, 163, 189, 182, 210, 58, 190, 226, 222, 44, 190, 238, 122, 5, 190, 247, 37, 124, 189, 10, 176, 13, 191, 168, 188, 45, 190, 63, 173, 23, 190, 66, 139, 130, 62, 96, 161, 63, 190, 89, 167, 249, 61, 8, 64, 208, 187, 9, 9, 165, 189, 233, 95, 142, 190, 18, 8, 174, 60, 193, 136, 123, 61, 252, 208, 202, 189, 213, 92, 151, 190, 86, 82, 189, 60, 121, 239, 74, 62, 230, 168, 25, 190, 214, 147, 109, 62, 30, 137, 113, 62, 98, 43, 218, 189, 135, 55, 67, 189, 163, 75, 33, 62, 51, 46, 149, 61, 169, 165, 222, 61, 233, 5, 160, 60, 159, 147, 177, 61, 119, 4, 137, 190, 172, 119, 126, 190, 57, 159, 64, 190, 148, 192, 13, 191, 85, 38, 29, 62, 2, 200, 227, 189, 215, 210, 193, 187, 100, 248, 3, 62, 133, 96, 144, 62, 65, 75, 145, 61, 207, 3, 246, 189, 208, 131, 16, 61, 92, 165, 255, 189, 234, 55, 179, 190, 170, 164, 87, 189, 165, 69, 134, 62, 129, 185, 50, 190, 170, 177, 47, 190, 221, 57, 144, 189, 21, 82, 231, 62, 219, 77, 88, 189, 146, 175, 42, 62, 145, 78, 139, 61, 211, 249, 53, 190, 47, 125, 239, 190, 145, 153, 62, 62, 223, 34, 100, 62, 80, 200, 30, 190, 64, 32, 227, 61, 45, 48, 139, 190, 161, 151, 128, 189, 55, 27, 237, 189, 227, 100, 235, 189, 231, 132, 155, 190, 74, 192, 1, 189, 94, 52, 51, 191, 163, 130, 44, 190, 255, 224, 107, 62, 94, 17, 103, 62, 213, 18, 103, 62, 48, 35, 139, 62, 230, 92, 43, 191, 145, 36, 134, 190, 166, 127, 17, 60, 251, 165, 97, 61, 160, 145, 51, 190, 3, 95, 7, 61, 130, 165, 203, 189, 25, 15, 107, 190, 141, 144, 40, 190, 175, 30, 148, 191, 136, 230, 212, 61, 47, 111, 48, 190, 20, 77, 35, 190, 53, 100, 146, 189, 156, 80, 118, 190, 190, 151, 249, 190, 223, 75, 197, 189, 30, 120, 111, 190, 98, 242, 182, 190, 163, 57, 191, 188, 234, 221, 237, 60, 216, 3, 17, 62, 2, 89, 55, 190, 175, 203, 20, 190, 0, 238, 245, 60, 220, 166, 118, 62, 89, 74, 156, 190, 147, 118, 80, 189, 55, 209, 50, 62, 120, 57, 138, 62, 204, 191, 83, 60, 0, 117, 149, 62, 226, 244, 159, 62, 6, 131, 59, 60, 102, 98, 134, 61, 207, 152, 145, 189, 46, 208, 167, 190, 230, 38, 110, 188, 71, 21, 149, 62, 202, 45, 147, 189, 123, 114, 21, 190, 82, 242, 202, 60, 154, 204, 211, 190, 66, 158, 63, 62, 41, 121, 93, 190, 58, 240, 38, 190, 37, 26, 105, 61, 8, 14, 40, 190, 79, 154, 7, 61, 95, 190, 102, 62, 5, 237, 108, 61, 113, 169, 119, 190, 209, 37, 194, 189, 254, 91, 179, 61, 134, 185, 111, 189, 162, 63, 41, 63, 86, 153, 49, 191, 140, 125, 204, 190, 144, 95, 208, 189, 109, 107, 23, 189, 97, 14, 214, 61, 159, 140, 55, 62, 139, 86, 21, 62, 58, 117, 158, 61, 24, 195, 216, 190, 205, 221, 81, 190, 34, 45, 149, 191, 227, 38, 36, 62, 164, 208, 138, 62, 88, 116, 37, 190, 43, 204, 176, 188, 248, 245, 25, 62, 208, 3, 11, 190, 82, 128, 199, 62, 12, 166, 4, 61, 252, 145, 186, 62, 124, 121, 174, 189, 47, 77, 205, 190, 96, 61, 113, 189, 54, 250, 21, 190, 204, 195, 131, 62, 137, 55, 123, 190, 18, 62, 14, 61, 96, 135, 10, 190, 7, 167, 184, 191, 48, 112, 187, 61, 19, 225, 47, 61, 220, 251, 117, 190, 122, 97, 97, 62, 90, 181, 6, 62, 123, 87, 185, 62, 85, 205, 44, 190, 27, 137, 101, 61, 177, 153, 138, 189, 226, 220, 232, 190, 137, 27, 176, 190, 163, 54, 75, 62, 21, 223, 213, 61, 39, 89, 75, 59, 45, 160, 61, 190, 241, 143, 166, 61, 255, 245, 10, 189, 15, 156, 126, 190, 173, 7, 58, 189, 145, 118, 167, 62, 86, 122, 4, 191, 64, 33, 80, 191, 189, 80, 137, 189, 10, 166, 54, 62, 201, 177, 62, 190, 17, 46, 188, 62, 58, 135, 94, 62, 165, 31, 164, 187, 90, 178, 36, 191, 150, 103, 215, 62, 6, 187, 141, 62, 162, 86, 106, 62, 217, 78, 228, 189, 58, 226, 53, 62, 47, 198, 110, 190, 250, 78, 184, 62, 186, 75, 207, 188, 43, 15, 150, 62, 153, 86, 28, 188, 124, 81, 206, 60, 21, 126, 152, 61, 120, 207, 18, 62, 102, 246, 235, 190, 254, 31, 150, 189, 44, 108, 202, 189, 158, 237, 253, 61, 145, 115, 246, 189, 241, 238, 81, 62, 213, 146, 206, 60, 19, 16, 247, 190, 252, 155, 160, 190, 34, 45, 135, 189, 40, 117, 192, 61, 129, 234, 164, 189, 83, 219, 89, 191, 102, 195, 17, 62, 185, 2, 156, 62, 40, 215, 17, 63, 143, 213, 163, 62, 3, 89, 183, 190, 178, 218, 18, 190, 78, 111, 131, 62, 148, 26, 159, 61, 6, 50, 58, 62, 240, 202, 71, 191, 46, 57, 3, 62, 115, 220, 70, 61, 121, 154, 64, 61, 210, 153, 25, 62, 214, 170, 136, 61, 66, 163, 13, 188, 9, 53, 170, 62, 60, 121, 190, 61, 253, 35, 163, 60, 74, 246, 110, 62, 88, 210, 133, 61, 57, 192, 157, 189, 122, 207, 0, 190, 127, 149, 4, 190, 190, 236, 204, 189, 61, 128, 102, 191, 224, 213, 144, 62, 201, 49, 188, 62, 161, 199, 243, 189, 232, 132, 106, 61, 75, 95, 14, 191, 182, 61, 141, 62, 227, 164, 11, 191, 158, 27, 207, 61, 37, 32, 162, 190, 179, 142, 84, 190, 92, 186, 155, 61, 37, 72, 126, 62, 128, 160, 25, 61, 109, 157, 169, 190, 224, 106, 31, 190, 205, 192, 159, 62, 243, 145, 2, 63, 128, 155, 153, 190, 185, 14, 238, 189, 90, 94, 245, 189, 78, 242, 133, 189, 241, 150, 44, 190, 56, 44, 214, 62, 37, 110, 208, 62, 86, 57, 179, 62, 46, 81, 176, 190, 47, 4, 173, 190, 126, 58, 171, 188, 72, 86, 26, 62, 245, 216, 77, 189, 173, 144, 40, 62, 109, 146, 76, 62, 85, 163, 25, 62, 72, 130, 166, 191, 41, 3, 56, 190, 235, 143, 168, 190, 2, 231, 77, 63, 147, 195, 48, 191, 193, 153, 142, 62, 172, 107, 168, 62, 122, 34, 144, 190, 167, 146, 8, 191, 187, 11, 142, 191, 97, 224, 111, 190, 47, 19, 128, 190, 185, 105, 181, 60, 4, 201, 66, 62, 6, 49, 36, 191, 240, 246, 13, 191, 216, 81, 173, 61, 234, 33, 47, 190, 245, 220, 40, 61, 191, 168, 12, 191, 17, 70, 174, 189, 157, 210, 10, 190, 11, 143, 160, 190, 186, 147, 39, 191, 234, 189, 124, 189, 97, 190, 135, 190, 157, 203, 33, 62, 71, 214, 74, 190, 47, 98, 118, 60, 215, 78, 10, 191, 7, 255, 21, 189, 4, 43, 92, 190, 142, 195, 234, 188, 70, 230, 141, 62, 224, 177, 5, 62, 159, 232, 212, 61, 172, 95, 14, 190, 82, 85, 217, 61, 105, 134, 117, 189, 87, 132, 13, 62, 241, 200, 115, 62, 72, 104, 160, 61, 147, 206, 213, 189, 6, 37, 58, 62, 148, 49, 5, 62, 92, 27, 122, 189, 53, 193, 156, 188, 21, 149, 2, 62, 61, 148, 219, 189, 7, 185, 161, 189, 76, 171, 208, 189, 103, 249, 5, 62, 202, 194, 46, 190, 137, 219, 30, 188, 88, 72, 40, 190, 1, 171, 52, 190, 243, 126, 210, 189, 196, 99, 14, 190, 67, 7, 254, 189, 211, 74, 48, 190, 211, 45, 158, 189, 81, 48, 165, 61, 18, 43, 193, 188, 243, 43, 183, 60, 117, 182, 3, 62, 25, 106, 217, 60, 88, 36, 4, 190, 54, 217, 36, 190, 252, 122, 90, 61, 182, 71, 199, 189, 188, 129, 18, 60, 41, 244, 249, 189, 82, 52, 25, 190, 147, 135, 90, 188, 240, 201, 71, 61, 126, 53, 233, 189, 106, 65, 148, 61, 2, 43, 245, 189, 76, 135, 3, 62, 7, 8, 145, 189, 223, 146, 50, 190, 40, 50, 166, 56, 216, 234, 17, 190, 207, 166, 201, 189, 191, 29, 10, 190, 7, 219, 213, 61, 10, 251, 41, 62, 173, 110, 91, 62, 199, 11, 150, 190, 181, 207, 142, 62, 126, 59, 89, 61, 102, 143, 169, 60, 160, 160, 213, 61, 114, 51, 50, 62, 215, 104, 36, 62, 38, 99, 251, 61, 125, 104, 250, 190, 248, 73, 161, 62, 96, 251, 148, 188, 72, 76, 53, 190, 77, 59, 124, 191, 95, 53, 129, 62, 48, 54, 83, 62, 124, 43, 248, 62, 179, 178, 11, 63, 99, 44, 153, 190, 44, 149, 54, 190, 249, 64, 43, 62, 105, 145, 149, 62, 158, 229, 199, 188, 26, 9, 206, 190, 143, 191, 161, 190, 176, 245, 162, 61, 105, 88, 38, 190, 244, 22, 142, 61, 136, 199, 251, 189, 10, 184, 10, 189, 65, 77, 222, 188, 133, 150, 246, 189, 109, 8, 154, 189, 213, 144, 97, 188, 133, 249, 27, 189, 236, 71, 178, 61, 249, 226, 73, 190, 66, 84, 34, 190, 157, 30, 2, 62, 68, 8, 165, 61, 36, 165, 223, 61, 236, 212, 83, 190, 141, 250, 75, 61, 91, 12, 201, 61, 85, 232, 250, 189, 188, 20, 248, 187, 75, 90, 12, 190, 139, 224, 26, 190, 102, 242, 180, 188, 243, 251, 211, 189, 156, 75, 250, 189, 214, 141, 18, 62, 46, 64, 201, 61, 8, 138, 70, 189, 29, 254, 173, 60, 120, 13, 255, 189, 87, 192, 3, 62, 237, 198, 81, 60, 172, 150, 168, 189, 240, 240, 108, 62, 222, 194, 116, 62, 167, 90, 79, 188, 198, 181, 96, 189, 92, 255, 216, 60, 226, 252, 242, 61, 212, 0, 116, 188, 242, 198, 92, 62, 112, 4, 93, 190, 64, 240, 213, 61, 235, 172, 81, 190, 157, 173, 123, 189, 106, 99, 36, 58, 108, 40, 238, 62, 136, 130, 138, 187, 223, 206, 190, 61, 50, 135, 137, 189, 177, 31, 213, 190, 218, 235, 167, 190, 143, 116, 143, 62, 129, 87, 187, 188, 150, 214, 48, 62, 224, 86, 100, 190, 147, 53, 132, 190, 185, 219, 218, 61, 39, 182, 198, 61, 128, 137, 127, 61, 14, 60, 188, 190, 127, 36, 81, 191, 102, 102, 9, 62, 115, 72, 2, 62, 240, 166, 104, 62, 81, 70, 148, 61, 63, 121, 229, 58, 99, 147, 5, 190, 210, 186, 227, 189, 100, 161, 95, 189, 111, 100, 94, 62, 189, 105, 18, 62, 99, 34, 4, 62, 195, 19, 84, 62, 0, 146, 74, 189, 59, 5, 23, 62, 18, 102, 116, 190, 230, 116, 176, 61, 161, 219, 208, 188, 151, 58, 61, 61, 207, 211, 2, 61, 42, 83, 188, 190, 77, 128, 222, 62, 49, 15, 197, 61, 82, 141, 235, 61, 185, 167, 18, 190, 130, 37, 47, 62, 179, 75, 86, 62, 64, 253, 1, 190, 225, 45, 38, 62, 33, 188, 63, 61, 236, 192, 96, 62, 132, 165, 128, 58, 53, 243, 192, 189, 116, 79, 4, 190, 60, 128, 90, 61, 86, 60, 119, 190, 77, 69, 118, 62, 188, 200, 251, 188, 76, 160, 0, 189, 184, 93, 25, 61, 66, 87, 50, 62, 219, 173, 120, 62, 68, 202, 63, 62, 27, 222, 85, 62, 116, 96, 64, 190, 178, 2, 80, 190, 107, 177, 214, 60, 207, 233, 3, 62, 124, 171, 224, 189, 109, 117, 124, 62, 201, 178, 14, 62, 239, 1, 235, 190, 242, 199, 131, 188, 230, 88, 46, 191, 82, 35, 143, 62, 94, 109, 236, 189, 151, 126, 132, 189, 169, 34, 104, 190, 128, 86, 202, 190, 228, 65, 215, 61, 66, 142, 128, 62, 108, 204, 205, 189, 72, 214, 227, 189, 19, 174, 195, 190, 227, 112, 103, 62, 38, 65, 229, 189, 149, 55, 222, 190, 18, 105, 5, 191, 161, 135, 207, 190, 167, 68, 237, 190, 174, 53, 52, 190, 183, 61, 132, 62, 194, 156, 23, 187, 253, 52, 166, 62, 15, 245, 5, 189, 80, 237, 40, 191, 25, 109, 166, 190, 226, 249, 47, 190, 100, 9, 111, 62, 177, 44, 159, 189, 42, 161, 6, 62, 29, 198, 53, 60, 99, 5, 35, 62, 99, 182, 87, 191, 2, 120, 151, 191, 198, 161, 133, 190, 67, 67, 170, 62, 164, 5, 3, 190, 245, 110, 168, 190, 128, 213, 254, 190, 37, 17, 32, 191, 151, 214, 2, 190, 43, 160, 129, 190, 15, 202, 55, 191, 246, 104, 36, 190, 84, 139, 130, 62, 110, 73, 241, 61, 224, 127, 123, 62, 164, 207, 134, 190, 112, 247, 33, 190, 210, 66, 126, 189, 87, 107, 238, 189, 13, 216, 23, 62, 178, 24, 170, 189, 64, 174, 163, 58, 223, 241, 252, 60, 79, 16, 67, 189, 18, 33, 52, 62, 3, 165, 183, 190, 114, 37, 40, 62, 63, 61, 13, 189, 35, 38, 128, 190, 174, 250, 8, 62, 74, 171, 145, 62, 205, 36, 17, 191, 181, 101, 24, 190, 171, 50, 213, 187, 151, 129, 191, 190, 4, 173, 164, 190, 194, 7, 215, 188, 26, 183, 28, 62, 143, 78, 208, 61, 123, 63, 193, 61, 44, 133, 48, 189, 45, 34, 70, 62, 227, 205, 97, 62, 50, 186, 148, 190, 135, 231, 105, 190, 4, 83, 238, 190, 210, 12, 176, 189, 210, 166, 80, 189, 248, 13, 39, 61, 110, 204, 1, 190, 30, 140, 132, 190, 113, 201, 43, 61, 117, 251, 17, 189, 190, 234, 30, 190, 75, 55, 147, 190, 212, 180, 11, 62, 161, 187, 123, 189, 227, 38, 236, 189, 54, 119, 28, 190, 146, 49, 118, 189, 234, 204, 247, 189, 163, 127, 153, 189, 141, 229, 171, 188, 51, 251, 33, 62, 122, 173, 128, 60, 165, 218, 253, 189, 68, 251, 214, 62, 15, 124, 78, 190, 3, 217, 171, 61, 237, 136, 186, 189, 174, 128, 85, 62, 139, 232, 140, 61, 161, 60, 225, 189, 213, 61, 60, 62, 113, 85, 116, 62, 255, 255, 40, 62, 60, 129, 49, 61, 104, 169, 152, 188, 184, 204, 15, 61, 19, 124, 118, 190, 177, 124, 78, 190, 117, 188, 52, 188, 50, 186, 144, 190, 245, 156, 226, 188, 217, 183, 191, 61, 214, 245, 89, 62, 209, 174, 203, 189, 12, 32, 17, 62, 208, 25, 164, 61, 71, 139, 231, 61, 97, 227, 245, 188, 44, 245, 12, 190, 211, 131, 184, 190, 6, 162, 15, 62, 113, 148, 100, 189, 33, 8, 248, 189, 210, 113, 210, 60, 252, 114, 28, 190, 203, 139, 224, 62, 66, 252, 151, 61, 230, 116, 0, 62, 73, 120, 220, 189, 106, 31, 134, 60, 20, 172, 5, 190, 163, 190, 52, 62, 106, 108, 197, 61, 194, 113, 82, 190, 94, 49, 20, 62, 192, 225, 176, 190, 16, 171, 15, 62, 13, 231, 52, 61, 7, 219, 19, 62, 94, 90, 104, 190, 149, 156, 116, 60, 30, 125, 100, 190, 212, 27, 225, 189, 92, 159, 27, 61, 124, 32, 162, 190, 115, 27, 141, 190, 65, 180, 170, 187, 123, 213, 169, 190, 154, 56, 58, 62, 25, 15, 198, 61, 247, 188, 92, 190, 37, 142, 187, 190, 42, 191, 199, 61, 76, 16, 81, 189, 69, 210, 19, 190, 190, 59, 152, 62, 103, 53, 42, 190, 248, 185, 191, 61, 57, 178, 33, 189, 146, 116, 194, 60, 207, 255, 99, 61, 118, 215, 87, 62, 160, 72, 177, 62, 99, 164, 34, 62, 5, 147, 213, 189, 193, 228, 37, 188, 108, 182, 195, 61, 146, 143, 138, 61, 57, 25, 151, 190, 115, 162, 101, 61, 84, 183, 38, 189, 122, 176, 85, 189, 72, 86, 201, 62, 202, 90, 32, 62, 163, 217, 210, 61, 50, 21, 124, 189, 158, 255, 227, 61, 209, 199, 146, 190, 41, 119, 247, 188, 181, 101, 123, 62, 98, 177, 126, 61, 202, 70, 66, 62, 108, 92, 248, 61, 70, 121, 41, 189, 210, 94, 43, 62, 215, 119, 110, 62, 252, 251, 110, 189, 5, 233, 182, 187, 66, 41, 110, 61, 175, 101, 128, 62, 92, 33, 84, 189, 76, 244, 146, 189, 217, 38, 81, 190, 81, 164, 110, 188, 70, 135, 75, 62, 125, 112, 19, 62, 184, 154, 123, 190, 174, 11, 156, 62, 98, 12, 150, 60, 214, 114, 37, 190, 198, 166, 51, 62, 141, 156, 126, 62, 118, 103, 49, 62, 179, 129, 237, 189, 112, 113, 0, 61, 72, 75, 227, 189, 26, 73, 73, 61, 200, 123, 233, 60, 124, 228, 42, 189, 181, 24, 250, 189, 97, 186, 78, 189, 136, 131, 177, 189, 243, 243, 9, 190, 103, 150, 158, 189, 132, 212, 205, 188, 150, 32, 21, 190, 238, 129, 53, 60, 226, 253, 3, 190, 11, 14, 46, 190, 87, 57, 135, 189, 7, 81, 169, 61, 49, 110, 29, 61, 222, 79, 26, 61, 58, 1, 246, 188, 243, 233, 37, 62, 79, 26, 185, 61, 249, 247, 40, 190, 148, 145, 197, 188, 171, 176, 42, 190, 151, 170, 181, 59, 146, 188, 35, 190, 76, 153, 130, 189, 255, 223, 19, 190, 41, 185, 114, 61, 201, 166, 175, 61, 4, 180, 184, 61, 1, 50, 19, 190, 88, 151, 98, 189, 107, 178, 57, 190, 178, 43, 222, 189, 74, 253, 123, 189, 198, 235, 110, 61, 51, 81, 191, 60, 49, 147, 17, 190, 76, 44, 94, 189, 241, 111, 82, 190, 203, 127, 128, 60, 30, 26, 152, 61, 114, 132, 149, 60, 71, 110, 224, 60, 6, 31, 19, 190, 142, 196, 38, 190, 172, 235, 222, 186, 143, 131, 9, 61, 74, 188, 171, 61, 117, 181, 7, 60, 134, 232, 181, 188, 17, 184, 214, 188, 155, 61, 45, 61, 176, 0, 41, 190, 26, 40, 9, 62, 25, 32, 125, 60, 255, 240, 235, 189, 219, 148, 217, 61, 113, 43, 36, 62, 16, 80, 56, 190, 129, 249, 110, 62, 189, 248, 156, 190, 105, 142, 243, 189, 117, 26, 12, 190, 138, 124, 145, 61, 118, 104, 101, 62, 213, 72, 65, 62, 224, 60, 65, 62, 235, 186, 63, 62, 118, 64, 162, 61, 81, 54, 112, 190, 221, 82, 27, 61, 172, 69, 189, 60, 200, 205, 135, 61, 35, 194, 22, 189, 129, 37, 236, 61, 145, 148, 57, 61, 196, 154, 97, 190, 205, 101, 34, 189, 48, 156, 144, 191, 142, 253, 194, 188, 74, 96, 151, 61, 35, 232, 11, 190, 216, 7, 130, 189, 249, 212, 160, 189, 93, 34, 172, 61, 234, 88, 217, 190, 50, 186, 49, 61, 97, 207, 123, 190, 174, 40, 116, 190, 163, 140, 200, 61, 152, 232, 137, 61};
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
                alignas(float) const unsigned char memory[] = {166, 132, 185, 62, 253, 133, 70, 62, 57, 211, 172, 62, 124, 119, 240, 60, 51, 186, 77, 61, 144, 185, 130, 189, 37, 251, 244, 61, 244, 58, 97, 190, 215, 146, 27, 190, 14, 139, 51, 62, 42, 182, 157, 189, 119, 54, 142, 62, 53, 55, 8, 62, 99, 207, 157, 61, 13, 8, 36, 189, 214, 11, 189, 61, 121, 201, 182, 190, 237, 65, 47, 190, 109, 55, 170, 62, 184, 146, 131, 189, 184, 59, 27, 62, 34, 179, 107, 190, 81, 240, 0, 61, 5, 106, 214, 61, 214, 35, 49, 61, 87, 230, 93, 190, 135, 131, 99, 190, 49, 100, 206, 190, 71, 188, 61, 61, 44, 63, 169, 61, 50, 228, 179, 189, 60, 176, 83, 62};
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
                alignas(float) const unsigned char memory[] = {248, 199, 87, 63, 147, 177, 133, 190, 188, 198, 189, 190, 239, 167, 232, 62, 154, 228, 48, 62, 234, 142, 251, 62, 177, 175, 49, 63, 247, 51, 14, 61, 50, 187, 8, 191, 151, 34, 65, 191, 136, 189, 175, 62, 56, 103, 255, 62, 80, 3, 238, 190, 1, 5, 19, 191, 152, 79, 190, 62, 244, 97, 165, 191, 210, 109, 21, 63, 177, 104, 165, 188, 49, 217, 206, 190, 253, 235, 197, 189, 99, 40, 228, 62, 26, 242, 57, 61, 192, 158, 220, 62, 191, 201, 28, 191, 162, 248, 18, 62, 25, 207, 24, 190, 24, 36, 77, 190, 23, 69, 254, 62, 182, 242, 62, 190, 28, 112, 38, 61, 149, 149, 240, 189, 133, 204, 142, 61, 150, 202, 22, 62, 197, 180, 12, 61, 40, 63, 245, 189, 137, 115, 136, 58, 34, 158, 24, 191, 140, 164, 143, 62, 137, 238, 184, 189, 81, 138, 175, 62, 169, 114, 7, 62, 26, 244, 84, 62, 74, 111, 38, 190, 33, 175, 247, 189, 38, 82, 73, 190, 75, 102, 48, 61, 79, 54, 134, 60, 8, 67, 135, 61, 132, 236, 40, 189, 114, 43, 165, 189, 73, 236, 89, 190, 130, 240, 204, 61, 247, 68, 52, 189, 215, 143, 80, 62, 170, 49, 196, 61, 198, 66, 109, 189, 115, 8, 148, 190, 218, 191, 91, 62, 220, 12, 248, 61, 172, 217, 130, 61, 251, 234, 47, 190, 76, 235, 18, 62, 20, 36, 254, 61, 48, 129, 86, 190};
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
                alignas(float) const unsigned char memory[] = {39, 37, 211, 188, 40, 214, 42, 190};
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
    alignas(float) const unsigned char memory[] = {124, 44, 251, 63, 143, 17, 100, 191, 241, 246, 45, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {115, 186, 253, 63, 197, 173, 55, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0032/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
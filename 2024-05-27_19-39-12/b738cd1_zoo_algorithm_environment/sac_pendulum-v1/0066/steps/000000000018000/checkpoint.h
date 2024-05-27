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
                alignas(float) const unsigned char memory[] = {107, 225, 81, 63, 149, 125, 1, 63, 142, 234, 130, 62, 167, 141, 64, 63, 6, 10, 105, 191, 184, 150, 75, 62, 175, 124, 74, 62, 246, 175, 251, 62, 86, 162, 141, 62, 151, 15, 88, 190, 114, 235, 199, 190, 108, 181, 209, 190, 255, 161, 67, 62, 112, 128, 133, 63, 11, 24, 43, 62, 70, 64, 65, 191, 156, 177, 20, 191, 8, 11, 50, 190, 214, 220, 141, 189, 63, 239, 159, 63, 199, 137, 49, 63, 198, 29, 22, 63, 218, 30, 118, 63, 134, 133, 31, 191, 152, 53, 69, 60, 252, 225, 224, 63, 205, 242, 18, 63, 144, 149, 35, 63, 76, 51, 189, 61, 120, 180, 47, 187, 175, 82, 80, 63, 45, 89, 176, 60, 46, 186, 102, 60, 18, 121, 66, 63, 52, 208, 146, 191, 34, 17, 185, 190, 43, 123, 173, 190, 119, 39, 213, 191, 244, 112, 19, 191, 245, 211, 212, 190, 23, 150, 115, 191, 228, 4, 69, 190, 241, 64, 146, 190, 131, 90, 95, 63, 118, 57, 65, 191, 188, 194, 71, 63, 194, 162, 75, 62, 43, 113, 237, 188, 203, 232, 99, 190, 190, 252, 104, 62, 232, 104, 101, 191, 29, 146, 90, 63, 189, 64, 237, 62, 255, 57, 99, 62, 235, 52, 195, 190, 0, 246, 15, 191, 180, 212, 222, 190, 198, 34, 39, 191, 210, 131, 105, 191, 118, 220, 139, 62, 126, 211, 32, 191, 40, 154, 82, 191, 173, 48, 189, 189, 239, 207, 35, 190, 94, 56, 28, 190, 94, 8, 56, 61, 76, 95, 132, 61, 84, 229, 72, 191, 138, 192, 101, 190, 124, 217, 128, 62, 58, 32, 236, 62, 206, 16, 84, 62, 232, 168, 59, 62, 242, 134, 114, 191, 102, 172, 60, 63, 24, 22, 49, 190, 31, 110, 41, 62, 2, 158, 172, 62, 250, 107, 42, 190, 214, 2, 130, 62, 176, 111, 249, 190, 37, 58, 39, 191, 134, 239, 27, 191, 237, 107, 240, 189, 4, 134, 97, 62, 43, 37, 154, 62, 13, 146, 15, 189, 96, 16, 171, 190, 182, 103, 120, 63, 90, 157, 50, 62, 206, 33, 253, 189, 166, 186, 56, 191, 35, 61, 189, 62, 45, 162, 130, 190, 238, 87, 192, 189, 180, 35, 133, 191};
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
                alignas(float) const unsigned char memory[] = {181, 24, 28, 191, 127, 62, 66, 62, 163, 62, 218, 188, 17, 107, 142, 60, 113, 200, 23, 63, 72, 206, 75, 63, 167, 50, 157, 190, 83, 217, 231, 62, 78, 34, 120, 61, 251, 199, 91, 61, 158, 145, 238, 62, 76, 237, 178, 189, 211, 237, 20, 61, 225, 247, 206, 62, 238, 123, 164, 190, 32, 64, 230, 62, 118, 142, 108, 191, 13, 34, 203, 190, 189, 140, 250, 61, 32, 220, 57, 190, 14, 234, 204, 62, 162, 118, 17, 191, 185, 4, 117, 62, 102, 151, 190, 189, 254, 19, 48, 190, 15, 200, 68, 63, 41, 53, 195, 190, 5, 102, 12, 63, 69, 190, 5, 191, 206, 131, 148, 62, 74, 120, 152, 190, 135, 230, 143, 62};
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
                alignas(float) const unsigned char memory[] = {205, 33, 51, 191, 209, 216, 143, 190, 60, 197, 56, 189, 79, 180, 133, 189, 61, 132, 71, 62, 16, 16, 176, 62, 76, 109, 1, 190, 142, 27, 205, 190, 248, 189, 17, 190, 131, 76, 36, 191, 5, 146, 18, 62, 0, 117, 76, 191, 200, 157, 38, 190, 16, 120, 242, 61, 45, 89, 169, 62, 94, 162, 160, 62, 46, 14, 216, 61, 209, 2, 138, 190, 154, 9, 85, 62, 109, 44, 197, 62, 11, 117, 135, 62, 138, 129, 11, 190, 104, 81, 172, 61, 123, 114, 153, 190, 65, 120, 125, 190, 167, 96, 246, 60, 42, 0, 16, 191, 206, 30, 65, 62, 100, 43, 29, 61, 246, 91, 55, 62, 225, 103, 46, 62, 202, 222, 57, 62, 97, 76, 5, 191, 138, 115, 149, 62, 172, 97, 216, 188, 25, 247, 57, 190, 36, 59, 162, 189, 57, 6, 225, 188, 44, 105, 228, 61, 221, 68, 214, 61, 137, 184, 129, 62, 135, 5, 43, 61, 186, 2, 143, 190, 199, 156, 190, 62, 8, 137, 129, 61, 210, 116, 6, 60, 76, 22, 169, 60, 58, 109, 59, 190, 131, 134, 24, 190, 32, 143, 178, 190, 33, 164, 255, 189, 156, 202, 15, 191, 229, 132, 27, 190, 13, 56, 250, 189, 55, 35, 130, 188, 66, 15, 34, 190, 60, 248, 28, 62, 60, 32, 184, 61, 99, 112, 157, 62, 65, 22, 180, 61, 165, 223, 251, 60, 14, 161, 199, 186, 8, 32, 151, 190, 125, 72, 102, 189, 20, 134, 27, 190, 175, 31, 200, 62, 148, 14, 6, 62, 8, 190, 101, 188, 229, 101, 136, 191, 132, 76, 54, 190, 142, 226, 92, 190, 99, 180, 80, 189, 175, 217, 109, 62, 157, 229, 93, 191, 85, 127, 109, 191, 115, 204, 73, 61, 145, 214, 10, 62, 52, 218, 62, 62, 75, 104, 229, 61, 182, 248, 248, 190, 58, 237, 98, 62, 128, 100, 202, 188, 73, 210, 119, 62, 154, 16, 81, 187, 141, 211, 113, 62, 230, 78, 85, 61, 160, 99, 63, 190, 97, 203, 73, 62, 157, 132, 5, 62, 199, 200, 35, 190, 138, 104, 139, 61, 228, 104, 243, 189, 192, 121, 134, 189, 211, 144, 190, 191, 89, 253, 236, 189, 188, 54, 16, 62, 94, 7, 176, 189, 32, 107, 154, 62, 193, 177, 32, 190, 21, 225, 8, 191, 153, 206, 224, 61, 10, 134, 183, 187, 54, 239, 50, 62, 213, 110, 212, 61, 253, 195, 108, 62, 141, 198, 204, 62, 8, 26, 194, 190, 158, 0, 247, 188, 158, 29, 180, 191, 157, 177, 57, 189, 98, 106, 69, 191, 25, 127, 7, 191, 74, 74, 162, 191, 132, 163, 248, 189, 54, 193, 243, 61, 179, 128, 174, 190, 198, 159, 114, 61, 232, 179, 14, 189, 254, 131, 70, 190, 179, 77, 111, 189, 172, 181, 193, 62, 46, 216, 96, 62, 115, 72, 250, 189, 166, 192, 99, 62, 161, 114, 164, 61, 125, 198, 217, 61, 167, 223, 20, 60, 157, 128, 189, 191, 187, 188, 7, 60, 89, 147, 178, 189, 62, 106, 70, 188, 58, 173, 225, 189, 218, 145, 252, 189, 101, 3, 161, 189, 17, 8, 206, 189, 247, 161, 199, 188, 204, 182, 61, 190, 26, 88, 200, 61, 79, 141, 153, 188, 0, 123, 15, 190, 229, 78, 43, 190, 137, 251, 130, 189, 74, 8, 42, 190, 217, 26, 43, 190, 106, 193, 219, 59, 101, 221, 141, 189, 79, 2, 12, 62, 247, 168, 21, 62, 74, 234, 148, 61, 152, 4, 255, 61, 254, 120, 249, 61, 219, 133, 92, 189, 172, 155, 233, 61, 205, 255, 30, 190, 226, 85, 126, 61, 212, 129, 207, 189, 219, 35, 254, 61, 91, 26, 47, 188, 189, 48, 21, 187, 2, 45, 223, 189, 159, 169, 250, 189, 94, 132, 162, 62, 63, 100, 206, 61, 124, 45, 141, 191, 77, 146, 130, 61, 112, 27, 174, 191, 248, 64, 46, 60, 81, 47, 29, 62, 60, 51, 154, 61, 223, 245, 122, 190, 188, 147, 230, 62, 55, 140, 84, 189, 63, 39, 37, 192, 221, 125, 6, 191, 98, 186, 2, 190, 238, 216, 207, 62, 109, 82, 207, 190, 153, 0, 90, 189, 151, 14, 237, 190, 126, 31, 39, 62, 222, 90, 157, 191, 19, 69, 14, 190, 49, 208, 3, 62, 167, 44, 19, 62, 118, 149, 217, 61, 115, 119, 209, 61, 90, 253, 218, 61, 67, 9, 167, 191, 138, 143, 248, 188, 192, 190, 129, 190, 33, 248, 21, 189, 121, 54, 117, 190, 122, 229, 0, 191, 254, 219, 218, 62, 3, 247, 240, 188, 159, 56, 90, 189, 150, 119, 145, 62, 11, 172, 41, 61, 194, 26, 182, 62, 241, 227, 36, 63, 230, 233, 160, 62, 76, 154, 241, 62, 78, 170, 43, 62, 91, 161, 15, 63, 147, 32, 198, 191, 97, 37, 186, 189, 214, 187, 167, 190, 172, 113, 133, 62, 217, 80, 5, 191, 96, 209, 215, 190, 58, 247, 230, 190, 205, 253, 174, 190, 251, 3, 93, 62, 84, 1, 15, 190, 78, 226, 185, 62, 131, 123, 188, 188, 205, 127, 230, 61, 18, 161, 106, 62, 175, 100, 62, 62, 215, 48, 215, 188, 65, 185, 19, 190, 249, 232, 98, 62, 128, 61, 198, 190, 71, 194, 28, 191, 175, 6, 40, 191, 12, 250, 174, 190, 36, 214, 249, 189, 112, 94, 93, 191, 59, 173, 53, 62, 227, 73, 17, 62, 130, 78, 4, 62, 140, 78, 223, 62, 79, 84, 105, 61, 251, 39, 62, 191, 96, 208, 110, 190, 206, 247, 78, 190, 51, 89, 5, 62, 228, 154, 206, 60, 40, 93, 45, 62, 35, 100, 198, 61, 34, 98, 218, 190, 96, 60, 34, 191, 171, 163, 37, 191, 4, 112, 104, 190, 235, 61, 158, 189, 140, 101, 31, 61, 199, 46, 55, 190, 194, 199, 217, 189, 97, 31, 50, 191, 134, 109, 149, 189, 237, 33, 52, 190, 99, 234, 12, 190, 104, 98, 26, 62, 22, 203, 28, 62, 11, 250, 220, 190, 65, 231, 197, 190, 15, 34, 138, 189, 59, 173, 126, 190, 89, 96, 101, 61, 150, 141, 19, 190, 141, 190, 234, 189, 168, 42, 27, 190, 51, 20, 178, 58, 250, 212, 224, 61, 6, 216, 93, 62, 92, 79, 54, 191, 160, 201, 140, 190, 248, 176, 68, 191, 170, 190, 57, 188, 135, 68, 56, 190, 194, 242, 43, 62, 19, 252, 216, 188, 210, 53, 20, 61, 144, 116, 57, 61, 96, 142, 8, 61, 225, 106, 163, 62, 6, 31, 16, 189, 239, 71, 46, 62, 85, 17, 184, 190, 148, 212, 169, 186, 20, 164, 86, 61, 251, 72, 255, 59, 102, 52, 71, 62, 89, 100, 86, 190, 63, 8, 53, 190, 53, 45, 218, 61, 130, 32, 54, 62, 140, 99, 200, 61, 220, 209, 16, 61, 147, 11, 169, 62, 32, 139, 30, 189, 182, 173, 137, 191, 58, 10, 222, 61, 35, 102, 152, 190, 121, 179, 126, 62, 144, 151, 221, 62, 146, 233, 240, 61, 77, 64, 139, 190, 44, 236, 65, 190, 14, 42, 199, 62, 83, 186, 214, 190, 26, 186, 140, 189, 219, 247, 7, 62, 214, 4, 132, 190, 106, 37, 29, 190, 54, 56, 61, 62, 177, 98, 35, 191, 214, 120, 4, 61, 83, 50, 92, 190, 28, 164, 177, 61, 120, 35, 221, 190, 252, 19, 26, 190, 160, 5, 77, 62, 220, 65, 151, 61, 36, 3, 169, 61, 48, 174, 69, 189, 218, 223, 21, 62, 168, 122, 6, 61, 19, 190, 173, 189, 60, 33, 149, 190, 118, 72, 201, 188, 172, 82, 232, 188, 208, 230, 249, 189, 155, 105, 160, 189, 112, 39, 246, 61, 209, 189, 110, 188, 40, 20, 159, 189, 23, 247, 25, 188, 28, 60, 37, 61, 114, 240, 219, 61, 71, 4, 42, 190, 34, 190, 98, 60, 254, 230, 87, 60, 112, 146, 130, 189, 114, 129, 49, 61, 219, 116, 25, 190, 19, 236, 180, 61, 212, 213, 33, 60, 231, 210, 72, 190, 84, 62, 0, 190, 7, 94, 79, 190, 111, 157, 156, 189, 116, 110, 8, 190, 110, 105, 58, 62, 151, 225, 41, 189, 76, 57, 19, 190, 99, 36, 187, 188, 204, 151, 193, 187, 84, 141, 188, 61, 248, 67, 46, 190, 9, 127, 49, 60, 172, 88, 129, 189, 133, 81, 171, 190, 160, 49, 19, 62, 236, 49, 9, 59, 208, 178, 26, 191, 185, 54, 25, 60, 147, 79, 50, 62, 186, 72, 27, 62, 102, 58, 74, 62, 153, 30, 12, 61, 73, 222, 142, 190, 15, 82, 5, 191, 205, 193, 109, 191, 64, 69, 223, 190, 254, 8, 37, 190, 207, 200, 76, 62, 27, 151, 152, 189, 197, 179, 240, 190, 50, 77, 236, 189, 118, 51, 99, 191, 200, 77, 153, 62, 199, 48, 3, 190, 39, 38, 245, 61, 95, 71, 157, 191, 227, 206, 52, 190, 48, 2, 64, 62, 103, 169, 150, 61, 120, 66, 130, 62, 193, 36, 179, 189, 57, 130, 253, 60, 8, 143, 90, 62, 237, 186, 82, 62, 153, 178, 13, 189, 216, 132, 72, 190, 18, 97, 182, 190, 62, 88, 1, 190, 246, 96, 126, 190, 172, 51, 146, 62, 9, 12, 195, 189, 24, 138, 62, 61, 219, 27, 109, 188, 77, 103, 148, 62, 153, 188, 60, 191, 28, 4, 131, 190, 14, 17, 8, 191, 156, 90, 252, 190, 24, 197, 60, 191, 34, 164, 161, 61, 15, 252, 240, 61, 48, 60, 238, 190, 130, 59, 30, 189, 35, 131, 169, 190, 238, 36, 168, 191, 2, 241, 93, 191, 122, 217, 184, 61, 227, 208, 188, 189, 138, 17, 101, 61, 55, 221, 47, 190, 113, 88, 186, 189, 119, 246, 52, 61, 221, 203, 134, 191, 202, 248, 56, 61, 104, 185, 99, 62, 138, 237, 89, 191, 138, 49, 35, 190, 63, 248, 73, 63, 58, 89, 159, 189, 112, 198, 136, 62, 24, 223, 62, 191, 239, 79, 149, 61, 18, 199, 75, 191, 196, 168, 69, 190, 164, 239, 163, 62, 93, 25, 36, 62, 16, 130, 115, 190, 110, 13, 96, 62, 179, 96, 136, 190, 134, 74, 203, 190, 198, 159, 178, 190, 168, 29, 78, 62, 185, 60, 171, 62, 151, 114, 225, 190, 37, 20, 63, 63, 29, 131, 225, 188, 58, 89, 6, 190, 147, 190, 31, 191, 48, 71, 153, 189, 157, 142, 82, 190, 36, 198, 47, 62, 33, 53, 225, 61, 237, 161, 67, 61, 19, 173, 53, 61, 179, 3, 39, 191, 174, 175, 128, 189, 161, 63, 240, 189, 49, 53, 11, 62, 77, 59, 137, 190, 187, 180, 143, 190, 238, 75, 78, 191, 206, 135, 114, 190, 24, 42, 89, 61, 255, 41, 11, 61, 34, 90, 26, 62, 56, 62, 130, 191, 16, 32, 171, 190, 74, 238, 136, 191, 244, 193, 230, 189, 26, 85, 183, 62, 40, 241, 19, 191, 10, 218, 117, 188, 241, 28, 223, 189, 74, 123, 147, 62, 208, 39, 154, 61, 230, 114, 184, 62, 253, 46, 245, 190, 156, 84, 130, 62, 229, 120, 140, 62, 130, 160, 140, 189, 49, 59, 130, 190, 72, 78, 140, 61, 70, 168, 52, 190, 246, 113, 70, 191, 63, 239, 7, 191, 18, 251, 172, 190, 204, 94, 125, 189, 154, 169, 1, 189, 178, 170, 51, 189, 223, 238, 212, 190, 92, 206, 128, 62, 185, 75, 137, 191, 127, 79, 145, 190, 9, 184, 182, 190, 75, 102, 154, 62, 9, 118, 78, 62, 125, 19, 65, 60, 202, 98, 175, 189, 219, 222, 171, 62, 235, 11, 138, 62, 89, 97, 34, 61, 164, 226, 218, 190, 114, 63, 116, 61, 136, 4, 225, 61, 132, 194, 131, 190, 234, 204, 199, 62, 25, 180, 79, 190, 141, 191, 198, 62, 255, 209, 21, 191, 156, 113, 150, 61, 126, 210, 20, 63, 125, 6, 94, 190, 75, 6, 64, 61, 159, 69, 166, 61, 52, 236, 91, 190, 96, 237, 113, 190, 20, 243, 78, 62, 235, 168, 35, 190, 103, 198, 20, 190, 35, 2, 132, 61, 224, 201, 7, 62, 117, 9, 169, 189, 20, 238, 58, 62, 187, 145, 78, 189, 21, 56, 61, 62, 216, 34, 28, 190, 129, 78, 15, 190, 172, 111, 236, 191, 48, 185, 142, 190, 199, 13, 229, 61, 124, 232, 93, 62, 171, 73, 145, 189, 237, 42, 19, 62, 201, 79, 90, 62, 234, 207, 249, 62, 164, 110, 184, 61, 163, 128, 154, 61, 78, 25, 74, 58, 246, 201, 54, 62, 41, 151, 106, 190, 134, 192, 150, 191, 177, 136, 202, 189, 154, 9, 172, 61, 208, 223, 88, 190, 145, 113, 208, 61, 245, 234, 58, 190, 197, 61, 106, 190, 133, 144, 11, 62, 167, 99, 3, 191, 40, 166, 122, 62, 78, 169, 178, 61, 124, 148, 140, 61, 41, 57, 35, 191, 164, 55, 212, 60, 77, 113, 137, 189, 127, 154, 247, 190, 44, 201, 218, 62, 169, 197, 232, 189, 20, 56, 183, 188, 99, 112, 158, 187, 9, 60, 207, 61, 196, 81, 111, 62, 241, 40, 180, 62, 168, 39, 20, 62, 183, 50, 84, 62, 219, 181, 186, 62, 37, 164, 180, 62, 192, 12, 7, 190, 241, 96, 203, 188, 179, 93, 128, 189, 41, 74, 27, 62, 92, 59, 112, 190, 79, 197, 147, 190, 231, 153, 11, 190, 112, 71, 254, 190, 129, 190, 31, 61, 44, 166, 96, 61, 245, 118, 142, 61, 133, 114, 133, 189, 135, 191, 201, 61, 85, 24, 232, 189, 112, 4, 118, 62, 199, 11, 101, 62, 62, 32, 45, 190, 174, 247, 138, 61, 107, 6, 243, 189, 104, 138, 60, 61, 180, 222, 72, 61, 242, 245, 65, 62, 115, 120, 11, 62, 255, 15, 62, 191, 142, 19, 169, 61, 24, 19, 139, 191, 79, 54, 196, 188, 234, 167, 129, 62, 132, 19, 31, 188, 91, 17, 148, 190, 95, 166, 181, 62, 95, 116, 208, 190, 177, 119, 78, 191, 139, 105, 242, 190, 22, 225, 218, 61, 138, 248, 172, 62, 157, 105, 9, 191, 72, 160, 53, 62, 24, 168, 167, 190, 115, 184, 105, 62, 20, 0, 166, 191, 2, 32, 172, 188, 126, 207, 114, 188, 224, 229, 192, 61, 2, 139, 228, 60, 115, 72, 47, 62, 141, 5, 102, 62, 153, 122, 162, 191, 87, 63, 105, 61, 118, 205, 206, 189, 246, 72, 51, 62, 110, 217, 51, 190, 77, 83, 0, 62, 130, 254, 48, 62, 136, 159, 198, 61, 161, 52, 50, 190, 63, 162, 112, 190, 157, 234, 158, 189, 55, 161, 45, 62, 30, 140, 157, 62, 76, 192, 114, 62, 3, 51, 156, 188, 18, 2, 151, 190, 67, 84, 216, 62, 222, 163, 12, 62, 43, 197, 176, 189, 42, 30, 235, 189, 1, 115, 88, 190, 32, 221, 19, 190, 245, 123, 185, 189, 80, 237, 154, 61, 229, 29, 200, 190, 197, 139, 70, 62, 27, 51, 14, 62, 95, 69, 120, 59, 234, 76, 63, 62, 100, 30, 178, 62, 36, 224, 227, 61, 180, 48, 0, 63, 172, 27, 125, 62, 18, 73, 94, 189, 63, 150, 7, 190, 114, 110, 96, 190, 243, 22, 67, 190, 131, 42, 58, 191, 241, 111, 108, 189, 182, 109, 96, 190, 105, 25, 1, 62, 158, 189, 13, 191, 233, 226, 32, 62, 235, 47, 3, 191, 4, 67, 112, 190, 6, 12, 9, 191, 54, 8, 132, 190, 115, 165, 18, 62, 59, 32, 28, 189, 155, 42, 158, 62, 54, 217, 149, 62, 245, 247, 46, 62, 80, 34, 252, 189, 143, 246, 135, 61, 64, 93, 12, 192, 78, 107, 46, 61, 74, 43, 0, 63, 228, 108, 170, 62, 99, 117, 4, 190, 146, 122, 103, 62, 173, 224, 63, 191, 91, 208, 170, 189, 136, 78, 153, 189, 183, 84, 236, 189, 46, 38, 150, 62, 226, 239, 249, 189, 69, 78, 243, 61, 68, 107, 221, 62, 104, 12, 81, 62, 71, 75, 102, 189, 21, 37, 131, 190, 179, 39, 201, 61, 192, 48, 208, 61, 244, 10, 146, 189, 194, 251, 60, 190, 70, 75, 193, 60, 195, 169, 240, 188, 115, 244, 155, 61, 214, 59, 111, 60, 113, 111, 145, 189, 130, 217, 24, 190, 222, 0, 241, 61, 122, 166, 4, 185, 180, 246, 153, 189, 232, 164, 215, 189, 43, 52, 37, 61, 124, 221, 245, 189, 237, 246, 36, 190, 114, 55, 69, 190, 140, 66, 222, 60, 90, 237, 70, 190, 166, 42, 135, 189, 209, 42, 247, 61, 142, 111, 46, 190, 200, 63, 195, 189, 160, 94, 16, 190, 210, 126, 39, 59, 86, 101, 10, 62, 205, 23, 0, 190, 62, 216, 70, 188, 17, 162, 33, 190, 156, 166, 29, 191, 100, 66, 48, 62, 68, 233, 59, 190, 210, 223, 36, 190, 211, 75, 173, 187, 111, 77, 243, 187, 66, 83, 233, 189, 20, 106, 180, 61, 46, 72, 2, 190, 56, 94, 195, 190, 64, 24, 167, 62, 192, 177, 173, 62, 192, 114, 80, 190, 211, 48, 93, 62, 23, 202, 77, 189, 50, 220, 129, 62, 238, 249, 188, 190, 60, 33, 234, 190, 137, 234, 82, 189, 102, 39, 99, 60, 216, 163, 147, 61, 23, 80, 153, 189, 91, 205, 12, 62, 154, 82, 140, 190, 125, 76, 175, 188, 97, 140, 45, 189, 89, 211, 133, 190, 118, 67, 190, 61, 54, 42, 39, 62, 28, 146, 195, 58, 54, 103, 196, 60, 108, 143, 7, 62, 115, 157, 87, 62, 79, 149, 32, 62, 228, 132, 133, 187, 103, 108, 101, 191, 198, 64, 75, 62, 191, 94, 18, 191, 230, 32, 1, 62, 22, 178, 99, 62, 14, 241, 238, 188, 15, 121, 122, 190, 4, 19, 211, 61, 209, 161, 117, 190, 242, 168, 192, 191, 80, 56, 36, 191, 99, 183, 232, 61, 82, 93, 149, 62, 46, 174, 174, 190, 249, 8, 164, 62, 200, 8, 132, 190, 231, 2, 101, 189, 230, 225, 78, 191, 193, 237, 120, 60, 3, 109, 53, 190, 34, 36, 23, 62, 26, 78, 103, 61, 113, 129, 7, 62, 178, 143, 234, 61, 29, 188, 76, 191, 135, 34, 236, 186, 19, 253, 74, 62, 115, 85, 47, 61, 222, 45, 129, 190, 64, 231, 136, 61, 141, 237, 195, 189, 116, 201, 163, 188, 15, 230, 21, 61, 115, 41, 134, 60, 71, 218, 71, 61, 36, 19, 200, 189, 14, 133, 163, 60, 235, 132, 137, 189, 137, 5, 248, 61, 223, 231, 220, 187, 31, 206, 17, 188, 249, 31, 6, 190, 135, 109, 142, 189, 198, 102, 124, 59, 224, 30, 249, 189, 226, 41, 55, 190, 97, 11, 85, 189, 64, 71, 245, 61, 222, 50, 109, 60, 238, 170, 228, 61, 45, 148, 153, 61, 194, 241, 168, 189, 67, 27, 183, 189, 243, 108, 29, 61, 34, 224, 45, 190, 243, 215, 28, 62, 33, 239, 119, 188, 106, 123, 78, 187, 194, 164, 55, 61, 154, 110, 45, 190, 128, 109, 47, 190, 246, 58, 206, 189, 250, 212, 175, 61, 163, 186, 193, 190, 158, 48, 253, 61, 2, 128, 74, 191, 49, 233, 96, 62, 68, 176, 9, 61, 51, 76, 3, 190, 143, 11, 133, 189, 155, 22, 28, 191, 230, 211, 218, 190, 126, 255, 100, 61, 124, 10, 128, 62, 80, 244, 140, 61, 230, 115, 23, 189, 37, 63, 211, 190, 75, 222, 105, 188, 245, 123, 103, 190, 244, 100, 4, 62, 108, 216, 156, 190, 231, 46, 97, 62, 87, 185, 91, 190, 25, 73, 222, 61, 91, 226, 19, 190, 157, 6, 242, 189, 27, 156, 96, 60, 235, 236, 159, 61, 141, 4, 150, 62, 101, 131, 138, 58, 144, 87, 221, 190, 149, 104, 191, 190, 254, 118, 141, 60, 154, 190, 84, 60, 29, 171, 193, 61, 240, 127, 0, 62, 159, 219, 6, 62, 54, 145, 39, 190, 228, 161, 106, 187, 12, 84, 140, 189, 44, 255, 177, 189, 202, 25, 20, 62, 75, 198, 226, 61, 6, 232, 142, 189, 193, 144, 249, 188, 210, 124, 147, 189, 31, 153, 25, 190, 34, 241, 45, 62, 123, 118, 161, 188, 15, 208, 136, 60, 219, 114, 1, 189, 222, 233, 0, 190, 153, 102, 23, 62, 23, 191, 48, 190, 135, 21, 73, 189, 213, 69, 186, 61, 176, 102, 223, 189, 14, 221, 52, 190, 192, 115, 192, 189, 10, 140, 51, 189, 13, 186, 153, 61, 26, 221, 177, 61, 42, 11, 52, 190, 59, 113, 147, 189, 43, 60, 7, 190, 151, 176, 39, 189, 98, 138, 137, 188, 48, 71, 252, 61, 74, 113, 3, 190, 138, 193, 145, 62, 124, 124, 216, 190, 250, 144, 168, 61, 95, 185, 54, 62, 229, 177, 66, 62, 149, 244, 129, 190, 111, 122, 153, 62, 3, 253, 21, 190, 118, 186, 255, 190, 89, 192, 59, 191, 93, 2, 107, 62, 182, 21, 225, 62, 116, 206, 155, 189, 156, 228, 154, 61, 179, 210, 14, 62, 146, 207, 139, 61, 238, 80, 140, 191, 69, 182, 225, 189, 51, 115, 146, 189, 18, 126, 234, 61, 69, 45, 214, 60, 194, 136, 48, 61, 88, 48, 5, 63, 50, 195, 123, 191, 115, 220, 195, 61, 5, 133, 76, 62, 26, 105, 36, 62, 66, 6, 175, 189, 142, 251, 155, 190, 121, 246, 113, 191, 199, 105, 206, 190, 88, 147, 43, 62, 9, 199, 136, 190, 52, 215, 155, 62, 190, 223, 194, 191, 110, 113, 219, 190, 27, 100, 195, 191, 87, 143, 77, 61, 55, 180, 81, 63, 147, 222, 120, 190, 25, 112, 30, 62, 213, 234, 57, 61, 6, 38, 200, 62, 26, 111, 16, 63, 188, 4, 172, 62, 96, 149, 30, 191, 106, 212, 172, 62, 7, 128, 198, 61, 131, 204, 238, 61, 191, 142, 185, 189, 116, 231, 226, 61, 156, 189, 22, 191, 99, 228, 83, 191, 69, 147, 240, 190, 138, 227, 36, 190, 247, 75, 205, 61, 201, 255, 22, 190, 217, 131, 129, 189, 206, 121, 87, 190, 58, 128, 10, 62, 63, 117, 19, 62, 222, 201, 213, 62, 81, 156, 125, 190, 27, 75, 78, 190, 80, 183, 97, 188, 23, 128, 123, 190, 76, 179, 95, 62, 17, 164, 149, 62, 22, 22, 34, 190, 74, 47, 180, 60, 121, 7, 100, 62, 31, 174, 25, 63, 119, 150, 133, 187, 218, 65, 62, 62, 253, 127, 207, 190, 165, 26, 112, 190, 152, 119, 116, 190, 63, 77, 172, 61, 7, 225, 210, 61, 36, 50, 29, 62, 168, 232, 122, 62, 188, 184, 254, 61, 16, 175, 162, 61, 166, 230, 138, 190, 99, 62, 195, 61, 94, 33, 51, 190, 24, 189, 0, 190, 21, 162, 231, 61, 168, 68, 138, 189, 83, 11, 119, 189, 117, 112, 88, 190, 63, 30, 145, 190, 253, 50, 119, 191, 78, 223, 209, 62, 230, 214, 2, 191, 111, 77, 237, 189, 160, 85, 173, 190, 97, 137, 50, 62, 135, 154, 233, 61, 145, 74, 220, 62, 230, 72, 165, 189, 5, 50, 4, 190, 251, 5, 18, 190, 141, 20, 216, 62, 15, 248, 79, 62, 54, 209, 118, 62, 169, 41, 145, 190, 167, 56, 183, 61, 213, 1, 173, 190, 147, 116, 158, 190, 151, 57, 149, 189, 189, 10, 3, 191, 175, 94, 42, 62, 51, 157, 129, 61, 40, 60, 71, 62, 53, 205, 208, 190, 223, 132, 220, 62, 183, 215, 137, 61, 93, 15, 53, 62, 75, 22, 158, 186, 195, 138, 137, 189, 239, 171, 218, 190, 212, 15, 99, 190, 162, 20, 241, 60, 23, 48, 226, 61, 115, 104, 64, 62, 186, 151, 65, 191, 179, 148, 82, 189, 96, 146, 72, 191, 65, 246, 24, 62, 214, 73, 2, 191, 253, 77, 148, 188, 107, 65, 223, 60, 196, 4, 87, 191, 115, 56, 132, 191, 79, 68, 164, 62, 244, 248, 62, 60, 163, 195, 54, 61, 13, 181, 141, 61, 75, 195, 37, 191, 163, 96, 134, 62, 57, 188, 147, 60, 85, 116, 161, 62, 70, 58, 102, 62, 10, 66, 114, 62, 189, 200, 45, 190, 59, 253, 12, 62, 70, 67, 43, 190, 72, 8, 156, 190, 96, 71, 34, 189, 40, 207, 85, 62, 106, 190, 31, 62, 138, 107, 39, 190, 59, 228, 10, 191, 70, 235, 156, 190, 229, 223, 130, 61};
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
                alignas(float) const unsigned char memory[] = {60, 147, 217, 61, 60, 180, 66, 61, 203, 60, 72, 190, 146, 186, 229, 61, 243, 197, 211, 188, 94, 180, 156, 189, 245, 44, 130, 62, 235, 141, 31, 189, 211, 156, 45, 190, 215, 14, 186, 189, 175, 14, 177, 61, 170, 41, 189, 187, 186, 157, 42, 62, 73, 15, 105, 189, 90, 137, 48, 189, 95, 255, 203, 61, 107, 163, 42, 190, 168, 113, 58, 62, 186, 72, 83, 188, 233, 129, 236, 60, 78, 194, 228, 61, 62, 91, 144, 61, 136, 219, 19, 62, 167, 188, 139, 62, 139, 118, 4, 190, 240, 43, 197, 189, 99, 144, 176, 58, 43, 128, 35, 62, 127, 133, 207, 61, 14, 33, 82, 190, 24, 249, 9, 190, 145, 91, 80, 61};
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
                alignas(float) const unsigned char memory[] = {106, 97, 162, 190, 100, 66, 32, 61, 61, 59, 207, 62, 177, 84, 79, 63, 231, 59, 108, 61, 211, 185, 5, 191, 82, 176, 42, 63, 136, 189, 14, 191, 92, 30, 18, 190, 67, 136, 240, 190, 147, 44, 4, 190, 172, 63, 145, 190, 134, 204, 24, 191, 198, 219, 6, 191, 51, 125, 16, 191, 71, 88, 205, 62, 95, 69, 101, 191, 1, 41, 15, 62, 198, 15, 14, 191, 160, 144, 41, 62, 254, 240, 171, 190, 89, 122, 15, 62, 173, 201, 133, 61, 224, 228, 223, 190, 14, 136, 141, 188, 193, 210, 86, 62, 56, 206, 4, 190, 132, 245, 196, 190, 104, 150, 21, 191, 156, 95, 163, 190, 149, 209, 242, 62, 195, 219, 170, 62, 170, 196, 188, 189, 137, 116, 246, 61, 26, 155, 180, 189, 218, 190, 46, 189, 224, 228, 248, 189, 17, 161, 250, 190, 38, 107, 38, 190, 18, 207, 108, 62, 242, 44, 246, 188, 50, 238, 197, 61, 15, 77, 197, 189, 38, 115, 236, 189, 8, 154, 111, 190, 243, 251, 224, 62, 134, 191, 40, 190, 189, 50, 176, 61, 101, 58, 229, 62, 38, 52, 79, 190, 148, 135, 202, 189, 225, 38, 54, 62, 33, 67, 129, 189, 32, 115, 31, 62, 67, 8, 161, 190, 16, 168, 80, 189, 83, 177, 91, 189, 15, 161, 28, 190, 66, 97, 20, 190, 239, 22, 190, 189, 230, 119, 199, 188, 92, 179, 146, 190, 47, 122, 70, 61, 139, 127, 20, 190};
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
                alignas(float) const unsigned char memory[] = {234, 137, 56, 58, 165, 61, 86, 189};
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
    alignas(float) const unsigned char memory[] = {61, 60, 56, 62, 109, 195, 215, 189, 50, 213, 13, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {177, 88, 177, 63, 74, 195, 54, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0066/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
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
                alignas(float) const unsigned char memory[] = {102, 42, 159, 190, 165, 113, 98, 63, 253, 165, 232, 190, 180, 209, 155, 189, 63, 203, 156, 63, 219, 147, 159, 62, 137, 52, 229, 190, 175, 16, 146, 191, 36, 44, 188, 190, 62, 40, 136, 191, 137, 85, 60, 190, 59, 166, 92, 61, 124, 18, 7, 62, 26, 124, 200, 190, 136, 19, 92, 63, 179, 37, 161, 62, 72, 240, 34, 191, 54, 194, 49, 63, 37, 80, 183, 190, 121, 202, 142, 63, 151, 107, 173, 62, 224, 240, 234, 62, 230, 164, 204, 190, 26, 71, 207, 190, 193, 185, 102, 61, 137, 236, 147, 190, 208, 199, 92, 62, 234, 190, 147, 188, 91, 69, 57, 191, 210, 168, 92, 190, 191, 166, 174, 62, 78, 29, 154, 63, 130, 176, 177, 62, 120, 19, 244, 190, 145, 63, 2, 191, 169, 9, 131, 62, 227, 49, 189, 62, 143, 213, 98, 191, 158, 182, 238, 62, 114, 9, 34, 63, 22, 21, 156, 189, 10, 19, 255, 62, 35, 99, 221, 190, 18, 38, 32, 62, 221, 135, 207, 62, 236, 7, 169, 189, 227, 92, 98, 63, 109, 222, 13, 191, 77, 193, 118, 190, 121, 53, 46, 63, 30, 33, 18, 189, 95, 153, 29, 191, 217, 66, 25, 191, 30, 227, 101, 190, 219, 167, 85, 58, 39, 96, 34, 190, 147, 244, 18, 189, 75, 208, 135, 189, 242, 31, 128, 191, 242, 48, 82, 61, 96, 206, 178, 62, 255, 199, 106, 62, 126, 95, 50, 63, 217, 247, 201, 190, 215, 172, 161, 191, 115, 97, 195, 190, 165, 188, 39, 63, 149, 4, 111, 63, 136, 228, 171, 62, 87, 126, 78, 63, 26, 193, 16, 191, 19, 65, 239, 61, 159, 126, 236, 189, 109, 115, 18, 63, 120, 146, 29, 191, 222, 187, 183, 61, 114, 47, 176, 191, 74, 91, 187, 190, 236, 0, 45, 60, 46, 40, 33, 63, 208, 46, 50, 63, 4, 113, 241, 62, 92, 61, 84, 63, 181, 142, 59, 62, 113, 209, 75, 63, 166, 89, 24, 191, 178, 116, 135, 190, 196, 102, 28, 191, 139, 254, 41, 63, 204, 183, 3, 62, 249, 202, 132, 63, 101, 54, 117, 191, 174, 44, 229, 190, 186, 233, 187, 62, 189, 164, 102, 61, 209, 247, 10, 63};
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
                alignas(float) const unsigned char memory[] = {46, 14, 239, 188, 105, 105, 217, 189, 46, 126, 151, 62, 176, 10, 20, 190, 125, 158, 2, 191, 100, 105, 205, 190, 93, 184, 160, 189, 147, 114, 35, 191, 162, 200, 68, 189, 241, 120, 191, 61, 128, 211, 229, 190, 51, 100, 11, 63, 185, 79, 225, 62, 40, 61, 178, 62, 133, 242, 51, 191, 25, 201, 153, 190, 171, 201, 51, 62, 153, 174, 182, 62, 116, 88, 9, 191, 240, 20, 159, 190, 210, 130, 58, 191, 3, 111, 77, 190, 25, 19, 224, 62, 38, 96, 197, 189, 4, 234, 41, 63, 223, 44, 151, 62, 163, 6, 6, 190, 238, 91, 174, 189, 248, 46, 23, 191, 13, 183, 0, 63, 105, 101, 74, 62, 59, 51, 171, 188};
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
                alignas(float) const unsigned char memory[] = {208, 164, 230, 189, 238, 69, 161, 61, 192, 28, 230, 61, 169, 80, 87, 189, 172, 144, 187, 61, 100, 117, 225, 189, 55, 252, 194, 189, 42, 119, 42, 188, 8, 106, 160, 189, 19, 70, 71, 190, 218, 5, 155, 186, 83, 163, 25, 190, 155, 199, 149, 61, 53, 111, 9, 190, 241, 108, 147, 189, 100, 110, 225, 188, 175, 120, 170, 61, 174, 242, 48, 190, 247, 202, 42, 189, 88, 94, 136, 189, 158, 44, 241, 189, 39, 214, 29, 189, 193, 14, 190, 61, 66, 79, 96, 61, 179, 131, 164, 61, 250, 210, 235, 189, 92, 226, 181, 189, 107, 237, 2, 61, 112, 224, 11, 62, 138, 196, 89, 190, 77, 50, 200, 189, 175, 86, 226, 189, 233, 238, 206, 190, 2, 16, 143, 60, 231, 127, 234, 61, 51, 120, 228, 189, 123, 83, 152, 190, 250, 124, 15, 190, 73, 201, 5, 190, 65, 151, 221, 60, 217, 155, 39, 190, 21, 107, 181, 61, 16, 231, 226, 59, 177, 115, 206, 61, 204, 196, 25, 190, 228, 157, 129, 62, 92, 25, 225, 190, 11, 238, 52, 62, 148, 22, 175, 61, 102, 159, 132, 189, 168, 181, 3, 190, 21, 200, 34, 190, 109, 129, 47, 190, 26, 107, 43, 190, 232, 22, 166, 62, 239, 250, 223, 60, 130, 137, 241, 61, 58, 22, 214, 187, 224, 177, 69, 190, 204, 228, 150, 62, 85, 153, 69, 190, 122, 36, 7, 62, 138, 145, 253, 188, 220, 40, 16, 62, 249, 45, 142, 190, 56, 1, 168, 189, 236, 89, 47, 190, 38, 219, 214, 188, 125, 188, 201, 61, 18, 245, 105, 62, 46, 51, 13, 190, 173, 90, 185, 189, 121, 16, 76, 189, 11, 15, 160, 61, 0, 213, 194, 189, 101, 209, 30, 188, 29, 100, 142, 61, 3, 133, 78, 62, 203, 137, 204, 189, 110, 34, 136, 62, 185, 163, 35, 189, 149, 190, 162, 60, 105, 62, 244, 189, 60, 189, 207, 190, 87, 37, 1, 62, 138, 126, 95, 190, 129, 68, 124, 188, 154, 133, 74, 190, 225, 72, 21, 62, 150, 62, 143, 188, 79, 98, 20, 190, 230, 189, 62, 189, 31, 133, 3, 191, 104, 55, 166, 60, 178, 95, 240, 189, 146, 237, 136, 189, 254, 210, 5, 61, 2, 163, 62, 191, 93, 114, 201, 190, 192, 14, 70, 62, 224, 181, 118, 190, 155, 3, 235, 190, 121, 224, 214, 60, 198, 144, 216, 57, 24, 255, 217, 190, 160, 187, 51, 61, 210, 122, 145, 191, 114, 128, 152, 61, 73, 21, 18, 61, 48, 206, 160, 62, 121, 24, 139, 190, 140, 210, 217, 189, 75, 9, 114, 189, 77, 199, 159, 190, 182, 190, 43, 62, 246, 128, 29, 191, 108, 217, 79, 190, 96, 132, 44, 190, 40, 167, 5, 61, 169, 150, 226, 61, 63, 51, 8, 189, 52, 210, 140, 190, 153, 112, 51, 191, 32, 252, 36, 190, 212, 107, 84, 62, 3, 40, 10, 189, 219, 180, 141, 62, 153, 195, 151, 190, 87, 90, 149, 187, 190, 181, 155, 61, 68, 100, 203, 189, 111, 75, 75, 189, 178, 156, 41, 61, 169, 175, 116, 190, 173, 85, 111, 190, 224, 199, 32, 190, 235, 79, 53, 62, 220, 25, 25, 190, 168, 247, 41, 191, 80, 210, 81, 62, 165, 102, 175, 62, 85, 187, 15, 190, 37, 116, 47, 190, 159, 165, 49, 190, 38, 138, 203, 189, 5, 123, 82, 190, 44, 225, 229, 189, 190, 71, 81, 62, 197, 113, 184, 190, 174, 219, 152, 189, 147, 43, 115, 189, 102, 187, 71, 62, 186, 1, 245, 61, 211, 0, 69, 62, 97, 208, 26, 61, 8, 5, 46, 191, 102, 97, 228, 190, 30, 217, 247, 190, 115, 167, 88, 62, 255, 44, 201, 61, 230, 12, 161, 62, 237, 210, 120, 191, 217, 136, 206, 189, 51, 210, 166, 190, 140, 141, 16, 191, 43, 246, 6, 191, 198, 165, 140, 190, 138, 208, 115, 62, 108, 196, 150, 190, 77, 21, 182, 60, 159, 2, 170, 190, 128, 230, 12, 191, 91, 0, 212, 187, 46, 200, 67, 62, 222, 0, 133, 190, 244, 183, 249, 60, 150, 122, 137, 190, 94, 224, 115, 190, 58, 14, 30, 190, 13, 82, 242, 190, 163, 187, 69, 189, 255, 165, 51, 189, 84, 121, 118, 189, 113, 14, 11, 63, 21, 2, 67, 189, 40, 60, 68, 62, 8, 62, 221, 190, 245, 77, 175, 190, 44, 222, 76, 62, 188, 231, 145, 191, 211, 246, 194, 62, 6, 147, 115, 190, 159, 82, 4, 62, 70, 131, 139, 190, 239, 204, 199, 189, 164, 118, 23, 62, 9, 163, 222, 61, 71, 77, 39, 190, 98, 141, 143, 61, 31, 17, 122, 62, 47, 97, 143, 61, 163, 100, 42, 190, 122, 86, 241, 190, 13, 152, 65, 62, 142, 236, 105, 61, 69, 243, 156, 189, 34, 59, 149, 189, 215, 9, 16, 60, 102, 242, 54, 190, 253, 122, 104, 189, 141, 244, 19, 189, 233, 139, 134, 61, 214, 112, 144, 190, 69, 254, 96, 190, 128, 122, 3, 190, 134, 150, 44, 63, 74, 98, 152, 189, 200, 133, 123, 57, 105, 215, 95, 188, 122, 22, 226, 190, 231, 123, 222, 61, 125, 4, 133, 190, 42, 12, 197, 62, 234, 198, 74, 60, 145, 94, 130, 190, 45, 213, 173, 190, 166, 94, 190, 61, 72, 13, 177, 60, 64, 172, 194, 61, 63, 198, 214, 61, 165, 206, 109, 189, 150, 209, 75, 190, 235, 123, 205, 189, 222, 102, 160, 61, 79, 9, 47, 191, 219, 45, 7, 190, 46, 251, 6, 61, 171, 48, 76, 62, 87, 183, 149, 60, 203, 236, 126, 60, 40, 138, 37, 189, 201, 158, 178, 188, 159, 69, 13, 62, 38, 121, 93, 61, 188, 60, 62, 62, 45, 255, 69, 190, 93, 108, 201, 61, 139, 72, 249, 62, 126, 116, 142, 62, 147, 128, 20, 190, 3, 9, 4, 190, 157, 3, 63, 190, 34, 245, 13, 190, 253, 150, 92, 190, 8, 232, 108, 62, 68, 188, 177, 61, 158, 22, 2, 190, 71, 243, 217, 61, 10, 130, 42, 190, 139, 43, 36, 62, 73, 198, 33, 61, 62, 38, 237, 189, 241, 75, 6, 190, 9, 231, 239, 189, 112, 70, 100, 190, 152, 74, 53, 190, 210, 223, 95, 60, 100, 106, 17, 189, 154, 1, 79, 190, 158, 206, 253, 187, 180, 252, 133, 61, 16, 244, 152, 61, 167, 252, 16, 62, 92, 20, 238, 189, 229, 90, 49, 190, 104, 30, 27, 190, 16, 107, 182, 188, 50, 254, 80, 189, 27, 216, 213, 188, 193, 73, 111, 190, 101, 90, 1, 189, 124, 242, 17, 62, 247, 63, 48, 188, 182, 92, 48, 189, 53, 99, 1, 62, 176, 44, 9, 190, 231, 178, 64, 190, 121, 223, 197, 61, 2, 85, 190, 190, 218, 247, 236, 191, 104, 166, 137, 61, 243, 175, 152, 62, 34, 194, 153, 190, 154, 139, 177, 59, 230, 173, 241, 190, 253, 184, 175, 189, 244, 109, 7, 190, 84, 87, 78, 190, 206, 232, 181, 189, 115, 118, 7, 62, 40, 192, 141, 61, 7, 37, 181, 190, 211, 255, 193, 190, 198, 236, 31, 62, 54, 226, 7, 62, 95, 221, 59, 62, 28, 107, 41, 190, 97, 134, 107, 190, 254, 163, 21, 190, 48, 120, 27, 189, 145, 223, 197, 189, 179, 22, 202, 190, 240, 84, 144, 62, 201, 45, 218, 61, 22, 197, 42, 191, 165, 200, 231, 62, 20, 26, 21, 191, 4, 8, 220, 189, 195, 224, 89, 190, 116, 63, 246, 190, 181, 168, 140, 189, 102, 12, 227, 60, 210, 182, 38, 190, 127, 89, 19, 190, 135, 14, 32, 190, 85, 210, 252, 189, 42, 123, 15, 190, 190, 246, 81, 61, 222, 26, 145, 189, 151, 247, 44, 189, 0, 8, 25, 190, 8, 72, 147, 189, 229, 39, 3, 62, 241, 97, 234, 189, 56, 163, 15, 190, 229, 184, 43, 189, 63, 201, 18, 60, 233, 102, 27, 189, 126, 126, 29, 62, 22, 5, 11, 62, 196, 6, 181, 189, 113, 150, 247, 60, 236, 164, 197, 189, 12, 32, 2, 62, 245, 214, 117, 189, 152, 180, 113, 189, 62, 232, 134, 189, 103, 144, 21, 190, 71, 194, 177, 189, 194, 132, 202, 188, 71, 178, 141, 189, 53, 30, 240, 185, 104, 117, 216, 188, 125, 176, 59, 62, 240, 218, 144, 62, 66, 137, 250, 190, 0, 143, 52, 62, 132, 255, 15, 189, 169, 56, 57, 189, 174, 173, 183, 62, 185, 246, 134, 62, 6, 108, 27, 62, 22, 227, 16, 61, 169, 84, 185, 61, 92, 188, 56, 62, 58, 115, 78, 61, 44, 117, 146, 62, 142, 192, 220, 188, 18, 16, 76, 191, 126, 209, 204, 61, 180, 180, 50, 61, 145, 55, 250, 61, 200, 127, 236, 189, 88, 234, 145, 189, 190, 87, 43, 190, 178, 34, 32, 190, 196, 27, 176, 190, 167, 246, 211, 62, 221, 176, 64, 61, 60, 132, 89, 188, 246, 226, 8, 63, 216, 1, 149, 190, 201, 100, 122, 62, 9, 167, 24, 62, 241, 35, 98, 190, 125, 14, 130, 60, 38, 245, 233, 60, 207, 210, 131, 62, 172, 239, 95, 61, 40, 138, 19, 62, 181, 66, 100, 62, 75, 193, 49, 61, 35, 56, 204, 189, 154, 44, 96, 62, 137, 161, 39, 190, 133, 38, 196, 185, 97, 203, 90, 187, 206, 104, 198, 189, 47, 23, 39, 62, 78, 20, 30, 190, 38, 224, 177, 189, 1, 217, 85, 189, 98, 88, 136, 61, 48, 8, 164, 189, 164, 218, 60, 188, 155, 101, 145, 60, 49, 18, 74, 61, 102, 35, 19, 190, 172, 38, 150, 62, 72, 84, 70, 189, 3, 14, 72, 189, 241, 243, 156, 190, 189, 176, 182, 190, 17, 249, 244, 61, 156, 238, 18, 62, 7, 200, 129, 61, 134, 188, 83, 62, 70, 111, 255, 61, 181, 14, 145, 190, 121, 44, 107, 191, 94, 87, 234, 61, 91, 105, 109, 61, 184, 169, 96, 190, 8, 36, 102, 190, 70, 194, 5, 189, 199, 162, 231, 188, 66, 74, 4, 62, 71, 151, 132, 190, 225, 240, 217, 189, 125, 115, 45, 62, 113, 198, 58, 62, 75, 34, 218, 189, 205, 80, 125, 190, 112, 1, 148, 190, 115, 75, 183, 61, 149, 186, 171, 190, 248, 6, 92, 61, 198, 206, 118, 190, 166, 91, 178, 62, 157, 0, 1, 189, 8, 177, 187, 59, 92, 166, 193, 190, 110, 189, 53, 62, 181, 114, 226, 62, 86, 66, 4, 191, 15, 229, 72, 190, 51, 247, 237, 61, 243, 27, 177, 61, 71, 211, 183, 61, 142, 79, 56, 61, 106, 63, 35, 62, 71, 194, 181, 62, 246, 214, 219, 187, 57, 160, 123, 190, 148, 57, 84, 61, 244, 249, 112, 189, 125, 179, 0, 62, 189, 81, 30, 190, 95, 250, 194, 190, 102, 180, 23, 62, 91, 78, 244, 59, 46, 223, 197, 60, 176, 8, 148, 189, 202, 98, 147, 61, 112, 11, 64, 189, 221, 70, 6, 62, 31, 252, 233, 60, 251, 249, 116, 61, 138, 44, 197, 189, 225, 24, 75, 189, 50, 169, 252, 189, 165, 59, 37, 62, 231, 210, 67, 62, 58, 199, 29, 62, 123, 181, 2, 62, 229, 248, 246, 190, 45, 45, 157, 189, 42, 121, 29, 62, 196, 161, 104, 61, 44, 122, 13, 62, 218, 28, 168, 190, 92, 113, 235, 61, 210, 185, 114, 61, 105, 209, 9, 190, 152, 54, 19, 62, 66, 154, 157, 61, 25, 99, 178, 61, 36, 171, 160, 189, 248, 252, 142, 189, 82, 93, 205, 61, 134, 217, 116, 187, 7, 185, 173, 189, 196, 123, 7, 61, 216, 8, 147, 189, 7, 161, 175, 188, 239, 253, 44, 61, 84, 194, 98, 62, 108, 106, 120, 188, 144, 207, 214, 60, 40, 112, 183, 190, 95, 132, 244, 189, 176, 163, 5, 189, 220, 95, 214, 61, 23, 42, 108, 190, 245, 97, 33, 62, 218, 193, 53, 189, 63, 62, 0, 62, 96, 33, 49, 189, 208, 47, 223, 190, 48, 51, 100, 62, 114, 182, 208, 188, 243, 235, 4, 62, 228, 123, 183, 190, 72, 147, 241, 191, 18, 208, 116, 61, 94, 88, 115, 62, 227, 170, 172, 190, 107, 49, 167, 62, 252, 48, 56, 190, 207, 184, 97, 188, 21, 250, 220, 61, 116, 59, 26, 191, 154, 145, 171, 190, 202, 210, 41, 62, 19, 136, 158, 61, 186, 131, 6, 62, 133, 246, 227, 190, 234, 4, 26, 190, 47, 167, 111, 62, 214, 159, 181, 61, 105, 12, 191, 61, 136, 140, 207, 190, 171, 168, 41, 190, 216, 66, 50, 190, 211, 105, 35, 191, 116, 197, 123, 62, 254, 146, 51, 189, 32, 215, 61, 59, 29, 125, 31, 191, 193, 249, 98, 190, 143, 90, 56, 189, 235, 179, 153, 62, 69, 58, 64, 190, 50, 238, 20, 191, 165, 211, 192, 189, 19, 45, 131, 61, 15, 126, 139, 189, 169, 143, 98, 61, 73, 155, 25, 62, 150, 81, 0, 189, 109, 23, 175, 189, 77, 74, 97, 189, 4, 184, 235, 61, 69, 166, 21, 62, 125, 16, 153, 61, 180, 208, 58, 189, 245, 183, 76, 189, 49, 209, 219, 60, 163, 222, 24, 190, 216, 213, 215, 61, 59, 30, 38, 189, 174, 15, 191, 60, 203, 78, 210, 189, 188, 88, 23, 62, 180, 94, 144, 186, 69, 100, 2, 190, 88, 207, 145, 189, 199, 246, 46, 190, 203, 130, 13, 190, 134, 213, 13, 190, 156, 156, 14, 190, 245, 233, 51, 190, 53, 221, 131, 189, 3, 229, 160, 61, 139, 190, 8, 190, 204, 235, 32, 189, 231, 16, 66, 63, 220, 166, 140, 190, 74, 60, 54, 190, 178, 26, 218, 62, 92, 8, 131, 190, 237, 102, 8, 190, 178, 96, 131, 189, 115, 144, 224, 188, 52, 230, 152, 190, 42, 233, 125, 191, 168, 193, 180, 190, 25, 29, 69, 190, 24, 149, 160, 190, 88, 113, 10, 191, 1, 23, 164, 61, 186, 202, 37, 191, 232, 241, 205, 61, 231, 30, 29, 61, 21, 162, 135, 61, 238, 225, 237, 187, 201, 1, 29, 189, 141, 79, 228, 191, 177, 146, 221, 190, 66, 94, 202, 190, 115, 28, 26, 190, 117, 198, 178, 191, 11, 38, 65, 190, 214, 6, 238, 190, 85, 44, 3, 190, 193, 27, 133, 62, 104, 246, 189, 190, 239, 166, 238, 190, 68, 70, 165, 62, 231, 17, 129, 61, 22, 88, 103, 190, 162, 75, 134, 187, 52, 103, 93, 62, 186, 207, 187, 190, 250, 92, 76, 189, 45, 77, 11, 62, 127, 93, 226, 62, 32, 171, 193, 189, 151, 52, 4, 191, 25, 142, 237, 62, 31, 85, 184, 62, 194, 56, 132, 189, 140, 205, 86, 62, 2, 153, 141, 190, 182, 139, 180, 190, 108, 228, 171, 189, 107, 129, 130, 189, 135, 56, 113, 62, 58, 167, 5, 191, 89, 248, 63, 190, 169, 16, 240, 189, 25, 115, 149, 62, 226, 1, 191, 188, 90, 232, 187, 60, 236, 151, 150, 61, 38, 189, 86, 191, 186, 250, 245, 189, 26, 206, 160, 190, 223, 132, 138, 62, 63, 255, 85, 189, 220, 128, 110, 190, 52, 41, 89, 191, 65, 149, 0, 62, 143, 87, 232, 61, 135, 62, 15, 191, 237, 127, 1, 62, 31, 247, 32, 191, 120, 124, 103, 190, 80, 108, 97, 190, 13, 18, 122, 61, 120, 5, 207, 62, 209, 227, 181, 189, 190, 132, 122, 190, 131, 196, 181, 62, 23, 55, 27, 191, 203, 11, 9, 62, 36, 76, 218, 186, 240, 207, 18, 61, 78, 60, 130, 60, 136, 113, 179, 189, 163, 215, 156, 188, 126, 54, 210, 189, 94, 144, 166, 62, 190, 160, 52, 190, 44, 28, 52, 62, 55, 223, 2, 62, 195, 59, 130, 190, 1, 255, 175, 62, 25, 213, 36, 191, 27, 49, 144, 61, 232, 202, 142, 190, 51, 19, 132, 61, 61, 140, 145, 190, 182, 121, 121, 61, 106, 187, 205, 60, 16, 107, 18, 190, 209, 99, 55, 62, 58, 27, 157, 61, 4, 225, 60, 188, 124, 214, 49, 189, 240, 121, 110, 189, 130, 54, 65, 188, 172, 38, 197, 189, 50, 74, 165, 62, 155, 1, 55, 188, 53, 14, 178, 189, 156, 196, 212, 61, 0, 102, 41, 62, 150, 203, 171, 189, 105, 133, 0, 62, 160, 94, 48, 60, 127, 204, 56, 190, 7, 44, 169, 189, 21, 203, 129, 61, 133, 164, 134, 61, 225, 63, 15, 190, 152, 195, 253, 187, 187, 202, 142, 189, 136, 205, 26, 189, 220, 243, 206, 60, 58, 68, 69, 190, 12, 145, 218, 61, 253, 174, 99, 62, 230, 36, 209, 189, 121, 225, 255, 61, 244, 200, 159, 189, 82, 157, 209, 190, 157, 202, 132, 191, 52, 212, 133, 189, 56, 117, 226, 186, 194, 79, 162, 190, 109, 254, 208, 189, 176, 251, 103, 189, 34, 43, 41, 189, 153, 207, 125, 190, 35, 229, 132, 190, 30, 250, 88, 62, 25, 162, 172, 62, 35, 175, 30, 190, 120, 117, 145, 61, 31, 8, 192, 62, 77, 21, 1, 190, 152, 175, 139, 61, 219, 169, 167, 190, 146, 39, 55, 190, 167, 249, 4, 188, 145, 17, 16, 63, 190, 78, 169, 61, 218, 25, 73, 62, 95, 81, 232, 190, 52, 139, 54, 190, 8, 33, 174, 62, 45, 201, 172, 191, 188, 19, 47, 60, 10, 253, 48, 61, 229, 151, 87, 61, 239, 5, 22, 63, 132, 164, 22, 62, 1, 23, 170, 190, 35, 101, 37, 62, 158, 192, 186, 187, 83, 168, 58, 189, 143, 13, 231, 61, 189, 109, 43, 62, 38, 89, 156, 62, 113, 212, 199, 190, 86, 15, 74, 189, 219, 212, 215, 61, 136, 88, 27, 61, 245, 90, 60, 60, 143, 83, 255, 189, 112, 53, 27, 191, 201, 190, 83, 61, 100, 24, 250, 190, 135, 69, 200, 61, 42, 104, 28, 188, 198, 154, 151, 190, 38, 203, 220, 190, 8, 237, 156, 189, 198, 186, 218, 62, 251, 14, 185, 189, 219, 116, 90, 61, 8, 26, 71, 62, 217, 21, 134, 190, 4, 53, 61, 62, 166, 253, 144, 189, 56, 155, 205, 62, 242, 164, 24, 189, 240, 152, 51, 63, 139, 211, 133, 62, 23, 192, 204, 190, 32, 29, 176, 62, 211, 118, 233, 61, 58, 246, 212, 190, 32, 209, 101, 61, 151, 46, 151, 62, 165, 98, 218, 61, 77, 251, 179, 191, 182, 233, 160, 190, 108, 176, 147, 62, 49, 173, 131, 62, 234, 25, 102, 190, 37, 153, 194, 62, 164, 174, 94, 191, 106, 110, 179, 62, 254, 226, 235, 190, 174, 187, 1, 190, 30, 197, 228, 62, 145, 167, 147, 190, 88, 185, 169, 191, 35, 181, 222, 189, 222, 79, 233, 189, 71, 0, 170, 190, 148, 76, 131, 191, 137, 139, 140, 61, 90, 32, 26, 191, 225, 73, 14, 189, 71, 124, 135, 62, 196, 98, 110, 62, 183, 236, 7, 190, 249, 232, 193, 61, 14, 185, 80, 188, 82, 13, 17, 62, 248, 237, 157, 189, 8, 142, 145, 61, 182, 241, 30, 190, 188, 251, 216, 61, 217, 36, 41, 190, 247, 52, 149, 189, 181, 108, 240, 189, 65, 88, 1, 62, 171, 25, 17, 190, 115, 251, 243, 187, 90, 168, 140, 60, 4, 67, 161, 61, 64, 250, 82, 61, 243, 219, 29, 190, 165, 152, 239, 189, 239, 55, 22, 190, 121, 107, 7, 62, 109, 97, 8, 190, 148, 165, 162, 189, 22, 215, 212, 189, 169, 131, 3, 190, 177, 136, 229, 189, 223, 255, 85, 61, 116, 168, 3, 190, 152, 46, 132, 59, 7, 149, 173, 189, 213, 151, 46, 189, 72, 141, 212, 189, 93, 8, 238, 61, 97, 249, 51, 190, 249, 9, 18, 61, 48, 63, 29, 189, 116, 45, 41, 190, 197, 122, 177, 189, 128, 182, 21, 62, 136, 89, 96, 61, 237, 92, 182, 189, 76, 47, 129, 60, 198, 120, 162, 61, 26, 1, 41, 62, 122, 228, 199, 189, 92, 234, 33, 190, 231, 33, 140, 189, 61, 55, 141, 189, 71, 6, 45, 61, 232, 132, 6, 190, 87, 248, 144, 61, 146, 247, 136, 61, 12, 200, 162, 61, 255, 108, 185, 189, 228, 199, 111, 188, 113, 126, 32, 190, 43, 108, 123, 189, 24, 10, 92, 188, 44, 196, 93, 189, 237, 138, 168, 189, 72, 192, 84, 189, 152, 229, 76, 189, 79, 222, 54, 190, 136, 219, 17, 61, 17, 184, 192, 189, 142, 10, 132, 190, 79, 253, 42, 62, 189, 82, 234, 60, 212, 34, 71, 62, 25, 127, 153, 190, 159, 86, 170, 190, 55, 35, 154, 61, 71, 146, 2, 62, 115, 105, 156, 190, 39, 34, 119, 190, 103, 63, 186, 62, 205, 212, 211, 189, 13, 110, 211, 61, 243, 87, 139, 190, 247, 181, 89, 190, 45, 24, 7, 190, 253, 91, 56, 62, 178, 247, 113, 188, 181, 67, 6, 190, 121, 211, 39, 62, 166, 185, 125, 189, 74, 194, 240, 61, 175, 165, 31, 62, 23, 117, 90, 61, 12, 253, 30, 62, 228, 108, 101, 62, 116, 231, 198, 189, 250, 1, 67, 189, 231, 86, 120, 62, 68, 184, 74, 62, 207, 233, 218, 188, 243, 191, 49, 189, 153, 222, 217, 190, 84, 63, 1, 192, 92, 246, 37, 62, 249, 40, 62, 62, 105, 148, 107, 190, 84, 97, 135, 61, 218, 56, 247, 190, 204, 42, 112, 189, 79, 101, 204, 189, 40, 235, 99, 61, 194, 140, 70, 190, 175, 108, 141, 189, 79, 174, 187, 59, 204, 38, 95, 190, 222, 168, 225, 190, 54, 146, 99, 61, 70, 119, 20, 62, 132, 30, 226, 188, 150, 182, 206, 189, 110, 51, 166, 190, 9, 206, 157, 190, 107, 159, 88, 190, 8, 80, 182, 188, 188, 165, 179, 190, 246, 16, 155, 62, 126, 174, 33, 62, 158, 1, 210, 190, 144, 80, 80, 62, 69, 1, 148, 191, 129, 85, 178, 61, 163, 241, 252, 189, 223, 122, 147, 190, 173, 135, 187, 190, 12, 61, 4, 61, 147, 195, 65, 190, 210, 9, 218, 190, 13, 133, 55, 189, 24, 229, 133, 62, 137, 166, 190, 189, 105, 35, 213, 189, 121, 160, 169, 188, 198, 243, 97, 61, 249, 87, 37, 62, 136, 186, 131, 61, 162, 118, 139, 60, 147, 102, 31, 189, 146, 69, 54, 189, 9, 17, 104, 62, 100, 76, 137, 190, 244, 245, 244, 189, 0, 180, 125, 61, 212, 119, 60, 189, 231, 23, 168, 61, 85, 225, 82, 190, 110, 218, 49, 62, 244, 39, 41, 190, 231, 189, 107, 59, 161, 89, 89, 60, 23, 82, 208, 189, 74, 57, 240, 61, 89, 249, 155, 190, 134, 224, 59, 190, 97, 145, 153, 61, 62, 39, 24, 62, 139, 210, 11, 191, 226, 159, 185, 191, 233, 227, 56, 62, 92, 226, 41, 62, 240, 232, 5, 191, 55, 182, 130, 190, 106, 6, 111, 190, 22, 114, 106, 190, 226, 14, 167, 61, 154, 97, 243, 190, 0, 77, 248, 60, 139, 182, 126, 62, 99, 220, 39, 62, 109, 249, 221, 188, 147, 25, 240, 190, 143, 104, 13, 190, 140, 76, 3, 62, 40, 3, 76, 189, 224, 162, 41, 60, 169, 167, 67, 188, 96, 170, 1, 190, 236, 113, 31, 190, 248, 202, 97, 61, 200, 18, 205, 62, 140, 156, 82, 190, 138, 60, 37, 190, 228, 176, 228, 190, 120, 151, 65, 190, 237, 75, 181, 62, 74, 65, 39, 62, 65, 148, 47, 188, 197, 116, 169, 190, 208, 23, 11, 189, 154, 163, 147, 61, 91, 192, 186, 61, 191, 103, 46, 190, 57, 212, 144, 188, 172, 209, 234, 189, 235, 57, 139, 189, 182, 180, 130, 60, 61, 172, 174, 189, 22, 45, 235, 187, 152, 194, 156, 189, 222, 170, 124, 189, 72, 30, 108, 188, 177, 173, 188, 60, 205, 150, 225, 189, 232, 138, 48, 190, 92, 231, 73, 190, 209, 7, 154, 188, 66, 84, 247, 189, 220, 238, 154, 188, 15, 138, 120, 60, 251, 34, 22, 189, 218, 111, 142, 189, 35, 196, 22, 62, 100, 121, 19, 61, 120, 60, 52, 190, 101, 46, 32, 61, 111, 173, 21, 61, 149, 200, 169, 62, 242, 190, 229, 61, 245, 73, 61, 60, 189, 61, 10, 61};
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
                alignas(float) const unsigned char memory[] = {254, 112, 0, 190, 231, 121, 146, 62, 74, 145, 43, 62, 137, 255, 106, 62, 41, 46, 165, 62, 100, 131, 13, 188, 132, 145, 242, 188, 238, 203, 206, 61, 141, 132, 137, 189, 46, 92, 84, 61, 69, 241, 148, 189, 175, 0, 6, 190, 87, 228, 196, 62, 118, 50, 98, 190, 75, 44, 139, 62, 73, 215, 168, 62, 140, 222, 110, 190, 96, 5, 31, 190, 116, 149, 63, 61, 154, 81, 140, 62, 242, 36, 149, 62, 190, 246, 17, 62, 48, 225, 4, 62, 87, 113, 161, 62, 24, 95, 220, 61, 18, 150, 32, 189, 12, 110, 32, 61, 199, 48, 69, 190, 200, 119, 140, 62, 25, 211, 142, 189, 196, 95, 76, 187, 152, 83, 127, 190};
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
                alignas(float) const unsigned char memory[] = {152, 235, 112, 61, 20, 187, 157, 190, 212, 231, 133, 189, 73, 142, 184, 62, 45, 8, 2, 63, 190, 42, 26, 63, 144, 169, 219, 62, 237, 34, 237, 188, 226, 228, 81, 61, 159, 99, 82, 191, 35, 90, 172, 187, 99, 153, 171, 190, 242, 123, 147, 60, 181, 190, 205, 190, 69, 36, 14, 62, 77, 33, 126, 189, 242, 241, 92, 191, 124, 179, 192, 189, 117, 5, 148, 63, 187, 16, 28, 63, 54, 80, 36, 191, 36, 86, 80, 188, 79, 27, 56, 191, 2, 163, 167, 62, 31, 249, 127, 63, 6, 199, 50, 62, 91, 176, 9, 62, 201, 242, 92, 190, 42, 208, 157, 191, 41, 182, 21, 190, 41, 154, 108, 191, 54, 190, 6, 190, 212, 197, 200, 61, 97, 84, 145, 189, 251, 145, 33, 189, 88, 47, 42, 191, 140, 153, 147, 190, 180, 90, 182, 189, 205, 86, 239, 61, 225, 190, 234, 190, 135, 239, 244, 60, 62, 8, 155, 62, 55, 135, 23, 62, 214, 114, 238, 61, 20, 252, 146, 190, 33, 229, 69, 62, 136, 105, 118, 189, 176, 85, 55, 190, 83, 156, 132, 61, 87, 159, 135, 61, 6, 253, 234, 61, 207, 134, 214, 61, 0, 49, 212, 189, 215, 204, 80, 190, 46, 37, 223, 189, 204, 213, 81, 190, 60, 83, 199, 62, 142, 232, 56, 55, 68, 0, 52, 190, 158, 2, 25, 62, 10, 28, 12, 62, 249, 88, 158, 186, 193, 36, 226, 189, 181, 210, 147, 61};
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
                alignas(float) const unsigned char memory[] = {112, 174, 138, 62, 50, 250, 25, 190};
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
    alignas(float) const unsigned char memory[] = {223, 102, 16, 64, 210, 61, 182, 63, 83, 203, 129, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {222, 112, 145, 192, 4, 27, 121, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0028/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
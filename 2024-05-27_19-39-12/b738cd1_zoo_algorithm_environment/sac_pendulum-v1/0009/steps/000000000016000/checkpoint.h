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
                alignas(float) const unsigned char memory[] = {171, 252, 60, 63, 235, 252, 166, 62, 215, 235, 108, 62, 75, 170, 135, 190, 218, 140, 169, 63, 62, 152, 178, 62, 195, 88, 9, 190, 165, 147, 66, 63, 166, 66, 196, 190, 246, 245, 29, 189, 226, 123, 78, 191, 0, 191, 228, 190, 221, 132, 112, 191, 39, 189, 41, 63, 98, 133, 239, 60, 165, 29, 192, 189, 67, 209, 8, 62, 125, 55, 70, 191, 32, 224, 78, 190, 109, 248, 73, 63, 85, 128, 157, 189, 69, 127, 23, 191, 132, 159, 200, 190, 238, 123, 255, 62, 231, 115, 38, 61, 250, 177, 81, 190, 72, 147, 231, 190, 83, 163, 247, 62, 68, 224, 146, 63, 28, 238, 67, 62, 195, 25, 16, 63, 3, 162, 92, 191, 5, 77, 153, 61, 21, 218, 163, 186, 212, 233, 108, 63, 164, 89, 65, 62, 93, 131, 31, 191, 143, 49, 235, 62, 30, 101, 78, 62, 176, 72, 13, 63, 74, 50, 115, 62, 176, 36, 178, 62, 194, 212, 46, 63, 145, 77, 14, 191, 251, 92, 13, 60, 195, 188, 140, 62, 45, 12, 186, 190, 104, 74, 219, 190, 197, 92, 127, 62, 29, 236, 220, 62, 86, 2, 196, 62, 157, 27, 146, 62, 250, 148, 24, 189, 136, 7, 23, 63, 19, 93, 140, 190, 93, 156, 228, 190, 70, 90, 201, 62, 212, 98, 46, 191, 178, 216, 153, 63, 192, 209, 157, 62, 169, 249, 248, 190, 5, 202, 166, 62, 23, 167, 80, 63, 12, 14, 45, 191, 219, 118, 48, 191, 77, 25, 249, 189, 157, 16, 53, 63, 123, 7, 140, 191, 183, 82, 198, 190, 33, 255, 188, 189, 66, 73, 49, 63, 42, 243, 124, 190, 48, 190, 255, 187, 42, 17, 2, 190, 97, 130, 31, 191, 211, 127, 41, 63, 139, 95, 70, 63, 187, 146, 85, 62, 93, 68, 91, 63, 88, 34, 111, 191, 34, 38, 153, 190, 106, 83, 51, 63, 101, 41, 5, 63, 101, 54, 65, 62, 166, 99, 12, 63, 53, 46, 112, 190, 242, 207, 9, 61, 132, 178, 1, 60, 224, 178, 159, 191, 75, 60, 116, 190, 88, 125, 61, 63, 166, 125, 160, 191, 238, 228, 162, 190, 107, 87, 134, 191, 196, 171, 10, 191, 118, 117, 23, 190};
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
                alignas(float) const unsigned char memory[] = {11, 129, 50, 191, 211, 143, 86, 190, 46, 16, 140, 62, 249, 252, 112, 190, 100, 201, 64, 63, 249, 80, 132, 62, 5, 0, 94, 62, 104, 106, 20, 191, 217, 36, 3, 190, 181, 183, 127, 190, 1, 242, 89, 189, 105, 111, 135, 190, 109, 73, 51, 63, 217, 4, 250, 189, 143, 20, 205, 62, 125, 55, 117, 191, 119, 133, 15, 62, 187, 99, 17, 189, 248, 76, 66, 62, 30, 97, 3, 62, 114, 254, 253, 61, 173, 185, 174, 189, 231, 115, 215, 62, 228, 150, 147, 190, 80, 228, 255, 190, 74, 98, 169, 190, 30, 146, 222, 190, 36, 2, 65, 190, 124, 111, 187, 62, 217, 171, 115, 190, 251, 35, 159, 62, 242, 123, 156, 190};
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
                alignas(float) const unsigned char memory[] = {245, 252, 77, 191, 77, 186, 79, 62, 102, 10, 222, 188, 188, 164, 162, 189, 175, 209, 141, 62, 180, 103, 18, 62, 221, 205, 12, 62, 209, 171, 185, 189, 5, 236, 252, 189, 135, 217, 182, 190, 199, 64, 24, 60, 158, 50, 224, 61, 239, 157, 78, 62, 187, 31, 3, 191, 60, 116, 57, 62, 249, 173, 141, 189, 6, 243, 181, 190, 116, 114, 189, 190, 2, 54, 32, 62, 240, 88, 172, 61, 28, 161, 14, 62, 171, 219, 11, 62, 156, 102, 16, 62, 173, 157, 68, 190, 233, 144, 202, 61, 56, 87, 29, 191, 249, 200, 115, 191, 173, 2, 91, 190, 139, 207, 189, 61, 36, 67, 197, 189, 123, 234, 172, 60, 166, 92, 165, 189, 146, 124, 248, 61, 233, 96, 85, 190, 2, 108, 2, 190, 235, 245, 46, 190, 247, 183, 223, 189, 188, 144, 131, 189, 23, 170, 4, 189, 101, 2, 30, 190, 21, 177, 210, 189, 111, 157, 181, 61, 94, 77, 205, 61, 9, 56, 114, 187, 226, 82, 187, 60, 208, 246, 102, 188, 133, 240, 35, 189, 175, 163, 87, 189, 136, 60, 138, 61, 223, 92, 11, 189, 176, 119, 67, 189, 16, 155, 19, 189, 180, 186, 69, 190, 111, 77, 154, 189, 126, 252, 18, 189, 219, 74, 1, 190, 109, 116, 202, 61, 57, 88, 70, 190, 190, 90, 1, 188, 123, 190, 206, 188, 171, 133, 214, 187, 167, 111, 31, 190, 191, 250, 83, 190, 68, 225, 234, 189, 216, 25, 87, 190, 176, 126, 36, 190, 193, 147, 234, 61, 24, 123, 72, 189, 233, 144, 57, 191, 49, 8, 165, 62, 236, 61, 181, 190, 70, 135, 9, 62, 154, 147, 15, 62, 32, 224, 38, 191, 70, 218, 176, 62, 145, 101, 97, 190, 250, 193, 178, 191, 89, 0, 168, 190, 241, 24, 49, 61, 9, 208, 185, 60, 198, 207, 129, 189, 111, 22, 87, 190, 240, 27, 1, 188, 14, 83, 6, 191, 233, 232, 143, 190, 245, 109, 177, 190, 197, 175, 153, 61, 71, 120, 142, 61, 198, 91, 151, 61, 189, 132, 127, 190, 234, 182, 230, 189, 230, 52, 14, 62, 200, 197, 127, 62, 245, 234, 251, 190, 130, 32, 216, 62, 53, 226, 26, 191, 151, 50, 32, 191, 149, 38, 232, 61, 129, 102, 9, 190, 1, 165, 154, 191, 183, 166, 160, 62, 3, 123, 61, 191, 252, 28, 30, 190, 201, 235, 173, 62, 150, 238, 196, 190, 193, 95, 49, 189, 91, 44, 133, 190, 64, 221, 35, 188, 250, 180, 146, 62, 34, 72, 155, 190, 81, 197, 121, 61, 79, 58, 25, 190, 124, 69, 80, 188, 219, 223, 149, 190, 237, 188, 178, 62, 125, 31, 139, 62, 6, 10, 74, 188, 48, 171, 70, 62, 246, 202, 215, 190, 35, 208, 63, 191, 199, 197, 15, 62, 8, 212, 96, 190, 198, 123, 132, 61, 142, 140, 18, 191, 127, 130, 147, 187, 146, 4, 26, 62, 74, 157, 151, 190, 69, 242, 238, 62, 195, 129, 142, 191, 223, 58, 227, 60, 119, 126, 173, 60, 197, 224, 153, 190, 37, 131, 236, 190, 167, 28, 95, 190, 53, 134, 153, 191, 156, 140, 219, 189, 40, 189, 25, 191, 179, 62, 154, 190, 40, 180, 120, 61, 210, 156, 5, 60, 96, 209, 253, 189, 212, 189, 97, 62, 37, 151, 23, 62, 193, 36, 35, 61, 191, 57, 234, 61, 27, 206, 187, 189, 31, 245, 58, 62, 64, 176, 73, 189, 39, 60, 84, 189, 219, 125, 60, 190, 149, 147, 15, 62, 146, 36, 14, 190, 205, 86, 189, 190, 193, 49, 11, 190, 122, 9, 205, 61, 39, 189, 199, 59, 253, 51, 102, 62, 220, 62, 53, 191, 186, 150, 219, 60, 139, 192, 238, 61, 238, 205, 96, 186, 116, 129, 92, 190, 63, 181, 242, 61, 230, 16, 18, 190, 210, 228, 222, 62, 122, 31, 104, 60, 70, 166, 183, 62, 10, 100, 116, 189, 233, 100, 80, 190, 196, 210, 4, 63, 16, 149, 65, 191, 29, 197, 23, 62, 140, 128, 181, 61, 98, 190, 142, 189, 217, 191, 1, 62, 40, 180, 135, 191, 158, 19, 75, 62, 59, 252, 150, 190, 194, 108, 22, 190, 25, 110, 185, 61, 252, 9, 132, 190, 52, 49, 29, 63, 227, 0, 24, 191, 192, 223, 48, 62, 99, 237, 129, 190, 20, 54, 182, 62, 79, 41, 174, 190, 227, 8, 161, 62, 60, 208, 33, 61, 126, 68, 189, 62, 157, 202, 191, 191, 138, 96, 48, 63, 134, 1, 10, 62, 121, 25, 231, 189, 84, 161, 2, 190, 143, 150, 164, 58, 234, 97, 122, 61, 244, 17, 175, 61, 190, 206, 202, 188, 56, 130, 187, 61, 186, 191, 184, 61, 181, 26, 212, 61, 72, 49, 205, 61, 136, 242, 142, 61, 159, 119, 65, 60, 22, 253, 158, 61, 56, 24, 185, 61, 92, 62, 17, 190, 96, 4, 153, 189, 225, 169, 211, 189, 117, 249, 151, 188, 183, 57, 32, 61, 7, 116, 14, 189, 249, 46, 247, 189, 58, 233, 159, 188, 45, 204, 13, 190, 151, 83, 81, 187, 125, 228, 46, 190, 96, 170, 38, 190, 251, 227, 254, 61, 156, 80, 214, 187, 194, 20, 127, 61, 120, 226, 115, 189, 124, 225, 17, 189, 128, 33, 29, 190, 196, 2, 190, 60, 39, 103, 85, 189, 191, 81, 160, 191, 147, 85, 150, 62, 224, 145, 210, 190, 140, 189, 84, 188, 200, 223, 55, 62, 40, 33, 46, 190, 162, 242, 201, 60, 14, 188, 138, 190, 147, 82, 165, 61, 170, 72, 104, 61, 156, 53, 53, 190, 51, 86, 105, 190, 80, 202, 131, 190, 63, 56, 53, 190, 140, 156, 6, 190, 225, 248, 46, 62, 113, 114, 46, 62, 48, 63, 121, 62, 107, 82, 112, 62, 60, 65, 75, 62, 42, 124, 127, 190, 236, 220, 155, 188, 251, 122, 64, 190, 238, 253, 83, 62, 8, 90, 129, 190, 194, 52, 205, 190, 105, 105, 133, 190, 109, 42, 235, 61, 73, 157, 107, 62, 90, 15, 30, 190, 225, 226, 251, 61, 190, 232, 18, 190, 174, 77, 2, 61, 73, 10, 194, 188, 10, 203, 195, 61, 5, 5, 0, 190, 202, 127, 1, 62, 15, 15, 234, 189, 51, 27, 3, 61, 112, 1, 20, 190, 187, 51, 36, 189, 192, 110, 218, 61, 111, 173, 246, 189, 173, 72, 148, 61, 102, 150, 202, 61, 47, 52, 16, 190, 125, 45, 19, 190, 142, 69, 39, 190, 133, 69, 210, 189, 196, 100, 187, 61, 121, 30, 245, 189, 101, 236, 236, 188, 7, 147, 130, 61, 15, 219, 75, 186, 139, 248, 189, 189, 69, 71, 25, 62, 229, 159, 11, 59, 134, 194, 191, 61, 4, 42, 240, 58, 21, 214, 21, 190, 0, 212, 146, 188, 226, 41, 2, 191, 8, 103, 211, 189, 225, 156, 56, 62, 127, 46, 33, 61, 63, 83, 104, 62, 99, 30, 52, 189, 198, 120, 170, 61, 41, 225, 229, 188, 141, 189, 18, 190, 174, 43, 244, 190, 127, 142, 11, 62, 166, 134, 0, 190, 66, 252, 86, 62, 174, 141, 68, 60, 98, 191, 74, 62, 22, 255, 32, 190, 15, 0, 6, 62, 254, 122, 22, 190, 21, 42, 42, 59, 147, 212, 68, 190, 43, 145, 153, 61, 96, 50, 54, 189, 151, 15, 245, 61, 244, 164, 245, 189, 9, 48, 98, 190, 198, 161, 136, 190, 245, 231, 153, 190, 234, 124, 179, 61, 52, 191, 43, 62, 143, 31, 139, 189, 82, 45, 71, 62, 78, 204, 89, 190, 38, 183, 31, 190, 158, 59, 40, 190, 165, 32, 181, 189, 140, 88, 164, 189, 195, 176, 74, 191, 94, 220, 188, 188, 81, 148, 66, 191, 128, 149, 222, 190, 93, 139, 124, 189, 152, 6, 203, 190, 232, 193, 12, 62, 107, 97, 83, 190, 40, 167, 177, 62, 55, 199, 172, 190, 177, 203, 75, 61, 74, 41, 108, 62, 16, 210, 128, 190, 127, 200, 18, 60, 99, 213, 17, 62, 79, 209, 105, 61, 214, 123, 8, 191, 22, 157, 75, 190, 68, 84, 78, 62, 72, 140, 22, 191, 181, 225, 219, 61, 95, 75, 143, 190, 33, 191, 65, 63, 180, 14, 252, 190, 95, 250, 176, 62, 210, 155, 169, 61, 145, 130, 103, 62, 60, 196, 156, 189, 46, 135, 49, 190, 195, 121, 124, 60, 85, 26, 18, 191, 79, 131, 207, 190, 26, 81, 230, 188, 80, 25, 195, 190, 132, 59, 153, 62, 22, 143, 55, 62, 122, 107, 196, 190, 25, 15, 146, 189, 96, 83, 11, 62, 28, 113, 162, 189, 77, 64, 139, 61, 200, 61, 194, 60, 132, 8, 128, 61, 14, 241, 28, 61, 202, 65, 130, 58, 8, 24, 7, 62, 45, 94, 170, 61, 16, 117, 191, 58, 208, 232, 108, 62, 170, 171, 68, 190, 224, 219, 182, 190, 73, 90, 246, 190, 61, 23, 155, 60, 239, 20, 101, 190, 124, 205, 214, 190, 168, 16, 164, 61, 93, 12, 9, 62, 251, 249, 220, 190, 63, 178, 21, 190, 46, 177, 182, 62, 246, 229, 74, 190, 111, 249, 76, 59, 91, 249, 8, 189, 128, 13, 12, 190, 21, 90, 148, 190, 219, 228, 252, 189, 240, 65, 32, 62, 247, 242, 38, 62, 165, 103, 84, 188, 11, 54, 90, 191, 149, 228, 53, 62, 190, 54, 220, 61, 174, 227, 34, 191, 208, 106, 49, 191, 191, 245, 63, 62, 250, 112, 193, 190, 103, 238, 206, 190, 183, 33, 106, 62, 199, 171, 191, 62, 232, 62, 113, 190, 22, 135, 29, 190, 223, 78, 65, 190, 2, 79, 49, 62, 135, 90, 42, 62, 116, 181, 88, 62, 23, 145, 93, 191, 65, 207, 145, 62, 65, 227, 115, 190, 176, 224, 243, 60, 171, 156, 250, 190, 49, 85, 52, 62, 252, 33, 64, 191, 32, 252, 131, 191, 186, 184, 145, 190, 130, 19, 131, 62, 25, 17, 153, 189, 78, 120, 140, 62, 35, 127, 127, 62, 242, 210, 29, 189, 107, 193, 106, 191, 81, 80, 140, 189, 155, 97, 84, 190, 198, 26, 71, 189, 84, 91, 71, 190, 54, 170, 128, 62, 73, 146, 213, 189, 26, 65, 133, 189, 17, 195, 64, 188, 65, 202, 7, 62, 43, 54, 46, 190, 195, 112, 67, 190, 248, 150, 33, 189, 40, 61, 131, 190, 116, 109, 253, 189, 131, 62, 151, 62, 7, 154, 27, 62, 189, 4, 140, 190, 130, 134, 174, 61, 125, 218, 110, 189, 187, 107, 45, 62, 131, 76, 100, 62, 244, 173, 234, 61, 129, 148, 97, 62, 214, 255, 23, 190, 88, 174, 101, 191, 109, 67, 174, 62, 244, 246, 133, 190, 106, 214, 253, 191, 189, 77, 70, 62, 240, 132, 173, 191, 161, 17, 15, 190, 41, 38, 36, 62, 217, 216, 68, 191, 102, 109, 226, 190, 226, 39, 123, 62, 83, 71, 113, 61, 103, 15, 106, 62, 5, 181, 165, 190, 137, 92, 221, 61, 25, 232, 39, 190, 151, 86, 235, 188, 0, 11, 105, 190, 173, 230, 228, 62, 75, 11, 172, 62, 147, 38, 2, 190, 101, 32, 99, 62, 186, 61, 60, 190, 182, 132, 57, 190, 102, 251, 18, 190, 152, 234, 7, 191, 132, 43, 19, 62, 134, 31, 194, 190, 198, 98, 156, 62, 117, 146, 76, 188, 213, 131, 43, 61, 56, 49, 184, 61, 61, 173, 248, 190, 236, 69, 118, 190, 254, 209, 224, 190, 80, 218, 62, 62, 65, 192, 143, 187, 43, 125, 206, 190, 156, 132, 113, 188, 165, 136, 66, 61, 189, 255, 17, 191, 238, 95, 147, 190, 50, 87, 233, 62, 82, 233, 140, 188, 205, 57, 209, 61, 83, 192, 203, 61, 91, 203, 16, 62, 195, 240, 17, 190, 133, 43, 142, 62, 50, 3, 175, 59, 223, 2, 63, 62, 36, 73, 68, 190, 231, 149, 19, 62, 78, 224, 100, 190, 178, 50, 170, 61, 181, 226, 101, 190, 14, 145, 119, 61, 67, 105, 84, 189, 44, 70, 186, 190, 154, 150, 128, 62, 241, 74, 165, 62, 124, 101, 134, 62, 166, 161, 224, 58, 165, 251, 26, 63, 27, 100, 129, 188, 73, 15, 154, 61, 67, 106, 253, 60, 129, 191, 154, 189, 23, 231, 25, 189, 1, 254, 92, 61, 50, 0, 97, 62, 249, 238, 193, 190, 124, 108, 60, 62, 107, 113, 191, 62, 31, 20, 189, 190, 236, 5, 80, 62, 120, 12, 137, 190, 106, 207, 141, 189, 115, 244, 175, 189, 164, 59, 60, 62, 209, 245, 113, 62, 225, 102, 240, 59, 22, 215, 187, 190, 107, 32, 209, 61, 117, 44, 167, 189, 109, 14, 9, 191, 193, 144, 147, 61, 227, 1, 176, 61, 170, 65, 19, 189, 78, 171, 155, 61, 143, 243, 31, 62, 226, 49, 158, 188, 216, 15, 162, 61, 35, 107, 218, 190, 3, 167, 148, 190, 203, 28, 177, 190, 209, 103, 204, 62, 174, 74, 218, 191, 31, 124, 145, 62, 54, 78, 135, 189, 2, 120, 58, 62, 160, 203, 189, 189, 4, 155, 192, 62, 182, 175, 21, 191, 11, 191, 170, 62, 245, 231, 179, 62, 196, 73, 115, 190, 15, 43, 163, 191, 116, 66, 141, 62, 29, 190, 38, 63, 208, 229, 152, 190, 34, 166, 227, 190, 174, 213, 216, 188, 88, 189, 212, 62, 38, 134, 4, 190, 251, 116, 214, 191, 104, 134, 209, 191, 231, 167, 72, 60, 15, 186, 193, 189, 114, 111, 7, 62, 200, 166, 5, 191, 62, 104, 119, 62, 190, 105, 8, 191, 148, 219, 160, 62, 116, 30, 108, 62, 126, 84, 201, 62, 128, 117, 138, 190, 180, 250, 3, 62, 159, 246, 61, 191, 199, 141, 129, 190, 220, 68, 129, 62, 128, 255, 88, 189, 194, 208, 15, 63, 227, 62, 192, 60, 246, 15, 61, 62, 203, 35, 54, 191, 153, 27, 116, 62, 165, 223, 93, 190, 30, 49, 180, 189, 170, 234, 227, 190, 197, 97, 29, 63, 135, 50, 222, 61, 194, 131, 22, 191, 249, 111, 76, 189, 169, 109, 53, 62, 76, 91, 20, 62, 116, 222, 211, 188, 222, 227, 27, 189, 48, 77, 198, 190, 31, 11, 71, 62, 191, 109, 12, 189, 119, 90, 43, 62, 222, 16, 72, 61, 171, 49, 203, 61, 148, 229, 11, 189, 95, 63, 38, 190, 131, 76, 70, 190, 104, 168, 14, 63, 152, 194, 130, 61, 47, 206, 13, 63, 208, 170, 128, 191, 92, 251, 83, 190, 69, 16, 209, 188, 223, 103, 145, 190, 85, 8, 127, 191, 97, 116, 140, 189, 72, 173, 89, 190, 132, 208, 178, 62, 5, 34, 136, 189, 197, 116, 14, 191, 4, 84, 208, 62, 89, 209, 133, 60, 178, 20, 25, 191, 115, 168, 152, 190, 6, 129, 120, 62, 5, 157, 239, 188, 33, 64, 7, 61, 61, 89, 89, 190, 97, 119, 28, 188, 115, 192, 122, 190, 193, 212, 9, 59, 178, 212, 248, 61, 151, 86, 33, 62, 236, 175, 197, 190, 240, 200, 37, 62, 187, 163, 177, 190, 67, 99, 133, 189, 4, 133, 56, 189, 246, 178, 137, 62, 187, 124, 126, 187, 246, 166, 117, 62, 136, 208, 8, 191, 248, 62, 250, 190, 217, 94, 130, 190, 130, 238, 186, 61, 27, 13, 43, 190, 126, 46, 143, 190, 4, 161, 158, 189, 74, 185, 175, 190, 16, 0, 208, 62, 86, 90, 232, 61, 167, 61, 23, 191, 1, 125, 151, 62, 69, 180, 156, 190, 66, 11, 118, 191, 93, 107, 149, 190, 31, 242, 199, 62, 59, 52, 130, 61, 193, 204, 142, 189, 120, 65, 214, 61, 34, 225, 106, 62, 155, 18, 221, 190, 42, 80, 119, 190, 148, 165, 54, 190, 59, 33, 137, 62, 201, 80, 123, 60, 134, 218, 215, 62, 58, 146, 11, 191, 221, 208, 157, 62, 192, 41, 140, 189, 129, 115, 24, 62, 230, 170, 142, 190, 205, 183, 160, 62, 252, 24, 56, 191, 6, 37, 233, 190, 8, 51, 74, 189, 48, 0, 242, 61, 144, 65, 105, 190, 64, 214, 114, 61, 50, 150, 207, 61, 252, 95, 80, 61, 191, 211, 2, 191, 10, 124, 71, 186, 58, 238, 94, 189, 31, 101, 233, 189, 182, 64, 129, 61, 227, 89, 135, 187, 213, 73, 64, 62, 190, 109, 222, 189, 109, 57, 101, 189, 111, 255, 211, 61, 34, 10, 136, 61, 146, 82, 71, 190, 206, 209, 51, 190, 111, 16, 173, 190, 165, 213, 124, 190, 79, 203, 167, 189, 76, 139, 230, 188, 251, 84, 197, 60, 116, 216, 126, 61, 91, 1, 168, 190, 244, 39, 184, 62, 167, 90, 9, 62, 202, 21, 179, 190, 30, 145, 31, 61, 241, 75, 131, 190, 70, 57, 202, 190, 229, 111, 205, 61, 6, 237, 30, 62, 211, 68, 161, 189, 30, 91, 50, 189, 177, 56, 152, 61, 48, 74, 17, 190, 150, 105, 115, 190, 120, 89, 33, 190, 69, 166, 146, 190, 69, 239, 108, 62, 177, 68, 253, 61, 122, 136, 187, 190, 60, 53, 154, 59, 118, 231, 40, 62, 94, 123, 78, 190, 196, 69, 112, 62, 141, 70, 193, 189, 141, 57, 39, 62, 81, 146, 234, 190, 12, 174, 152, 189, 18, 152, 205, 190, 159, 39, 125, 62, 182, 209, 205, 189, 21, 241, 26, 62, 205, 247, 148, 60, 0, 49, 213, 190, 153, 190, 54, 61, 0, 172, 145, 61, 140, 10, 28, 190, 217, 58, 133, 62, 200, 101, 237, 190, 122, 142, 118, 62, 5, 218, 19, 190, 102, 211, 100, 62, 89, 66, 183, 62, 223, 52, 205, 189, 127, 157, 72, 62, 231, 24, 131, 61, 139, 175, 203, 190, 175, 210, 66, 57, 23, 70, 26, 63, 188, 30, 55, 191, 39, 231, 41, 61, 221, 52, 18, 61, 123, 10, 177, 61, 154, 140, 246, 189, 247, 66, 78, 62, 125, 24, 189, 62, 5, 26, 34, 189, 112, 67, 0, 191, 217, 59, 16, 190, 222, 119, 155, 190, 5, 131, 96, 189, 255, 38, 143, 190, 212, 242, 58, 61, 213, 5, 87, 62, 30, 133, 76, 62, 198, 213, 133, 190, 216, 33, 165, 62, 39, 199, 121, 190, 101, 170, 162, 189, 227, 208, 158, 190, 220, 16, 67, 62, 9, 111, 49, 190, 55, 95, 114, 61, 214, 45, 39, 190, 141, 213, 137, 189, 242, 68, 69, 191, 17, 173, 226, 189, 126, 43, 142, 190, 243, 59, 19, 61, 39, 59, 226, 61, 197, 19, 13, 191, 111, 55, 242, 61, 6, 182, 104, 190, 54, 235, 67, 191, 219, 113, 32, 190, 196, 21, 53, 190, 183, 6, 46, 62, 175, 80, 16, 190, 47, 165, 162, 190, 20, 172, 165, 190, 130, 95, 89, 190, 134, 50, 155, 61, 226, 97, 1, 191, 207, 221, 0, 61, 52, 136, 238, 188, 225, 33, 137, 62, 181, 178, 86, 190, 18, 98, 78, 63, 20, 113, 161, 190, 219, 73, 226, 62, 30, 159, 252, 189, 108, 127, 79, 62, 250, 70, 40, 191, 23, 18, 32, 190, 174, 165, 154, 188, 161, 17, 99, 189, 19, 31, 11, 62, 231, 171, 227, 188, 100, 232, 177, 60, 23, 27, 183, 189, 203, 27, 56, 190, 32, 136, 144, 60, 58, 91, 179, 189, 195, 184, 218, 61, 109, 193, 31, 60, 211, 205, 186, 61, 97, 230, 229, 189, 130, 213, 238, 189, 180, 196, 1, 62, 236, 233, 37, 61, 66, 55, 234, 189, 23, 176, 167, 61, 95, 206, 3, 190, 127, 209, 251, 61, 208, 79, 145, 189, 46, 212, 205, 189, 81, 244, 24, 60, 185, 37, 215, 189, 20, 225, 69, 189, 63, 102, 147, 188, 188, 17, 91, 189, 28, 117, 56, 61, 187, 190, 247, 189, 177, 77, 229, 60, 24, 99, 53, 189, 230, 100, 55, 190, 234, 211, 41, 190, 2, 87, 12, 191, 162, 154, 134, 189, 217, 191, 19, 60, 2, 24, 165, 188, 10, 33, 140, 62, 0, 102, 50, 60, 136, 62, 237, 61, 55, 157, 84, 190, 223, 91, 80, 62, 165, 52, 130, 189, 230, 228, 29, 61, 8, 116, 34, 189, 72, 228, 200, 62, 75, 31, 138, 190, 231, 32, 131, 61, 227, 238, 33, 62, 79, 250, 170, 62, 131, 145, 70, 189, 34, 170, 224, 188, 215, 185, 23, 190, 221, 223, 93, 189, 105, 53, 231, 189, 143, 18, 202, 189, 198, 3, 183, 61, 17, 86, 164, 190, 85, 201, 147, 62, 203, 145, 56, 62, 235, 19, 22, 62, 102, 241, 200, 61, 61, 93, 86, 62, 158, 2, 249, 189, 245, 212, 139, 191, 199, 116, 43, 62, 135, 213, 31, 190, 25, 109, 59, 189, 173, 198, 77, 61, 20, 218, 165, 62, 181, 30, 153, 189, 149, 243, 27, 189, 30, 218, 70, 62, 202, 102, 190, 189, 204, 117, 74, 191, 137, 234, 12, 62, 64, 203, 148, 62, 166, 200, 0, 62, 112, 67, 199, 190, 71, 168, 188, 189, 131, 101, 90, 62, 199, 26, 0, 62, 139, 229, 159, 191, 208, 35, 137, 188, 110, 126, 32, 190, 126, 233, 120, 61, 13, 153, 155, 189, 150, 249, 198, 188, 52, 194, 6, 62, 154, 179, 152, 191, 177, 106, 68, 62, 199, 185, 4, 62, 49, 207, 155, 62, 43, 187, 172, 190, 90, 165, 35, 191, 94, 61, 18, 190, 225, 56, 11, 190, 49, 152, 112, 61, 213, 68, 254, 188, 0, 243, 245, 59, 5, 87, 20, 189, 72, 89, 129, 61, 201, 159, 60, 189, 36, 39, 251, 189, 200, 80, 143, 189, 37, 190, 117, 190, 4, 225, 31, 61, 128, 130, 43, 190, 169, 132, 250, 189, 234, 19, 3, 190, 235, 30, 71, 190, 222, 184, 174, 61, 125, 60, 220, 61, 145, 249, 197, 61, 130, 189, 49, 62, 229, 228, 74, 189, 127, 178, 160, 189, 109, 55, 3, 190, 180, 89, 231, 189, 165, 74, 221, 188, 44, 167, 29, 190, 246, 177, 187, 188, 198, 236, 0, 190, 123, 7, 74, 190, 72, 91, 178, 61, 30, 190, 18, 60, 49, 87, 68, 61, 140, 235, 82, 62, 182, 61, 159, 62, 92, 190, 7, 61, 215, 115, 133, 188, 108, 240, 72, 61, 240, 197, 46, 61, 93, 242, 51, 190, 202, 116, 98, 62, 163, 51, 53, 190, 34, 234, 105, 62, 105, 192, 59, 61, 91, 3, 237, 61, 203, 141, 106, 190, 151, 57, 247, 61, 55, 188, 199, 189, 163, 243, 167, 62, 98, 115, 206, 187, 100, 118, 46, 61, 35, 252, 183, 61, 74, 131, 149, 62, 48, 177, 107, 187, 82, 92, 90, 190, 68, 74, 124, 62, 200, 116, 150, 188, 222, 75, 21, 62, 82, 109, 141, 61, 93, 170, 112, 61, 157, 25, 184, 61, 61, 143, 33, 190, 56, 1, 142, 190, 11, 90, 156, 61, 70, 52, 252, 190, 129, 89, 108, 63, 136, 202, 161, 62, 34, 200, 248, 61, 56, 200, 25, 61, 87, 229, 7, 191, 24, 91, 7, 62, 145, 63, 167, 60, 106, 107, 203, 190, 100, 114, 49, 189, 35, 1, 120, 62, 33, 213, 81, 189, 115, 229, 147, 62, 246, 44, 249, 190, 77, 205, 27, 189, 133, 16, 58, 62, 138, 180, 198, 189, 1, 152, 208, 61, 78, 128, 126, 62, 154, 233, 9, 190, 34, 122, 97, 62, 18, 59, 162, 189, 156, 166, 250, 61, 171, 116, 1, 61, 112, 246, 137, 188, 188, 204, 154, 62, 120, 23, 125, 61, 11, 169, 44, 62, 140, 172, 51, 60, 114, 112, 198, 189, 33, 72, 159, 190, 152, 244, 131, 62, 86, 17, 18, 191, 18, 69, 201, 61, 252, 164, 147, 189, 170, 159, 100, 189, 73, 214, 37, 189, 142, 24, 45, 61, 241, 172, 171, 188, 164, 247, 221, 61, 52, 86, 145, 61, 216, 122, 128, 61, 220, 241, 167, 188, 85, 89, 13, 62, 197, 252, 242, 189, 26, 149, 215, 188, 42, 173, 92, 189, 194, 202, 144, 188, 36, 4, 154, 188, 174, 34, 201, 61, 192, 109, 230, 189, 252, 138, 190, 189, 58, 250, 156, 188, 238, 49, 218, 60, 14, 206, 133, 61, 90, 200, 32, 189, 95, 185, 15, 190, 61, 190, 135, 187, 226, 76, 0, 190, 61, 244, 42, 190, 74, 130, 200, 189, 78, 200, 93, 61, 223, 111, 164, 189, 210, 186, 25, 188, 109, 13, 183, 189};
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
                alignas(float) const unsigned char memory[] = {31, 231, 208, 62, 95, 122, 10, 61, 185, 65, 161, 60, 113, 221, 149, 62, 195, 148, 82, 189, 22, 228, 170, 62, 210, 188, 42, 190, 126, 106, 226, 188, 77, 35, 119, 189, 44, 50, 92, 62, 17, 253, 196, 189, 192, 20, 36, 189, 194, 21, 55, 189, 154, 147, 174, 62, 216, 238, 159, 62, 201, 183, 41, 62, 10, 199, 93, 190, 41, 229, 220, 61, 94, 62, 110, 61, 57, 54, 233, 187, 95, 223, 17, 190, 0, 178, 149, 62, 69, 241, 130, 61, 224, 161, 77, 190, 204, 66, 138, 190, 194, 43, 54, 189, 93, 53, 51, 61, 208, 213, 202, 60, 152, 201, 180, 188, 224, 101, 50, 190, 124, 208, 212, 190, 135, 19, 237, 189};
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
                alignas(float) const unsigned char memory[] = {8, 229, 27, 190, 226, 47, 156, 61, 108, 226, 8, 63, 232, 165, 36, 63, 228, 181, 78, 61, 77, 111, 66, 63, 148, 77, 242, 61, 220, 156, 37, 62, 179, 131, 162, 59, 90, 180, 173, 189, 41, 153, 33, 191, 8, 133, 134, 190, 115, 195, 84, 62, 36, 238, 48, 190, 135, 93, 46, 63, 94, 117, 105, 190, 242, 182, 38, 62, 211, 94, 205, 191, 238, 119, 242, 190, 242, 190, 210, 62, 42, 139, 62, 63, 0, 36, 84, 59, 37, 51, 179, 188, 182, 73, 102, 62, 255, 14, 153, 191, 1, 105, 235, 189, 106, 83, 24, 190, 237, 204, 199, 191, 168, 56, 162, 61, 62, 233, 22, 61, 7, 175, 193, 62, 234, 251, 13, 189, 28, 190, 199, 190, 77, 90, 0, 62, 225, 155, 4, 191, 141, 147, 162, 187, 113, 1, 35, 191, 192, 36, 168, 60, 107, 57, 16, 190, 65, 37, 104, 190, 68, 176, 195, 189, 251, 84, 79, 190, 103, 146, 224, 60, 161, 10, 239, 61, 241, 183, 63, 63, 92, 146, 207, 190, 225, 68, 141, 62, 214, 146, 160, 190, 99, 61, 44, 61, 0, 187, 11, 63, 230, 57, 28, 62, 126, 64, 188, 190, 221, 204, 137, 61, 53, 168, 168, 190, 218, 211, 175, 190, 49, 197, 233, 61, 214, 59, 249, 62, 234, 109, 176, 189, 201, 26, 167, 188, 76, 40, 107, 63, 123, 224, 206, 61, 33, 153, 102, 189, 128, 199, 50, 190, 54, 74, 248, 61};
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
                alignas(float) const unsigned char memory[] = {13, 38, 132, 190, 140, 57, 195, 190};
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
    alignas(float) const unsigned char memory[] = {28, 100, 68, 63, 127, 33, 70, 191, 231, 13, 56, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {168, 49, 73, 189, 126, 152, 221, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0009/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
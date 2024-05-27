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
                alignas(float) const unsigned char memory[] = {51, 167, 186, 62, 228, 142, 235, 188, 12, 63, 125, 190, 21, 249, 226, 190, 3, 117, 162, 62, 236, 236, 105, 190, 102, 102, 187, 190, 99, 237, 225, 62, 21, 28, 22, 63, 24, 66, 13, 63, 183, 142, 30, 63, 166, 81, 185, 190, 47, 220, 230, 61, 174, 50, 19, 191, 45, 35, 42, 63, 172, 99, 12, 63, 187, 215, 94, 191, 238, 220, 112, 190, 70, 89, 117, 62, 122, 240, 99, 191, 183, 199, 54, 63, 126, 167, 127, 61, 180, 9, 3, 63, 250, 118, 54, 63, 162, 167, 166, 62, 161, 34, 190, 190, 124, 58, 248, 190, 31, 39, 22, 63, 48, 62, 207, 190, 160, 78, 205, 190, 89, 244, 250, 190, 98, 67, 243, 62, 38, 141, 246, 188, 240, 236, 204, 62, 250, 90, 14, 63, 50, 99, 180, 62, 96, 72, 94, 191, 247, 189, 72, 191, 194, 173, 1, 190, 75, 206, 7, 191, 193, 94, 211, 61, 169, 41, 205, 190, 236, 150, 101, 190, 68, 88, 172, 191, 105, 203, 2, 190, 250, 141, 142, 62, 71, 181, 134, 62, 5, 158, 187, 62, 104, 181, 103, 61, 0, 199, 92, 63, 250, 45, 22, 63, 230, 163, 120, 190, 16, 105, 136, 191, 85, 167, 7, 191, 24, 194, 29, 191, 227, 107, 202, 189, 7, 194, 7, 63, 170, 156, 78, 62, 63, 44, 9, 63, 117, 213, 145, 190, 108, 78, 54, 63, 123, 194, 185, 63, 111, 21, 184, 62, 207, 138, 15, 62, 5, 22, 129, 62, 100, 243, 253, 62, 48, 181, 92, 63, 202, 59, 137, 63, 217, 151, 84, 62, 42, 198, 187, 190, 103, 18, 128, 63, 159, 120, 56, 62, 18, 144, 233, 190, 200, 81, 114, 63, 205, 192, 72, 62, 164, 148, 252, 62, 26, 162, 154, 63, 142, 69, 183, 62, 47, 128, 187, 190, 203, 7, 185, 190, 39, 88, 73, 63, 1, 223, 206, 62, 222, 213, 238, 190, 116, 100, 150, 190, 88, 36, 136, 63, 60, 105, 86, 190, 3, 116, 128, 189, 125, 196, 87, 63, 213, 163, 126, 191, 62, 146, 137, 190, 177, 52, 236, 190, 72, 62, 241, 190, 215, 75, 232, 62, 167, 183, 16, 191, 138, 155, 107, 190, 221, 210, 92, 190};
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
                alignas(float) const unsigned char memory[] = {222, 88, 133, 191, 153, 172, 96, 190, 72, 113, 73, 56, 175, 34, 144, 62, 23, 31, 79, 62, 23, 117, 207, 62, 239, 185, 145, 61, 237, 185, 163, 62, 136, 227, 141, 190, 104, 101, 132, 60, 185, 125, 150, 62, 190, 187, 147, 62, 254, 86, 86, 63, 93, 164, 20, 191, 244, 131, 159, 62, 115, 2, 224, 62, 133, 118, 221, 190, 174, 47, 157, 190, 59, 161, 206, 190, 178, 129, 139, 62, 31, 44, 149, 190, 144, 152, 146, 61, 73, 150, 80, 62, 14, 54, 25, 62, 201, 19, 161, 62, 82, 117, 166, 190, 194, 63, 230, 189, 106, 254, 38, 191, 32, 106, 240, 60, 210, 98, 198, 188, 122, 142, 34, 191, 204, 178, 216, 61};
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
                alignas(float) const unsigned char memory[] = {207, 186, 19, 191, 219, 243, 33, 62, 55, 240, 240, 190, 56, 0, 142, 189, 112, 57, 157, 189, 81, 25, 12, 189, 37, 251, 66, 62, 32, 252, 239, 189, 93, 185, 105, 190, 189, 179, 48, 190, 58, 217, 33, 59, 97, 249, 183, 62, 244, 39, 159, 190, 237, 178, 167, 61, 220, 4, 239, 190, 247, 197, 150, 190, 178, 111, 128, 190, 234, 66, 151, 61, 44, 124, 70, 191, 142, 16, 189, 62, 1, 46, 223, 62, 75, 203, 144, 62, 112, 163, 214, 62, 87, 101, 0, 190, 79, 95, 31, 189, 112, 114, 148, 62, 140, 253, 29, 190, 44, 160, 170, 189, 132, 52, 107, 62, 112, 213, 215, 190, 50, 65, 153, 190, 44, 60, 50, 188, 96, 75, 172, 62, 31, 171, 35, 190, 67, 95, 117, 62, 19, 17, 225, 61, 146, 48, 35, 62, 107, 74, 33, 62, 162, 238, 174, 190, 112, 49, 24, 62, 214, 95, 136, 61, 27, 156, 129, 62, 127, 142, 37, 190, 156, 39, 47, 61, 200, 115, 128, 62, 107, 236, 76, 190, 26, 162, 93, 62, 197, 15, 8, 62, 124, 41, 151, 190, 45, 124, 50, 190, 231, 120, 133, 62, 215, 208, 1, 189, 89, 221, 41, 191, 43, 17, 62, 190, 252, 201, 148, 188, 185, 83, 33, 191, 1, 121, 203, 190, 204, 223, 128, 190, 193, 174, 131, 62, 59, 166, 3, 62, 1, 243, 245, 61, 41, 185, 208, 62, 223, 45, 172, 190, 127, 92, 124, 62, 141, 203, 165, 190, 196, 2, 146, 189, 243, 127, 206, 61, 125, 230, 238, 189, 239, 209, 159, 188, 195, 155, 166, 62, 20, 147, 3, 62, 154, 196, 188, 188, 70, 223, 236, 187, 231, 81, 43, 62, 50, 175, 73, 62, 248, 89, 82, 62, 163, 226, 240, 189, 194, 169, 28, 61, 114, 236, 168, 61, 103, 81, 236, 61, 187, 177, 140, 189, 242, 23, 240, 189, 0, 51, 98, 190, 180, 207, 128, 62, 149, 190, 3, 189, 7, 151, 140, 189, 212, 206, 166, 62, 59, 165, 59, 60, 145, 252, 53, 190, 128, 17, 211, 61, 139, 229, 31, 62, 82, 175, 220, 189, 226, 187, 169, 61, 5, 235, 210, 188, 231, 29, 140, 62, 39, 208, 169, 61, 104, 151, 35, 63, 171, 202, 146, 189, 69, 217, 57, 62, 144, 5, 115, 62, 208, 29, 191, 62, 144, 31, 123, 187, 36, 143, 18, 190, 12, 228, 230, 61, 110, 52, 142, 62, 35, 71, 9, 62, 204, 222, 90, 58, 55, 149, 162, 190, 143, 159, 46, 190, 42, 14, 80, 190, 152, 143, 13, 190, 165, 6, 255, 61, 55, 191, 243, 190, 142, 173, 176, 189, 177, 238, 228, 62, 145, 100, 44, 190, 116, 34, 82, 191, 228, 157, 41, 189, 49, 135, 64, 190, 109, 29, 71, 191, 2, 134, 183, 190, 233, 65, 86, 191, 217, 157, 30, 62, 239, 135, 194, 62, 15, 213, 139, 62, 186, 95, 49, 62, 243, 63, 170, 190, 94, 248, 85, 190, 171, 194, 91, 62, 10, 164, 136, 189, 86, 16, 62, 62, 118, 46, 139, 188, 208, 149, 10, 62, 87, 106, 31, 62, 98, 122, 137, 189, 201, 61, 148, 61, 208, 110, 215, 61, 213, 139, 5, 62, 69, 24, 30, 59, 228, 19, 196, 189, 246, 240, 5, 62, 43, 44, 73, 190, 36, 212, 244, 59, 122, 126, 26, 62, 182, 42, 28, 190, 38, 134, 3, 190, 178, 168, 125, 62, 1, 113, 147, 61, 65, 137, 205, 190, 144, 220, 98, 189, 233, 106, 240, 189, 6, 129, 97, 190, 220, 15, 133, 190, 111, 89, 133, 190, 244, 5, 139, 62, 36, 182, 179, 189, 33, 59, 195, 189, 46, 14, 137, 62, 46, 170, 17, 189, 179, 178, 156, 61, 19, 19, 191, 62, 186, 56, 139, 189, 130, 131, 190, 60, 60, 104, 249, 61, 63, 131, 59, 61, 30, 33, 215, 61, 138, 230, 181, 60, 161, 40, 113, 60, 89, 200, 79, 62, 60, 44, 105, 62, 213, 69, 195, 190, 18, 172, 112, 62, 92, 110, 130, 61, 111, 86, 143, 187, 5, 13, 203, 60, 241, 173, 149, 62, 8, 213, 17, 62, 108, 110, 26, 62, 59, 132, 77, 62, 165, 119, 5, 190, 83, 243, 212, 190, 207, 134, 12, 62, 151, 99, 134, 61, 97, 246, 199, 190, 73, 96, 16, 191, 28, 133, 89, 190, 188, 80, 4, 62, 187, 142, 41, 62, 41, 175, 63, 60, 215, 4, 20, 62, 234, 220, 142, 61, 202, 110, 71, 190, 47, 81, 1, 191, 187, 86, 253, 188, 175, 130, 157, 62, 168, 15, 150, 189, 152, 78, 56, 62, 56, 236, 62, 189, 11, 254, 140, 190, 198, 120, 5, 61, 179, 127, 16, 190, 102, 7, 127, 190, 16, 45, 141, 61, 172, 253, 208, 190, 43, 108, 9, 63, 254, 23, 167, 188, 136, 13, 27, 62, 135, 153, 107, 61, 205, 242, 217, 190, 208, 107, 43, 60, 252, 71, 5, 63, 156, 153, 78, 190, 109, 247, 38, 191, 164, 157, 60, 190, 202, 80, 158, 190, 145, 131, 141, 62, 140, 49, 60, 62, 27, 6, 30, 191, 49, 0, 5, 62, 180, 6, 182, 190, 165, 137, 213, 190, 115, 250, 175, 189, 226, 212, 69, 190, 251, 146, 161, 62, 217, 1, 54, 190, 212, 106, 157, 61, 94, 223, 35, 190, 97, 16, 7, 190, 12, 60, 189, 188, 222, 110, 0, 62, 48, 226, 53, 62, 108, 157, 143, 60, 249, 99, 8, 189, 238, 244, 193, 189, 217, 113, 23, 62, 208, 34, 208, 188, 129, 131, 43, 62, 128, 213, 239, 190, 244, 43, 3, 61, 10, 219, 118, 62, 67, 179, 248, 189, 173, 190, 154, 190, 77, 87, 73, 190, 225, 129, 72, 189, 199, 155, 88, 190, 206, 70, 181, 188, 145, 127, 222, 61, 12, 71, 3, 190, 93, 198, 158, 189, 21, 82, 155, 190, 95, 96, 43, 61, 117, 250, 117, 189, 210, 133, 209, 62, 216, 79, 239, 61, 250, 150, 217, 189, 82, 123, 90, 190, 201, 94, 172, 189, 27, 74, 27, 190, 150, 21, 13, 188, 59, 132, 255, 60, 63, 24, 0, 62, 242, 237, 108, 189, 55, 96, 224, 61, 6, 31, 251, 189, 11, 122, 51, 189, 131, 212, 255, 189, 184, 178, 79, 190, 193, 55, 31, 61, 248, 88, 148, 189, 62, 254, 205, 61, 146, 188, 15, 189, 96, 25, 146, 61, 190, 141, 34, 190, 247, 61, 227, 188, 126, 78, 105, 61, 170, 174, 187, 60, 51, 147, 116, 61, 160, 56, 12, 190, 93, 234, 42, 190, 5, 1, 217, 61, 11, 212, 170, 61, 237, 26, 218, 61, 8, 223, 165, 189, 195, 154, 126, 61, 98, 217, 159, 189, 13, 134, 39, 190, 152, 168, 218, 60, 218, 75, 73, 188, 32, 69, 64, 61, 218, 22, 164, 61, 192, 188, 173, 189, 184, 22, 92, 61, 1, 217, 84, 188, 135, 57, 17, 190, 100, 92, 245, 189, 28, 145, 160, 189, 166, 58, 173, 61, 80, 233, 56, 190, 87, 105, 75, 190, 141, 202, 29, 61, 179, 5, 103, 61, 113, 36, 237, 61, 136, 218, 12, 61, 213, 183, 78, 61, 60, 1, 70, 189, 54, 149, 13, 189, 140, 158, 37, 62, 217, 229, 241, 60, 221, 76, 1, 60, 96, 251, 81, 189, 214, 219, 148, 189, 37, 55, 146, 61, 212, 90, 177, 189, 122, 168, 24, 62, 42, 243, 5, 189, 139, 206, 57, 189, 89, 19, 5, 61, 2, 237, 57, 190, 41, 240, 242, 60, 58, 237, 3, 190, 68, 130, 109, 189, 104, 240, 4, 190, 136, 16, 134, 189, 188, 83, 129, 62, 237, 242, 15, 62, 57, 124, 141, 190, 45, 168, 4, 62, 204, 150, 170, 60, 15, 73, 221, 188, 72, 114, 219, 190, 54, 41, 83, 191, 48, 156, 196, 188, 117, 0, 99, 191, 152, 193, 195, 189, 146, 41, 169, 190, 45, 173, 80, 62, 26, 218, 147, 61, 103, 233, 114, 189, 89, 138, 1, 62, 36, 30, 238, 62, 212, 119, 25, 63, 75, 211, 204, 61, 240, 10, 148, 62, 162, 23, 28, 191, 229, 2, 241, 190, 45, 243, 2, 62, 88, 36, 96, 188, 184, 21, 237, 189, 245, 45, 128, 60, 103, 220, 214, 190, 207, 226, 207, 189, 110, 71, 72, 190, 155, 168, 69, 62, 64, 133, 30, 62, 4, 158, 6, 62, 232, 144, 7, 62, 39, 119, 220, 61, 224, 247, 164, 190, 97, 153, 1, 61, 68, 178, 64, 62, 6, 26, 206, 62, 127, 51, 139, 62, 43, 202, 130, 61, 114, 154, 224, 61, 86, 113, 5, 60, 66, 226, 133, 191, 26, 46, 105, 187, 19, 85, 13, 62, 70, 86, 32, 61, 156, 74, 133, 191, 156, 209, 72, 62, 96, 91, 113, 190, 20, 148, 96, 190, 198, 171, 43, 190, 28, 242, 134, 189, 43, 69, 252, 62, 79, 11, 63, 62, 226, 185, 172, 189, 145, 161, 226, 188, 136, 189, 228, 61, 245, 7, 193, 62, 242, 176, 179, 62, 188, 143, 247, 189, 11, 235, 136, 61, 132, 214, 32, 63, 238, 43, 78, 62, 201, 130, 253, 189, 244, 2, 225, 61, 199, 5, 76, 61, 31, 118, 217, 190, 153, 69, 48, 189, 232, 57, 71, 61, 43, 3, 1, 62, 37, 222, 86, 190, 35, 15, 194, 189, 162, 135, 149, 62, 149, 14, 28, 190, 41, 117, 188, 62, 171, 99, 24, 191, 174, 174, 228, 188, 243, 33, 125, 62, 71, 172, 79, 61, 194, 143, 81, 190, 51, 100, 142, 61, 210, 237, 31, 63, 175, 186, 66, 189, 176, 247, 121, 62, 183, 244, 145, 62, 221, 15, 49, 62, 22, 196, 36, 62, 87, 86, 38, 189, 26, 79, 51, 62, 122, 128, 31, 191, 104, 137, 96, 190, 165, 82, 242, 189, 132, 163, 184, 61, 198, 93, 2, 191, 221, 160, 0, 62, 186, 143, 109, 190, 57, 7, 176, 189, 112, 208, 209, 61, 11, 210, 177, 62, 189, 236, 107, 62, 14, 198, 37, 61, 15, 191, 125, 190, 35, 63, 62, 190, 144, 132, 202, 61, 252, 234, 224, 61, 76, 13, 32, 60, 125, 38, 233, 61, 199, 178, 62, 62, 55, 159, 129, 190, 193, 126, 106, 60, 128, 97, 197, 61, 4, 93, 58, 190, 143, 24, 166, 62, 23, 59, 115, 62, 49, 85, 138, 189, 181, 36, 81, 62, 138, 193, 168, 190, 97, 134, 135, 190, 41, 217, 81, 62, 21, 111, 149, 61, 122, 106, 5, 190, 157, 96, 5, 189, 197, 153, 188, 190, 188, 11, 175, 61, 110, 184, 200, 60, 96, 7, 138, 62, 64, 81, 252, 190, 137, 111, 211, 61, 116, 243, 169, 189, 49, 155, 182, 62, 153, 84, 184, 62, 42, 208, 99, 61, 80, 115, 221, 60, 1, 157, 181, 62, 119, 136, 108, 61, 166, 221, 222, 190, 13, 17, 42, 190, 176, 238, 21, 60, 63, 161, 23, 62, 171, 242, 201, 62, 15, 33, 186, 61, 199, 30, 241, 189, 1, 247, 86, 61, 66, 248, 191, 62, 244, 189, 141, 190, 128, 32, 7, 62, 251, 70, 177, 189, 220, 65, 190, 190, 92, 136, 223, 190, 39, 211, 44, 190, 49, 46, 72, 190, 97, 160, 162, 62, 19, 189, 11, 63, 82, 230, 143, 189, 113, 180, 2, 62, 20, 48, 96, 62, 220, 34, 161, 189, 213, 219, 92, 190, 5, 37, 6, 62, 230, 219, 15, 192, 48, 230, 112, 189, 141, 198, 92, 61, 1, 200, 5, 62, 41, 98, 42, 63, 144, 123, 132, 191, 23, 89, 211, 61, 225, 151, 158, 60, 148, 42, 71, 189, 101, 102, 158, 190, 134, 225, 171, 62, 12, 195, 179, 61, 18, 158, 207, 62, 3, 196, 131, 191, 142, 130, 136, 61, 230, 161, 252, 188, 59, 20, 152, 191, 194, 255, 138, 188, 22, 32, 42, 61, 91, 2, 210, 189, 122, 147, 83, 61, 157, 102, 184, 189, 61, 155, 8, 189, 85, 241, 187, 189, 35, 242, 8, 191, 209, 168, 204, 57, 129, 29, 64, 62, 17, 11, 135, 62, 234, 105, 186, 62, 147, 143, 26, 189, 222, 115, 145, 188, 39, 213, 11, 62, 90, 213, 166, 61, 163, 146, 75, 62, 141, 128, 194, 61, 138, 10, 27, 190, 123, 4, 143, 190, 174, 161, 211, 61, 50, 36, 128, 61, 172, 82, 162, 62, 88, 142, 147, 60, 175, 44, 97, 190, 173, 1, 104, 188, 152, 61, 217, 190, 253, 184, 31, 190, 54, 162, 175, 62, 192, 116, 126, 190, 117, 217, 180, 191, 61, 126, 168, 62, 35, 72, 156, 190, 90, 140, 255, 190, 148, 108, 110, 190, 173, 39, 152, 190, 96, 101, 19, 63, 3, 165, 231, 62, 122, 235, 23, 191, 15, 9, 140, 62, 110, 211, 175, 61, 151, 111, 82, 63, 3, 136, 164, 62, 100, 99, 164, 190, 234, 63, 7, 190, 51, 166, 137, 190, 125, 46, 164, 62, 81, 61, 18, 192, 131, 213, 161, 189, 57, 66, 24, 191, 211, 230, 244, 61, 129, 215, 196, 190, 89, 54, 14, 191, 201, 22, 22, 190, 192, 103, 23, 189, 40, 121, 4, 62, 187, 228, 18, 62, 48, 247, 14, 62, 129, 70, 110, 188, 183, 37, 156, 62, 99, 99, 96, 191, 116, 97, 15, 191, 91, 82, 14, 62, 93, 143, 137, 191, 195, 203, 156, 62, 201, 139, 179, 62, 138, 51, 167, 61, 244, 176, 14, 62, 122, 124, 14, 62, 17, 110, 66, 189, 90, 12, 197, 62, 218, 124, 108, 191, 33, 36, 16, 190, 208, 30, 26, 63, 249, 213, 127, 59, 199, 25, 140, 62, 73, 70, 7, 62, 7, 170, 193, 61, 160, 202, 183, 61, 176, 239, 143, 189, 36, 194, 249, 188, 136, 57, 164, 61, 87, 28, 34, 189, 160, 24, 36, 190, 113, 97, 141, 189, 154, 240, 205, 189, 40, 124, 141, 189, 135, 238, 51, 189, 135, 193, 88, 61, 97, 95, 250, 189, 14, 145, 22, 61, 120, 139, 31, 62, 174, 161, 150, 61, 248, 81, 226, 61, 184, 112, 29, 190, 241, 178, 0, 61, 231, 145, 9, 188, 159, 192, 10, 190, 165, 230, 64, 190, 162, 217, 23, 61, 202, 110, 7, 62, 25, 27, 2, 189, 96, 126, 205, 61, 23, 144, 204, 61, 185, 66, 170, 189, 231, 66, 8, 188, 6, 188, 0, 190, 20, 178, 196, 189, 192, 236, 106, 189, 19, 211, 169, 62, 247, 132, 20, 62, 52, 186, 3, 62, 154, 223, 193, 61, 146, 166, 139, 190, 142, 237, 85, 62, 235, 127, 216, 189, 213, 92, 152, 190, 205, 2, 115, 189, 224, 95, 91, 62, 98, 98, 135, 60, 154, 216, 53, 62, 52, 22, 11, 190, 213, 243, 76, 189, 81, 191, 197, 190, 213, 163, 86, 61, 185, 195, 254, 186, 135, 165, 13, 190, 180, 219, 194, 188, 223, 116, 245, 61, 0, 169, 65, 190, 239, 128, 137, 190, 47, 14, 9, 61, 138, 137, 128, 191, 236, 137, 5, 191, 211, 9, 157, 190, 189, 168, 176, 190, 125, 60, 222, 189, 130, 16, 239, 189, 59, 156, 136, 62, 92, 29, 108, 61, 166, 92, 145, 189, 158, 8, 170, 62, 7, 198, 123, 62, 191, 235, 74, 62, 246, 142, 9, 62, 234, 64, 176, 61, 246, 80, 104, 60, 78, 237, 50, 190, 137, 185, 78, 61, 243, 89, 17, 189, 19, 49, 1, 60, 6, 139, 186, 62, 126, 226, 88, 190, 14, 140, 92, 62, 174, 66, 144, 189, 168, 178, 94, 189, 50, 187, 122, 62, 245, 58, 96, 190, 223, 138, 151, 189, 147, 38, 195, 62, 26, 211, 3, 62, 207, 11, 224, 190, 23, 112, 124, 190, 184, 186, 220, 61, 245, 44, 240, 61, 218, 6, 12, 62, 88, 255, 148, 190, 0, 46, 202, 61, 83, 55, 18, 62, 235, 130, 171, 189, 184, 166, 120, 61, 214, 106, 168, 190, 196, 183, 129, 60, 208, 87, 62, 190, 247, 117, 80, 62, 158, 11, 246, 189, 17, 41, 36, 62, 196, 231, 186, 189, 83, 57, 174, 61, 45, 170, 174, 62, 87, 120, 23, 61, 113, 30, 18, 189, 169, 75, 127, 60, 69, 51, 36, 189, 222, 137, 190, 61, 57, 129, 27, 190, 18, 82, 11, 62, 77, 0, 177, 61, 42, 214, 40, 189, 125, 100, 155, 188, 12, 3, 95, 62, 178, 136, 73, 190, 164, 81, 88, 61, 118, 212, 230, 62, 210, 98, 61, 61, 217, 14, 190, 62, 241, 1, 248, 190, 196, 164, 151, 190, 88, 227, 166, 62, 121, 184, 168, 188, 192, 206, 223, 187, 219, 12, 219, 62, 28, 255, 49, 62, 163, 184, 148, 61, 232, 250, 131, 61, 25, 142, 168, 62, 226, 19, 158, 189, 170, 131, 115, 62, 7, 197, 143, 62, 5, 218, 90, 62, 18, 154, 14, 62, 212, 18, 155, 190, 168, 81, 65, 62, 191, 17, 123, 61, 96, 218, 56, 61, 37, 252, 40, 189, 87, 169, 73, 190, 242, 28, 145, 189, 139, 29, 87, 190, 107, 129, 199, 61, 203, 116, 160, 62, 144, 218, 188, 189, 160, 238, 65, 190, 64, 182, 212, 62, 55, 51, 143, 189, 138, 32, 29, 191, 96, 248, 136, 190, 148, 198, 173, 188, 219, 11, 240, 190, 69, 154, 0, 191, 19, 239, 40, 191, 1, 247, 40, 60, 246, 29, 146, 62, 111, 114, 174, 61, 247, 125, 232, 62, 186, 60, 73, 190, 6, 40, 225, 188, 228, 139, 60, 61, 67, 115, 111, 190, 226, 24, 140, 61, 168, 150, 223, 188, 60, 224, 242, 187, 230, 48, 193, 189, 209, 125, 27, 190, 129, 38, 140, 60, 50, 130, 59, 189, 167, 117, 18, 62, 0, 128, 55, 190, 189, 244, 166, 189, 169, 184, 158, 189, 81, 140, 211, 189, 79, 223, 20, 190, 125, 122, 22, 62, 95, 154, 102, 190, 166, 98, 34, 60, 167, 23, 65, 62, 149, 32, 27, 190, 187, 112, 243, 61, 178, 166, 67, 190, 238, 81, 109, 190, 233, 202, 101, 190, 177, 15, 131, 190, 199, 8, 3, 190, 106, 78, 62, 62, 187, 222, 237, 188, 73, 234, 177, 190, 212, 43, 55, 62, 229, 220, 16, 62, 184, 29, 224, 61, 115, 2, 33, 62, 129, 22, 20, 61, 22, 165, 184, 189, 27, 109, 131, 61, 26, 96, 148, 61, 197, 55, 115, 62, 8, 43, 35, 62, 6, 134, 179, 60, 95, 78, 110, 62, 239, 101, 158, 62, 149, 93, 10, 190, 233, 42, 25, 61, 62, 92, 115, 61, 227, 245, 80, 189, 248, 208, 108, 62, 187, 151, 195, 61, 62, 73, 72, 190, 47, 220, 8, 62, 196, 139, 18, 190, 201, 224, 41, 190, 31, 197, 58, 191, 2, 169, 148, 61, 106, 237, 89, 190, 116, 54, 153, 191, 4, 145, 132, 191, 75, 54, 168, 190, 22, 8, 146, 59, 169, 181, 151, 61, 114, 11, 128, 62, 147, 72, 101, 62, 173, 234, 193, 61, 75, 61, 56, 61, 250, 202, 6, 62, 86, 48, 245, 61, 114, 191, 252, 61, 1, 227, 225, 61, 197, 21, 48, 185, 130, 174, 29, 61, 11, 236, 24, 62, 182, 210, 3, 189, 201, 153, 137, 61, 11, 225, 33, 62, 40, 154, 52, 62, 52, 23, 213, 61, 127, 199, 248, 190, 99, 33, 247, 189, 34, 159, 194, 189, 134, 198, 129, 62, 28, 27, 163, 190, 195, 7, 52, 61, 7, 210, 205, 61, 73, 101, 147, 61, 113, 39, 29, 191, 165, 221, 63, 189, 81, 72, 115, 62, 55, 209, 145, 191, 230, 166, 141, 191, 245, 136, 36, 191, 28, 192, 26, 189, 187, 180, 184, 188, 111, 67, 193, 189, 204, 93, 67, 62, 56, 236, 89, 62, 196, 138, 246, 189, 67, 184, 163, 62, 139, 144, 205, 187, 16, 178, 161, 189, 162, 4, 1, 62, 185, 217, 152, 190, 87, 14, 135, 189, 206, 110, 240, 190, 231, 4, 62, 62, 109, 98, 202, 60, 8, 110, 239, 61, 122, 215, 128, 61, 140, 140, 192, 189, 98, 133, 78, 190, 190, 79, 101, 61, 224, 29, 215, 190, 22, 230, 13, 62, 36, 223, 229, 189, 159, 169, 68, 61, 245, 79, 161, 187, 147, 173, 120, 60, 155, 38, 206, 62, 8, 182, 180, 190, 187, 49, 253, 188, 122, 18, 150, 61, 91, 231, 145, 62, 191, 227, 36, 62, 63, 161, 155, 189, 93, 158, 92, 62, 57, 171, 9, 190, 91, 128, 55, 190, 48, 151, 18, 191, 18, 131, 65, 61, 183, 236, 0, 61, 135, 142, 194, 61, 201, 111, 136, 189, 232, 219, 32, 190, 104, 115, 132, 189, 179, 21, 51, 189, 239, 88, 41, 61, 138, 190, 208, 189, 204, 97, 33, 62, 235, 45, 57, 189, 120, 140, 168, 189, 98, 58, 39, 61, 114, 144, 42, 190, 182, 115, 91, 189, 245, 125, 147, 60, 235, 193, 13, 61, 194, 113, 162, 61, 68, 146, 52, 190, 28, 24, 212, 61, 62, 166, 96, 189, 151, 132, 241, 189, 213, 78, 223, 61, 248, 84, 204, 61, 246, 205, 18, 190, 49, 116, 9, 189, 224, 172, 12, 62, 194, 235, 50, 190, 186, 226, 183, 188, 55, 109, 204, 188, 232, 205, 193, 189, 176, 255, 24, 62, 149, 37, 5, 62, 180, 123, 204, 190, 92, 252, 150, 61, 201, 34, 3, 192, 79, 96, 100, 189, 236, 77, 14, 62, 103, 89, 149, 61, 224, 62, 249, 62, 61, 176, 80, 191, 191, 118, 173, 190, 78, 203, 194, 189, 46, 159, 34, 62, 48, 207, 114, 189, 109, 36, 133, 62, 216, 119, 61, 62, 54, 200, 158, 62, 88, 254, 45, 191, 190, 46, 199, 189, 154, 207, 252, 188, 91, 106, 138, 191, 190, 13, 96, 62, 92, 16, 167, 62, 39, 165, 17, 189, 147, 99, 149, 62, 57, 236, 24, 190, 130, 32, 147, 61, 59, 132, 114, 61, 116, 33, 186, 190, 205, 102, 172, 190, 185, 72, 37, 62, 129, 91, 116, 190, 0, 238, 83, 63, 203, 210, 56, 62, 150, 193, 61, 191, 227, 121, 147, 62, 142, 37, 62, 189, 0, 7, 179, 61, 153, 20, 173, 188, 22, 182, 150, 60, 113, 80, 168, 61, 194, 249, 90, 62, 82, 215, 215, 188, 247, 161, 105, 61, 206, 156, 140, 62, 90, 93, 36, 62, 57, 81, 91, 191, 122, 130, 205, 61, 37, 54, 172, 189, 184, 15, 239, 61, 74, 31, 156, 190, 214, 32, 14, 189, 93, 4, 3, 190, 239, 195, 153, 60, 238, 33, 175, 190, 74, 3, 160, 189, 230, 146, 132, 62, 100, 100, 59, 190, 175, 61, 169, 190, 199, 160, 229, 190, 83, 213, 183, 61, 214, 76, 156, 190, 229, 179, 106, 62, 139, 32, 255, 61, 222, 53, 83, 189, 77, 232, 221, 189, 74, 198, 89, 61, 31, 3, 96, 188, 172, 14, 159, 187, 53, 16, 227, 189, 235, 146, 17, 61, 72, 163, 92, 189, 211, 216, 194, 61, 238, 166, 116, 189, 207, 40, 16, 190, 226, 106, 56, 190, 75, 183, 217, 61, 109, 127, 39, 61, 84, 220, 68, 189, 159, 103, 20, 62, 60, 146, 101, 61, 158, 96, 6, 190, 229, 77, 13, 188, 44, 46, 115, 189, 76, 116, 92, 190, 234, 94, 14, 190, 34, 222, 163, 189, 167, 123, 0, 190, 44, 87, 78, 190, 24, 241, 47, 190, 246, 36, 102, 190, 194, 39, 193, 61, 222, 192, 27, 190, 171, 96, 55, 62, 135, 117, 149, 189, 104, 190, 4, 190, 210, 241, 84, 60, 182, 170, 48, 190, 232, 47, 41, 62, 71, 131, 204, 189, 135, 176, 144, 62, 78, 35, 177, 61, 39, 233, 140, 62, 172, 107, 7, 190, 110, 100, 136, 190, 233, 253, 138, 61, 211, 33, 116, 61, 215, 57, 185, 189, 88, 79, 205, 61, 60, 8, 210, 188, 161, 69, 186, 61, 208, 199, 173, 61, 177, 23, 209, 187, 35, 84, 147, 60, 24, 42, 123, 190, 52, 189, 70, 189, 28, 56, 65, 62, 168, 180, 143, 60, 143, 20, 206, 190, 152, 142, 198, 189, 240, 50, 16, 188, 76, 43, 213, 62, 251, 13, 183, 60, 6, 228, 207, 190, 6, 188, 57, 61, 55, 190, 51, 62, 23, 131, 87, 61, 152, 102, 170, 188, 40, 100, 166, 190, 205, 189, 113, 62};
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
                alignas(float) const unsigned char memory[] = {143, 134, 88, 62, 7, 237, 185, 189, 4, 127, 84, 62, 100, 122, 204, 59, 52, 40, 116, 62, 34, 84, 113, 190, 94, 63, 15, 62, 83, 25, 169, 62, 255, 27, 95, 190, 2, 229, 21, 190, 174, 227, 186, 188, 74, 99, 86, 189, 27, 215, 156, 190, 144, 52, 202, 189, 126, 45, 82, 189, 15, 158, 177, 62, 15, 47, 31, 62, 2, 128, 143, 62, 11, 252, 237, 189, 131, 50, 61, 189, 55, 106, 124, 62, 67, 244, 106, 189, 93, 216, 186, 61, 68, 78, 121, 190, 35, 121, 28, 189, 84, 219, 177, 61, 50, 83, 241, 189, 166, 2, 82, 190, 100, 246, 211, 61, 111, 252, 170, 61, 89, 233, 7, 61, 168, 75, 112, 62};
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
                alignas(float) const unsigned char memory[] = {85, 236, 245, 190, 244, 45, 248, 62, 135, 73, 112, 189, 182, 210, 65, 63, 212, 149, 248, 61, 157, 237, 190, 62, 235, 180, 251, 62, 64, 98, 6, 190, 193, 134, 34, 62, 221, 119, 71, 188, 105, 204, 26, 191, 139, 209, 3, 62, 117, 32, 4, 63, 217, 15, 227, 189, 4, 140, 215, 190, 51, 210, 12, 191, 55, 202, 138, 63, 82, 62, 112, 191, 116, 68, 0, 59, 33, 203, 138, 62, 108, 41, 124, 62, 193, 152, 160, 190, 91, 197, 13, 63, 223, 147, 159, 189, 187, 74, 14, 63, 237, 97, 151, 62, 24, 197, 154, 62, 132, 226, 2, 62, 248, 237, 124, 191, 89, 250, 98, 189, 50, 134, 237, 61, 122, 28, 52, 62, 228, 111, 219, 60, 147, 97, 41, 189, 95, 75, 91, 190, 162, 212, 200, 62, 116, 138, 152, 190, 52, 32, 218, 61, 107, 129, 70, 62, 210, 238, 135, 190, 56, 139, 221, 189, 83, 204, 137, 188, 119, 225, 102, 62, 29, 194, 70, 190, 11, 23, 6, 59, 134, 28, 29, 62, 140, 168, 177, 61, 216, 50, 30, 190, 222, 226, 177, 62, 26, 23, 207, 189, 251, 92, 177, 189, 120, 205, 200, 190, 237, 150, 47, 190, 45, 201, 18, 187, 63, 156, 94, 189, 219, 56, 60, 60, 210, 31, 7, 62, 233, 195, 154, 190, 212, 113, 99, 186, 109, 52, 27, 61, 207, 221, 133, 62, 54, 126, 27, 191, 88, 37, 28, 60, 56, 193, 121, 61};
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
                alignas(float) const unsigned char memory[] = {0, 71, 16, 190, 108, 66, 223, 190};
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
    alignas(float) const unsigned char memory[] = {235, 254, 155, 63, 120, 163, 170, 63, 9, 72, 22, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {0, 182, 155, 192, 124, 136, 59, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0054/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
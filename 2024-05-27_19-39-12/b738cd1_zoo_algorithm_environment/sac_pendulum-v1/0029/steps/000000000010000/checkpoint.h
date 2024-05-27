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
                alignas(float) const unsigned char memory[] = {70, 132, 85, 63, 41, 171, 19, 63, 24, 231, 2, 63, 47, 127, 244, 61, 43, 249, 145, 190, 130, 23, 157, 189, 64, 68, 136, 191, 110, 147, 150, 60, 133, 171, 142, 188, 40, 136, 89, 191, 36, 125, 226, 62, 94, 39, 33, 62, 244, 150, 165, 62, 57, 147, 13, 191, 96, 46, 42, 191, 117, 43, 37, 63, 41, 250, 40, 63, 223, 184, 202, 62, 224, 80, 76, 63, 143, 121, 29, 61, 178, 158, 116, 188, 9, 48, 178, 190, 201, 218, 170, 189, 220, 197, 27, 63, 238, 78, 82, 188, 149, 249, 71, 59, 254, 76, 215, 62, 226, 4, 173, 62, 72, 234, 147, 63, 43, 192, 161, 62, 32, 55, 151, 62, 163, 245, 51, 62, 96, 16, 128, 62, 148, 84, 16, 191, 52, 197, 126, 63, 224, 67, 129, 189, 209, 142, 177, 190, 20, 193, 188, 62, 171, 146, 26, 191, 184, 199, 183, 190, 6, 136, 184, 63, 85, 165, 18, 63, 30, 205, 238, 62, 173, 114, 156, 190, 70, 57, 183, 62, 220, 61, 20, 191, 74, 57, 24, 63, 247, 183, 116, 62, 59, 36, 177, 62, 171, 89, 156, 63, 154, 248, 165, 189, 200, 82, 191, 61, 183, 80, 119, 191, 139, 12, 202, 62, 155, 209, 18, 63, 147, 212, 131, 63, 136, 101, 189, 62, 237, 248, 207, 190, 129, 158, 214, 191, 207, 103, 85, 191, 105, 196, 25, 63, 58, 74, 199, 62, 163, 83, 150, 60, 13, 110, 158, 61, 26, 213, 19, 191, 188, 212, 251, 62, 160, 145, 223, 62, 108, 7, 97, 63, 179, 191, 228, 190, 16, 198, 161, 190, 197, 174, 13, 191, 226, 236, 61, 191, 224, 14, 232, 190, 89, 216, 15, 191, 74, 230, 8, 62, 104, 39, 106, 191, 163, 143, 174, 189, 95, 223, 89, 190, 146, 146, 206, 190, 111, 144, 39, 62, 190, 96, 22, 63, 228, 25, 104, 63, 15, 110, 87, 191, 224, 23, 148, 190, 70, 122, 124, 62, 16, 114, 239, 62, 152, 142, 191, 190, 204, 171, 229, 189, 97, 32, 208, 63, 134, 54, 218, 62, 220, 251, 167, 62, 205, 190, 89, 191, 140, 197, 72, 61, 121, 150, 126, 62, 252, 148, 164, 191, 237, 157, 205, 190};
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
                alignas(float) const unsigned char memory[] = {116, 43, 231, 190, 40, 55, 11, 63, 240, 46, 54, 60, 47, 241, 108, 63, 210, 170, 238, 190, 33, 246, 141, 189, 36, 185, 102, 188, 48, 227, 168, 190, 21, 177, 36, 62, 100, 235, 24, 63, 245, 10, 18, 190, 169, 88, 134, 62, 38, 139, 212, 190, 194, 221, 153, 190, 203, 189, 4, 62, 158, 161, 13, 191, 212, 19, 134, 61, 202, 18, 55, 190, 151, 214, 48, 191, 104, 184, 96, 187, 234, 8, 165, 62, 191, 211, 151, 189, 239, 231, 20, 62, 246, 130, 44, 189, 150, 88, 119, 60, 240, 150, 186, 190, 166, 140, 98, 60, 161, 186, 252, 190, 63, 93, 71, 189, 140, 146, 85, 61, 59, 31, 2, 62, 64, 249, 208, 62};
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
                alignas(float) const unsigned char memory[] = {193, 98, 21, 191, 206, 67, 145, 62, 112, 44, 174, 62, 214, 158, 48, 62, 184, 103, 154, 61, 19, 171, 144, 190, 209, 146, 142, 190, 81, 48, 104, 62, 50, 197, 165, 61, 147, 105, 211, 189, 24, 173, 152, 190, 61, 146, 36, 190, 94, 216, 22, 189, 52, 22, 66, 190, 71, 241, 161, 190, 56, 244, 48, 62, 0, 86, 67, 191, 16, 201, 153, 189, 108, 201, 204, 190, 50, 137, 49, 62, 132, 56, 223, 190, 149, 182, 176, 189, 148, 98, 47, 60, 41, 145, 223, 61, 216, 193, 15, 63, 26, 191, 51, 62, 98, 160, 117, 62, 165, 102, 60, 62, 210, 13, 48, 189, 218, 146, 21, 190, 219, 158, 137, 61, 36, 82, 170, 62, 146, 136, 68, 61, 232, 0, 20, 190, 219, 158, 238, 61, 92, 240, 60, 190, 240, 139, 213, 61, 239, 69, 214, 189, 1, 236, 228, 188, 130, 109, 219, 189, 194, 1, 245, 61, 210, 172, 84, 187, 129, 26, 172, 61, 133, 217, 7, 62, 144, 67, 5, 190, 213, 106, 6, 62, 1, 126, 194, 59, 55, 165, 46, 190, 219, 250, 159, 187, 25, 252, 9, 61, 186, 255, 172, 188, 43, 220, 199, 60, 235, 9, 174, 189, 255, 55, 7, 62, 76, 6, 143, 60, 148, 119, 118, 188, 54, 103, 73, 189, 16, 60, 168, 189, 35, 244, 34, 189, 156, 230, 235, 61, 233, 26, 3, 190, 2, 46, 22, 190, 234, 164, 63, 190, 253, 127, 27, 60, 35, 188, 208, 61, 204, 230, 148, 59, 100, 31, 25, 62, 25, 36, 253, 189, 72, 74, 176, 61, 46, 136, 76, 61, 40, 98, 28, 190, 171, 79, 192, 60, 92, 232, 2, 61, 115, 104, 235, 58, 130, 13, 17, 61, 170, 199, 36, 190, 31, 28, 17, 189, 250, 120, 29, 190, 170, 129, 224, 188, 230, 145, 189, 189, 145, 194, 150, 189, 159, 222, 226, 189, 109, 252, 11, 62, 232, 207, 24, 190, 193, 154, 190, 187, 109, 183, 68, 190, 92, 57, 240, 189, 238, 141, 184, 189, 62, 28, 83, 61, 53, 89, 93, 61, 172, 96, 158, 61, 180, 216, 0, 62, 109, 58, 36, 62, 187, 36, 43, 189, 192, 158, 52, 61, 96, 218, 62, 190, 195, 60, 5, 63, 176, 118, 29, 191, 17, 49, 154, 187, 182, 143, 15, 189, 242, 116, 131, 189, 255, 214, 109, 61, 180, 17, 222, 62, 140, 68, 52, 61, 28, 202, 9, 189, 202, 78, 161, 60, 162, 32, 72, 62, 40, 173, 49, 190, 29, 215, 33, 190, 234, 17, 77, 188, 57, 158, 120, 189, 137, 146, 141, 190, 82, 13, 114, 62, 38, 156, 101, 190, 77, 147, 208, 62, 103, 152, 28, 61, 203, 196, 108, 62, 24, 144, 211, 61, 238, 207, 129, 61, 20, 77, 165, 190, 138, 137, 192, 190, 17, 16, 166, 61, 131, 174, 6, 61, 39, 171, 21, 191, 156, 235, 2, 191, 94, 246, 36, 61, 65, 254, 24, 191, 144, 238, 87, 191, 67, 37, 133, 62, 89, 186, 243, 61, 60, 193, 45, 190, 122, 137, 150, 61, 197, 85, 40, 190, 51, 127, 12, 62, 154, 90, 34, 189, 232, 66, 175, 59, 131, 9, 245, 61, 87, 119, 10, 62, 127, 121, 222, 61, 111, 26, 141, 61, 88, 21, 113, 191, 103, 160, 17, 62, 8, 153, 9, 62, 139, 3, 74, 190, 2, 66, 58, 62, 251, 211, 116, 60, 43, 21, 248, 61, 81, 255, 252, 190, 238, 25, 106, 62, 9, 53, 24, 62, 207, 93, 91, 189, 135, 88, 210, 190, 235, 220, 96, 190, 74, 211, 177, 190, 181, 119, 76, 62, 110, 34, 197, 188, 165, 93, 85, 190, 142, 54, 18, 62, 158, 197, 40, 188, 61, 171, 112, 190, 206, 19, 237, 190, 254, 141, 90, 61, 37, 53, 79, 190, 86, 61, 88, 190, 11, 146, 113, 62, 200, 95, 136, 190, 174, 104, 111, 62, 250, 143, 19, 62, 235, 113, 128, 190, 98, 122, 140, 190, 38, 43, 136, 187, 181, 34, 61, 61, 38, 243, 14, 62, 150, 136, 62, 189, 254, 37, 210, 62, 135, 212, 151, 190, 226, 116, 67, 62, 73, 165, 237, 62, 143, 90, 166, 191, 49, 2, 50, 62, 112, 98, 204, 62, 78, 255, 211, 61, 226, 75, 36, 61, 73, 130, 66, 62, 255, 87, 187, 62, 54, 192, 211, 61, 2, 112, 206, 189, 68, 162, 166, 62, 83, 129, 137, 60, 186, 244, 140, 190, 199, 69, 49, 62, 46, 20, 164, 62, 53, 201, 24, 62, 197, 154, 28, 62, 217, 25, 194, 62, 200, 149, 232, 61, 114, 89, 69, 190, 138, 34, 1, 63, 73, 60, 29, 61, 152, 174, 244, 189, 194, 28, 228, 61, 61, 86, 110, 189, 163, 75, 26, 62, 192, 39, 119, 189, 147, 239, 9, 62, 210, 226, 104, 191, 151, 169, 150, 189, 161, 52, 206, 191, 57, 74, 158, 62, 87, 46, 116, 191, 172, 208, 217, 62, 95, 28, 69, 62, 113, 118, 225, 189, 193, 155, 13, 188, 63, 25, 114, 62, 142, 143, 221, 61, 55, 166, 169, 62, 138, 143, 247, 189, 169, 243, 30, 190, 34, 20, 21, 190, 4, 188, 217, 61, 250, 83, 76, 191, 187, 146, 37, 190, 53, 205, 205, 58, 228, 53, 159, 61, 169, 83, 135, 189, 237, 49, 210, 189, 180, 134, 252, 189, 249, 122, 141, 189, 156, 224, 239, 188, 76, 143, 12, 62, 13, 25, 67, 190, 75, 225, 175, 189, 176, 188, 8, 190, 59, 232, 128, 61, 87, 43, 55, 61, 70, 234, 119, 188, 186, 90, 140, 60, 55, 226, 246, 60, 50, 14, 225, 189, 244, 198, 21, 190, 97, 98, 57, 190, 251, 235, 66, 189, 217, 212, 165, 188, 72, 116, 25, 188, 115, 255, 173, 61, 97, 4, 147, 189, 238, 7, 134, 184, 220, 17, 243, 189, 107, 89, 12, 190, 49, 74, 156, 61, 192, 251, 131, 189, 31, 105, 197, 61, 247, 221, 67, 190, 239, 239, 41, 189, 18, 218, 148, 189, 48, 235, 33, 190, 2, 30, 132, 188, 68, 197, 214, 187, 98, 106, 69, 190, 46, 215, 129, 189, 0, 252, 97, 61, 244, 46, 249, 188, 68, 193, 213, 59, 115, 224, 188, 61, 245, 189, 162, 61, 88, 203, 215, 189, 208, 197, 23, 190, 86, 183, 11, 189, 219, 124, 248, 188, 113, 72, 11, 190, 80, 183, 26, 60, 63, 188, 165, 189, 16, 51, 188, 189, 108, 1, 27, 190, 122, 134, 58, 61, 116, 16, 187, 189, 157, 139, 170, 60, 187, 42, 18, 61, 17, 228, 14, 190, 11, 45, 207, 61, 193, 227, 153, 61, 122, 166, 4, 62, 170, 111, 209, 59, 196, 52, 112, 189, 161, 211, 113, 61, 111, 254, 163, 60, 132, 56, 145, 189, 17, 9, 148, 61, 102, 82, 193, 60, 38, 84, 65, 190, 83, 127, 51, 191, 105, 109, 253, 60, 238, 176, 105, 62, 199, 186, 135, 62, 74, 79, 190, 61, 153, 103, 185, 189, 25, 127, 41, 190, 240, 246, 194, 61, 61, 127, 117, 190, 237, 206, 149, 189, 185, 173, 103, 61, 17, 243, 78, 62, 99, 79, 190, 190, 191, 161, 48, 189, 255, 77, 48, 190, 70, 177, 169, 191, 220, 65, 230, 61, 48, 215, 11, 62, 147, 197, 49, 62, 141, 202, 188, 61, 173, 249, 202, 188, 21, 87, 138, 62, 211, 241, 143, 59, 160, 33, 138, 61, 156, 246, 64, 62, 91, 8, 11, 62, 169, 152, 55, 191, 10, 172, 217, 61, 125, 174, 142, 62, 163, 173, 251, 190, 6, 220, 2, 61, 248, 48, 180, 190, 158, 242, 76, 191, 164, 90, 164, 62, 1, 110, 107, 190, 114, 39, 226, 62, 172, 151, 171, 61, 81, 223, 180, 188, 227, 8, 254, 190, 83, 147, 9, 191, 93, 66, 210, 190, 231, 92, 222, 189, 92, 235, 28, 190, 71, 32, 85, 190, 191, 193, 195, 61, 4, 86, 129, 61, 97, 150, 205, 190, 251, 128, 33, 189, 206, 79, 236, 188, 42, 39, 51, 62, 254, 218, 230, 190, 106, 84, 75, 188, 145, 8, 199, 61, 244, 195, 144, 190, 218, 212, 50, 188, 175, 215, 76, 190, 253, 57, 6, 62, 77, 95, 175, 61, 135, 151, 8, 190, 176, 190, 86, 190, 122, 239, 139, 62, 121, 191, 139, 190, 67, 81, 131, 189, 104, 84, 128, 189, 67, 98, 157, 190, 212, 145, 152, 62, 226, 201, 80, 190, 215, 97, 162, 62, 40, 208, 213, 60, 48, 129, 70, 60, 117, 203, 188, 190, 83, 30, 236, 188, 252, 57, 199, 190, 199, 159, 191, 60, 3, 199, 90, 62, 138, 32, 137, 188, 20, 31, 132, 62, 213, 165, 118, 190, 131, 78, 76, 62, 237, 234, 151, 61, 167, 196, 10, 189, 96, 19, 185, 61, 107, 234, 9, 62, 142, 230, 181, 61, 167, 241, 88, 188, 204, 248, 2, 190, 151, 15, 0, 190, 239, 4, 23, 62, 97, 8, 118, 63, 168, 207, 189, 60, 137, 243, 34, 61, 148, 201, 95, 190, 113, 126, 129, 62, 235, 21, 138, 189, 65, 187, 42, 190, 71, 123, 1, 62, 3, 69, 133, 189, 247, 26, 146, 189, 44, 9, 6, 190, 146, 213, 1, 190, 35, 212, 8, 190, 145, 236, 4, 190, 236, 130, 13, 62, 174, 129, 80, 61, 181, 221, 13, 190, 21, 3, 156, 61, 54, 95, 180, 61, 247, 34, 194, 61, 229, 82, 32, 60, 118, 105, 249, 189, 140, 178, 196, 189, 62, 101, 42, 190, 251, 234, 156, 61, 70, 115, 217, 61, 135, 134, 33, 189, 138, 113, 142, 189, 123, 179, 248, 189, 37, 214, 174, 61, 37, 144, 17, 190, 172, 107, 27, 62, 135, 205, 120, 61, 23, 75, 32, 190, 7, 111, 12, 190, 20, 212, 248, 61, 134, 33, 228, 189, 169, 134, 183, 190, 97, 192, 156, 60, 221, 79, 99, 62, 207, 103, 97, 61, 173, 127, 134, 190, 95, 191, 11, 62, 80, 178, 65, 190, 216, 242, 184, 61, 252, 178, 232, 189, 188, 130, 143, 189, 195, 168, 73, 188, 177, 126, 105, 62, 109, 103, 142, 61, 61, 117, 155, 191, 171, 104, 130, 189, 5, 14, 209, 191, 151, 17, 216, 61, 8, 249, 160, 190, 7, 231, 83, 62, 179, 48, 15, 62, 82, 73, 208, 189, 250, 64, 239, 62, 251, 201, 151, 62, 137, 169, 146, 62, 149, 203, 165, 62, 104, 78, 12, 62, 231, 37, 242, 61, 239, 123, 193, 190, 120, 191, 93, 62, 97, 87, 162, 191, 235, 176, 91, 190, 67, 179, 144, 188, 207, 63, 202, 189, 79, 112, 124, 189, 107, 46, 147, 61, 90, 227, 37, 62, 115, 21, 57, 190, 236, 208, 154, 58, 10, 236, 189, 62, 195, 147, 4, 190, 247, 105, 15, 62, 145, 242, 160, 189, 244, 56, 54, 190, 44, 137, 168, 61, 176, 253, 125, 190, 222, 18, 3, 62, 0, 36, 197, 189, 44, 96, 167, 62, 90, 50, 43, 189, 47, 255, 193, 189, 243, 32, 65, 189, 3, 105, 127, 191, 64, 114, 148, 190, 233, 38, 56, 60, 207, 172, 186, 62, 90, 212, 62, 191, 176, 245, 19, 61, 99, 88, 208, 62, 10, 169, 61, 62, 22, 120, 52, 190, 240, 0, 71, 190, 108, 111, 243, 61, 44, 9, 34, 190, 9, 7, 160, 191, 226, 38, 169, 190, 48, 176, 114, 62, 19, 65, 207, 60, 91, 192, 25, 189, 38, 45, 194, 62, 91, 165, 224, 188, 4, 49, 137, 62, 13, 226, 102, 60, 84, 83, 103, 62, 28, 215, 89, 190, 85, 174, 47, 190, 190, 49, 234, 190, 78, 57, 194, 189, 226, 99, 252, 189, 167, 147, 174, 189, 106, 236, 94, 62, 20, 155, 12, 189, 211, 230, 132, 62, 143, 11, 10, 191, 90, 65, 90, 62, 104, 157, 124, 62, 73, 71, 220, 189, 67, 61, 5, 189, 103, 45, 28, 190, 129, 16, 121, 62, 89, 123, 79, 190, 216, 70, 242, 61, 96, 217, 48, 63, 42, 5, 116, 189, 157, 195, 29, 189, 115, 155, 56, 62, 173, 253, 140, 62, 250, 196, 4, 63, 114, 145, 243, 60, 122, 218, 192, 189, 111, 155, 38, 190, 53, 34, 224, 190, 133, 127, 225, 61, 184, 14, 183, 62, 119, 14, 204, 189, 126, 8, 219, 187, 123, 156, 210, 189, 224, 104, 140, 62, 17, 187, 131, 62, 221, 254, 34, 61, 73, 130, 35, 190, 16, 234, 99, 62, 193, 66, 231, 190, 135, 69, 129, 62, 153, 173, 178, 190, 239, 93, 169, 62, 58, 246, 150, 189, 24, 201, 119, 62, 245, 31, 23, 62, 120, 177, 73, 186, 209, 125, 15, 62, 74, 250, 128, 190, 181, 199, 15, 62, 112, 15, 113, 189, 117, 0, 64, 191, 172, 163, 17, 62, 177, 250, 49, 190, 134, 30, 106, 190, 83, 240, 225, 189, 142, 35, 185, 62, 207, 64, 117, 62, 132, 28, 133, 62, 8, 242, 138, 188, 153, 173, 100, 190, 114, 193, 19, 63, 183, 239, 37, 62, 158, 250, 141, 190, 76, 73, 85, 62, 189, 132, 86, 188, 170, 196, 163, 62, 67, 30, 32, 189, 135, 116, 136, 62, 139, 185, 92, 191, 177, 156, 120, 61, 106, 123, 163, 191, 182, 213, 68, 62, 158, 153, 67, 191, 222, 170, 203, 62, 250, 99, 58, 62, 18, 253, 58, 187, 147, 58, 24, 62, 110, 82, 9, 62, 189, 46, 131, 188, 24, 73, 247, 61, 190, 83, 108, 60, 120, 169, 198, 189, 31, 71, 135, 190, 26, 194, 77, 62, 71, 42, 32, 191, 150, 62, 134, 190, 117, 250, 39, 189, 31, 188, 186, 190, 112, 202, 197, 61, 68, 71, 42, 62, 22, 11, 186, 60, 195, 185, 68, 62, 49, 186, 171, 190, 80, 6, 199, 189, 72, 234, 0, 62, 125, 23, 148, 61, 212, 4, 84, 189, 16, 22, 130, 190, 217, 36, 74, 190, 222, 247, 80, 189, 52, 5, 143, 61, 76, 101, 90, 190, 83, 186, 151, 62, 79, 73, 78, 60, 212, 236, 181, 62, 209, 49, 50, 190, 28, 176, 139, 189, 16, 215, 114, 62, 48, 15, 130, 189, 82, 71, 3, 62, 36, 179, 97, 190, 60, 180, 151, 62, 5, 29, 72, 189, 223, 24, 60, 62, 179, 26, 195, 62, 19, 127, 73, 190, 37, 100, 81, 62, 209, 131, 128, 62, 80, 126, 254, 60, 135, 215, 220, 190, 237, 115, 198, 61, 109, 113, 179, 62, 205, 180, 29, 61, 74, 84, 124, 190, 225, 174, 120, 190, 220, 234, 80, 62, 217, 104, 143, 62, 36, 10, 133, 59, 105, 57, 5, 60, 87, 224, 165, 59, 166, 37, 171, 62, 154, 47, 214, 190, 239, 72, 75, 62, 186, 203, 10, 190, 63, 44, 124, 62, 187, 12, 47, 190, 56, 117, 223, 60, 14, 110, 127, 190, 227, 31, 236, 191, 175, 43, 234, 61, 37, 171, 41, 190, 62, 46, 48, 190, 103, 146, 141, 191, 21, 197, 115, 62, 162, 38, 16, 63, 3, 87, 54, 62, 252, 51, 39, 62, 54, 50, 87, 191, 91, 6, 141, 61, 122, 78, 122, 61, 20, 253, 144, 191, 90, 229, 117, 62, 13, 79, 24, 190, 110, 55, 248, 187, 128, 22, 21, 62, 126, 172, 21, 62, 37, 88, 29, 62, 92, 223, 161, 190, 9, 174, 238, 190, 249, 109, 135, 190, 122, 69, 6, 190, 243, 203, 157, 62, 156, 223, 6, 61, 149, 153, 80, 62, 210, 36, 22, 62, 113, 18, 162, 187, 52, 78, 247, 190, 180, 13, 72, 62, 106, 214, 149, 189, 102, 193, 7, 62, 9, 202, 49, 62, 173, 31, 195, 189, 76, 19, 165, 186, 231, 61, 174, 60, 29, 40, 224, 61, 165, 205, 67, 190, 110, 232, 79, 61, 3, 247, 161, 189, 62, 62, 0, 189, 241, 67, 218, 61, 189, 129, 16, 62, 103, 38, 4, 191, 140, 116, 242, 189, 237, 0, 76, 190, 154, 142, 34, 62, 109, 70, 140, 62, 55, 217, 189, 61, 117, 59, 16, 62, 116, 115, 87, 190, 90, 7, 245, 62, 233, 10, 244, 60, 113, 246, 123, 61, 63, 54, 14, 190, 131, 235, 170, 190, 121, 125, 84, 62, 146, 56, 209, 190, 122, 112, 150, 60, 21, 92, 243, 189, 147, 237, 38, 61, 141, 229, 102, 190, 183, 233, 159, 62, 204, 211, 65, 190, 50, 62, 180, 191, 132, 52, 6, 61, 213, 90, 127, 190, 4, 226, 124, 190, 235, 222, 158, 191, 172, 130, 109, 62, 175, 134, 218, 60, 84, 22, 77, 62, 66, 101, 230, 62, 195, 144, 7, 191, 5, 98, 22, 62, 240, 100, 144, 62, 99, 82, 135, 190, 217, 123, 62, 190, 76, 29, 184, 62, 145, 90, 38, 191, 222, 245, 86, 191, 125, 118, 174, 62, 62, 236, 252, 189, 55, 192, 3, 63, 28, 112, 66, 190, 54, 225, 46, 189, 207, 178, 134, 190, 246, 191, 146, 60, 34, 163, 77, 191, 9, 96, 31, 190, 145, 7, 158, 190, 185, 144, 214, 62, 110, 139, 215, 190, 14, 129, 159, 189, 10, 98, 186, 62, 186, 180, 179, 191, 57, 155, 84, 187, 95, 156, 157, 62, 112, 51, 35, 59, 104, 132, 175, 61, 215, 165, 27, 62, 175, 62, 189, 61, 212, 79, 160, 189, 111, 157, 83, 190, 82, 60, 230, 62, 236, 226, 147, 61, 111, 31, 23, 191, 243, 109, 205, 62, 8, 101, 206, 62, 72, 191, 148, 189, 241, 18, 127, 60, 124, 140, 133, 61, 229, 160, 31, 62, 222, 28, 123, 188, 122, 49, 12, 190, 251, 166, 32, 191, 95, 83, 155, 190, 160, 119, 142, 190, 83, 28, 40, 61, 59, 71, 15, 190, 215, 173, 177, 62, 238, 49, 126, 62, 214, 46, 173, 60, 238, 186, 214, 189, 91, 77, 9, 62, 139, 112, 28, 62, 143, 72, 84, 190, 103, 154, 238, 61, 193, 212, 198, 61, 49, 199, 100, 190, 153, 102, 174, 190, 149, 9, 60, 188, 188, 127, 73, 62, 98, 174, 196, 190, 115, 40, 21, 62, 98, 169, 34, 190, 45, 152, 50, 62, 54, 188, 75, 62, 62, 137, 150, 61, 15, 23, 146, 190, 152, 165, 91, 190, 171, 13, 74, 190, 120, 74, 74, 189, 23, 155, 62, 62, 221, 206, 33, 62, 255, 168, 170, 62, 3, 226, 22, 190, 59, 116, 152, 62, 107, 68, 77, 62, 178, 1, 26, 62, 73, 41, 106, 60, 76, 212, 233, 189, 207, 90, 51, 189, 145, 171, 232, 190, 69, 189, 135, 188, 115, 204, 148, 61, 124, 177, 131, 62, 200, 205, 16, 190, 163, 183, 3, 62, 67, 112, 132, 190, 51, 105, 181, 191, 74, 24, 157, 62, 248, 235, 149, 189, 187, 34, 233, 189, 251, 199, 149, 191, 197, 118, 47, 62, 86, 189, 254, 61, 195, 112, 60, 62, 74, 80, 189, 62, 224, 220, 253, 189, 247, 135, 23, 190, 126, 11, 239, 61, 20, 122, 224, 189, 242, 228, 196, 190, 218, 59, 188, 188, 227, 181, 216, 61, 73, 13, 101, 62, 117, 29, 216, 60, 58, 45, 23, 61, 139, 23, 29, 62, 167, 40, 8, 189, 71, 188, 107, 62, 239, 115, 204, 189, 100, 134, 16, 190, 68, 98, 151, 61, 248, 119, 171, 189, 222, 178, 224, 61, 198, 121, 133, 189, 32, 247, 117, 62, 253, 102, 96, 190, 70, 75, 3, 190, 187, 106, 199, 190, 65, 138, 228, 61, 142, 247, 171, 59, 75, 97, 115, 190, 249, 170, 225, 190, 124, 243, 201, 61, 92, 87, 46, 62, 92, 135, 43, 190, 81, 240, 234, 61, 216, 61, 137, 190, 245, 140, 37, 61, 66, 175, 242, 61, 212, 224, 252, 190, 225, 115, 202, 61, 4, 117, 86, 190, 158, 42, 255, 61, 87, 65, 235, 190, 127, 244, 30, 191, 130, 171, 93, 58, 221, 17, 124, 190, 247, 165, 155, 62, 179, 88, 47, 189, 236, 44, 204, 190, 92, 255, 184, 190, 158, 108, 42, 190, 88, 70, 85, 190, 170, 28, 217, 189, 199, 124, 63, 190, 187, 144, 68, 62, 227, 98, 166, 189, 76, 48, 85, 189, 23, 223, 179, 62, 53, 155, 144, 61, 216, 43, 85, 62, 63, 5, 138, 61, 197, 209, 10, 190, 10, 84, 26, 62, 99, 189, 248, 189, 177, 244, 169, 60, 21, 123, 142, 60, 216, 205, 90, 190, 65, 10, 85, 61, 104, 201, 168, 61, 112, 221, 34, 190, 95, 29, 230, 60, 157, 55, 143, 62, 54, 9, 223, 188, 64, 207, 6, 62, 45, 44, 38, 60, 158, 79, 124, 187, 148, 30, 199, 190, 43, 169, 144, 62, 204, 16, 191, 189, 103, 33, 154, 61, 163, 28, 188, 188, 11, 180, 6, 61, 31, 253, 43, 61, 153, 211, 43, 61, 26, 77, 71, 62, 107, 190, 198, 61, 213, 74, 80, 62, 213, 240, 241, 189, 60, 249, 227, 62, 33, 203, 56, 190, 239, 106, 15, 61, 98, 184, 126, 190, 159, 79, 174, 62, 46, 75, 130, 189, 211, 193, 50, 62, 8, 130, 21, 190, 147, 180, 138, 190, 211, 246, 80, 190, 218, 5, 226, 188, 182, 8, 9, 191, 9, 88, 44, 62, 94, 31, 117, 190, 152, 140, 68, 190, 12, 204, 27, 190, 32, 168, 132, 188, 116, 48, 45, 190, 49, 243, 25, 191, 94, 121, 244, 190, 70, 185, 153, 62, 252, 103, 10, 191, 188, 221, 212, 189, 208, 5, 94, 190, 35, 182, 146, 189, 233, 98, 135, 191, 95, 164, 91, 190, 90, 47, 198, 190, 6, 119, 61, 190, 68, 107, 164, 61, 18, 176, 208, 61, 36, 239, 33, 190, 223, 139, 245, 190, 111, 7, 150, 61, 126, 187, 253, 59, 132, 189, 15, 62, 209, 17, 47, 62, 198, 82, 33, 189, 128, 45, 221, 61, 128, 250, 22, 62, 103, 230, 63, 190, 28, 121, 215, 190, 89, 206, 73, 190, 33, 27, 22, 63, 15, 22, 154, 189, 67, 65, 135, 60, 91, 167, 204, 61, 210, 134, 17, 61, 56, 4, 21, 62, 232, 24, 170, 189, 131, 65, 92, 189, 129, 13, 90, 61, 179, 116, 42, 61, 198, 176, 39, 190, 212, 200, 138, 61, 182, 45, 24, 190, 207, 124, 17, 190, 150, 130, 35, 61, 54, 7, 93, 189, 59, 28, 196, 189, 78, 115, 31, 190, 212, 8, 23, 62, 3, 81, 72, 190, 34, 93, 136, 61, 230, 111, 209, 186, 89, 54, 233, 189, 28, 13, 18, 62, 4, 218, 53, 190, 82, 250, 27, 190, 69, 71, 7, 190, 60, 123, 6, 62, 134, 136, 25, 189, 92, 93, 27, 189, 98, 235, 184, 61, 26, 150, 158, 61, 249, 16, 220, 189, 43, 70, 113, 189, 164, 68, 58, 190, 228, 201, 182, 61, 245, 17, 129, 61, 80, 13, 215, 62, 107, 132, 1, 188, 204, 44, 26, 62, 248, 144, 32, 62, 130, 226, 207, 190, 31, 173, 34, 62, 202, 157, 124, 59, 78, 233, 26, 190, 18, 143, 11, 62, 156, 8, 150, 62, 74, 194, 67, 62, 244, 117, 92, 62, 22, 149, 75, 62, 73, 170, 6, 190, 206, 51, 113, 62, 243, 214, 96, 190, 211, 58, 201, 62, 111, 89, 191, 189, 179, 69, 85, 62, 252, 95, 86, 190, 69, 173, 53, 61, 170, 228, 101, 62, 106, 117, 16, 62, 168, 22, 144, 54, 90, 207, 54, 190, 252, 145, 156, 189, 187, 69, 227, 61, 156, 187, 30, 191, 73, 147, 142, 59, 180, 177, 202, 60, 162, 140, 24, 189, 12, 27, 144, 189, 148, 30, 128, 189, 164, 240, 152, 61, 239, 89, 41, 191, 29, 69, 16, 191, 130, 149, 162, 62, 189, 226, 94, 190, 87, 48, 243, 189, 16, 104, 232, 60, 77, 182, 94, 189, 40, 136, 159, 191, 228, 69, 205, 62, 51, 82, 209, 190, 147, 13, 223, 189, 247, 93, 64, 190, 90, 120, 203, 61, 99, 13, 23, 188, 235, 133, 249, 190, 105, 254, 104, 62, 195, 15, 166, 61, 18, 91, 173, 60, 91, 54, 200, 61, 110, 5, 249, 61, 118, 87, 65, 61, 104, 95, 138, 60, 119, 127, 94, 190, 91, 173, 191, 190, 146, 175, 190, 60, 169, 149, 41, 63, 201, 2, 77, 189, 199, 242, 22, 62, 99, 139, 247, 61, 13, 129, 20, 62};
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
                alignas(float) const unsigned char memory[] = {79, 192, 34, 62, 192, 128, 168, 189, 61, 25, 87, 61, 64, 160, 137, 190, 24, 149, 184, 189, 184, 96, 95, 62, 15, 53, 244, 61, 66, 128, 40, 60, 86, 210, 39, 190, 198, 114, 23, 62, 93, 110, 4, 189, 7, 161, 36, 190, 141, 108, 176, 189, 171, 23, 61, 62, 91, 220, 194, 61, 191, 50, 35, 190, 202, 38, 249, 188, 10, 178, 76, 62, 82, 152, 22, 61, 59, 123, 44, 62, 129, 180, 219, 189, 119, 154, 214, 61, 206, 27, 73, 62, 213, 17, 33, 190, 5, 151, 180, 61, 146, 101, 93, 189, 34, 162, 77, 60, 220, 63, 174, 61, 238, 131, 12, 190, 38, 132, 0, 189, 51, 147, 128, 188, 153, 142, 20, 189};
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
                alignas(float) const unsigned char memory[] = {76, 160, 191, 190, 246, 132, 4, 190, 129, 28, 175, 61, 117, 227, 61, 63, 41, 82, 126, 190, 63, 3, 169, 62, 208, 247, 180, 190, 36, 228, 200, 189, 243, 121, 146, 61, 0, 195, 36, 62, 115, 92, 186, 62, 44, 173, 69, 62, 71, 16, 128, 189, 96, 179, 207, 190, 214, 209, 230, 62, 14, 27, 213, 62, 152, 141, 5, 191, 138, 121, 9, 191, 209, 98, 95, 62, 70, 78, 147, 63, 167, 128, 124, 62, 61, 38, 8, 63, 199, 55, 238, 62, 204, 167, 131, 62, 16, 132, 109, 62, 230, 121, 176, 190, 164, 123, 168, 62, 149, 138, 128, 190, 222, 140, 60, 191, 147, 1, 194, 189, 50, 155, 169, 190, 152, 238, 82, 191, 90, 82, 33, 189, 97, 65, 140, 61, 37, 140, 103, 61, 219, 128, 163, 62, 145, 251, 58, 190, 110, 217, 252, 189, 249, 184, 132, 190, 123, 218, 238, 61, 110, 204, 203, 60, 116, 51, 123, 190, 193, 239, 7, 189, 149, 29, 209, 62, 118, 133, 226, 61, 81, 148, 40, 188, 150, 230, 179, 61, 182, 159, 95, 62, 185, 89, 74, 61, 219, 123, 4, 190, 168, 35, 145, 62, 210, 188, 199, 188, 236, 130, 46, 62, 156, 244, 149, 189, 187, 169, 166, 190, 92, 52, 83, 62, 167, 203, 146, 190, 82, 46, 187, 60, 111, 48, 158, 188, 134, 194, 150, 190, 60, 202, 72, 62, 209, 173, 79, 189, 184, 177, 218, 60, 42, 213, 171, 59};
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
                alignas(float) const unsigned char memory[] = {136, 223, 39, 190, 155, 167, 90, 190};
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
    alignas(float) const unsigned char memory[] = {127, 128, 223, 191, 121, 111, 151, 190, 243, 81, 105, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {94, 138, 41, 192, 132, 187, 251, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0029/steps/000000000010000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
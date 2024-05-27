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
                alignas(float) const unsigned char memory[] = {84, 119, 32, 63, 29, 186, 141, 61, 96, 97, 53, 191, 56, 17, 215, 190, 214, 101, 255, 62, 42, 207, 17, 191, 136, 187, 31, 190, 205, 94, 176, 62, 133, 252, 95, 191, 154, 170, 90, 62, 126, 161, 19, 63, 135, 33, 228, 62, 10, 157, 180, 62, 19, 179, 59, 61, 203, 178, 12, 191, 59, 79, 253, 190, 59, 170, 230, 62, 114, 2, 43, 191, 53, 99, 211, 62, 123, 67, 92, 62, 110, 177, 223, 190, 216, 178, 165, 190, 167, 173, 91, 189, 9, 188, 9, 190, 106, 101, 251, 62, 34, 105, 112, 191, 62, 197, 144, 190, 99, 33, 230, 62, 185, 144, 41, 191, 81, 51, 68, 190, 137, 161, 97, 61, 43, 7, 24, 63, 231, 21, 19, 191, 19, 130, 67, 191, 78, 226, 113, 190, 201, 148, 141, 61, 143, 223, 226, 190, 232, 94, 34, 63, 44, 102, 7, 62, 8, 101, 246, 62, 25, 118, 81, 63, 35, 118, 72, 62, 64, 208, 157, 62, 234, 246, 153, 190, 35, 16, 8, 191, 196, 7, 116, 63, 80, 58, 202, 62, 190, 160, 82, 62, 167, 167, 70, 191, 201, 182, 34, 191, 143, 138, 5, 62, 230, 200, 29, 191, 43, 135, 121, 62, 195, 76, 227, 62, 62, 42, 52, 63, 114, 49, 46, 187, 214, 92, 198, 190, 24, 123, 239, 190, 43, 221, 214, 61, 165, 225, 5, 63, 104, 209, 160, 189, 172, 165, 229, 190, 156, 250, 199, 190, 179, 74, 254, 190, 173, 244, 70, 191, 56, 207, 4, 191, 236, 96, 13, 63, 135, 101, 0, 191, 18, 107, 123, 189, 237, 179, 207, 62, 23, 109, 134, 191, 71, 199, 175, 190, 99, 251, 17, 63, 60, 109, 4, 191, 156, 62, 83, 62, 175, 121, 212, 62, 159, 214, 79, 63, 16, 21, 187, 62, 29, 157, 228, 190, 62, 57, 67, 63, 253, 253, 32, 62, 146, 119, 69, 190, 249, 43, 34, 191, 128, 41, 8, 191, 251, 128, 23, 63, 140, 28, 50, 63, 65, 103, 216, 62, 60, 0, 193, 62, 126, 231, 141, 62, 106, 245, 197, 62, 156, 124, 12, 63, 53, 39, 46, 191, 121, 225, 169, 189, 233, 102, 155, 62, 143, 249, 103, 63, 10, 237, 238, 62};
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
                alignas(float) const unsigned char memory[] = {52, 111, 166, 190, 114, 225, 154, 190, 210, 185, 35, 188, 93, 64, 56, 63, 180, 139, 168, 62, 58, 113, 169, 61, 186, 108, 159, 189, 166, 187, 104, 61, 185, 229, 244, 62, 70, 88, 110, 61, 156, 20, 6, 62, 61, 184, 185, 190, 151, 172, 2, 63, 121, 240, 4, 62, 103, 205, 140, 190, 172, 105, 48, 190, 231, 105, 24, 63, 158, 90, 200, 62, 71, 51, 36, 63, 104, 61, 24, 191, 214, 51, 151, 62, 254, 24, 191, 190, 136, 115, 40, 63, 141, 72, 31, 190, 178, 8, 8, 190, 185, 135, 250, 61, 223, 252, 47, 63, 62, 29, 181, 189, 189, 15, 32, 191, 17, 233, 185, 190, 219, 44, 54, 62, 251, 78, 254, 189};
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
                alignas(float) const unsigned char memory[] = {81, 123, 233, 189, 74, 215, 165, 190, 139, 23, 216, 190, 143, 8, 245, 61, 160, 110, 152, 189, 193, 9, 2, 191, 206, 211, 22, 190, 207, 163, 32, 189, 108, 224, 239, 189, 173, 30, 58, 190, 182, 177, 206, 190, 177, 176, 189, 62, 230, 113, 168, 187, 242, 102, 51, 190, 233, 42, 5, 190, 183, 219, 60, 190, 154, 158, 99, 62, 255, 101, 70, 62, 56, 69, 164, 189, 209, 11, 179, 61, 50, 230, 30, 190, 74, 107, 177, 190, 76, 96, 157, 188, 7, 55, 181, 190, 141, 244, 10, 191, 65, 117, 26, 190, 169, 72, 31, 60, 104, 137, 117, 190, 130, 209, 233, 190, 89, 74, 143, 190, 64, 0, 79, 190, 8, 165, 20, 190, 167, 102, 146, 189, 169, 143, 13, 62, 12, 131, 91, 62, 35, 147, 5, 62, 66, 77, 17, 188, 212, 170, 28, 62, 153, 10, 130, 61, 125, 33, 13, 190, 227, 175, 88, 189, 126, 174, 171, 189, 92, 149, 49, 62, 90, 66, 203, 188, 251, 189, 85, 62, 59, 62, 129, 188, 97, 180, 35, 190, 109, 227, 224, 190, 68, 95, 115, 190, 157, 252, 215, 61, 228, 241, 29, 190, 165, 186, 248, 188, 126, 21, 170, 189, 230, 6, 112, 188, 79, 199, 255, 190, 182, 105, 12, 62, 168, 226, 40, 61, 225, 249, 160, 60, 28, 103, 45, 62, 34, 21, 170, 60, 28, 228, 1, 190, 11, 206, 11, 62, 154, 158, 30, 189, 139, 177, 34, 62, 204, 204, 196, 190, 15, 151, 13, 63, 91, 7, 61, 60, 23, 241, 223, 60, 2, 4, 104, 62, 111, 50, 72, 189, 172, 151, 159, 190, 200, 212, 45, 62, 120, 168, 31, 190, 113, 207, 139, 190, 34, 110, 111, 62, 19, 232, 65, 190, 208, 22, 156, 61, 177, 61, 21, 62, 129, 222, 138, 190, 190, 4, 32, 63, 41, 102, 11, 62, 58, 139, 177, 188, 168, 239, 162, 62, 189, 157, 81, 190, 80, 173, 207, 189, 87, 240, 83, 189, 24, 132, 71, 62, 189, 93, 192, 190, 161, 93, 136, 62, 22, 143, 7, 62, 182, 148, 142, 61, 26, 115, 94, 189, 70, 62, 165, 188, 199, 20, 199, 189, 105, 30, 142, 61, 70, 230, 72, 61, 140, 148, 243, 59, 25, 20, 30, 190, 0, 70, 235, 61, 241, 1, 214, 61, 45, 95, 32, 190, 89, 35, 187, 187, 248, 146, 111, 189, 187, 111, 22, 190, 150, 112, 241, 61, 247, 35, 64, 190, 112, 48, 8, 190, 211, 238, 156, 61, 45, 21, 14, 190, 97, 180, 234, 188, 194, 10, 192, 61, 47, 156, 13, 62, 93, 99, 177, 189, 35, 222, 33, 187, 173, 98, 242, 61, 159, 163, 128, 61, 151, 107, 153, 189, 213, 124, 0, 190, 181, 67, 69, 190, 22, 225, 31, 190, 56, 193, 225, 189, 14, 132, 154, 189, 192, 89, 215, 188, 228, 202, 72, 61, 218, 117, 115, 60, 14, 111, 25, 189, 13, 84, 61, 190, 125, 194, 124, 189, 217, 204, 33, 189, 218, 121, 26, 62, 67, 242, 219, 61, 229, 207, 93, 61, 128, 223, 244, 61, 13, 108, 23, 62, 254, 166, 112, 188, 123, 190, 235, 61, 25, 176, 122, 61, 233, 204, 133, 190, 205, 206, 98, 62, 248, 118, 216, 59, 180, 154, 60, 190, 48, 167, 74, 62, 60, 2, 239, 188, 23, 229, 197, 62, 211, 100, 3, 190, 99, 35, 182, 190, 1, 142, 143, 62, 240, 160, 219, 190, 200, 181, 49, 62, 195, 104, 115, 62, 241, 222, 144, 62, 234, 175, 229, 190, 54, 93, 168, 189, 119, 224, 156, 61, 54, 222, 57, 190, 248, 44, 61, 62, 223, 249, 56, 190, 152, 11, 20, 190, 83, 67, 181, 189, 70, 55, 45, 62, 84, 95, 119, 190, 45, 86, 228, 61, 74, 244, 237, 189, 152, 241, 2, 62, 194, 196, 124, 62, 255, 21, 25, 62, 28, 163, 68, 61, 164, 88, 89, 189, 237, 80, 24, 62, 124, 135, 20, 190, 86, 191, 72, 62, 207, 164, 226, 189, 128, 47, 17, 62, 102, 128, 140, 61, 12, 206, 152, 190, 146, 43, 238, 62, 90, 100, 109, 61, 229, 138, 161, 61, 186, 162, 202, 62, 119, 234, 2, 62, 117, 130, 9, 190, 157, 7, 7, 188, 229, 89, 193, 62, 195, 13, 24, 191, 245, 245, 0, 61, 236, 178, 128, 60, 51, 50, 64, 61, 31, 129, 23, 190, 158, 149, 197, 189, 32, 30, 177, 189, 178, 229, 123, 61, 87, 71, 10, 62, 117, 152, 24, 62, 169, 63, 136, 190, 57, 56, 1, 62, 152, 0, 53, 58, 47, 185, 33, 62, 49, 2, 191, 61, 63, 100, 198, 189, 7, 118, 65, 61, 128, 158, 248, 60, 86, 182, 29, 189, 85, 164, 228, 189, 205, 47, 104, 61, 118, 86, 3, 191, 212, 242, 238, 61, 117, 203, 203, 189, 49, 226, 32, 62, 111, 187, 20, 189, 38, 87, 106, 189, 159, 37, 13, 62, 132, 123, 30, 190, 253, 84, 186, 189, 60, 236, 197, 61, 17, 36, 251, 61, 121, 241, 141, 189, 197, 22, 209, 62, 59, 49, 175, 189, 66, 20, 176, 190, 102, 83, 37, 62, 214, 186, 60, 190, 68, 139, 29, 189, 174, 212, 127, 62, 154, 213, 212, 59, 27, 57, 217, 61, 196, 188, 194, 189, 253, 34, 168, 61, 190, 103, 149, 189, 161, 247, 187, 189, 234, 172, 250, 189, 173, 82, 9, 190, 12, 18, 196, 186, 131, 251, 106, 188, 57, 75, 40, 190, 143, 88, 160, 60, 57, 0, 230, 61, 33, 177, 181, 61, 187, 14, 185, 61, 171, 47, 133, 189, 215, 183, 127, 61, 41, 88, 143, 61, 120, 203, 239, 189, 192, 149, 159, 189, 5, 35, 130, 189, 90, 112, 165, 189, 112, 183, 155, 61, 224, 243, 223, 189, 149, 53, 148, 60, 213, 137, 211, 189, 17, 134, 163, 189, 73, 74, 28, 190, 93, 207, 26, 61, 136, 164, 145, 188, 37, 205, 15, 62, 0, 236, 45, 62, 65, 116, 13, 62, 236, 177, 24, 60, 104, 72, 88, 60, 186, 208, 40, 190, 180, 53, 161, 187, 15, 199, 11, 190, 237, 71, 139, 189, 131, 184, 21, 62, 13, 79, 55, 190, 137, 192, 42, 190, 41, 217, 145, 61, 201, 220, 249, 61, 85, 73, 146, 61, 176, 1, 219, 189, 167, 51, 126, 61, 166, 105, 5, 62, 128, 160, 33, 62, 79, 23, 114, 61, 43, 226, 152, 61, 190, 35, 228, 60, 16, 213, 227, 189, 221, 165, 63, 189, 46, 154, 132, 189, 129, 132, 191, 59, 49, 79, 3, 62, 188, 213, 142, 189, 253, 74, 40, 190, 117, 102, 249, 60, 76, 54, 217, 189, 45, 39, 66, 61, 191, 14, 15, 62, 213, 224, 246, 189, 40, 252, 42, 190, 216, 57, 60, 62, 158, 227, 35, 190, 230, 246, 159, 61, 245, 128, 34, 62, 236, 43, 161, 189, 255, 152, 135, 189, 61, 194, 74, 62, 223, 224, 20, 62, 231, 11, 125, 60, 103, 230, 236, 61, 39, 20, 70, 190, 127, 150, 223, 189, 230, 236, 209, 188, 159, 169, 72, 61, 197, 195, 58, 62, 150, 237, 196, 190, 23, 4, 138, 189, 193, 18, 7, 61, 201, 212, 165, 61, 221, 98, 215, 189, 178, 126, 43, 62, 224, 136, 147, 61, 17, 51, 57, 190, 71, 145, 204, 62, 62, 253, 236, 60, 203, 91, 66, 59, 87, 159, 18, 62, 9, 136, 124, 189, 60, 214, 161, 61, 152, 22, 138, 60, 222, 169, 60, 62, 205, 233, 22, 61, 160, 6, 64, 189, 218, 175, 184, 190, 178, 140, 64, 190, 59, 148, 136, 188, 252, 225, 230, 190, 2, 200, 157, 189, 4, 73, 22, 188, 232, 26, 134, 61, 143, 242, 180, 189, 199, 48, 16, 62, 21, 80, 242, 190, 251, 141, 179, 61, 11, 109, 138, 189, 141, 63, 85, 190, 171, 191, 65, 60, 64, 216, 149, 61, 21, 231, 87, 62, 62, 217, 65, 62, 170, 84, 83, 190, 246, 235, 91, 190, 175, 4, 240, 189, 153, 154, 180, 190, 90, 134, 116, 62, 18, 50, 40, 190, 60, 212, 144, 62, 176, 121, 192, 190, 132, 199, 175, 61, 112, 94, 48, 190, 206, 178, 62, 190, 191, 96, 41, 60, 134, 7, 170, 62, 151, 52, 107, 190, 49, 221, 158, 61, 144, 237, 176, 187, 130, 169, 157, 61, 98, 115, 78, 190, 139, 121, 48, 190, 50, 173, 95, 189, 32, 180, 163, 61, 104, 95, 243, 189, 122, 156, 247, 189, 122, 249, 204, 61, 121, 245, 160, 187, 35, 180, 45, 188, 68, 51, 7, 190, 225, 221, 133, 61, 87, 56, 141, 61, 141, 78, 159, 189, 205, 62, 30, 62, 116, 121, 10, 62, 15, 29, 250, 189, 168, 155, 113, 61, 110, 213, 233, 189, 15, 104, 10, 61, 149, 11, 220, 61, 118, 217, 134, 187, 120, 107, 15, 190, 173, 17, 214, 61, 47, 138, 254, 189, 80, 35, 183, 188, 127, 133, 72, 60, 100, 156, 63, 190, 181, 159, 158, 190, 156, 249, 153, 189, 153, 28, 164, 188, 88, 132, 121, 190, 105, 119, 179, 190, 226, 39, 62, 61, 52, 125, 64, 62, 54, 206, 27, 191, 253, 204, 122, 189, 94, 164, 86, 61, 229, 142, 178, 62, 108, 242, 93, 190, 96, 230, 227, 190, 174, 180, 62, 62, 0, 140, 218, 189, 31, 227, 178, 190, 237, 175, 94, 61, 89, 28, 100, 190, 173, 67, 62, 62, 154, 11, 110, 62, 48, 80, 199, 59, 9, 99, 156, 60, 78, 145, 81, 190, 19, 240, 173, 190, 44, 227, 51, 62, 146, 19, 2, 62, 214, 157, 10, 189, 74, 70, 176, 190, 220, 7, 2, 190, 250, 50, 54, 190, 196, 241, 137, 190, 112, 70, 196, 190, 92, 115, 229, 189, 217, 120, 82, 190, 55, 102, 58, 190, 130, 120, 227, 190, 54, 188, 234, 190, 150, 63, 128, 62, 198, 140, 181, 191, 52, 164, 137, 190, 30, 180, 125, 188, 87, 64, 44, 62, 184, 79, 14, 191, 183, 123, 165, 62, 39, 138, 74, 191, 87, 226, 146, 62, 153, 15, 183, 62, 166, 52, 174, 190, 184, 13, 201, 188, 129, 228, 195, 190, 77, 112, 169, 62, 87, 7, 127, 62, 83, 196, 74, 191, 164, 68, 132, 190, 3, 143, 212, 188, 69, 76, 14, 191, 218, 113, 114, 190, 84, 140, 118, 189, 107, 55, 160, 190, 69, 253, 99, 190, 14, 197, 22, 63, 137, 38, 4, 191, 223, 27, 105, 190, 195, 139, 62, 190, 146, 227, 76, 190, 133, 105, 169, 190, 47, 228, 54, 59, 150, 182, 81, 63, 51, 7, 11, 62, 196, 86, 83, 61, 205, 123, 169, 61, 254, 244, 127, 187, 154, 42, 35, 190, 109, 22, 118, 190, 35, 139, 56, 189, 78, 55, 72, 190, 213, 87, 179, 62, 75, 137, 0, 191, 230, 116, 187, 61, 252, 231, 137, 189, 243, 140, 117, 190, 122, 129, 21, 63, 159, 245, 81, 188, 83, 117, 82, 62, 177, 21, 131, 61, 236, 92, 140, 189, 143, 107, 199, 190, 41, 146, 152, 190, 134, 60, 10, 62, 14, 247, 205, 190, 231, 130, 38, 190, 237, 208, 235, 61, 56, 164, 151, 189, 167, 27, 214, 190, 202, 99, 85, 62, 188, 217, 154, 61, 243, 114, 167, 190, 109, 140, 73, 62, 122, 16, 230, 61, 3, 157, 3, 188, 198, 94, 243, 188, 163, 93, 150, 189, 50, 254, 18, 190, 144, 30, 51, 190, 160, 235, 108, 61, 48, 93, 150, 189, 14, 181, 186, 62, 168, 146, 151, 62, 128, 147, 96, 61, 192, 130, 169, 190, 205, 223, 206, 190, 93, 135, 206, 190, 112, 79, 36, 62, 168, 141, 109, 190, 155, 71, 187, 61, 165, 226, 29, 62, 127, 97, 8, 62, 54, 16, 240, 61, 156, 233, 110, 189, 3, 98, 224, 60, 68, 232, 150, 62, 200, 227, 147, 62, 245, 149, 166, 62, 54, 228, 132, 190, 151, 73, 32, 191, 126, 136, 14, 62, 14, 37, 242, 189, 58, 69, 32, 62, 40, 248, 174, 62, 156, 240, 194, 190, 48, 5, 215, 60, 113, 250, 54, 191, 108, 228, 5, 191, 239, 199, 19, 62, 169, 35, 186, 60, 79, 83, 104, 190, 13, 157, 36, 62, 174, 119, 243, 61, 251, 189, 95, 62, 130, 108, 37, 62, 162, 87, 156, 190, 215, 27, 221, 61, 42, 24, 14, 62, 132, 142, 212, 189, 3, 16, 76, 190, 186, 241, 113, 190, 144, 174, 126, 62, 232, 249, 57, 62, 216, 255, 2, 190, 142, 124, 105, 190, 161, 62, 4, 190, 36, 171, 200, 190, 159, 51, 6, 62, 106, 77, 22, 61, 232, 48, 159, 62, 84, 254, 120, 190, 226, 143, 46, 62, 35, 29, 187, 189, 147, 126, 42, 190, 179, 202, 145, 190, 210, 198, 185, 62, 23, 96, 185, 190, 249, 116, 164, 61, 82, 225, 92, 189, 173, 143, 67, 190, 232, 204, 106, 60, 98, 71, 141, 60, 72, 95, 42, 190, 255, 36, 39, 62, 51, 98, 107, 189, 3, 123, 38, 190, 2, 131, 42, 60, 251, 164, 159, 60, 254, 119, 178, 188, 238, 137, 33, 190, 48, 98, 148, 189, 245, 8, 246, 61, 29, 64, 6, 61, 97, 54, 136, 187, 97, 105, 61, 61, 23, 22, 15, 61, 142, 163, 165, 60, 81, 94, 196, 189, 225, 145, 132, 189, 125, 186, 96, 60, 29, 190, 21, 62, 170, 87, 137, 189, 176, 150, 184, 61, 161, 21, 148, 61, 175, 105, 189, 61, 74, 116, 216, 188, 164, 160, 20, 61, 177, 92, 25, 61, 246, 199, 82, 190, 41, 164, 116, 189, 82, 210, 65, 190, 254, 13, 53, 190, 24, 27, 36, 62, 89, 18, 157, 190, 62, 65, 203, 61, 83, 183, 37, 62, 93, 249, 0, 189, 233, 91, 217, 189, 111, 164, 193, 189, 190, 155, 105, 190, 131, 171, 5, 62, 253, 17, 164, 61, 226, 185, 126, 62, 60, 63, 192, 188, 12, 118, 89, 191, 161, 245, 13, 62, 40, 17, 144, 62, 1, 185, 77, 190, 144, 165, 48, 60, 101, 230, 55, 190, 93, 123, 133, 190, 61, 57, 247, 190, 147, 33, 17, 62, 124, 14, 123, 189, 159, 194, 89, 62, 183, 223, 162, 61, 111, 213, 181, 190, 187, 113, 105, 61, 33, 212, 149, 61, 217, 97, 81, 190, 186, 141, 83, 189, 25, 39, 148, 190, 116, 207, 229, 61, 1, 150, 162, 61, 169, 161, 234, 190, 59, 47, 150, 61, 156, 197, 142, 62, 28, 137, 25, 190, 181, 41, 42, 60, 142, 149, 177, 60, 246, 14, 242, 189, 132, 141, 176, 62, 187, 186, 22, 62, 92, 26, 160, 189, 71, 60, 158, 61, 83, 79, 93, 188, 122, 236, 44, 189, 76, 175, 180, 187, 79, 10, 147, 189, 223, 233, 60, 61, 137, 166, 159, 188, 158, 19, 37, 62, 45, 205, 83, 62, 134, 186, 12, 187, 172, 52, 173, 59, 171, 10, 85, 190, 62, 179, 113, 61, 92, 51, 31, 62, 53, 82, 37, 61, 212, 87, 86, 186, 86, 107, 243, 189, 16, 239, 221, 190, 236, 80, 183, 60, 2, 174, 142, 59, 217, 104, 243, 61, 226, 14, 182, 62, 92, 218, 133, 61, 139, 19, 89, 62, 235, 112, 137, 61, 116, 247, 155, 62, 179, 89, 174, 61, 69, 200, 167, 190, 155, 127, 246, 60, 0, 201, 178, 62, 115, 169, 0, 190, 223, 71, 124, 188, 52, 12, 220, 61, 111, 120, 157, 189, 125, 146, 222, 60, 178, 179, 46, 190, 246, 136, 139, 189, 191, 151, 94, 62, 58, 44, 27, 61, 245, 219, 32, 190, 186, 29, 64, 62, 231, 229, 158, 190, 8, 85, 151, 187, 76, 153, 100, 189, 162, 138, 133, 189, 146, 14, 252, 61, 127, 111, 192, 61, 76, 199, 7, 62, 107, 39, 68, 62, 251, 170, 141, 190, 124, 239, 107, 62, 255, 219, 107, 189, 128, 11, 20, 62, 164, 113, 82, 188, 75, 120, 186, 61, 72, 44, 193, 60, 121, 151, 125, 62, 72, 218, 185, 189, 252, 189, 233, 60, 50, 11, 52, 62, 101, 52, 177, 189, 81, 181, 148, 62, 200, 117, 106, 189, 172, 65, 44, 62, 45, 157, 96, 61, 204, 49, 228, 189, 117, 21, 155, 62, 230, 29, 93, 62, 207, 10, 26, 190, 127, 71, 207, 61, 45, 49, 71, 189, 69, 210, 1, 62, 177, 214, 14, 62, 255, 181, 145, 62, 57, 140, 106, 190, 79, 19, 0, 62, 150, 65, 126, 62, 220, 191, 115, 189, 124, 109, 61, 61, 157, 34, 40, 189, 252, 31, 31, 190, 228, 11, 55, 188, 254, 114, 49, 62, 41, 168, 171, 190, 0, 124, 121, 62, 17, 212, 212, 188, 27, 104, 137, 60, 255, 90, 32, 62, 209, 195, 215, 61, 145, 233, 128, 190, 244, 192, 60, 62, 252, 54, 222, 189, 41, 133, 216, 190, 183, 166, 138, 62, 98, 88, 235, 188, 65, 211, 37, 62, 6, 224, 40, 62, 20, 110, 194, 61, 204, 167, 154, 62, 161, 5, 18, 62, 124, 31, 196, 61, 74, 148, 12, 62, 241, 98, 238, 189, 42, 156, 177, 61, 56, 215, 200, 61, 8, 118, 137, 62, 56, 52, 89, 190, 74, 123, 26, 62, 144, 98, 244, 61, 215, 40, 35, 62, 217, 243, 180, 61, 122, 68, 196, 189, 16, 176, 79, 61, 181, 112, 226, 61, 108, 109, 24, 62, 128, 34, 190, 61, 146, 9, 211, 189, 238, 95, 42, 62, 161, 238, 47, 190, 57, 94, 111, 62, 152, 237, 215, 61, 131, 236, 110, 189, 120, 83, 169, 60, 123, 108, 69, 62, 208, 2, 200, 61, 140, 97, 186, 60, 72, 56, 12, 190, 172, 208, 252, 190, 233, 136, 155, 61, 248, 74, 88, 61, 36, 92, 36, 190, 96, 204, 47, 190, 172, 2, 136, 190, 112, 39, 129, 62, 1, 180, 138, 190, 152, 18, 60, 62, 83, 76, 44, 62, 152, 50, 162, 61, 33, 248, 38, 61, 83, 27, 122, 62, 25, 94, 29, 61, 18, 36, 164, 190, 38, 177, 24, 62, 125, 20, 5, 191, 25, 197, 162, 190, 74, 51, 76, 62, 182, 232, 77, 190, 138, 244, 170, 190, 73, 171, 52, 62, 241, 204, 72, 62, 136, 117, 31, 189, 175, 180, 66, 189, 13, 215, 102, 62, 73, 124, 175, 189, 98, 151, 220, 60, 171, 133, 145, 62, 141, 249, 92, 190, 16, 127, 159, 62, 155, 32, 239, 60, 175, 251, 45, 62, 52, 181, 96, 61, 59, 204, 39, 190, 187, 78, 33, 61, 138, 116, 215, 62, 175, 82, 175, 189, 240, 126, 49, 190, 70, 140, 185, 61, 45, 83, 44, 62, 247, 115, 41, 190, 215, 158, 131, 189, 219, 119, 14, 190, 100, 55, 234, 190, 229, 7, 140, 190, 65, 174, 240, 61, 232, 34, 246, 60, 205, 14, 250, 187, 241, 65, 150, 189, 84, 39, 195, 190, 192, 69, 131, 190, 86, 224, 85, 61, 114, 15, 232, 189, 254, 79, 14, 62, 123, 94, 92, 188, 186, 66, 13, 190, 54, 9, 143, 61, 133, 122, 4, 62, 93, 177, 107, 61, 139, 213, 210, 189, 68, 42, 246, 189, 152, 81, 184, 189, 154, 191, 96, 61, 249, 95, 73, 59, 143, 211, 202, 60, 84, 111, 153, 188, 73, 98, 247, 189, 39, 10, 134, 189, 80, 37, 246, 188, 150, 214, 2, 190, 222, 236, 175, 61, 193, 166, 61, 190, 116, 164, 120, 188, 224, 229, 167, 189, 17, 250, 186, 61, 4, 53, 56, 61, 38, 128, 58, 189, 159, 17, 49, 190, 178, 120, 62, 189, 145, 11, 8, 190, 209, 131, 249, 61, 76, 100, 1, 190, 28, 239, 156, 61, 32, 205, 163, 61, 158, 238, 249, 61, 144, 241, 136, 60, 84, 192, 37, 60, 244, 118, 87, 189, 169, 90, 183, 61, 40, 240, 49, 189, 102, 88, 79, 60, 24, 38, 130, 189, 141, 161, 158, 61, 0, 54, 32, 190, 45, 24, 93, 190, 203, 144, 0, 190, 207, 214, 2, 190, 216, 23, 85, 189, 51, 27, 203, 188, 155, 211, 235, 188, 93, 36, 44, 61, 200, 150, 248, 189, 135, 209, 19, 60, 177, 221, 189, 189, 156, 184, 246, 61, 215, 145, 226, 60, 98, 18, 173, 188, 145, 90, 178, 61, 14, 117, 167, 185, 122, 122, 125, 189, 99, 169, 195, 189, 234, 19, 10, 61, 131, 207, 51, 190, 223, 133, 66, 190, 26, 253, 226, 189, 154, 48, 107, 62, 144, 182, 72, 190, 7, 195, 235, 189, 178, 164, 59, 62, 17, 157, 232, 59, 43, 29, 163, 61, 203, 54, 135, 62, 100, 21, 8, 62, 136, 112, 72, 62, 116, 100, 115, 61, 249, 25, 90, 190, 156, 246, 4, 62, 19, 58, 37, 190, 203, 25, 12, 190, 179, 32, 225, 60, 152, 82, 154, 190, 10, 243, 228, 61, 178, 63, 153, 189, 125, 82, 25, 189, 25, 238, 192, 189, 36, 59, 156, 188, 177, 118, 135, 190, 38, 204, 90, 187, 136, 85, 82, 61, 52, 193, 249, 62, 176, 26, 180, 189, 212, 149, 248, 189, 96, 109, 216, 189, 93, 107, 151, 190, 64, 35, 96, 188, 169, 198, 137, 62, 26, 129, 141, 189, 116, 27, 60, 190, 42, 202, 154, 61, 50, 219, 0, 62, 89, 182, 173, 189, 162, 26, 33, 188, 31, 16, 136, 189, 129, 32, 169, 59, 185, 63, 28, 188, 6, 164, 239, 188, 172, 245, 141, 189, 162, 20, 233, 61, 92, 138, 42, 190, 252, 195, 114, 62, 239, 101, 81, 62, 29, 171, 147, 61, 213, 207, 147, 59, 197, 179, 71, 190, 141, 13, 8, 190, 89, 158, 121, 190, 185, 151, 66, 61, 115, 9, 31, 62, 170, 102, 12, 190, 144, 1, 201, 190, 124, 96, 103, 189, 242, 178, 157, 189, 205, 60, 45, 62, 219, 102, 186, 61, 240, 0, 221, 61, 119, 96, 79, 62, 242, 4, 181, 61, 241, 98, 2, 61, 6, 141, 59, 62, 186, 157, 43, 62, 92, 60, 16, 191, 227, 5, 80, 190, 199, 3, 208, 188, 25, 104, 236, 189, 77, 127, 131, 190, 213, 159, 150, 62, 216, 111, 13, 61, 148, 123, 58, 62, 97, 250, 145, 62, 53, 99, 188, 190, 15, 233, 196, 61, 195, 134, 226, 60, 200, 121, 120, 190, 160, 204, 186, 60, 111, 91, 127, 61, 17, 18, 78, 62, 230, 97, 64, 62, 230, 228, 90, 62, 42, 184, 160, 188, 172, 109, 222, 188, 196, 97, 208, 190, 179, 22, 171, 62, 55, 230, 111, 189, 174, 51, 27, 187, 215, 192, 141, 189, 229, 208, 51, 60, 75, 157, 103, 190, 240, 196, 112, 190, 187, 132, 166, 190, 84, 194, 163, 62, 161, 169, 168, 190, 66, 20, 58, 189, 165, 25, 184, 190, 151, 219, 1, 62, 173, 228, 255, 187, 236, 128, 50, 62, 205, 87, 165, 188, 104, 109, 91, 62, 10, 126, 179, 189, 133, 186, 101, 188, 8, 228, 170, 61, 182, 241, 118, 190, 233, 231, 82, 62, 172, 29, 242, 59, 173, 96, 229, 60, 167, 126, 214, 60, 70, 89, 122, 190, 249, 210, 206, 61, 198, 4, 28, 62, 174, 187, 254, 61, 10, 204, 47, 190, 76, 241, 3, 61, 217, 205, 217, 189, 95, 221, 64, 61, 16, 15, 10, 190, 224, 160, 110, 60, 192, 122, 8, 62, 167, 46, 175, 60, 139, 190, 234, 188, 88, 219, 213, 60, 246, 44, 81, 190, 113, 16, 138, 62, 212, 242, 130, 188, 214, 212, 178, 61, 35, 38, 183, 61, 192, 129, 204, 188, 22, 85, 251, 189, 138, 75, 59, 190, 39, 251, 255, 189, 254, 211, 19, 61, 183, 127, 229, 188, 216, 154, 139, 189, 54, 72, 62, 190, 71, 199, 14, 62, 130, 57, 244, 61, 5, 165, 93, 189, 113, 51, 11, 190, 141, 151, 0, 190, 138, 230, 15, 62, 51, 44, 57, 189, 108, 42, 154, 189, 239, 170, 252, 61, 113, 84, 217, 61, 114, 86, 61, 190, 181, 180, 178, 188, 33, 176, 201, 61, 12, 48, 184, 61, 239, 161, 20, 62, 89, 2, 19, 190, 212, 142, 238, 186, 67, 127, 55, 189, 54, 250, 47, 190, 125, 21, 30, 190, 97, 77, 104, 61, 47, 100, 100, 188};
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
                alignas(float) const unsigned char memory[] = {182, 48, 35, 190, 154, 111, 61, 61, 157, 44, 85, 62, 221, 115, 98, 60, 29, 86, 153, 62, 126, 239, 240, 61, 114, 242, 24, 62, 111, 224, 111, 189, 91, 249, 252, 189, 138, 19, 49, 189, 74, 205, 59, 62, 235, 179, 32, 190, 93, 226, 193, 61, 51, 100, 185, 62, 176, 27, 4, 189, 188, 143, 157, 61, 67, 129, 22, 61, 44, 166, 52, 190, 12, 206, 31, 62, 192, 44, 213, 189, 18, 156, 234, 189, 15, 242, 168, 62, 235, 243, 100, 62, 167, 220, 25, 188, 125, 139, 188, 188, 137, 232, 44, 189, 121, 151, 22, 190, 53, 179, 153, 61, 225, 219, 61, 190, 92, 74, 131, 62, 242, 164, 91, 62, 1, 236, 85, 190};
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
                alignas(float) const unsigned char memory[] = {114, 24, 13, 191, 58, 87, 128, 62, 63, 150, 226, 190, 137, 148, 9, 62, 61, 90, 33, 190, 68, 83, 74, 190, 90, 103, 238, 61, 198, 124, 120, 61, 242, 128, 5, 62, 81, 32, 177, 61, 157, 207, 0, 63, 121, 210, 7, 190, 100, 81, 58, 191, 242, 45, 94, 63, 15, 245, 161, 190, 73, 120, 166, 62, 5, 11, 229, 62, 52, 141, 2, 188, 105, 205, 144, 62, 139, 29, 166, 190, 223, 144, 77, 62, 120, 212, 31, 190, 44, 227, 40, 190, 221, 226, 96, 62, 1, 200, 136, 190, 117, 239, 122, 189, 0, 67, 43, 61, 229, 91, 150, 62, 167, 217, 147, 62, 181, 217, 27, 63, 50, 174, 206, 60, 180, 233, 135, 189, 182, 235, 131, 188, 80, 18, 243, 61, 125, 245, 217, 59, 87, 35, 3, 62, 215, 44, 157, 190, 20, 171, 73, 190, 116, 187, 216, 190, 208, 209, 139, 188, 201, 222, 240, 61, 227, 91, 145, 61, 164, 110, 50, 61, 133, 54, 151, 58, 107, 85, 135, 62, 7, 193, 74, 62, 255, 250, 240, 61, 165, 243, 154, 62, 227, 220, 188, 189, 102, 141, 70, 188, 220, 68, 67, 190, 149, 93, 231, 60, 232, 207, 138, 62, 75, 251, 8, 190, 220, 251, 159, 189, 67, 78, 193, 189, 123, 142, 155, 188, 45, 162, 46, 190, 217, 201, 140, 188, 164, 217, 124, 189, 68, 162, 2, 59, 158, 222, 141, 190, 228, 95, 112, 190, 233, 113, 202, 60};
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
                alignas(float) const unsigned char memory[] = {55, 173, 142, 60, 27, 142, 134, 189};
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
    alignas(float) const unsigned char memory[] = {149, 213, 184, 190, 189, 29, 61, 63, 216, 208, 42, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {240, 157, 148, 63, 41, 139, 163, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0082/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
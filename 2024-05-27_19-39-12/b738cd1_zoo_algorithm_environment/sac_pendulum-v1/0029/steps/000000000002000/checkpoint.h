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
                alignas(float) const unsigned char memory[] = {130, 2, 16, 63, 35, 42, 28, 62, 98, 247, 253, 62, 86, 190, 38, 61, 187, 27, 24, 190, 54, 203, 192, 189, 106, 34, 61, 191, 124, 41, 213, 60, 205, 252, 184, 61, 105, 254, 60, 191, 184, 49, 179, 62, 74, 39, 153, 62, 11, 242, 228, 187, 202, 233, 233, 189, 135, 38, 28, 191, 76, 49, 150, 62, 143, 36, 129, 62, 85, 217, 199, 62, 131, 46, 229, 62, 83, 34, 149, 62, 65, 84, 191, 61, 164, 129, 254, 190, 167, 55, 19, 191, 55, 105, 246, 62, 91, 234, 107, 190, 189, 177, 201, 190, 252, 17, 218, 62, 206, 101, 121, 62, 26, 121, 247, 62, 33, 170, 243, 62, 214, 230, 37, 62, 18, 14, 183, 60, 75, 65, 68, 62, 151, 254, 231, 190, 134, 94, 65, 63, 100, 108, 174, 61, 82, 8, 37, 191, 91, 183, 110, 63, 157, 230, 163, 190, 60, 158, 178, 190, 95, 107, 120, 62, 98, 194, 25, 63, 107, 124, 10, 63, 11, 140, 194, 190, 115, 183, 178, 62, 191, 24, 19, 191, 35, 169, 158, 190, 24, 32, 61, 62, 153, 67, 10, 62, 183, 157, 97, 63, 154, 122, 139, 60, 172, 167, 131, 190, 118, 35, 104, 191, 225, 211, 92, 62, 134, 190, 44, 62, 239, 51, 24, 63, 38, 1, 225, 62, 196, 183, 133, 190, 210, 227, 161, 62, 226, 158, 26, 191, 218, 119, 207, 62, 32, 135, 79, 62, 140, 35, 205, 61, 188, 147, 162, 62, 186, 222, 27, 191, 20, 55, 228, 62, 119, 148, 2, 62, 63, 153, 103, 63, 74, 26, 188, 190, 156, 63, 84, 190, 78, 91, 21, 63, 131, 152, 158, 190, 100, 61, 174, 190, 54, 94, 62, 191, 47, 173, 98, 188, 242, 235, 61, 191, 130, 181, 215, 61, 243, 110, 61, 190, 92, 63, 239, 190, 250, 143, 144, 190, 210, 172, 16, 63, 190, 82, 6, 63, 182, 40, 62, 62, 78, 65, 114, 189, 62, 153, 146, 61, 182, 94, 30, 63, 243, 3, 142, 190, 251, 63, 234, 189, 251, 246, 200, 61, 8, 68, 248, 62, 145, 205, 223, 189, 97, 30, 83, 191, 224, 243, 134, 61, 159, 17, 24, 190, 123, 130, 38, 191, 112, 84, 176, 190};
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
                alignas(float) const unsigned char memory[] = {99, 175, 224, 190, 212, 14, 48, 63, 85, 123, 197, 60, 238, 11, 45, 63, 149, 17, 16, 191, 136, 83, 130, 189, 229, 37, 63, 190, 211, 158, 132, 189, 217, 59, 230, 62, 49, 110, 26, 63, 107, 57, 23, 190, 50, 183, 182, 61, 216, 80, 97, 190, 87, 21, 139, 190, 239, 242, 120, 62, 113, 174, 195, 190, 185, 112, 192, 62, 38, 77, 167, 187, 133, 47, 160, 190, 102, 253, 163, 189, 185, 113, 207, 62, 97, 82, 164, 190, 244, 25, 22, 63, 136, 234, 122, 60, 3, 7, 88, 189, 131, 245, 141, 190, 92, 14, 30, 62, 126, 230, 9, 191, 207, 110, 150, 62, 108, 40, 166, 62, 111, 237, 81, 62, 176, 213, 216, 62};
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
                alignas(float) const unsigned char memory[] = {240, 48, 1, 190, 52, 99, 142, 61, 53, 112, 37, 189, 90, 60, 122, 189, 30, 212, 97, 187, 113, 32, 23, 189, 17, 193, 26, 60, 243, 144, 10, 62, 66, 148, 39, 189, 128, 40, 1, 189, 186, 9, 8, 190, 80, 92, 155, 189, 50, 54, 243, 188, 6, 240, 54, 188, 200, 121, 174, 189, 205, 121, 219, 188, 27, 195, 67, 190, 6, 254, 75, 187, 147, 64, 181, 61, 37, 214, 204, 60, 245, 215, 117, 60, 100, 242, 99, 61, 160, 149, 167, 61, 129, 205, 60, 61, 128, 121, 142, 62, 237, 133, 142, 187, 250, 196, 204, 61, 31, 54, 218, 61, 109, 105, 62, 188, 231, 197, 7, 58, 200, 35, 164, 189, 191, 65, 151, 60, 171, 30, 110, 61, 137, 183, 17, 190, 222, 176, 244, 61, 94, 122, 54, 190, 240, 139, 213, 61, 38, 192, 198, 189, 53, 50, 224, 188, 233, 111, 170, 189, 106, 234, 14, 62, 31, 84, 214, 59, 44, 203, 184, 61, 143, 81, 0, 62, 144, 67, 5, 190, 210, 129, 21, 62, 106, 61, 193, 60, 108, 236, 35, 190, 104, 101, 218, 187, 252, 113, 95, 61, 77, 183, 150, 188, 43, 220, 199, 60, 9, 206, 175, 189, 218, 0, 30, 62, 76, 6, 143, 60, 148, 119, 118, 188, 95, 134, 34, 189, 16, 60, 168, 189, 94, 96, 145, 188, 156, 230, 235, 61, 233, 26, 3, 190, 245, 63, 5, 190, 159, 153, 49, 190, 253, 127, 27, 60, 48, 86, 216, 61, 128, 161, 35, 60, 100, 31, 25, 62, 169, 139, 254, 189, 72, 74, 176, 61, 26, 110, 92, 61, 164, 103, 24, 190, 199, 177, 246, 60, 104, 241, 46, 61, 157, 0, 215, 59, 240, 150, 64, 61, 116, 103, 37, 190, 31, 28, 17, 189, 85, 101, 30, 190, 61, 237, 187, 188, 136, 79, 191, 189, 162, 59, 156, 189, 41, 143, 191, 189, 5, 3, 3, 62, 232, 207, 24, 190, 173, 98, 6, 188, 114, 2, 39, 190, 42, 175, 233, 189, 238, 141, 184, 189, 61, 24, 89, 61, 53, 89, 93, 61, 108, 80, 167, 61, 74, 179, 16, 62, 113, 193, 38, 62, 141, 212, 43, 189, 148, 115, 138, 61, 92, 242, 45, 190, 187, 177, 89, 62, 108, 254, 163, 189, 58, 133, 251, 61, 110, 243, 65, 61, 242, 116, 131, 189, 124, 130, 228, 189, 106, 104, 61, 61, 184, 45, 72, 61, 139, 105, 155, 188, 139, 98, 82, 189, 159, 128, 60, 188, 175, 133, 142, 189, 222, 248, 201, 189, 124, 212, 237, 189, 20, 198, 17, 190, 134, 30, 11, 190, 110, 134, 33, 62, 212, 80, 132, 189, 155, 253, 40, 62, 103, 152, 28, 61, 6, 220, 29, 62, 218, 170, 226, 60, 205, 35, 80, 190, 105, 230, 106, 190, 87, 175, 176, 189, 60, 194, 217, 61, 200, 220, 164, 60, 64, 177, 55, 60, 72, 3, 25, 189, 21, 163, 35, 189, 181, 49, 16, 190, 62, 115, 101, 190, 119, 61, 92, 62, 165, 98, 196, 187, 140, 212, 18, 190, 234, 201, 254, 61, 132, 8, 138, 61, 222, 208, 42, 61, 200, 91, 191, 189, 235, 71, 249, 188, 251, 156, 119, 61, 205, 144, 152, 61, 188, 129, 179, 61, 31, 85, 137, 61, 169, 193, 134, 190, 118, 55, 2, 62, 186, 34, 168, 61, 199, 152, 96, 190, 174, 117, 2, 62, 254, 55, 181, 187, 38, 145, 140, 61, 15, 136, 81, 61, 155, 238, 32, 61, 58, 175, 71, 62, 117, 100, 62, 189, 201, 168, 63, 190, 80, 67, 163, 189, 60, 162, 200, 190, 61, 223, 36, 62, 99, 12, 42, 190, 19, 220, 206, 189, 151, 235, 23, 62, 37, 53, 18, 189, 13, 84, 184, 189, 189, 170, 66, 190, 92, 162, 189, 189, 17, 137, 21, 190, 229, 138, 167, 190, 120, 95, 124, 62, 125, 133, 161, 61, 167, 183, 10, 62, 127, 247, 29, 61, 144, 228, 25, 190, 125, 239, 128, 190, 194, 8, 60, 61, 211, 141, 157, 59, 104, 133, 185, 61, 213, 59, 82, 189, 4, 51, 40, 62, 243, 229, 15, 190, 130, 79, 26, 62, 71, 218, 146, 62, 29, 244, 134, 60, 249, 253, 7, 62, 43, 215, 95, 62, 196, 2, 118, 190, 28, 238, 230, 188, 52, 69, 33, 62, 134, 131, 36, 62, 210, 69, 199, 61, 150, 113, 160, 189, 51, 125, 148, 61, 199, 54, 73, 189, 39, 50, 166, 189, 226, 165, 91, 189, 135, 70, 97, 62, 236, 88, 40, 189, 187, 19, 247, 61, 56, 177, 144, 62, 3, 215, 29, 62, 183, 72, 30, 190, 218, 70, 43, 62, 241, 80, 1, 190, 50, 200, 145, 190, 31, 109, 91, 187, 170, 164, 64, 189, 170, 138, 168, 188, 76, 218, 157, 60, 111, 158, 39, 62, 141, 36, 123, 189, 174, 245, 238, 189, 86, 177, 47, 190, 94, 112, 73, 62, 246, 61, 166, 190, 32, 222, 164, 60, 26, 170, 50, 62, 32, 165, 29, 190, 36, 138, 14, 61, 250, 235, 90, 62, 168, 14, 211, 61, 163, 221, 250, 60, 239, 39, 173, 189, 145, 152, 73, 190, 213, 176, 9, 61, 243, 251, 202, 61, 175, 30, 24, 190, 121, 5, 21, 190, 148, 225, 11, 189, 25, 49, 4, 62, 189, 71, 0, 189, 237, 49, 210, 189, 59, 38, 172, 189, 237, 95, 61, 189, 149, 13, 140, 60, 17, 96, 55, 62, 195, 40, 27, 190, 20, 219, 37, 189, 222, 71, 144, 189, 133, 94, 228, 61, 226, 108, 51, 61, 169, 9, 2, 188, 55, 1, 86, 61, 134, 196, 216, 61, 210, 17, 211, 189, 203, 127, 224, 189, 7, 242, 15, 190, 108, 212, 174, 187, 156, 166, 19, 60, 188, 51, 150, 61, 4, 23, 6, 62, 62, 190, 93, 189, 132, 193, 237, 60, 119, 212, 239, 189, 107, 89, 12, 190, 115, 112, 244, 61, 40, 109, 20, 189, 134, 2, 0, 62, 207, 32, 14, 190, 143, 31, 11, 187, 200, 250, 43, 189, 187, 15, 30, 190, 237, 160, 54, 188, 120, 142, 212, 185, 99, 247, 65, 190, 46, 215, 129, 189, 179, 211, 104, 61, 244, 46, 249, 188, 229, 124, 63, 60, 130, 39, 198, 61, 139, 105, 169, 61, 84, 79, 208, 189, 227, 151, 23, 190, 86, 183, 11, 189, 201, 146, 205, 188, 159, 49, 6, 190, 25, 233, 155, 60, 63, 188, 165, 189, 230, 220, 168, 189, 218, 236, 26, 190, 122, 134, 58, 61, 246, 23, 185, 189, 81, 71, 1, 61, 187, 42, 18, 61, 17, 228, 14, 190, 28, 152, 225, 61, 193, 227, 153, 61, 96, 49, 9, 62, 170, 111, 209, 59, 196, 52, 112, 189, 6, 33, 129, 61, 190, 83, 214, 60, 0, 85, 143, 189, 220, 178, 226, 60, 180, 108, 16, 190, 28, 228, 215, 61, 30, 43, 165, 190, 150, 38, 41, 61, 172, 147, 29, 62, 69, 198, 161, 61, 150, 17, 21, 61, 63, 133, 238, 189, 223, 228, 123, 190, 158, 132, 134, 61, 74, 224, 215, 61, 75, 131, 109, 188, 99, 144, 137, 61, 55, 138, 155, 189, 130, 61, 239, 189, 61, 169, 73, 189, 17, 161, 47, 190, 154, 167, 28, 190, 38, 252, 254, 61, 170, 193, 1, 190, 56, 185, 86, 61, 225, 0, 126, 61, 24, 175, 2, 61, 108, 254, 214, 189, 96, 78, 8, 62, 1, 68, 228, 60, 59, 4, 47, 61, 176, 92, 3, 62, 241, 150, 5, 190, 28, 97, 178, 189, 126, 48, 12, 62, 13, 31, 70, 190, 188, 8, 46, 61, 178, 148, 73, 60, 50, 115, 38, 190, 205, 104, 60, 62, 110, 141, 88, 61, 30, 0, 39, 189, 29, 78, 24, 62, 205, 160, 75, 62, 234, 183, 126, 189, 21, 139, 79, 190, 195, 109, 111, 190, 50, 157, 8, 190, 91, 123, 46, 190, 126, 213, 17, 190, 155, 71, 20, 62, 186, 253, 13, 61, 72, 136, 64, 62, 142, 235, 212, 188, 59, 216, 62, 189, 42, 174, 16, 190, 90, 110, 135, 189, 105, 59, 252, 189, 125, 54, 180, 61, 67, 248, 16, 62, 126, 250, 48, 61, 223, 89, 14, 190, 149, 114, 45, 190, 0, 115, 138, 59, 157, 36, 155, 61, 129, 82, 243, 188, 137, 208, 129, 62, 233, 69, 14, 190, 250, 228, 143, 189, 236, 127, 219, 60, 109, 65, 49, 190, 16, 107, 15, 62, 178, 85, 8, 61, 95, 233, 245, 61, 46, 153, 175, 59, 134, 117, 33, 189, 45, 56, 21, 190, 15, 76, 140, 61, 79, 182, 125, 190, 96, 182, 147, 60, 182, 81, 25, 62, 7, 207, 172, 189, 186, 253, 176, 61, 128, 246, 137, 189, 147, 255, 138, 61, 130, 204, 140, 61, 187, 206, 164, 188, 168, 127, 199, 188, 253, 94, 200, 60, 15, 10, 125, 189, 73, 169, 189, 187, 98, 105, 135, 61, 252, 127, 97, 61, 169, 22, 240, 61, 98, 128, 32, 61, 129, 69, 240, 189, 144, 154, 182, 59, 76, 171, 47, 190, 243, 103, 0, 62, 235, 21, 138, 189, 65, 187, 42, 190, 71, 123, 1, 62, 3, 69, 133, 189, 247, 26, 146, 189, 44, 9, 6, 190, 146, 213, 1, 190, 35, 212, 8, 190, 145, 236, 4, 190, 236, 130, 13, 62, 174, 129, 80, 61, 181, 221, 13, 190, 21, 3, 156, 61, 54, 95, 180, 61, 247, 34, 194, 61, 229, 82, 32, 60, 118, 105, 249, 189, 140, 178, 196, 189, 62, 101, 42, 190, 251, 234, 156, 61, 70, 115, 217, 61, 135, 134, 33, 189, 138, 113, 142, 189, 123, 179, 248, 189, 37, 214, 174, 61, 37, 144, 17, 190, 172, 107, 27, 62, 135, 205, 120, 61, 23, 75, 32, 190, 7, 111, 12, 190, 20, 212, 248, 61, 134, 33, 228, 189, 105, 143, 147, 190, 34, 247, 192, 60, 46, 136, 214, 61, 250, 220, 216, 61, 185, 230, 111, 190, 242, 252, 58, 61, 252, 105, 108, 190, 193, 174, 48, 190, 230, 115, 132, 190, 51, 5, 156, 61, 209, 209, 18, 190, 189, 23, 182, 62, 27, 125, 145, 61, 98, 241, 1, 190, 57, 210, 80, 61, 29, 98, 136, 190, 62, 198, 243, 61, 210, 132, 164, 190, 87, 229, 45, 62, 83, 96, 219, 61, 153, 14, 31, 61, 61, 216, 139, 190, 89, 177, 151, 62, 207, 152, 131, 62, 185, 0, 39, 60, 68, 200, 240, 61, 56, 62, 61, 60, 123, 90, 45, 190, 118, 181, 85, 62, 10, 33, 242, 189, 218, 99, 135, 190, 108, 130, 147, 189, 237, 130, 197, 189, 86, 237, 141, 61, 49, 26, 13, 188, 143, 98, 172, 61, 252, 244, 47, 190, 144, 142, 13, 61, 29, 40, 65, 62, 197, 22, 30, 190, 22, 20, 17, 62, 234, 52, 223, 189, 18, 5, 63, 190, 252, 132, 7, 189, 190, 206, 136, 190, 30, 92, 174, 61, 146, 54, 118, 189, 28, 161, 133, 62, 196, 11, 201, 189, 103, 55, 238, 189, 108, 12, 131, 188, 142, 98, 246, 60, 9, 74, 100, 190, 127, 172, 215, 59, 47, 19, 153, 187, 179, 146, 38, 190, 127, 102, 243, 59, 216, 162, 187, 61, 180, 114, 31, 62, 207, 2, 23, 190, 159, 189, 162, 190, 108, 73, 172, 61, 157, 14, 204, 188, 6, 115, 14, 189, 21, 106, 72, 190, 1, 129, 108, 62, 215, 247, 6, 62, 227, 101, 20, 62, 29, 238, 62, 62, 236, 147, 162, 61, 172, 238, 234, 61, 254, 125, 102, 188, 145, 210, 96, 62, 175, 93, 217, 189, 124, 68, 13, 190, 224, 192, 80, 190, 90, 164, 142, 189, 30, 134, 227, 189, 191, 161, 48, 190, 104, 55, 111, 62, 135, 190, 225, 60, 137, 48, 215, 61, 48, 121, 77, 190, 145, 95, 79, 62, 58, 69, 118, 61, 240, 40, 68, 190, 178, 129, 197, 189, 170, 99, 1, 190, 163, 107, 128, 62, 10, 117, 144, 189, 146, 139, 250, 61, 62, 52, 107, 61, 77, 70, 217, 189, 112, 54, 227, 187, 106, 120, 147, 61, 75, 119, 97, 62, 193, 117, 133, 62, 211, 129, 253, 61, 75, 79, 81, 62, 68, 120, 253, 61, 98, 158, 156, 190, 34, 118, 143, 189, 170, 45, 103, 62, 204, 101, 87, 60, 217, 95, 114, 61, 108, 42, 112, 189, 120, 115, 210, 61, 172, 71, 233, 62, 138, 32, 215, 58, 83, 51, 155, 61, 42, 114, 172, 61, 190, 75, 31, 190, 14, 180, 130, 62, 7, 195, 194, 190, 30, 246, 54, 62, 241, 70, 111, 189, 67, 92, 62, 62, 150, 54, 4, 61, 130, 67, 169, 58, 10, 211, 222, 61, 163, 224, 239, 189, 66, 99, 39, 62, 22, 145, 212, 61, 103, 93, 232, 189, 14, 4, 21, 62, 120, 29, 55, 61, 169, 18, 151, 190, 229, 225, 76, 58, 107, 195, 222, 59, 124, 134, 130, 62, 84, 110, 254, 61, 84, 14, 128, 61, 110, 121, 63, 190, 13, 214, 72, 62, 45, 27, 197, 61, 129, 147, 154, 190, 24, 31, 186, 61, 169, 241, 84, 61, 131, 245, 198, 59, 25, 142, 189, 61, 154, 94, 136, 62, 34, 110, 8, 190, 237, 183, 182, 188, 32, 225, 145, 190, 191, 95, 71, 62, 46, 18, 13, 191, 143, 45, 100, 62, 147, 0, 27, 62, 25, 53, 75, 61, 111, 156, 99, 189, 4, 168, 30, 62, 158, 198, 56, 189, 95, 220, 180, 189, 88, 236, 145, 60, 32, 112, 192, 189, 28, 245, 158, 60, 106, 237, 88, 62, 24, 169, 61, 189, 224, 176, 129, 190, 245, 8, 55, 189, 60, 73, 57, 190, 32, 52, 125, 61, 29, 33, 60, 62, 185, 253, 42, 189, 152, 19, 25, 62, 105, 162, 63, 190, 28, 36, 171, 189, 229, 19, 194, 61, 66, 234, 95, 61, 24, 247, 24, 189, 205, 96, 34, 190, 247, 251, 88, 190, 223, 231, 166, 61, 61, 133, 106, 189, 218, 156, 116, 190, 135, 59, 56, 62, 107, 64, 187, 61, 61, 165, 129, 62, 219, 52, 123, 189, 66, 112, 163, 60, 121, 146, 221, 61, 160, 110, 214, 189, 186, 27, 19, 62, 114, 84, 166, 189, 22, 181, 169, 62, 239, 150, 166, 186, 82, 232, 23, 62, 91, 183, 0, 190, 65, 39, 28, 190, 76, 23, 108, 60, 92, 4, 108, 62, 92, 66, 234, 60, 24, 224, 188, 190, 248, 113, 88, 62, 188, 148, 62, 62, 77, 86, 93, 189, 48, 129, 114, 190, 114, 32, 64, 190, 253, 216, 55, 62, 224, 60, 86, 62, 150, 193, 44, 189, 80, 225, 145, 189, 92, 168, 167, 59, 131, 75, 42, 62, 242, 32, 150, 190, 238, 232, 221, 61, 51, 21, 221, 189, 198, 155, 5, 62, 88, 155, 82, 189, 123, 237, 43, 189, 199, 136, 243, 189, 115, 131, 216, 190, 48, 71, 147, 61, 162, 120, 20, 190, 107, 35, 156, 190, 112, 195, 163, 190, 16, 246, 163, 62, 202, 218, 131, 62, 17, 185, 217, 61, 171, 23, 2, 188, 255, 137, 5, 191, 116, 50, 133, 188, 105, 211, 246, 61, 96, 115, 55, 62, 58, 249, 96, 60, 129, 21, 108, 189, 211, 122, 51, 59, 133, 230, 10, 189, 121, 171, 66, 62, 159, 71, 245, 60, 64, 172, 39, 190, 151, 79, 16, 190, 181, 43, 8, 190, 173, 59, 154, 189, 230, 15, 32, 62, 207, 121, 0, 190, 76, 234, 191, 61, 163, 191, 252, 61, 224, 37, 133, 189, 121, 79, 22, 190, 148, 28, 55, 62, 246, 141, 213, 61, 200, 150, 78, 189, 251, 239, 16, 62, 33, 191, 130, 59, 44, 120, 18, 61, 89, 230, 144, 58, 230, 162, 42, 61, 155, 246, 161, 60, 126, 240, 207, 189, 127, 101, 135, 61, 165, 81, 149, 189, 108, 9, 150, 61, 10, 144, 42, 189, 254, 248, 174, 189, 120, 113, 21, 189, 249, 201, 4, 190, 121, 162, 67, 62, 73, 16, 92, 62, 121, 131, 177, 61, 108, 212, 18, 61, 55, 140, 2, 190, 171, 116, 8, 62, 238, 46, 80, 61, 139, 19, 179, 61, 208, 99, 13, 190, 174, 40, 145, 190, 210, 132, 155, 61, 235, 83, 220, 190, 75, 8, 51, 61, 153, 59, 113, 189, 188, 232, 212, 61, 22, 102, 61, 190, 178, 239, 168, 62, 232, 176, 119, 60, 48, 174, 142, 190, 39, 67, 80, 189, 211, 74, 47, 190, 198, 107, 170, 190, 40, 33, 210, 190, 204, 198, 160, 62, 245, 227, 89, 190, 203, 179, 92, 62, 55, 119, 185, 188, 27, 116, 209, 190, 77, 198, 62, 62, 159, 63, 159, 62, 48, 142, 57, 62, 135, 229, 142, 190, 106, 243, 131, 62, 3, 67, 108, 190, 206, 155, 63, 190, 15, 201, 131, 62, 41, 63, 44, 190, 80, 0, 129, 61, 238, 112, 36, 190, 27, 198, 116, 61, 94, 198, 77, 190, 155, 15, 26, 190, 132, 117, 187, 190, 192, 65, 15, 190, 179, 18, 143, 190, 234, 85, 92, 62, 81, 216, 189, 190, 63, 79, 181, 61, 51, 211, 183, 62, 252, 82, 113, 61, 168, 94, 66, 189, 244, 75, 101, 60, 14, 218, 250, 189, 209, 73, 69, 61, 74, 130, 48, 62, 191, 130, 221, 60, 115, 99, 97, 189, 223, 206, 12, 190, 207, 22, 11, 62, 1, 80, 54, 61, 79, 185, 68, 190, 156, 137, 133, 62, 146, 150, 137, 62, 236, 204, 216, 185, 12, 3, 84, 61, 9, 143, 64, 61, 116, 40, 180, 189, 2, 103, 20, 189, 185, 243, 55, 189, 120, 159, 223, 189, 151, 169, 149, 189, 61, 137, 229, 189, 108, 245, 71, 62, 131, 166, 126, 189, 138, 66, 228, 61, 200, 103, 251, 61, 220, 209, 62, 190, 253, 159, 227, 61, 188, 117, 117, 189, 15, 124, 34, 62, 45, 208, 59, 190, 20, 130, 38, 61, 57, 151, 211, 60, 243, 52, 124, 188, 74, 147, 28, 190, 114, 145, 7, 189, 173, 86, 211, 61, 159, 111, 52, 189, 80, 177, 45, 185, 119, 230, 206, 189, 119, 129, 25, 62, 186, 18, 29, 62, 162, 218, 63, 190, 137, 86, 69, 61, 135, 61, 36, 190, 241, 173, 196, 189, 144, 148, 195, 60, 122, 100, 192, 61, 123, 221, 2, 62, 120, 95, 121, 61, 76, 226, 39, 189, 217, 74, 207, 61, 66, 205, 75, 62, 178, 19, 89, 62, 151, 43, 116, 60, 22, 87, 177, 188, 255, 144, 2, 190, 9, 162, 207, 190, 227, 191, 103, 189, 229, 57, 74, 62, 209, 249, 122, 62, 144, 115, 75, 190, 42, 70, 97, 62, 156, 92, 167, 189, 157, 233, 163, 190, 188, 45, 132, 62, 106, 106, 96, 61, 86, 161, 80, 190, 214, 210, 210, 190, 243, 28, 147, 62, 95, 236, 63, 190, 100, 89, 48, 62, 6, 149, 44, 190, 109, 8, 125, 190, 201, 57, 179, 189, 158, 6, 149, 62, 255, 114, 43, 62, 88, 192, 10, 190, 248, 240, 230, 58, 247, 147, 134, 189, 134, 199, 237, 61, 247, 191, 146, 188, 207, 14, 7, 62, 41, 134, 17, 62, 167, 134, 22, 190, 153, 196, 15, 62, 111, 53, 72, 190, 145, 214, 24, 189, 195, 251, 171, 61, 159, 204, 98, 188, 70, 135, 243, 59, 77, 142, 202, 60, 131, 46, 221, 61, 64, 176, 56, 190, 26, 29, 51, 61, 225, 72, 132, 189, 19, 230, 7, 61, 124, 143, 85, 61, 61, 120, 41, 190, 161, 104, 31, 190, 153, 191, 217, 61, 224, 240, 5, 62, 25, 189, 150, 189, 16, 89, 204, 188, 25, 67, 36, 190, 235, 167, 25, 62, 101, 195, 84, 61, 240, 142, 48, 190, 151, 39, 188, 189, 39, 127, 167, 189, 96, 212, 172, 61, 181, 15, 30, 190, 126, 77, 71, 190, 177, 31, 4, 189, 69, 107, 182, 61, 110, 30, 40, 62, 61, 117, 238, 61, 23, 195, 248, 189, 87, 123, 162, 189, 32, 49, 230, 61, 83, 138, 39, 189, 22, 13, 217, 189, 221, 204, 47, 190, 5, 197, 17, 62, 61, 199, 180, 187, 16, 184, 95, 189, 197, 42, 125, 62, 67, 65, 223, 61, 50, 175, 91, 62, 94, 199, 147, 189, 214, 143, 136, 190, 20, 224, 201, 61, 70, 132, 206, 189, 138, 111, 0, 61, 145, 241, 160, 61, 120, 255, 23, 190, 230, 158, 45, 190, 63, 51, 37, 61, 69, 164, 130, 190, 162, 7, 41, 61, 206, 214, 106, 62, 89, 113, 139, 189, 223, 138, 37, 62, 34, 91, 110, 189, 60, 181, 2, 61, 76, 120, 84, 190, 15, 21, 47, 62, 82, 183, 54, 190, 242, 107, 91, 61, 229, 176, 143, 189, 20, 16, 244, 188, 231, 10, 64, 187, 84, 202, 228, 188, 70, 85, 59, 62, 158, 217, 20, 62, 88, 164, 54, 62, 112, 74, 190, 189, 241, 247, 129, 62, 81, 190, 41, 189, 9, 48, 190, 61, 52, 71, 254, 189, 55, 31, 61, 62, 228, 159, 67, 189, 17, 91, 242, 61, 213, 162, 212, 189, 159, 245, 239, 189, 173, 88, 39, 190, 148, 4, 88, 189, 82, 160, 119, 189, 111, 52, 226, 61, 24, 24, 152, 189, 252, 229, 87, 187, 228, 234, 156, 61, 85, 64, 1, 188, 22, 144, 7, 190, 152, 107, 254, 188, 150, 4, 191, 188, 21, 228, 183, 61, 44, 61, 234, 189, 115, 236, 244, 189, 32, 172, 40, 190, 156, 247, 202, 61, 206, 195, 103, 61, 185, 127, 51, 190, 139, 228, 50, 61, 183, 221, 13, 190, 41, 217, 171, 61, 92, 89, 121, 188, 36, 239, 33, 190, 172, 9, 48, 190, 128, 87, 201, 189, 8, 113, 128, 60, 0, 142, 142, 61, 113, 120, 243, 61, 154, 25, 216, 189, 201, 242, 87, 61, 196, 214, 215, 61, 243, 16, 82, 189, 57, 82, 55, 190, 152, 238, 45, 189, 177, 224, 127, 61, 102, 181, 11, 190, 115, 146, 166, 60, 15, 127, 171, 61, 215, 159, 128, 189, 56, 4, 21, 62, 250, 25, 164, 189, 160, 255, 68, 189, 66, 153, 134, 61, 179, 116, 42, 61, 198, 176, 39, 190, 212, 200, 138, 61, 182, 45, 24, 190, 118, 243, 15, 190, 70, 158, 57, 61, 54, 7, 93, 189, 67, 180, 180, 189, 124, 69, 31, 190, 63, 84, 28, 62, 3, 81, 72, 190, 95, 86, 139, 61, 196, 182, 110, 53, 89, 54, 233, 189, 28, 13, 18, 62, 4, 218, 53, 190, 227, 231, 27, 190, 69, 71, 7, 190, 134, 4, 8, 62, 134, 136, 25, 189, 212, 65, 25, 189, 77, 211, 191, 61, 186, 18, 165, 61, 249, 16, 220, 189, 43, 70, 113, 189, 230, 4, 52, 190, 228, 201, 182, 61, 245, 17, 129, 61, 102, 29, 175, 62, 4, 224, 145, 188, 68, 163, 55, 62, 142, 254, 44, 62, 172, 238, 102, 190, 133, 138, 121, 61, 50, 47, 129, 188, 172, 164, 15, 190, 65, 25, 188, 61, 224, 174, 89, 62, 93, 201, 16, 62, 235, 43, 59, 62, 88, 107, 93, 62, 136, 232, 133, 189, 164, 6, 86, 62, 213, 14, 46, 190, 254, 222, 152, 62, 194, 154, 78, 189, 112, 128, 200, 61, 154, 221, 232, 189, 49, 48, 220, 60, 51, 92, 97, 62, 130, 7, 37, 62, 35, 206, 250, 60, 190, 255, 80, 190, 139, 86, 209, 187, 129, 198, 244, 61, 161, 92, 66, 60, 17, 35, 237, 60, 236, 44, 23, 61, 167, 68, 6, 189, 60, 151, 103, 61, 20, 86, 172, 189, 153, 97, 69, 61, 214, 157, 22, 190, 91, 10, 253, 189, 112, 77, 150, 61, 30, 76, 36, 57, 117, 151, 33, 189, 89, 75, 41, 190, 63, 208, 4, 190, 32, 246, 162, 189, 234, 86, 190, 61, 87, 163, 152, 188, 141, 21, 234, 189, 247, 93, 64, 190, 243, 70, 33, 189, 99, 13, 23, 188, 27, 156, 18, 189, 24, 100, 191, 189, 195, 15, 166, 61, 79, 175, 207, 189, 48, 221, 21, 61, 248, 15, 198, 189, 240, 16, 243, 188, 146, 202, 208, 189, 115, 128, 141, 189, 47, 137, 166, 189, 7, 41, 252, 189, 250, 12, 201, 61, 220, 212, 19, 190, 61, 178, 22, 62, 184, 144, 156, 60, 7, 223, 241, 59};
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
                alignas(float) const unsigned char memory[] = {105, 6, 10, 189, 16, 52, 160, 189, 114, 121, 103, 61, 128, 207, 87, 189, 73, 142, 22, 190, 146, 202, 182, 61, 240, 71, 136, 61, 57, 226, 73, 61, 145, 181, 35, 190, 38, 93, 225, 60, 169, 237, 78, 61, 242, 148, 178, 189, 141, 108, 176, 189, 150, 57, 70, 62, 244, 182, 203, 61, 199, 67, 217, 189, 199, 128, 211, 61, 63, 13, 90, 62, 247, 235, 7, 59, 57, 189, 29, 62, 196, 177, 205, 188, 89, 212, 197, 61, 146, 208, 44, 62, 12, 210, 245, 189, 237, 106, 203, 61, 99, 41, 163, 189, 160, 207, 160, 60, 239, 225, 128, 61, 61, 15, 36, 61, 245, 60, 201, 188, 114, 152, 66, 189, 112, 232, 143, 61};
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
                alignas(float) const unsigned char memory[] = {65, 159, 89, 59, 180, 7, 6, 190, 233, 95, 188, 61, 118, 92, 234, 61, 155, 168, 73, 190, 183, 10, 129, 62, 120, 38, 34, 190, 44, 51, 50, 189, 245, 149, 146, 61, 157, 97, 187, 61, 225, 63, 244, 61, 57, 114, 153, 187, 71, 16, 128, 189, 19, 99, 130, 190, 45, 216, 241, 61, 83, 218, 134, 62, 79, 186, 111, 190, 182, 0, 192, 190, 10, 207, 86, 62, 181, 92, 226, 62, 62, 97, 75, 62, 63, 4, 192, 62, 128, 4, 47, 62, 180, 160, 235, 61, 233, 75, 97, 62, 28, 157, 102, 188, 48, 21, 128, 62, 6, 67, 249, 189, 150, 196, 153, 189, 253, 56, 196, 189, 18, 74, 98, 190, 23, 187, 244, 189, 98, 145, 150, 188, 26, 19, 139, 61, 165, 201, 103, 61, 86, 179, 1, 62, 84, 91, 90, 190, 101, 204, 55, 189, 63, 149, 115, 190, 137, 171, 35, 62, 139, 194, 203, 60, 163, 177, 199, 189, 96, 239, 174, 189, 209, 239, 10, 62, 118, 133, 226, 61, 79, 163, 174, 189, 9, 187, 1, 62, 237, 85, 177, 61, 92, 99, 239, 61, 129, 97, 45, 190, 248, 127, 191, 61, 212, 13, 234, 61, 163, 48, 197, 61, 60, 155, 13, 190, 232, 79, 44, 190, 241, 111, 26, 62, 134, 208, 92, 190, 249, 188, 19, 61, 220, 242, 132, 189, 218, 4, 4, 190, 75, 147, 145, 60, 190, 244, 70, 189, 174, 213, 26, 61, 228, 33, 110, 60};
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
                alignas(float) const unsigned char memory[] = {158, 129, 21, 190, 164, 93, 16, 190};
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
    alignas(float) const unsigned char memory[] = {36, 175, 134, 63, 163, 201, 146, 191, 50, 86, 13, 189};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {130, 190, 168, 63, 253, 137, 79, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0029/steps/000000000002000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
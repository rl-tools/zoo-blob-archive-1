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
                alignas(float) const unsigned char memory[] = {120, 43, 77, 63, 209, 222, 136, 190, 78, 234, 221, 190, 60, 241, 251, 62, 106, 94, 197, 62, 227, 22, 9, 191, 136, 122, 102, 61, 193, 202, 99, 63, 11, 148, 23, 191, 164, 152, 160, 61, 16, 58, 132, 63, 50, 86, 116, 190, 111, 160, 111, 191, 73, 95, 128, 189, 199, 200, 34, 191, 175, 73, 20, 191, 85, 209, 184, 63, 136, 71, 76, 62, 248, 96, 12, 63, 102, 74, 60, 63, 139, 210, 167, 62, 166, 205, 119, 62, 34, 228, 14, 62, 148, 145, 21, 62, 100, 124, 2, 63, 242, 18, 156, 189, 116, 68, 199, 62, 88, 105, 247, 62, 213, 118, 115, 63, 202, 41, 100, 62, 191, 91, 232, 61, 95, 196, 110, 191, 121, 122, 235, 62, 228, 224, 37, 191, 2, 21, 146, 63, 10, 151, 153, 62, 225, 224, 122, 59, 6, 187, 139, 63, 249, 99, 36, 62, 164, 89, 66, 63, 223, 84, 55, 63, 205, 66, 5, 63, 3, 250, 76, 190, 222, 92, 248, 191, 231, 48, 9, 191, 219, 85, 218, 190, 224, 202, 232, 62, 193, 75, 189, 62, 253, 82, 62, 63, 46, 237, 37, 63, 152, 65, 20, 62, 223, 17, 130, 62, 17, 12, 110, 63, 20, 209, 36, 63, 11, 90, 222, 190, 121, 235, 8, 191, 222, 212, 218, 189, 195, 12, 69, 63, 116, 129, 24, 63, 69, 0, 136, 62, 182, 239, 63, 191, 206, 108, 39, 190, 18, 197, 132, 189, 134, 203, 224, 62, 209, 233, 111, 191, 242, 3, 238, 190, 252, 130, 6, 63, 32, 28, 123, 191, 159, 211, 181, 61, 109, 204, 18, 191, 12, 151, 94, 191, 238, 43, 32, 191, 36, 95, 57, 191, 84, 108, 49, 60, 98, 17, 144, 190, 71, 22, 21, 191, 250, 115, 210, 191, 51, 27, 182, 190, 130, 126, 148, 191, 24, 169, 74, 62, 97, 47, 50, 60, 249, 200, 75, 63, 222, 52, 148, 191, 110, 77, 178, 190, 20, 197, 43, 191, 59, 74, 80, 191, 205, 188, 53, 190, 11, 29, 179, 62, 78, 64, 114, 63, 118, 36, 159, 190, 94, 126, 21, 63, 140, 66, 162, 191, 73, 170, 94, 190, 0, 16, 247, 58, 194, 49, 39, 63, 57, 46, 183, 190};
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
                alignas(float) const unsigned char memory[] = {188, 181, 95, 191, 153, 161, 94, 190, 78, 191, 89, 190, 197, 8, 26, 63, 189, 97, 18, 191, 149, 228, 192, 185, 203, 133, 223, 190, 1, 58, 13, 60, 111, 209, 152, 62, 26, 77, 90, 190, 168, 27, 130, 61, 9, 38, 134, 61, 238, 186, 123, 62, 53, 249, 104, 190, 159, 52, 225, 189, 215, 124, 138, 189, 119, 254, 49, 62, 231, 145, 211, 190, 229, 61, 210, 62, 198, 72, 130, 62, 162, 229, 23, 63, 0, 3, 136, 189, 14, 224, 1, 63, 18, 247, 13, 61, 168, 20, 144, 190, 131, 142, 13, 62, 167, 184, 150, 62, 85, 80, 16, 188, 169, 186, 36, 63, 4, 183, 209, 62, 109, 62, 113, 62, 163, 230, 234, 60};
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
                alignas(float) const unsigned char memory[] = {237, 84, 4, 191, 108, 97, 138, 62, 72, 244, 25, 63, 197, 11, 170, 62, 119, 238, 82, 188, 235, 30, 49, 190, 234, 178, 212, 62, 242, 83, 142, 62, 181, 142, 92, 62, 223, 17, 24, 62, 219, 133, 199, 61, 19, 105, 186, 189, 240, 38, 35, 62, 39, 51, 168, 61, 25, 117, 60, 191, 2, 141, 47, 61, 66, 21, 176, 62, 118, 163, 152, 61, 88, 149, 20, 191, 148, 40, 114, 62, 89, 107, 194, 190, 89, 192, 217, 190, 53, 110, 40, 189, 131, 143, 58, 190, 163, 247, 22, 62, 190, 97, 140, 191, 143, 230, 47, 191, 96, 37, 231, 190, 175, 71, 123, 191, 158, 10, 121, 62, 246, 242, 238, 190, 97, 147, 212, 62, 206, 46, 82, 190, 225, 230, 197, 60, 89, 92, 35, 189, 227, 134, 117, 189, 82, 208, 119, 61, 201, 202, 202, 188, 185, 34, 42, 190, 179, 147, 34, 189, 176, 178, 130, 189, 144, 86, 30, 62, 174, 11, 3, 61, 197, 159, 173, 61, 221, 223, 215, 189, 31, 115, 235, 60, 113, 57, 96, 187, 180, 231, 150, 189, 152, 127, 67, 190, 159, 65, 254, 189, 216, 233, 188, 189, 77, 115, 30, 190, 234, 229, 164, 187, 200, 243, 144, 61, 228, 83, 163, 59, 101, 51, 236, 61, 236, 110, 78, 189, 237, 33, 170, 189, 241, 248, 151, 188, 209, 108, 171, 189, 150, 129, 240, 188, 165, 37, 18, 190, 22, 190, 29, 60, 174, 136, 97, 61, 118, 149, 37, 191, 128, 130, 32, 190, 68, 224, 204, 61, 120, 75, 249, 62, 31, 18, 113, 62, 2, 116, 168, 189, 97, 181, 205, 59, 108, 102, 115, 61, 149, 121, 172, 188, 122, 159, 220, 190, 28, 153, 190, 189, 118, 125, 193, 189, 154, 116, 247, 61, 141, 251, 240, 61, 245, 164, 214, 190, 248, 10, 184, 189, 18, 38, 161, 62, 155, 104, 8, 62, 171, 220, 196, 187, 54, 239, 48, 62, 174, 144, 130, 62, 48, 109, 139, 190, 254, 9, 48, 62, 70, 76, 180, 189, 229, 224, 166, 61, 192, 170, 98, 190, 153, 167, 170, 189, 162, 80, 245, 190, 248, 249, 45, 190, 38, 77, 178, 62, 56, 223, 88, 190, 225, 229, 64, 189, 141, 53, 5, 61, 15, 175, 90, 185, 32, 194, 248, 60, 212, 194, 69, 190, 192, 193, 210, 61, 227, 11, 21, 189, 227, 40, 68, 190, 194, 183, 109, 61, 207, 106, 167, 61, 157, 49, 53, 190, 247, 251, 123, 59, 203, 231, 3, 190, 6, 144, 196, 61, 212, 101, 170, 61, 221, 218, 7, 189, 97, 155, 42, 189, 101, 147, 104, 188, 95, 119, 69, 61, 185, 59, 23, 62, 51, 133, 65, 61, 255, 66, 167, 189, 112, 224, 18, 190, 229, 117, 103, 190, 137, 74, 47, 190, 33, 14, 7, 62, 181, 142, 22, 190, 152, 125, 70, 61, 38, 96, 157, 59, 196, 37, 179, 189, 168, 8, 200, 189, 136, 72, 122, 61, 190, 231, 32, 190, 251, 6, 188, 189, 145, 108, 79, 62, 209, 21, 160, 61, 137, 198, 48, 62, 160, 121, 149, 190, 66, 239, 62, 191, 34, 66, 116, 190, 233, 18, 224, 190, 163, 180, 160, 189, 123, 199, 72, 191, 242, 104, 90, 191, 178, 184, 41, 191, 143, 133, 77, 62, 52, 245, 206, 190, 250, 253, 227, 190, 149, 208, 6, 62, 244, 110, 33, 60, 40, 191, 189, 189, 145, 81, 206, 190, 215, 171, 103, 61, 105, 175, 241, 190, 233, 203, 161, 189, 248, 42, 20, 189, 239, 221, 83, 190, 78, 27, 199, 60, 127, 67, 95, 191, 210, 126, 151, 190, 8, 181, 210, 61, 5, 188, 22, 191, 101, 81, 137, 62, 76, 188, 24, 189, 12, 3, 208, 61, 0, 171, 254, 190, 53, 128, 198, 188, 224, 125, 113, 61, 47, 114, 160, 61, 244, 27, 241, 59, 43, 62, 176, 189, 186, 243, 225, 189, 59, 155, 236, 60, 40, 113, 160, 189, 223, 61, 227, 190, 157, 156, 0, 190, 143, 213, 185, 188, 79, 32, 33, 60, 208, 150, 90, 61, 200, 63, 128, 60, 227, 182, 130, 190, 55, 19, 182, 62, 55, 44, 30, 189, 178, 28, 176, 62, 39, 98, 102, 62, 249, 194, 170, 62, 151, 231, 161, 188, 3, 243, 35, 62, 178, 117, 54, 62, 24, 126, 156, 61, 172, 195, 120, 61, 174, 57, 254, 61, 79, 46, 118, 190, 212, 242, 150, 61, 105, 20, 222, 59, 42, 133, 162, 188, 89, 15, 141, 187, 171, 240, 79, 190, 143, 206, 183, 190, 163, 253, 28, 61, 118, 225, 69, 189, 129, 154, 17, 190, 167, 21, 28, 62, 23, 218, 206, 56, 130, 45, 205, 189, 193, 192, 245, 58, 36, 182, 33, 190, 188, 180, 173, 190, 190, 126, 60, 62, 80, 169, 1, 189, 38, 154, 164, 189, 8, 141, 43, 191, 20, 171, 92, 188, 116, 80, 88, 191, 92, 141, 50, 62, 208, 28, 10, 189, 14, 88, 165, 190, 222, 232, 163, 62, 253, 169, 236, 190, 97, 234, 97, 191, 0, 124, 7, 191, 199, 131, 174, 62, 108, 162, 0, 191, 151, 80, 226, 62, 176, 44, 163, 190, 143, 82, 62, 62, 201, 55, 69, 190, 246, 154, 29, 191, 41, 117, 98, 190, 240, 77, 156, 189, 37, 90, 129, 190, 172, 247, 163, 61, 105, 246, 46, 191, 148, 187, 54, 62, 105, 123, 126, 191, 167, 160, 167, 62, 212, 215, 19, 191, 107, 97, 158, 61, 198, 27, 185, 190, 63, 63, 147, 190, 38, 84, 91, 191, 146, 221, 9, 191, 89, 170, 57, 190, 158, 209, 226, 62, 63, 39, 179, 190, 55, 213, 132, 62, 155, 57, 10, 191, 41, 224, 153, 61, 132, 151, 218, 188, 251, 70, 157, 61, 60, 25, 69, 62, 28, 251, 184, 61, 92, 247, 70, 61, 226, 180, 133, 61, 192, 64, 11, 62, 71, 214, 63, 62, 195, 152, 195, 60, 184, 41, 157, 62, 78, 38, 160, 190, 144, 84, 31, 62, 143, 55, 154, 190, 208, 23, 206, 190, 49, 94, 121, 190, 183, 236, 142, 190, 142, 113, 98, 190, 151, 21, 156, 62, 8, 211, 136, 190, 234, 102, 124, 60, 222, 194, 205, 61, 37, 172, 10, 61, 198, 177, 27, 191, 119, 122, 212, 61, 45, 198, 216, 188, 75, 40, 148, 190, 193, 110, 125, 61, 135, 25, 159, 62, 252, 241, 131, 189, 150, 102, 223, 61, 69, 63, 219, 189, 62, 236, 181, 62, 242, 165, 173, 60, 24, 208, 177, 62, 203, 133, 139, 62, 69, 242, 149, 62, 24, 111, 232, 61, 162, 70, 211, 62, 79, 190, 218, 61, 130, 26, 12, 62, 85, 193, 86, 61, 70, 151, 116, 62, 205, 40, 137, 190, 18, 122, 236, 188, 58, 132, 143, 190, 100, 114, 22, 190, 215, 53, 213, 190, 224, 214, 29, 191, 146, 159, 230, 61, 180, 37, 138, 191, 215, 158, 5, 63, 226, 220, 205, 190, 57, 207, 196, 61, 32, 32, 26, 61, 244, 114, 4, 191, 191, 92, 35, 62, 133, 90, 125, 61, 149, 67, 193, 62, 59, 93, 28, 186, 120, 129, 194, 190, 134, 203, 79, 190, 90, 93, 24, 61, 183, 109, 169, 188, 169, 188, 187, 61, 146, 147, 119, 60, 51, 95, 181, 61, 237, 36, 50, 190, 161, 154, 6, 62, 232, 79, 172, 191, 208, 102, 85, 191, 2, 239, 23, 191, 140, 53, 12, 62, 154, 128, 116, 62, 241, 72, 207, 61, 55, 186, 223, 190, 221, 118, 134, 62, 197, 46, 229, 61, 140, 214, 111, 190, 24, 42, 206, 190, 210, 211, 114, 191, 70, 95, 227, 190, 197, 224, 8, 191, 81, 227, 196, 190, 29, 189, 132, 189, 91, 151, 106, 61, 142, 233, 91, 62, 83, 174, 104, 190, 133, 22, 148, 62, 242, 223, 6, 190, 27, 58, 174, 189, 95, 164, 216, 189, 134, 35, 206, 62, 147, 47, 51, 62, 155, 7, 197, 61, 45, 113, 132, 61, 31, 222, 143, 190, 239, 0, 182, 61, 19, 144, 13, 191, 36, 116, 132, 62, 111, 227, 75, 62, 67, 70, 157, 189, 211, 162, 10, 191, 43, 8, 53, 63, 7, 79, 105, 190, 46, 43, 220, 62, 178, 97, 174, 190, 237, 255, 219, 190, 67, 63, 197, 62, 254, 25, 36, 191, 139, 110, 101, 62, 39, 171, 88, 190, 241, 142, 236, 190, 103, 229, 38, 62, 52, 214, 38, 190, 207, 38, 241, 62, 164, 82, 128, 190, 165, 159, 29, 62, 122, 99, 223, 189, 166, 123, 74, 190, 184, 67, 27, 190, 23, 84, 191, 189, 156, 73, 130, 62, 70, 143, 15, 62, 126, 95, 51, 191, 107, 85, 245, 61, 157, 152, 105, 62, 22, 65, 231, 61, 130, 97, 190, 188, 9, 248, 157, 189, 85, 254, 8, 62, 226, 138, 90, 190, 38, 207, 62, 61, 8, 41, 20, 190, 106, 191, 77, 190, 170, 219, 222, 60, 179, 232, 134, 62, 252, 145, 250, 62, 195, 111, 145, 62, 208, 236, 94, 190, 235, 192, 119, 62, 216, 213, 39, 190, 119, 23, 164, 62, 217, 122, 27, 62, 114, 172, 134, 62, 188, 144, 117, 190, 95, 131, 208, 189, 222, 134, 130, 191, 44, 183, 53, 191, 62, 238, 50, 62, 219, 44, 7, 62, 136, 27, 145, 191, 74, 3, 166, 62, 44, 33, 111, 190, 158, 239, 51, 190, 209, 79, 135, 190, 203, 36, 66, 190, 73, 110, 167, 61, 78, 179, 94, 62, 209, 12, 9, 189, 111, 115, 129, 189, 183, 88, 106, 61, 139, 6, 48, 61, 246, 129, 190, 61, 171, 164, 3, 62, 156, 58, 168, 60, 60, 47, 190, 189, 243, 86, 76, 191, 17, 77, 212, 61, 170, 197, 252, 61, 237, 65, 109, 187, 181, 64, 49, 62, 176, 17, 128, 62, 235, 178, 98, 62, 198, 12, 145, 190, 137, 155, 169, 190, 30, 176, 15, 190, 153, 26, 102, 62, 135, 112, 112, 62, 224, 152, 47, 190, 9, 197, 20, 63, 60, 252, 56, 62, 121, 69, 0, 190, 22, 185, 71, 63, 29, 76, 67, 191, 175, 111, 0, 190, 16, 136, 190, 61, 216, 195, 122, 62, 55, 162, 232, 62, 126, 47, 39, 191, 161, 245, 87, 62, 213, 99, 101, 191, 154, 164, 215, 61, 69, 32, 184, 61, 120, 51, 115, 62, 14, 1, 135, 190, 219, 54, 146, 62, 56, 0, 211, 62, 110, 97, 96, 61, 162, 110, 12, 63, 235, 93, 197, 189, 153, 118, 1, 191, 56, 187, 148, 62, 215, 81, 68, 61, 231, 167, 225, 190, 104, 131, 11, 62, 225, 190, 59, 191, 137, 73, 141, 190, 153, 56, 33, 191, 195, 35, 27, 62, 86, 201, 48, 190, 208, 102, 3, 191, 22, 170, 158, 62, 216, 166, 78, 60, 238, 209, 196, 60, 123, 36, 155, 62, 201, 22, 53, 62, 164, 167, 7, 62, 69, 133, 22, 62, 52, 56, 248, 58, 42, 181, 35, 189, 252, 79, 239, 61, 86, 102, 194, 62, 95, 223, 6, 62, 160, 122, 65, 191, 243, 38, 33, 62, 144, 135, 219, 190, 190, 242, 248, 188, 214, 168, 252, 61, 113, 186, 205, 61, 240, 129, 138, 61, 155, 251, 74, 190, 69, 239, 6, 191, 93, 168, 129, 60, 75, 119, 126, 191, 202, 144, 122, 61, 242, 203, 65, 190, 113, 196, 182, 191, 226, 7, 208, 62, 171, 119, 61, 62, 100, 41, 97, 62, 103, 110, 228, 61, 88, 68, 69, 61, 238, 164, 184, 62, 97, 179, 146, 190, 111, 92, 168, 61, 60, 94, 91, 59, 181, 25, 19, 190, 98, 214, 88, 62, 250, 151, 42, 60, 20, 23, 139, 188, 212, 119, 180, 189, 198, 83, 220, 190, 45, 204, 180, 61, 17, 87, 87, 62, 46, 62, 100, 60, 230, 150, 180, 189, 16, 244, 189, 61, 58, 235, 68, 187, 11, 202, 129, 61, 38, 24, 26, 62, 91, 19, 245, 188, 95, 1, 153, 189, 165, 58, 44, 191, 251, 213, 86, 62, 178, 77, 182, 62, 227, 117, 93, 61, 123, 39, 49, 190, 187, 146, 187, 62, 194, 209, 179, 62, 51, 203, 39, 191, 74, 5, 244, 190, 150, 111, 246, 189, 252, 208, 78, 61, 23, 39, 166, 62, 135, 196, 31, 63, 248, 253, 242, 190, 171, 98, 229, 189, 16, 209, 237, 189, 1, 18, 112, 191, 179, 79, 182, 62, 26, 224, 97, 62, 64, 178, 197, 60, 32, 74, 153, 190, 48, 109, 48, 191, 160, 205, 158, 62, 177, 31, 48, 187, 15, 221, 66, 190, 7, 5, 167, 61, 126, 99, 73, 190, 136, 37, 57, 62, 141, 142, 168, 190, 102, 75, 132, 62, 191, 82, 117, 60, 243, 173, 175, 62, 22, 131, 10, 191, 45, 197, 136, 62, 130, 146, 105, 62, 31, 59, 141, 62, 242, 187, 143, 189, 113, 105, 249, 62, 15, 142, 59, 62, 189, 164, 141, 189, 124, 66, 211, 61, 17, 242, 24, 190, 2, 19, 71, 191, 56, 131, 156, 189, 24, 143, 243, 189, 33, 20, 140, 60, 233, 29, 16, 191, 52, 239, 49, 190, 70, 205, 62, 61, 187, 206, 144, 190, 144, 130, 161, 190, 150, 169, 238, 190, 10, 19, 14, 190, 29, 196, 238, 189, 169, 119, 201, 61, 51, 251, 86, 190, 70, 78, 97, 191, 54, 51, 109, 190, 230, 37, 205, 190, 158, 238, 28, 62, 59, 234, 98, 190, 37, 94, 121, 189, 87, 49, 217, 190, 76, 225, 117, 190, 50, 138, 230, 61, 7, 127, 153, 62, 113, 144, 255, 190, 152, 224, 171, 61, 25, 179, 135, 190, 182, 210, 113, 190, 220, 162, 20, 191, 88, 198, 239, 190, 59, 183, 135, 189, 188, 68, 97, 189, 104, 144, 189, 61, 72, 229, 108, 62, 221, 205, 154, 62, 229, 217, 95, 62, 205, 149, 212, 189, 86, 182, 39, 62, 138, 200, 233, 62, 180, 153, 177, 191, 158, 67, 11, 191, 134, 106, 246, 62, 51, 42, 90, 62, 119, 201, 173, 61, 215, 84, 140, 190, 227, 176, 194, 62, 172, 174, 147, 191, 86, 65, 124, 62, 238, 128, 137, 61, 148, 32, 210, 62, 7, 26, 20, 190, 209, 122, 251, 190, 186, 32, 14, 62, 215, 25, 88, 62, 120, 217, 222, 62, 20, 80, 230, 62, 194, 153, 52, 191, 212, 178, 191, 62, 125, 52, 137, 62, 126, 173, 5, 191, 196, 213, 148, 190, 14, 127, 80, 191, 143, 187, 170, 190, 138, 161, 220, 189, 39, 211, 47, 62, 176, 219, 186, 62, 195, 58, 13, 190, 80, 129, 183, 62, 129, 64, 225, 61, 34, 237, 129, 62, 64, 237, 155, 190, 136, 180, 166, 190, 87, 107, 53, 190, 119, 156, 60, 59, 29, 129, 193, 62, 35, 75, 203, 60, 140, 67, 159, 190, 118, 27, 167, 62, 156, 138, 92, 189, 27, 61, 86, 189, 242, 37, 55, 62, 123, 53, 162, 61, 131, 190, 174, 189, 104, 44, 209, 189, 159, 231, 76, 62, 124, 110, 24, 63, 8, 162, 244, 62, 224, 226, 213, 190, 143, 194, 228, 190, 230, 202, 14, 189, 206, 116, 130, 62, 123, 83, 138, 190, 224, 119, 196, 189, 188, 182, 169, 62, 127, 17, 242, 189, 130, 133, 96, 191, 89, 200, 175, 59, 24, 53, 236, 190, 21, 50, 74, 63, 93, 93, 145, 190, 154, 0, 214, 61, 56, 100, 141, 190, 96, 227, 136, 190, 21, 186, 48, 62, 140, 58, 172, 62, 189, 121, 78, 62, 207, 151, 137, 190, 111, 173, 63, 191, 27, 212, 159, 62, 110, 44, 159, 61, 216, 184, 169, 189, 8, 229, 124, 190, 17, 244, 132, 60, 70, 131, 193, 61, 189, 130, 170, 189, 76, 222, 3, 189, 208, 219, 6, 191, 124, 241, 14, 191, 204, 236, 123, 191, 85, 167, 37, 62, 171, 164, 23, 63, 125, 174, 141, 189, 243, 151, 66, 190, 255, 242, 2, 63, 17, 194, 27, 190, 50, 142, 3, 63, 117, 80, 141, 62, 177, 233, 156, 62, 165, 72, 30, 190, 108, 128, 72, 61, 94, 216, 159, 191, 32, 74, 74, 191, 235, 166, 158, 60, 223, 72, 146, 188, 101, 53, 103, 191, 191, 109, 60, 62, 213, 185, 31, 190, 182, 153, 114, 190, 9, 233, 80, 190, 64, 34, 153, 190, 103, 197, 101, 62, 193, 135, 97, 189, 131, 180, 109, 189, 197, 210, 150, 189, 104, 234, 106, 190, 108, 130, 144, 61, 51, 110, 17, 62, 142, 78, 60, 62, 8, 91, 197, 189, 150, 246, 148, 190, 103, 51, 238, 190, 95, 115, 182, 61, 163, 122, 94, 62, 205, 195, 47, 60, 110, 183, 107, 188, 206, 75, 71, 62, 129, 4, 217, 61, 121, 37, 113, 62, 195, 99, 164, 62, 50, 44, 137, 62, 102, 150, 160, 190, 233, 143, 36, 190, 135, 78, 184, 191, 108, 116, 42, 191, 178, 186, 57, 61, 53, 54, 129, 60, 226, 231, 150, 191, 32, 152, 204, 62, 39, 120, 102, 188, 69, 74, 129, 190, 123, 167, 202, 190, 13, 124, 19, 191, 138, 231, 104, 61, 122, 176, 36, 59, 151, 188, 145, 59, 224, 212, 5, 190, 153, 73, 66, 190, 175, 186, 23, 190, 140, 211, 131, 60, 65, 16, 102, 62, 8, 174, 218, 189, 47, 185, 183, 190, 124, 183, 35, 191, 132, 38, 162, 61, 164, 255, 218, 62, 106, 76, 239, 189, 167, 18, 80, 190, 42, 7, 184, 62, 168, 184, 65, 62, 235, 56, 154, 189, 5, 25, 182, 61, 16, 169, 158, 189, 133, 60, 171, 61, 183, 208, 236, 189, 126, 248, 68, 61, 249, 254, 140, 58, 172, 69, 70, 61, 185, 162, 28, 61, 214, 249, 41, 189, 188, 212, 211, 61, 15, 78, 179, 188, 172, 8, 49, 190, 5, 173, 46, 190, 238, 116, 178, 187, 189, 159, 28, 61, 102, 220, 182, 189, 137, 200, 51, 190, 155, 216, 47, 189, 82, 86, 110, 61, 143, 241, 8, 61, 90, 138, 246, 61, 78, 154, 16, 190, 101, 6, 217, 60, 53, 213, 7, 62, 215, 147, 146, 189, 36, 20, 217, 189, 246, 52, 184, 61, 251, 181, 189, 189, 193, 247, 50, 190, 226, 245, 188, 189, 18, 149, 222, 188, 202, 199, 156, 62, 199, 44, 96, 62, 144, 179, 40, 62, 139, 237, 49, 62, 185, 112, 205, 61, 110, 228, 165, 62, 42, 253, 182, 190, 98, 149, 39, 189, 182, 3, 39, 190, 140, 189, 55, 191, 181, 85, 142, 62, 78, 35, 61, 62, 123, 19, 127, 62, 170, 229, 178, 190, 119, 159, 224, 190, 123, 24, 88, 62, 243, 211, 5, 62, 46, 6, 163, 62, 35, 109, 157, 59, 126, 132, 164, 61, 191, 253, 253, 61, 142, 85, 9, 62, 94, 239, 201, 61, 66, 195, 175, 189, 142, 53, 130, 190, 18, 56, 27, 191, 171, 141, 230, 62, 44, 26, 175, 62, 143, 235, 214, 61, 255, 33, 6, 61, 215, 232, 216, 61, 103, 121, 212, 61, 39, 163, 212, 190, 196, 248, 152, 61, 5, 201, 35, 190, 130, 180, 26, 62, 88, 123, 7, 62, 105, 245, 86, 190, 181, 214, 124, 61, 136, 239, 60, 62, 212, 112, 176, 62, 79, 32, 33, 191, 93, 254, 29, 61, 108, 86, 176, 189, 58, 171, 72, 62, 138, 69, 138, 61, 147, 50, 142, 189, 45, 59, 207, 189, 248, 117, 107, 62, 254, 100, 140, 188, 186, 182, 117, 190, 52, 218, 188, 62, 159, 190, 240, 188, 203, 33, 74, 190, 191, 51, 192, 189, 231, 77, 108, 62, 103, 48, 213, 188, 125, 37, 123, 60, 175, 209, 223, 190, 222, 255, 138, 190, 72, 26, 5, 60, 229, 61, 68, 62, 80, 133, 57, 190, 226, 0, 51, 62, 215, 193, 19, 191, 112, 181, 17, 189, 20, 101, 93, 61, 143, 30, 111, 62, 82, 126, 64, 62, 227, 251, 10, 62, 156, 201, 171, 62, 187, 55, 248, 188, 171, 31, 5, 187, 38, 70, 36, 63, 246, 207, 5, 190, 60, 152, 102, 62, 68, 134, 61, 62, 171, 250, 81, 62, 93, 205, 40, 190, 43, 70, 108, 190, 8, 197, 140, 62, 10, 90, 201, 59, 189, 164, 176, 190, 48, 145, 135, 62, 213, 118, 29, 191, 221, 56, 140, 191, 118, 161, 65, 190, 124, 141, 181, 61, 107, 17, 93, 62, 156, 170, 88, 190, 201, 3, 187, 189, 35, 219, 41, 192, 43, 255, 140, 191, 172, 150, 5, 61, 50, 51, 8, 192, 143, 144, 172, 62, 70, 231, 197, 189, 94, 177, 248, 187, 204, 165, 178, 189, 17, 170, 136, 189, 152, 79, 6, 61, 14, 221, 18, 62, 61, 242, 51, 189, 106, 169, 24, 190, 9, 178, 130, 189, 29, 215, 41, 190, 85, 162, 8, 62, 66, 235, 234, 189, 154, 83, 23, 61, 47, 34, 253, 189, 188, 10, 165, 61, 228, 24, 141, 61, 197, 112, 246, 60, 66, 35, 183, 188, 149, 5, 44, 61, 87, 40, 187, 189, 149, 77, 63, 190, 224, 159, 129, 61, 179, 137, 127, 189, 1, 129, 25, 60, 28, 109, 16, 61, 163, 124, 194, 61, 173, 30, 58, 190, 95, 144, 77, 189, 68, 205, 46, 190, 37, 213, 156, 187, 29, 196, 180, 189, 118, 115, 220, 189, 167, 213, 141, 190, 115, 99, 7, 61, 78, 33, 115, 62, 234, 98, 1, 63, 11, 250, 104, 191, 41, 12, 207, 62, 15, 214, 38, 189, 197, 129, 224, 190, 83, 79, 26, 191, 99, 95, 199, 62, 121, 25, 211, 190, 82, 172, 93, 62, 255, 226, 48, 62, 70, 145, 133, 189, 18, 4, 59, 191, 181, 128, 212, 190, 233, 166, 236, 189, 59, 165, 174, 190, 132, 78, 211, 189, 50, 140, 16, 62, 177, 226, 77, 62, 118, 14, 65, 191, 121, 244, 182, 190, 19, 223, 176, 191, 27, 85, 79, 191, 198, 35, 194, 190, 101, 195, 74, 189, 241, 116, 74, 191, 157, 151, 228, 189, 103, 93, 250, 189, 245, 192, 129, 191, 79, 132, 198, 62, 116, 176, 74, 190, 248, 151, 15, 191, 209, 106, 23, 190, 225, 232, 29, 191, 36, 156, 162, 190, 4, 124, 240, 187, 61, 110, 32, 191, 198, 73, 68, 190, 161, 24, 59, 190, 212, 109, 129, 191, 9, 94, 1, 63, 146, 20, 60, 189, 234, 6, 159, 189, 220, 121, 146, 190, 140, 156, 49, 191, 138, 68, 18, 62, 234, 197, 85, 190, 26, 45, 187, 189, 197, 189, 43, 62, 8, 71, 165, 190, 194, 49, 12, 62, 37, 168, 81, 191, 197, 244, 154, 62, 189, 127, 239, 190, 220, 124, 14, 191, 43, 183, 1, 190, 75, 231, 122, 62, 105, 181, 153, 62, 77, 150, 131, 62, 229, 126, 8, 191, 130, 110, 143, 62, 113, 188, 38, 190, 233, 104, 200, 61, 170, 79, 135, 61, 127, 179, 163, 189, 211, 138, 255, 60, 157, 5, 234, 61, 64, 70, 39, 190, 159, 111, 232, 61, 205, 110, 162, 61, 168, 17, 136, 61, 67, 125, 139, 61, 43, 141, 26, 190, 224, 216, 124, 189, 184, 84, 56, 189, 86, 199, 134, 189, 24, 70, 48, 187, 225, 214, 42, 190, 162, 4, 226, 189, 187, 164, 150, 60, 88, 8, 182, 189, 42, 145, 232, 188, 29, 82, 70, 190, 98, 89, 21, 190, 230, 170, 153, 61, 150, 90, 232, 189, 139, 242, 246, 61, 254, 118, 203, 61, 43, 43, 2, 62, 190, 47, 130, 189, 160, 227, 82, 189, 124, 38, 10, 190, 216, 44, 38, 190, 181, 60, 252, 189, 233, 169, 29, 191, 63, 197, 160, 189, 249, 176, 56, 62, 247, 41, 251, 62, 236, 40, 9, 62, 143, 103, 0, 190, 176, 35, 50, 62, 186, 195, 239, 189, 219, 117, 74, 62, 79, 130, 8, 190, 48, 81, 143, 60, 133, 226, 132, 189, 220, 223, 70, 62, 120, 84, 106, 62, 228, 88, 240, 190, 74, 218, 249, 189, 34, 15, 177, 188, 197, 237, 21, 60, 17, 181, 209, 188, 181, 41, 66, 188, 235, 19, 66, 62, 12, 240, 87, 190, 237, 40, 3, 190, 232, 177, 18, 190, 124, 190, 94, 62, 255, 32, 207, 190, 98, 47, 233, 61, 4, 135, 92, 191, 205, 79, 63, 189, 52, 216, 172, 62, 0, 70, 18, 191, 54, 199, 137, 61};
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
                alignas(float) const unsigned char memory[] = {23, 73, 4, 190, 203, 229, 6, 60, 208, 108, 123, 62, 27, 131, 235, 189, 3, 48, 99, 61, 213, 194, 143, 62, 133, 244, 230, 61, 152, 64, 145, 60, 185, 153, 138, 62, 117, 188, 83, 62, 94, 26, 54, 189, 177, 200, 171, 61, 199, 82, 36, 62, 3, 15, 152, 187, 194, 80, 128, 190, 207, 26, 187, 61, 143, 139, 217, 59, 221, 29, 37, 190, 8, 46, 247, 61, 58, 214, 127, 189, 57, 0, 107, 188, 134, 45, 118, 61, 152, 162, 129, 60, 96, 131, 181, 189, 183, 103, 135, 62, 20, 155, 228, 189, 111, 229, 233, 189, 163, 52, 40, 190, 168, 149, 74, 188, 91, 139, 61, 62, 48, 138, 232, 61, 157, 58, 83, 62};
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
                alignas(float) const unsigned char memory[] = {154, 238, 70, 191, 213, 26, 106, 189, 18, 117, 134, 190, 38, 143, 88, 189, 90, 167, 88, 61, 239, 77, 224, 59, 80, 90, 28, 191, 10, 223, 13, 191, 89, 231, 44, 190, 56, 167, 255, 62, 191, 243, 19, 191, 157, 120, 218, 61, 66, 78, 184, 62, 114, 48, 145, 63, 144, 36, 41, 191, 212, 27, 67, 62, 9, 63, 48, 63, 116, 69, 221, 190, 226, 141, 153, 191, 63, 94, 191, 190, 142, 170, 7, 63, 17, 81, 12, 63, 98, 44, 72, 63, 63, 79, 184, 61, 32, 184, 151, 62, 250, 74, 146, 189, 188, 41, 106, 63, 16, 113, 227, 61, 63, 10, 134, 63, 147, 230, 131, 63, 79, 250, 20, 190, 162, 115, 58, 191, 167, 108, 6, 62, 85, 83, 229, 60, 79, 166, 182, 190, 9, 167, 233, 189, 122, 224, 114, 191, 119, 199, 152, 190, 7, 254, 161, 189, 111, 42, 28, 62, 83, 190, 135, 190, 55, 125, 248, 190, 205, 233, 169, 190, 69, 57, 138, 190, 175, 112, 155, 190, 172, 76, 219, 189, 255, 155, 207, 60, 29, 172, 138, 190, 165, 133, 140, 62, 154, 68, 53, 62, 103, 252, 122, 62, 207, 148, 104, 62, 144, 79, 194, 62, 168, 188, 161, 62, 79, 159, 3, 62, 189, 240, 21, 190, 22, 14, 220, 189, 99, 226, 59, 190, 71, 166, 196, 60, 178, 126, 136, 188, 28, 62, 41, 62, 38, 209, 212, 62, 30, 59, 114, 61, 41, 72, 139, 188};
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
                alignas(float) const unsigned char memory[] = {81, 122, 108, 60, 168, 114, 234, 190};
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
    alignas(float) const unsigned char memory[] = {139, 134, 46, 191, 183, 120, 216, 191, 115, 197, 163, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {249, 76, 204, 191, 71, 165, 42, 192};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0017/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
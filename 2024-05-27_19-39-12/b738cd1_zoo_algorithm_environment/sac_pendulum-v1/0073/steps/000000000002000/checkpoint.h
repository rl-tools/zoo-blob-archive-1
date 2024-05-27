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
                alignas(float) const unsigned char memory[] = {111, 155, 243, 62, 49, 68, 39, 63, 64, 147, 11, 63, 115, 148, 103, 189, 45, 55, 252, 189, 88, 152, 135, 190, 200, 59, 218, 190, 142, 23, 62, 61, 157, 208, 252, 189, 55, 105, 36, 190, 86, 139, 91, 63, 246, 8, 128, 190, 58, 222, 189, 189, 169, 145, 92, 190, 40, 67, 6, 63, 58, 57, 172, 62, 180, 106, 96, 188, 25, 157, 211, 62, 255, 110, 223, 62, 26, 238, 8, 63, 204, 111, 157, 185, 45, 242, 11, 63, 254, 76, 99, 190, 189, 79, 249, 189, 33, 16, 187, 61, 159, 96, 42, 190, 38, 123, 113, 190, 235, 43, 32, 63, 236, 155, 172, 190, 193, 34, 15, 191, 160, 18, 148, 62, 16, 171, 109, 190, 137, 79, 178, 62, 244, 112, 213, 190, 232, 185, 207, 62, 82, 131, 128, 189, 148, 196, 137, 190, 191, 186, 132, 62, 74, 13, 20, 190, 245, 249, 43, 190, 214, 143, 233, 62, 51, 46, 133, 190, 27, 169, 173, 189, 242, 60, 129, 190, 25, 137, 172, 188, 57, 110, 132, 190, 107, 85, 254, 190, 149, 32, 215, 61, 159, 245, 255, 61, 128, 196, 142, 62, 241, 138, 159, 62, 117, 110, 116, 60, 116, 68, 48, 191, 8, 33, 116, 189, 122, 215, 135, 62, 190, 13, 171, 190, 129, 120, 8, 190, 203, 3, 7, 63, 20, 244, 148, 189, 35, 244, 8, 63, 74, 204, 245, 190, 239, 116, 15, 191, 58, 102, 6, 63, 251, 138, 67, 62, 202, 109, 44, 61, 187, 193, 138, 62, 17, 143, 171, 62, 24, 151, 255, 190, 97, 156, 123, 62, 162, 77, 248, 62, 31, 159, 32, 63, 168, 199, 135, 61, 36, 145, 23, 191, 164, 243, 66, 63, 91, 40, 175, 61, 248, 117, 151, 62, 93, 104, 213, 190, 144, 169, 188, 190, 234, 70, 21, 190, 7, 219, 29, 190, 144, 100, 13, 189, 248, 159, 205, 61, 38, 164, 0, 63, 27, 36, 6, 190, 154, 19, 9, 63, 239, 125, 128, 190, 90, 131, 176, 190, 157, 198, 77, 62, 38, 48, 54, 63, 183, 186, 218, 61, 183, 41, 183, 190, 130, 81, 26, 190, 162, 50, 129, 62, 125, 180, 25, 190, 155, 164, 215, 189, 88, 19, 126, 62};
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
                alignas(float) const unsigned char memory[] = {84, 232, 27, 191, 227, 33, 133, 190, 18, 147, 135, 190, 175, 240, 113, 62, 119, 195, 157, 62, 91, 239, 6, 63, 210, 249, 131, 62, 176, 145, 204, 62, 89, 75, 5, 189, 161, 49, 247, 62, 207, 243, 56, 190, 22, 48, 117, 190, 103, 31, 184, 190, 215, 43, 73, 62, 53, 32, 19, 191, 115, 5, 26, 63, 96, 114, 15, 191, 173, 103, 188, 190, 68, 152, 175, 189, 12, 24, 148, 188, 194, 153, 31, 190, 29, 5, 161, 190, 246, 210, 10, 63, 57, 19, 34, 63, 53, 247, 171, 62, 198, 139, 173, 62, 64, 107, 88, 190, 3, 215, 160, 62, 29, 119, 0, 191, 6, 177, 223, 62, 53, 116, 151, 62, 137, 180, 8, 63};
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
                alignas(float) const unsigned char memory[] = {17, 155, 28, 190, 147, 218, 82, 60, 139, 239, 54, 190, 158, 130, 143, 190, 100, 106, 129, 61, 33, 213, 185, 61, 149, 47, 39, 188, 207, 237, 111, 62, 170, 142, 246, 61, 184, 34, 28, 188, 188, 254, 13, 190, 20, 171, 33, 190, 124, 211, 218, 188, 250, 43, 94, 190, 179, 179, 39, 62, 208, 100, 147, 62, 189, 133, 145, 190, 19, 106, 234, 61, 12, 158, 30, 62, 137, 252, 130, 61, 241, 60, 79, 189, 255, 180, 86, 190, 151, 44, 94, 60, 136, 101, 25, 189, 195, 181, 66, 60, 88, 85, 142, 61, 107, 32, 254, 60, 76, 44, 90, 190, 63, 209, 102, 190, 130, 232, 5, 190, 84, 75, 210, 61, 32, 168, 151, 61, 232, 230, 89, 62, 5, 45, 137, 190, 219, 36, 46, 60, 233, 229, 184, 62, 213, 185, 212, 188, 211, 54, 131, 188, 80, 52, 147, 189, 193, 44, 164, 190, 26, 251, 145, 188, 145, 137, 230, 189, 195, 6, 50, 62, 34, 90, 0, 61, 184, 104, 164, 60, 18, 149, 213, 60, 158, 209, 163, 61, 15, 71, 237, 61, 163, 122, 129, 62, 5, 13, 133, 60, 100, 204, 45, 190, 149, 67, 97, 188, 89, 172, 65, 61, 44, 191, 107, 62, 242, 111, 58, 190, 120, 210, 130, 62, 217, 227, 181, 61, 195, 139, 85, 190, 156, 26, 64, 188, 16, 32, 89, 62, 146, 42, 178, 189, 174, 58, 225, 61, 195, 141, 194, 189, 189, 233, 191, 188, 56, 145, 103, 190, 48, 149, 7, 59, 202, 82, 233, 60, 144, 71, 22, 188, 168, 161, 251, 189, 165, 171, 56, 62, 192, 124, 84, 62, 161, 255, 55, 189, 125, 74, 203, 61, 127, 180, 128, 62, 63, 218, 11, 190, 43, 49, 196, 58, 153, 199, 29, 190, 20, 29, 3, 61, 93, 0, 72, 61, 158, 134, 33, 62, 129, 205, 41, 188, 86, 253, 242, 61, 99, 239, 207, 189, 212, 198, 134, 189, 137, 83, 120, 62, 83, 30, 75, 190, 111, 33, 162, 59, 147, 58, 94, 61, 202, 157, 79, 190, 152, 144, 197, 61, 119, 231, 7, 62, 29, 191, 156, 189, 154, 180, 2, 62, 54, 222, 208, 188, 26, 138, 154, 189, 90, 76, 240, 188, 164, 93, 193, 61, 160, 253, 5, 62, 190, 36, 247, 189, 60, 253, 224, 61, 214, 113, 179, 189, 18, 129, 144, 189, 104, 67, 14, 190, 124, 194, 215, 189, 148, 176, 51, 62, 123, 198, 47, 190, 90, 169, 68, 189, 14, 32, 61, 190, 116, 134, 171, 189, 125, 56, 1, 59, 4, 251, 12, 61, 154, 211, 188, 188, 21, 42, 45, 190, 207, 150, 248, 61, 34, 37, 66, 62, 80, 254, 64, 189, 111, 26, 98, 61, 254, 48, 31, 61, 102, 61, 92, 190, 203, 242, 170, 190, 53, 185, 48, 190, 169, 138, 246, 61, 183, 123, 151, 61, 116, 243, 223, 61, 42, 220, 146, 61, 247, 198, 243, 189, 10, 187, 253, 189, 127, 142, 20, 62, 125, 243, 135, 190, 0, 78, 253, 61, 141, 64, 138, 190, 23, 133, 255, 189, 214, 180, 149, 61, 99, 253, 7, 62, 230, 234, 138, 61, 134, 69, 131, 62, 238, 164, 134, 61, 228, 207, 212, 187, 190, 210, 166, 190, 124, 250, 250, 189, 81, 123, 187, 61, 206, 64, 84, 190, 189, 73, 46, 190, 189, 186, 27, 62, 250, 69, 235, 190, 189, 81, 32, 61, 22, 188, 66, 62, 205, 24, 165, 189, 93, 84, 42, 62, 179, 11, 153, 190, 36, 96, 81, 62, 59, 180, 55, 190, 111, 82, 28, 188, 215, 206, 232, 189, 36, 156, 86, 189, 208, 116, 4, 190, 239, 8, 113, 190, 179, 90, 227, 189, 234, 138, 26, 62, 85, 102, 122, 189, 136, 231, 250, 189, 255, 124, 144, 60, 246, 55, 36, 190, 118, 63, 63, 62, 91, 208, 159, 188, 101, 124, 219, 61, 114, 28, 136, 61, 81, 44, 43, 62, 169, 168, 227, 60, 234, 238, 55, 62, 52, 68, 57, 190, 138, 80, 213, 189, 173, 95, 194, 61, 42, 179, 60, 61, 43, 90, 208, 61, 234, 41, 42, 62, 19, 87, 153, 189, 16, 170, 98, 62, 104, 16, 78, 62, 168, 7, 125, 187, 174, 246, 10, 189, 117, 48, 91, 190, 43, 12, 214, 61, 170, 132, 68, 62, 140, 130, 167, 188, 6, 140, 222, 61, 122, 233, 224, 189, 108, 165, 164, 189, 46, 142, 139, 188, 37, 162, 177, 189, 67, 140, 77, 190, 204, 133, 38, 190, 237, 87, 69, 189, 61, 244, 75, 189, 180, 22, 142, 61, 223, 244, 208, 189, 39, 177, 85, 190, 82, 151, 33, 190, 172, 4, 195, 189, 77, 10, 37, 189, 87, 192, 161, 61, 156, 246, 189, 61, 148, 205, 182, 61, 176, 7, 119, 189, 159, 232, 187, 61, 1, 168, 180, 61, 171, 251, 37, 190, 162, 178, 147, 189, 129, 220, 11, 62, 206, 49, 27, 189, 152, 132, 17, 62, 82, 2, 57, 190, 141, 28, 122, 189, 56, 212, 192, 61, 151, 91, 129, 189, 166, 22, 0, 189, 220, 83, 1, 189, 15, 205, 240, 61, 40, 32, 218, 61, 246, 94, 29, 190, 206, 100, 100, 190, 95, 90, 14, 189, 9, 20, 27, 190, 40, 45, 133, 190, 3, 135, 136, 61, 102, 42, 99, 190, 39, 202, 185, 188, 50, 16, 239, 61, 247, 228, 56, 189, 53, 166, 58, 62, 148, 182, 218, 61, 207, 80, 108, 61, 129, 150, 74, 190, 129, 22, 176, 189, 182, 97, 17, 61, 240, 115, 148, 62, 118, 218, 95, 189, 74, 132, 25, 62, 57, 40, 15, 62, 65, 202, 145, 189, 144, 253, 113, 61, 238, 93, 39, 189, 121, 133, 95, 190, 36, 213, 137, 61, 61, 192, 183, 189, 202, 143, 151, 61, 238, 61, 116, 61, 43, 79, 140, 62, 94, 242, 73, 62, 25, 104, 232, 189, 25, 190, 192, 61, 242, 85, 83, 62, 218, 147, 194, 190, 207, 97, 153, 62, 130, 146, 8, 62, 144, 212, 130, 189, 223, 87, 4, 189, 128, 130, 204, 189, 35, 236, 168, 60, 149, 63, 16, 62, 118, 238, 16, 190, 106, 133, 48, 61, 190, 112, 155, 61, 80, 91, 203, 188, 57, 160, 116, 189, 67, 111, 131, 61, 234, 128, 90, 189, 243, 49, 53, 62, 75, 116, 144, 61, 25, 121, 71, 189, 227, 245, 246, 59, 155, 202, 231, 61, 128, 204, 16, 62, 199, 64, 240, 61, 167, 25, 131, 61, 194, 159, 153, 189, 174, 2, 45, 190, 29, 214, 172, 189, 136, 51, 125, 190, 60, 226, 233, 189, 94, 143, 154, 62, 82, 212, 15, 187, 1, 131, 65, 62, 82, 180, 45, 61, 24, 24, 102, 189, 207, 81, 67, 62, 1, 149, 211, 61, 59, 173, 149, 189, 133, 96, 246, 189, 113, 94, 139, 61, 112, 66, 4, 188, 80, 242, 184, 61, 51, 225, 7, 189, 60, 245, 32, 59, 85, 185, 178, 189, 142, 101, 42, 190, 232, 98, 3, 190, 160, 157, 8, 190, 55, 69, 77, 189, 178, 70, 237, 189, 83, 214, 30, 62, 224, 112, 192, 189, 57, 27, 70, 61, 137, 119, 132, 61, 169, 29, 166, 189, 234, 10, 133, 61, 106, 80, 65, 61, 89, 77, 29, 190, 110, 196, 42, 190, 124, 140, 28, 62, 79, 37, 52, 62, 36, 118, 158, 188, 195, 182, 39, 62, 145, 9, 131, 189, 69, 22, 21, 62, 149, 19, 14, 61, 161, 147, 253, 188, 173, 243, 45, 190, 125, 190, 18, 190, 214, 20, 241, 189, 180, 234, 57, 190, 191, 222, 11, 190, 53, 240, 65, 61, 162, 77, 172, 190, 136, 59, 138, 189, 251, 42, 127, 189, 203, 90, 96, 190, 68, 49, 231, 189, 54, 104, 209, 189, 47, 143, 134, 60, 30, 162, 237, 189, 40, 27, 87, 190, 103, 69, 213, 60, 234, 63, 190, 189, 34, 5, 45, 190, 248, 138, 242, 60, 100, 59, 179, 60, 26, 214, 160, 190, 58, 40, 222, 61, 118, 202, 28, 61, 242, 196, 40, 62, 170, 121, 128, 190, 5, 114, 44, 190, 162, 197, 119, 190, 71, 54, 70, 62, 16, 159, 201, 187, 148, 221, 177, 61, 1, 113, 230, 190, 85, 232, 52, 60, 171, 72, 29, 189, 92, 26, 75, 62, 42, 247, 72, 62, 117, 247, 2, 61, 210, 52, 16, 189, 53, 198, 22, 190, 139, 177, 11, 190, 122, 143, 15, 190, 72, 132, 72, 189, 225, 118, 212, 188, 92, 24, 224, 189, 159, 92, 119, 61, 101, 210, 66, 60, 129, 75, 152, 188, 62, 5, 135, 190, 110, 203, 205, 189, 253, 166, 94, 190, 236, 243, 29, 190, 182, 213, 70, 62, 248, 92, 47, 189, 59, 81, 3, 62, 242, 247, 132, 189, 25, 248, 11, 190, 100, 151, 18, 62, 13, 33, 210, 61, 194, 205, 131, 61, 242, 145, 12, 190, 241, 170, 50, 62, 2, 188, 32, 61, 0, 71, 180, 61, 79, 36, 62, 189, 192, 113, 40, 61, 129, 235, 156, 189, 151, 72, 167, 189, 234, 37, 23, 62, 6, 73, 5, 189, 48, 37, 136, 61, 7, 90, 210, 189, 37, 139, 61, 62, 207, 246, 37, 190, 209, 43, 25, 190, 225, 229, 209, 61, 108, 97, 232, 61, 15, 147, 131, 61, 73, 64, 229, 60, 162, 193, 231, 61, 186, 122, 28, 190, 158, 29, 254, 189, 216, 71, 37, 62, 106, 164, 250, 61, 171, 28, 209, 188, 181, 206, 1, 62, 142, 25, 34, 61, 189, 150, 150, 187, 103, 196, 138, 189, 227, 172, 182, 189, 3, 184, 13, 62, 128, 230, 219, 61, 86, 120, 95, 189, 27, 183, 195, 190, 163, 27, 83, 62, 20, 204, 216, 61, 111, 159, 249, 61, 222, 21, 77, 189, 45, 75, 102, 188, 161, 225, 26, 61, 180, 74, 170, 61, 212, 251, 35, 62, 55, 193, 26, 62, 147, 23, 85, 188, 10, 162, 162, 61, 5, 212, 12, 62, 200, 80, 8, 188, 81, 46, 4, 62, 116, 188, 62, 190, 132, 109, 131, 189, 79, 145, 6, 190, 102, 115, 75, 61, 132, 189, 192, 62, 33, 69, 196, 189, 31, 251, 133, 62, 230, 23, 128, 59, 146, 175, 173, 189, 164, 61, 124, 62, 61, 242, 153, 189, 221, 224, 216, 189, 129, 219, 10, 62, 69, 20, 192, 189, 176, 113, 37, 189, 203, 77, 38, 61, 159, 98, 1, 187, 94, 174, 101, 61, 96, 161, 78, 62, 54, 136, 62, 61, 107, 38, 122, 62, 53, 205, 151, 188, 245, 45, 145, 189, 254, 117, 84, 60, 62, 74, 234, 61, 238, 211, 50, 62, 118, 247, 89, 189, 170, 187, 86, 62, 232, 242, 171, 188, 221, 146, 114, 189, 83, 241, 219, 188, 181, 111, 60, 61, 155, 159, 185, 190, 94, 166, 78, 189, 193, 70, 87, 190, 25, 249, 16, 190, 182, 50, 12, 62, 59, 160, 122, 61, 94, 129, 78, 62, 8, 68, 207, 188, 206, 234, 33, 61, 223, 77, 39, 60, 129, 111, 107, 190, 5, 210, 141, 190, 199, 91, 52, 59, 104, 114, 147, 190, 142, 211, 144, 61, 117, 215, 106, 190, 23, 164, 54, 62, 52, 238, 207, 62, 155, 51, 187, 60, 30, 210, 67, 190, 34, 26, 97, 61, 157, 209, 215, 189, 224, 63, 111, 62, 200, 215, 17, 190, 143, 166, 182, 61, 71, 229, 232, 61, 150, 43, 149, 189, 72, 89, 144, 60, 114, 216, 255, 61, 182, 110, 232, 61, 201, 170, 232, 188, 170, 182, 171, 189, 215, 44, 199, 61, 102, 42, 211, 61, 184, 82, 6, 62, 236, 240, 43, 190, 28, 5, 73, 61, 55, 199, 9, 62, 253, 140, 202, 189, 191, 188, 31, 190, 207, 179, 36, 62, 38, 9, 253, 61, 72, 214, 131, 189, 24, 41, 142, 60, 148, 137, 34, 62, 222, 250, 39, 190, 210, 199, 128, 189, 133, 139, 38, 190, 236, 164, 141, 61, 226, 200, 199, 61, 157, 7, 43, 62, 225, 162, 188, 61, 147, 120, 177, 60, 41, 241, 147, 190, 127, 208, 102, 61, 165, 198, 62, 190, 61, 199, 23, 190, 74, 165, 244, 60, 36, 33, 252, 188, 159, 35, 23, 190, 62, 146, 141, 190, 32, 217, 99, 62, 203, 241, 151, 61, 72, 77, 69, 187, 116, 90, 216, 61, 231, 175, 21, 190, 29, 137, 60, 61, 165, 151, 89, 189, 119, 6, 74, 189, 85, 28, 31, 190, 26, 98, 120, 190, 6, 21, 13, 189, 219, 211, 88, 61, 188, 37, 205, 189, 139, 116, 154, 61, 101, 76, 73, 62, 195, 160, 226, 189, 54, 220, 100, 61, 83, 159, 135, 61, 159, 61, 76, 62, 226, 214, 71, 61, 219, 101, 134, 60, 107, 177, 254, 61, 10, 61, 254, 61, 51, 173, 57, 190, 174, 232, 217, 189, 47, 203, 245, 189, 226, 243, 21, 62, 124, 0, 13, 62, 129, 0, 130, 189, 199, 111, 0, 62, 13, 248, 224, 189, 26, 129, 13, 189, 109, 80, 205, 189, 123, 75, 154, 189, 160, 249, 56, 61, 192, 204, 128, 189, 66, 185, 6, 190, 115, 50, 58, 60, 116, 36, 221, 189, 51, 84, 143, 189, 28, 197, 43, 60, 139, 190, 216, 189, 56, 22, 225, 60, 191, 96, 36, 61, 136, 109, 224, 189, 242, 84, 244, 189, 41, 54, 22, 190, 68, 117, 107, 189, 16, 113, 231, 61, 49, 42, 64, 61, 3, 77, 155, 61, 97, 120, 25, 61, 227, 44, 31, 190, 10, 193, 255, 61, 152, 199, 161, 189, 0, 117, 183, 61, 175, 82, 238, 189, 2, 211, 176, 189, 115, 111, 232, 189, 88, 52, 27, 190, 3, 235, 99, 190, 237, 217, 235, 189, 187, 217, 175, 189, 82, 133, 242, 189, 174, 119, 208, 189, 53, 79, 145, 61, 192, 4, 160, 61, 166, 121, 230, 61, 146, 70, 91, 60, 80, 117, 48, 62, 163, 55, 134, 187, 48, 78, 121, 190, 175, 204, 209, 189, 101, 50, 228, 188, 214, 71, 232, 188, 104, 21, 11, 62, 172, 153, 66, 190, 130, 34, 121, 62, 253, 234, 182, 189, 157, 245, 24, 60, 56, 191, 73, 62, 154, 232, 114, 190, 124, 78, 75, 189, 185, 25, 140, 61, 166, 132, 23, 190, 83, 2, 221, 61, 61, 21, 177, 189, 118, 40, 109, 189, 95, 216, 16, 190, 87, 170, 183, 189, 179, 182, 250, 60, 30, 75, 139, 61, 157, 95, 143, 189, 107, 50, 14, 190, 180, 93, 190, 60, 129, 79, 56, 62, 176, 0, 176, 189, 163, 121, 5, 62, 133, 7, 4, 62, 80, 179, 106, 61, 46, 159, 168, 61, 186, 234, 37, 61, 110, 175, 222, 61, 100, 28, 62, 190, 240, 169, 67, 190, 247, 215, 203, 188, 181, 111, 11, 190, 212, 108, 160, 188, 114, 165, 156, 61, 100, 219, 147, 62, 33, 98, 161, 61, 57, 133, 31, 190, 164, 95, 10, 62, 169, 238, 203, 189, 11, 28, 156, 189, 95, 113, 7, 61, 24, 101, 7, 191, 161, 186, 15, 62, 132, 19, 203, 189, 11, 248, 223, 189, 48, 5, 26, 62, 230, 140, 91, 190, 156, 237, 40, 189, 9, 107, 114, 189, 114, 32, 78, 186, 125, 184, 1, 62, 197, 104, 148, 189, 183, 245, 146, 60, 102, 101, 107, 188, 126, 198, 235, 189, 160, 219, 193, 61, 64, 49, 63, 62, 118, 145, 79, 61, 8, 43, 223, 188, 4, 138, 90, 187, 70, 92, 238, 61, 223, 198, 180, 61, 232, 122, 47, 62, 220, 182, 146, 59, 119, 237, 77, 189, 242, 176, 121, 61, 241, 83, 18, 62, 234, 128, 41, 190, 202, 31, 51, 62, 124, 58, 145, 60, 30, 91, 173, 189, 87, 68, 31, 62, 192, 164, 3, 62, 245, 93, 38, 61, 65, 102, 13, 190, 150, 197, 26, 190, 109, 186, 120, 62, 78, 84, 88, 190, 45, 0, 52, 60, 73, 177, 60, 189, 14, 82, 61, 61, 144, 18, 160, 61, 137, 48, 34, 61, 151, 72, 36, 62, 57, 226, 99, 62, 220, 7, 96, 190, 9, 159, 221, 61, 89, 29, 14, 61, 144, 68, 26, 190, 191, 198, 19, 62, 136, 160, 14, 62, 232, 15, 61, 190, 220, 64, 16, 62, 41, 141, 36, 190, 78, 171, 133, 62, 185, 71, 64, 189, 202, 204, 173, 61, 231, 9, 14, 189, 68, 122, 245, 61, 59, 227, 92, 190, 152, 43, 195, 60, 70, 19, 172, 189, 70, 25, 85, 189, 194, 73, 5, 190, 89, 165, 36, 62, 39, 185, 110, 62, 168, 199, 200, 189, 235, 251, 74, 60, 66, 211, 237, 60, 41, 91, 122, 190, 53, 178, 105, 62, 1, 180, 145, 189, 248, 134, 70, 61, 61, 35, 0, 190, 59, 114, 249, 61, 135, 160, 189, 188, 77, 58, 186, 190, 7, 229, 69, 62, 172, 110, 233, 61, 182, 114, 89, 190, 106, 249, 10, 188, 205, 99, 52, 62, 194, 250, 123, 189, 181, 2, 62, 61, 31, 42, 168, 189, 43, 141, 42, 190, 135, 205, 57, 190, 36, 191, 163, 189, 135, 53, 12, 62, 59, 137, 94, 189, 51, 2, 58, 62, 22, 189, 51, 62, 106, 119, 43, 190, 184, 241, 146, 61, 112, 187, 154, 189, 158, 104, 159, 188, 2, 209, 91, 190, 153, 40, 156, 189, 234, 196, 93, 189, 204, 152, 198, 189, 51, 235, 26, 190, 94, 248, 64, 190, 145, 153, 60, 60, 240, 180, 226, 61, 243, 165, 197, 61, 132, 167, 69, 61, 215, 1, 145, 61, 6, 24, 7, 188, 122, 51, 237, 60, 93, 101, 201, 61, 104, 108, 12, 60, 156, 10, 65, 189, 254, 21, 105, 62, 13, 129, 229, 61, 218, 128, 157, 189, 135, 186, 147, 61, 5, 188, 254, 189, 133, 180, 212, 61, 197, 122, 33, 61, 240, 156, 124, 189, 209, 179, 19, 62, 21, 166, 98, 189, 8, 2, 32, 61, 162, 111, 7, 189, 15, 180, 163, 189, 22, 245, 204, 61, 236, 123, 70, 189, 167, 227, 224, 60, 32, 157, 84, 190, 231, 25, 93, 190, 35, 224, 67, 189, 227, 51, 65, 186, 162, 111, 129, 188, 131, 3, 171, 57, 40, 232, 14, 189, 234, 66, 170, 189, 236, 212, 39, 62, 9, 218, 69, 62, 50, 57, 215, 61, 135, 165, 236, 187, 97, 209, 5, 62, 205, 181, 141, 189, 84, 76, 26, 62, 27, 48, 232, 61, 247, 53, 22, 189, 115, 198, 163, 189, 239, 237, 99, 61, 54, 48, 11, 62, 64, 58, 67, 190, 72, 35, 3, 190, 85, 205, 191, 189, 95, 0, 246, 189, 180, 204, 142, 189, 214, 77, 194, 61, 71, 151, 210, 61, 209, 127, 17, 189, 124, 53, 66, 62, 202, 197, 15, 62, 220, 84, 124, 61, 196, 73, 131, 189, 236, 130, 198, 189, 223, 11, 54, 61, 60, 111, 135, 189, 204, 73, 8, 189, 218, 27, 23, 190, 49, 84, 240, 60, 255, 97, 50, 189, 220, 227, 227, 189, 176, 69, 152, 188, 172, 213, 177, 190, 224, 25, 147, 61, 47, 123, 148, 61, 45, 171, 84, 190, 72, 247, 84, 57, 113, 153, 12, 62, 90, 227, 179, 61, 87, 108, 17, 62, 26, 224, 159, 189, 133, 104, 174, 61, 47, 213, 160, 190, 203, 164, 158, 189, 97, 241, 217, 60, 86, 42, 197, 189, 110, 49, 225, 189, 81, 65, 180, 61, 57, 173, 46, 190, 206, 140, 251, 61, 87, 222, 196, 61, 42, 77, 233, 189, 70, 72, 10, 62, 64, 211, 156, 187, 121, 77, 15, 62, 39, 50, 159, 60, 23, 185, 86, 190, 79, 16, 63, 61, 75, 197, 180, 61, 13, 228, 94, 187, 98, 80, 59, 189, 86, 73, 43, 61, 140, 164, 173, 60, 205, 28, 250, 61, 28, 137, 76, 189, 39, 251, 63, 189, 194, 53, 192, 60, 90, 155, 243, 61, 32, 190, 82, 61, 202, 201, 158, 189, 145, 53, 171, 61, 134, 243, 55, 62, 56, 81, 192, 60, 219, 174, 218, 59, 87, 21, 83, 61, 197, 248, 16, 190, 149, 225, 26, 62, 35, 79, 138, 61, 162, 252, 247, 189, 102, 198, 41, 189, 207, 163, 2, 190, 209, 4, 17, 61, 96, 117, 0, 189, 136, 23, 73, 190, 72, 187, 160, 59, 212, 105, 252, 188, 196, 33, 233, 189, 81, 54, 16, 60, 233, 235, 129, 61, 39, 123, 43, 62, 121, 221, 131, 188, 71, 125, 204, 188, 209, 221, 222, 189, 7, 45, 37, 189, 125, 93, 134, 190, 159, 228, 146, 188, 69, 111, 251, 189, 90, 134, 249, 60, 249, 192, 131, 190, 103, 95, 117, 189, 156, 160, 37, 61, 111, 184, 84, 62, 169, 219, 212, 61, 157, 31, 13, 62, 183, 114, 89, 189, 153, 125, 63, 62, 191, 228, 21, 189, 34, 225, 132, 190, 31, 162, 194, 61, 178, 112, 57, 59, 28, 142, 176, 188, 97, 120, 150, 62, 211, 126, 66, 190, 253, 10, 252, 60, 44, 162, 56, 189, 109, 135, 232, 189, 157, 238, 195, 58, 91, 236, 126, 190, 116, 103, 138, 62, 23, 55, 32, 190, 139, 193, 188, 189, 56, 253, 235, 59, 110, 230, 208, 189, 168, 93, 23, 190, 71, 53, 90, 60, 24, 89, 3, 190, 127, 1, 87, 60, 7, 162, 185, 189, 198, 204, 65, 189, 82, 104, 207, 189, 195, 16, 47, 62, 137, 209, 11, 62, 187, 135, 130, 190, 224, 16, 115, 189, 252, 30, 26, 187, 138, 112, 142, 190, 90, 180, 239, 189, 249, 18, 146, 190, 52, 190, 218, 189, 168, 137, 32, 62, 195, 185, 1, 190, 163, 213, 115, 62, 215, 69, 189, 61, 155, 133, 146, 61, 4, 217, 159, 61, 70, 32, 169, 188, 88, 51, 217, 189, 54, 202, 251, 61, 126, 36, 13, 190, 129, 190, 89, 62, 126, 65, 123, 190, 95, 164, 154, 62, 14, 106, 169, 62, 104, 48, 94, 61, 247, 174, 133, 61, 45, 52, 220, 61, 113, 190, 45, 190, 216, 144, 161, 62, 10, 225, 0, 187, 62, 234, 32, 61, 35, 160, 179, 188, 39, 55, 5, 62, 227, 10, 14, 62, 12, 176, 3, 188, 161, 248, 135, 61, 44, 122, 221, 60, 180, 242, 161, 189, 14, 95, 147, 60, 158, 73, 221, 61, 247, 56, 86, 188, 226, 44, 78, 62, 15, 101, 254, 189, 40, 52, 205, 189, 1, 173, 87, 61, 131, 142, 171, 61, 139, 128, 58, 61, 239, 116, 46, 62, 229, 76, 6, 62, 109, 173, 43, 188, 102, 4, 89, 61, 142, 207, 6, 61, 29, 169, 197, 60, 166, 115, 51, 62, 109, 204, 12, 189, 89, 111, 70, 190, 12, 181, 31, 190, 206, 102, 62, 189, 22, 242, 52, 190, 101, 82, 22, 61, 241, 32, 38, 190, 155, 90, 8, 188, 26, 84, 220, 61, 45, 49, 144, 61, 19, 130, 143, 61, 92, 235, 52, 189, 57, 19, 214, 189, 127, 66, 194, 61, 122, 121, 23, 62, 145, 216, 49, 61, 188, 219, 205, 61, 193, 77, 235, 61, 226, 93, 161, 61, 145, 15, 137, 60, 28, 143, 202, 60, 126, 182, 108, 189, 166, 7, 196, 189, 150, 117, 81, 61, 172, 109, 107, 188, 160, 132, 152, 189, 129, 114, 55, 62, 143, 187, 211, 60, 127, 110, 93, 189, 165, 94, 176, 189, 71, 197, 15, 190, 133, 225, 11, 61, 6, 114, 22, 62, 51, 114, 147, 190, 241, 67, 71, 62, 97, 102, 0, 189, 27, 14, 70, 61, 255, 95, 237, 61, 208, 58, 206, 189, 242, 7, 112, 190, 104, 208, 95, 190, 225, 153, 21, 62, 161, 106, 189, 60, 41, 92, 250, 188, 173, 215, 133, 61, 17, 8, 182, 61, 51, 205, 46, 190, 118, 183, 37, 62, 109, 156, 141, 189, 57, 18, 212, 188, 132, 127, 167, 188, 42, 14, 107, 188, 17, 194, 121, 188, 3, 44, 80, 60, 109, 71, 226, 189, 127, 55, 27, 190, 60, 7, 212, 61, 178, 108, 203, 61, 165, 1, 48, 190, 143, 77, 133, 189, 194, 39, 34, 190, 186, 79, 14, 61, 53, 146, 17, 189, 174, 125, 39, 61, 212, 46, 153, 189, 180, 13, 220, 189, 188, 115, 177, 189, 93, 227, 43, 190, 4, 201, 144, 189, 251, 160, 90, 61, 192, 177, 247, 61, 190, 205, 135, 189, 168, 129, 154, 189};
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
                alignas(float) const unsigned char memory[] = {214, 239, 170, 61, 37, 192, 73, 189, 65, 185, 59, 62, 194, 245, 144, 189, 110, 229, 174, 61, 122, 50, 176, 189, 104, 44, 107, 62, 196, 98, 34, 62, 57, 199, 134, 189, 31, 120, 8, 190, 245, 211, 161, 61, 31, 114, 213, 60, 163, 46, 181, 61, 85, 9, 0, 62, 33, 189, 20, 62, 146, 59, 137, 61, 112, 117, 145, 61, 102, 229, 79, 189, 25, 178, 121, 62, 129, 97, 239, 188, 0, 222, 166, 61, 233, 214, 225, 189, 128, 32, 3, 62, 67, 165, 241, 61, 115, 216, 194, 187, 42, 223, 32, 62, 171, 26, 99, 62, 20, 173, 31, 62, 215, 113, 68, 61, 138, 181, 15, 190, 239, 252, 32, 62, 167, 139, 46, 58};
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
                alignas(float) const unsigned char memory[] = {222, 101, 172, 62, 68, 196, 91, 190, 185, 89, 95, 62, 182, 196, 174, 189, 245, 226, 186, 62, 74, 38, 191, 61, 148, 79, 182, 60, 87, 112, 170, 190, 233, 108, 249, 189, 21, 82, 152, 189, 233, 54, 161, 62, 203, 122, 102, 62, 69, 12, 72, 62, 92, 219, 232, 189, 0, 100, 35, 190, 71, 91, 213, 188, 30, 67, 59, 62, 54, 20, 64, 188, 226, 148, 124, 62, 158, 120, 21, 62, 218, 250, 161, 189, 33, 232, 221, 189, 6, 14, 126, 62, 191, 202, 41, 62, 59, 94, 45, 190, 213, 119, 90, 62, 77, 53, 147, 188, 114, 68, 184, 62, 247, 90, 199, 190, 85, 113, 45, 190, 208, 221, 43, 62, 204, 45, 159, 61, 116, 131, 88, 190, 250, 97, 68, 60, 211, 149, 130, 189, 216, 220, 34, 62, 120, 203, 53, 188, 191, 135, 35, 190, 54, 57, 223, 189, 222, 244, 81, 190, 205, 29, 250, 60, 236, 160, 52, 62, 209, 41, 81, 62, 75, 39, 186, 60, 247, 104, 165, 60, 241, 16, 5, 190, 17, 24, 98, 61, 168, 134, 30, 190, 104, 77, 237, 189, 74, 54, 139, 61, 222, 233, 81, 190, 22, 241, 32, 62, 176, 187, 30, 190, 8, 156, 166, 189, 2, 138, 5, 61, 15, 142, 155, 188, 4, 109, 244, 61, 210, 9, 175, 61, 50, 115, 251, 189, 110, 78, 15, 190, 224, 40, 134, 189, 17, 255, 195, 189, 39, 39, 147, 61, 231, 238, 161, 60};
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
                alignas(float) const unsigned char memory[] = {120, 124, 41, 190, 47, 175, 169, 188};
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
    alignas(float) const unsigned char memory[] = {126, 245, 152, 63, 232, 66, 141, 190, 123, 205, 151, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {158, 50, 243, 62, 119, 150, 88, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0073/steps/000000000002000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
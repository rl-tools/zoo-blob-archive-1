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
                alignas(float) const unsigned char memory[] = {180, 206, 14, 190, 32, 80, 18, 63, 131, 49, 196, 62, 12, 27, 178, 62, 245, 197, 16, 63, 0, 227, 247, 62, 188, 177, 92, 189, 166, 83, 217, 61, 66, 46, 58, 63, 226, 243, 134, 190, 16, 62, 251, 190, 25, 212, 40, 63, 155, 100, 167, 189, 104, 225, 203, 189, 113, 87, 187, 62, 48, 57, 235, 62, 3, 108, 10, 63, 62, 165, 35, 191, 186, 150, 178, 62, 239, 227, 31, 191, 220, 32, 216, 189, 211, 187, 216, 190, 26, 11, 105, 191, 158, 49, 65, 187, 23, 236, 216, 62, 74, 152, 209, 62, 236, 203, 158, 62, 24, 61, 173, 62, 176, 231, 59, 191, 231, 123, 74, 190, 212, 148, 132, 190, 249, 185, 23, 191, 252, 13, 61, 189, 227, 153, 210, 190, 60, 174, 1, 191, 1, 131, 227, 62, 100, 182, 177, 62, 1, 238, 69, 63, 149, 21, 113, 62, 204, 86, 128, 61, 97, 117, 70, 63, 241, 163, 177, 189, 231, 98, 0, 63, 236, 118, 247, 62, 146, 112, 27, 191, 107, 196, 130, 190, 61, 160, 173, 189, 146, 8, 24, 63, 143, 5, 37, 187, 230, 162, 138, 62, 84, 127, 89, 191, 29, 81, 138, 189, 204, 39, 22, 191, 167, 191, 43, 60, 176, 37, 166, 61, 46, 99, 110, 63, 242, 9, 33, 190, 131, 172, 67, 190, 83, 30, 50, 191, 86, 5, 251, 190, 82, 134, 14, 190, 186, 85, 170, 60, 167, 72, 25, 63, 154, 245, 47, 63, 190, 180, 203, 62, 108, 160, 190, 61, 124, 67, 191, 62, 181, 30, 9, 191, 184, 13, 239, 62, 100, 212, 172, 190, 103, 64, 85, 191, 103, 68, 128, 62, 208, 221, 158, 190, 101, 230, 108, 63, 251, 69, 194, 190, 168, 225, 211, 62, 32, 20, 137, 62, 224, 26, 199, 62, 158, 224, 18, 191, 152, 209, 55, 191, 219, 150, 67, 60, 105, 2, 131, 62, 17, 160, 92, 60, 92, 230, 231, 62, 197, 156, 162, 190, 207, 26, 84, 62, 65, 130, 39, 191, 90, 182, 0, 191, 229, 14, 52, 62, 148, 3, 213, 190, 236, 107, 200, 61, 33, 213, 16, 191, 81, 189, 77, 190, 25, 219, 85, 63, 57, 251, 13, 63, 91, 177, 1, 63};
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
                alignas(float) const unsigned char memory[] = {135, 97, 35, 191, 56, 147, 178, 190, 254, 17, 5, 63, 147, 70, 155, 190, 210, 103, 131, 190, 157, 74, 37, 62, 233, 40, 50, 62, 105, 76, 91, 62, 54, 184, 242, 190, 224, 177, 17, 190, 146, 166, 168, 62, 13, 167, 112, 190, 75, 209, 190, 190, 188, 154, 201, 62, 84, 144, 193, 189, 126, 133, 254, 61, 162, 185, 217, 61, 198, 233, 151, 62, 152, 37, 110, 62, 167, 88, 43, 191, 137, 212, 178, 62, 78, 152, 136, 62, 68, 179, 22, 63, 58, 155, 160, 190, 191, 226, 202, 190, 198, 87, 151, 62, 171, 178, 164, 61, 26, 49, 150, 61, 12, 55, 60, 190, 13, 26, 37, 63, 87, 82, 6, 191, 19, 67, 66, 62};
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
                alignas(float) const unsigned char memory[] = {118, 175, 134, 61, 133, 228, 14, 61, 50, 1, 110, 190, 184, 12, 136, 190, 106, 179, 41, 190, 144, 131, 130, 61, 114, 201, 146, 62, 191, 0, 62, 62, 44, 47, 104, 61, 255, 84, 189, 62, 155, 123, 7, 61, 152, 242, 242, 189, 222, 159, 166, 188, 177, 170, 129, 189, 185, 144, 30, 62, 164, 222, 32, 190, 99, 121, 222, 61, 1, 163, 217, 188, 147, 43, 48, 190, 233, 235, 118, 189, 235, 129, 184, 59, 209, 151, 139, 60, 173, 21, 9, 188, 49, 198, 15, 189, 21, 14, 153, 189, 184, 107, 169, 61, 2, 29, 16, 62, 219, 166, 92, 189, 121, 95, 75, 190, 198, 216, 37, 190, 1, 163, 50, 62, 223, 139, 148, 60, 251, 121, 72, 62, 72, 42, 56, 58, 49, 218, 196, 61, 189, 101, 1, 190, 170, 4, 86, 62, 252, 106, 148, 60, 106, 125, 194, 61, 8, 87, 42, 191, 194, 156, 94, 189, 1, 109, 247, 61, 235, 184, 10, 191, 153, 136, 208, 189, 165, 39, 144, 189, 186, 98, 223, 188, 135, 210, 151, 61, 190, 153, 227, 187, 201, 163, 222, 189, 223, 189, 187, 190, 140, 83, 227, 61, 69, 89, 80, 190, 125, 44, 1, 62, 232, 175, 146, 61, 156, 117, 149, 189, 118, 147, 88, 189, 52, 184, 159, 187, 183, 177, 67, 62, 63, 61, 142, 191, 174, 227, 231, 189, 57, 57, 217, 190, 6, 218, 182, 189, 181, 195, 38, 190, 188, 62, 53, 62, 113, 237, 18, 190, 61, 177, 87, 190, 141, 0, 155, 60, 170, 154, 146, 61, 32, 237, 221, 189, 72, 8, 53, 62, 91, 208, 239, 59, 213, 228, 143, 61, 100, 96, 228, 189, 89, 87, 210, 61, 115, 228, 39, 62, 74, 209, 147, 62, 34, 2, 86, 190, 46, 162, 130, 190, 255, 35, 98, 61, 22, 169, 14, 62, 142, 41, 31, 188, 145, 189, 255, 189, 90, 205, 24, 189, 192, 86, 54, 62, 86, 97, 208, 61, 103, 60, 35, 190, 73, 76, 94, 62, 149, 14, 193, 190, 181, 186, 22, 190, 220, 161, 178, 58, 173, 154, 157, 188, 44, 124, 239, 189, 233, 125, 129, 189, 101, 189, 142, 189, 153, 59, 153, 62, 149, 158, 198, 60, 107, 250, 228, 189, 155, 184, 53, 61, 210, 241, 243, 188, 174, 145, 30, 191, 11, 111, 187, 190, 224, 63, 174, 62, 25, 211, 21, 61, 46, 59, 15, 61, 30, 238, 177, 189, 97, 39, 24, 61, 200, 124, 149, 189, 248, 155, 84, 190, 138, 22, 25, 190, 108, 224, 113, 62, 164, 224, 136, 62, 166, 163, 83, 190, 200, 135, 239, 60, 29, 182, 147, 189, 118, 194, 77, 62, 93, 247, 186, 189, 128, 5, 168, 190, 255, 190, 170, 62, 20, 55, 138, 61, 171, 185, 33, 190, 221, 104, 147, 190, 172, 255, 98, 62, 171, 38, 139, 188, 56, 138, 48, 62, 76, 38, 47, 190, 248, 203, 61, 190, 3, 171, 37, 190, 185, 112, 95, 62, 151, 37, 201, 61, 56, 156, 13, 190, 31, 221, 176, 189, 111, 83, 140, 189, 180, 62, 76, 60, 76, 235, 115, 188, 22, 99, 40, 61, 28, 191, 84, 188, 199, 68, 174, 189, 202, 211, 195, 60, 33, 218, 89, 62, 144, 70, 128, 62, 124, 62, 121, 61, 2, 185, 203, 189, 39, 183, 200, 187, 187, 208, 155, 61, 157, 116, 123, 60, 202, 178, 2, 60, 255, 110, 174, 189, 62, 241, 171, 60, 123, 3, 203, 189, 124, 167, 159, 60, 162, 20, 178, 188, 140, 75, 167, 189, 209, 124, 80, 62, 148, 184, 106, 61, 124, 110, 136, 62, 248, 235, 73, 190, 192, 87, 217, 61, 132, 103, 109, 62, 21, 125, 61, 190, 79, 31, 134, 61, 92, 153, 48, 190, 162, 204, 156, 190, 113, 166, 137, 62, 172, 32, 169, 190, 151, 26, 163, 190, 17, 169, 45, 61, 8, 199, 96, 189, 225, 49, 168, 189, 228, 183, 10, 61, 195, 19, 62, 187, 58, 98, 119, 61, 220, 139, 129, 62, 123, 7, 0, 190, 1, 228, 70, 61, 184, 240, 150, 62, 64, 60, 72, 62, 252, 228, 36, 190, 208, 197, 14, 188, 135, 104, 80, 190, 67, 214, 37, 62, 122, 226, 143, 62, 2, 117, 183, 190, 3, 111, 2, 190, 138, 89, 38, 191, 141, 9, 159, 190, 251, 37, 163, 190, 183, 75, 175, 188, 170, 180, 115, 190, 222, 66, 156, 61, 15, 170, 84, 61, 124, 228, 171, 62, 158, 45, 93, 189, 58, 217, 225, 61, 139, 70, 223, 61, 115, 83, 22, 190, 104, 31, 11, 62, 200, 211, 44, 190, 115, 138, 143, 189, 209, 27, 135, 61, 125, 201, 1, 61, 140, 0, 205, 61, 202, 108, 27, 62, 17, 72, 236, 61, 212, 173, 43, 62, 255, 17, 28, 189, 48, 218, 232, 189, 24, 32, 51, 61, 159, 7, 26, 189, 0, 163, 2, 62, 166, 56, 25, 190, 30, 46, 15, 188, 227, 197, 27, 190, 31, 29, 47, 190, 122, 19, 249, 189, 244, 76, 37, 190, 109, 86, 155, 61, 243, 241, 3, 190, 120, 82, 229, 189, 45, 71, 185, 60, 43, 156, 89, 61, 79, 194, 38, 190, 244, 116, 49, 190, 91, 60, 43, 189, 143, 53, 238, 189, 209, 199, 169, 61, 14, 137, 157, 189, 33, 182, 7, 61, 198, 208, 187, 189, 131, 102, 230, 188, 144, 208, 154, 62, 195, 172, 170, 189, 243, 220, 103, 190, 181, 251, 235, 188, 235, 246, 137, 190, 67, 207, 163, 188, 30, 127, 167, 62, 52, 86, 8, 61, 128, 206, 230, 186, 111, 41, 0, 62, 164, 25, 179, 61, 93, 141, 235, 189, 197, 210, 85, 60, 60, 89, 30, 189, 86, 56, 156, 190, 99, 93, 153, 189, 255, 109, 45, 62, 231, 77, 130, 62, 11, 244, 174, 189, 253, 190, 42, 191, 198, 34, 174, 60, 109, 116, 162, 61, 244, 104, 15, 62, 61, 183, 144, 190, 148, 51, 132, 188, 219, 129, 3, 190, 131, 208, 153, 61, 185, 217, 170, 187, 132, 196, 218, 189, 212, 197, 101, 62, 112, 245, 209, 186, 60, 19, 134, 190, 171, 34, 103, 62, 10, 33, 188, 61, 115, 20, 76, 61, 73, 248, 252, 189, 46, 152, 139, 62, 92, 230, 72, 62, 31, 6, 137, 62, 33, 233, 142, 190, 6, 210, 143, 61, 4, 88, 237, 188, 30, 30, 213, 61, 50, 149, 24, 190, 206, 115, 74, 62, 90, 76, 202, 188, 177, 218, 164, 189, 169, 249, 1, 62, 176, 232, 10, 60, 46, 158, 2, 62, 71, 31, 189, 190, 176, 47, 40, 190, 118, 155, 2, 60, 8, 150, 228, 61, 182, 30, 56, 190, 222, 227, 239, 61, 131, 234, 31, 62, 109, 248, 42, 62, 152, 225, 107, 61, 233, 209, 217, 61, 18, 62, 207, 60, 18, 179, 106, 189, 42, 248, 32, 62, 103, 171, 115, 60, 128, 222, 48, 190, 216, 192, 176, 188, 206, 216, 167, 60, 203, 190, 7, 189, 182, 205, 172, 190, 119, 73, 236, 187, 207, 243, 96, 190, 82, 81, 20, 62, 138, 185, 115, 62, 38, 165, 90, 189, 101, 56, 27, 61, 33, 225, 81, 62, 32, 238, 53, 189, 201, 193, 27, 62, 14, 38, 24, 190, 42, 100, 12, 190, 197, 23, 203, 62, 186, 232, 79, 190, 62, 147, 50, 61, 19, 94, 173, 62, 70, 42, 246, 61, 104, 81, 27, 190, 151, 189, 136, 61, 114, 189, 238, 61, 172, 73, 21, 62, 121, 235, 202, 190, 147, 117, 146, 62, 117, 231, 94, 189, 148, 171, 26, 61, 130, 99, 238, 189, 33, 205, 167, 189, 203, 242, 232, 189, 41, 66, 143, 189, 143, 125, 123, 190, 210, 127, 137, 188, 95, 146, 2, 62, 50, 165, 135, 190, 28, 102, 44, 62, 96, 235, 32, 191, 218, 130, 16, 62, 106, 160, 201, 61, 61, 133, 142, 189, 16, 52, 5, 190, 156, 47, 11, 189, 132, 136, 251, 189, 145, 125, 85, 62, 249, 109, 18, 189, 233, 61, 65, 190, 220, 115, 65, 62, 215, 209, 118, 190, 32, 9, 112, 62, 252, 129, 157, 61, 79, 58, 62, 188, 226, 81, 44, 62, 214, 190, 61, 61, 110, 162, 164, 189, 66, 34, 95, 62, 12, 106, 107, 190, 228, 168, 157, 62, 113, 213, 131, 190, 0, 157, 153, 190, 1, 120, 84, 62, 168, 207, 93, 189, 218, 235, 92, 190, 0, 177, 193, 190, 104, 141, 168, 189, 115, 150, 182, 189, 162, 63, 94, 189, 66, 121, 66, 190, 73, 109, 153, 61, 3, 152, 38, 62, 67, 212, 252, 190, 110, 235, 42, 189, 49, 64, 59, 190, 34, 158, 132, 62, 165, 109, 26, 191, 87, 10, 46, 61, 27, 49, 99, 190, 169, 210, 36, 190, 188, 28, 172, 61, 70, 116, 143, 190, 174, 111, 57, 62, 75, 69, 129, 190, 107, 56, 55, 191, 94, 134, 67, 190, 160, 121, 220, 61, 8, 130, 40, 190, 190, 137, 16, 191, 227, 20, 245, 61, 48, 11, 143, 190, 87, 254, 16, 190, 7, 116, 211, 60, 4, 82, 203, 60, 47, 147, 209, 61, 162, 168, 62, 61, 185, 61, 0, 190, 238, 75, 136, 188, 112, 181, 49, 189, 26, 225, 40, 61, 34, 54, 133, 61, 162, 154, 93, 190, 242, 248, 254, 61, 54, 185, 131, 190, 151, 180, 180, 189, 230, 190, 0, 62, 58, 122, 145, 190, 15, 106, 30, 61, 40, 40, 138, 61, 4, 53, 238, 188, 179, 34, 141, 62, 74, 252, 191, 189, 165, 214, 71, 61, 235, 73, 242, 61, 185, 121, 60, 61, 68, 27, 38, 61, 17, 64, 188, 62, 236, 116, 162, 61, 231, 148, 132, 62, 192, 124, 4, 62, 12, 49, 91, 61, 111, 61, 23, 62, 171, 92, 170, 190, 101, 138, 55, 62, 84, 217, 221, 190, 219, 89, 255, 190, 71, 206, 192, 62, 22, 131, 135, 191, 29, 7, 212, 190, 122, 181, 81, 62, 61, 11, 8, 189, 146, 92, 97, 188, 234, 74, 152, 190, 125, 199, 70, 62, 100, 43, 171, 61, 168, 239, 133, 61, 52, 85, 171, 190, 191, 212, 239, 189, 180, 59, 109, 60, 152, 142, 179, 62, 100, 88, 154, 190, 79, 156, 190, 61, 117, 209, 56, 189, 222, 197, 216, 60, 164, 147, 205, 62, 246, 96, 56, 60, 234, 122, 135, 62, 68, 77, 132, 191, 214, 205, 46, 190, 6, 75, 150, 189, 85, 27, 3, 190, 120, 233, 182, 190, 88, 142, 220, 189, 178, 164, 28, 61, 50, 165, 119, 60, 173, 38, 30, 190, 134, 134, 95, 61, 52, 93, 226, 189, 106, 213, 41, 62, 181, 242, 102, 188, 201, 53, 181, 189, 221, 85, 104, 61, 32, 44, 25, 62, 29, 180, 159, 190, 84, 214, 40, 190, 144, 68, 65, 189, 189, 231, 169, 190, 65, 232, 33, 61, 155, 153, 148, 61, 93, 154, 178, 189, 67, 135, 16, 62, 72, 99, 8, 62, 248, 6, 143, 190, 141, 148, 75, 190, 22, 106, 2, 62, 10, 20, 223, 61, 186, 111, 102, 61, 104, 208, 75, 62, 104, 201, 17, 189, 196, 95, 88, 190, 103, 113, 132, 60, 176, 187, 212, 189, 143, 16, 190, 190, 66, 168, 38, 61, 203, 88, 69, 188, 119, 159, 78, 190, 53, 24, 150, 61, 253, 193, 54, 61, 179, 7, 1, 190, 202, 249, 66, 190, 0, 216, 191, 189, 97, 133, 78, 190, 222, 201, 138, 189, 18, 207, 134, 62, 211, 46, 195, 189, 159, 100, 55, 61, 143, 189, 59, 190, 133, 213, 11, 62, 74, 209, 165, 61, 245, 116, 93, 190, 23, 64, 138, 190, 38, 181, 34, 60, 239, 128, 77, 60, 139, 165, 147, 59, 97, 100, 77, 62, 218, 152, 118, 61, 173, 253, 24, 62, 94, 186, 66, 189, 24, 2, 57, 190, 194, 88, 199, 187, 106, 199, 110, 190, 172, 27, 221, 189, 40, 236, 140, 62, 207, 194, 165, 189, 137, 115, 43, 190, 6, 96, 161, 187, 206, 190, 51, 189, 39, 192, 188, 60, 203, 128, 2, 61, 37, 244, 23, 189, 202, 183, 211, 189, 182, 74, 27, 190, 253, 96, 210, 61, 165, 24, 229, 61, 198, 33, 170, 189, 129, 178, 154, 61, 238, 63, 120, 61, 1, 89, 102, 189, 89, 70, 65, 190, 124, 96, 203, 190, 51, 143, 46, 61, 6, 72, 191, 188, 92, 98, 38, 190, 5, 114, 34, 189, 94, 239, 14, 190, 103, 214, 22, 190, 194, 226, 152, 61, 183, 1, 70, 61, 152, 151, 25, 62, 28, 97, 226, 189, 201, 49, 40, 189, 211, 98, 244, 61, 126, 153, 179, 61, 188, 149, 143, 62, 161, 75, 108, 62, 75, 151, 124, 62, 190, 175, 0, 190, 106, 26, 139, 61, 157, 191, 223, 189, 74, 73, 79, 62, 230, 127, 65, 190, 218, 88, 230, 60, 200, 112, 23, 190, 138, 161, 1, 190, 50, 141, 33, 61, 66, 72, 185, 188, 34, 68, 125, 189, 129, 88, 1, 190, 187, 209, 0, 62, 112, 98, 148, 61, 136, 34, 176, 61, 153, 68, 7, 62, 29, 80, 26, 190, 126, 184, 214, 61, 125, 53, 145, 59, 20, 114, 247, 189, 27, 195, 12, 62, 209, 121, 5, 190, 148, 246, 8, 190, 171, 84, 197, 189, 216, 164, 3, 190, 123, 23, 242, 189, 238, 249, 244, 189, 190, 160, 212, 189, 9, 196, 29, 190, 182, 225, 9, 59, 55, 229, 164, 59, 232, 226, 157, 61, 97, 24, 147, 189, 245, 146, 229, 189, 72, 4, 157, 61, 8, 208, 12, 190, 209, 175, 17, 60, 154, 7, 215, 189, 42, 39, 40, 62, 211, 120, 147, 188, 94, 149, 188, 61, 224, 156, 165, 61, 65, 158, 174, 187, 226, 29, 150, 62, 242, 216, 174, 190, 204, 24, 36, 190, 137, 50, 78, 62, 10, 116, 180, 61, 166, 99, 144, 190, 110, 203, 252, 190, 5, 15, 66, 61, 16, 93, 180, 62, 211, 144, 31, 62, 92, 133, 14, 189, 129, 102, 101, 62, 32, 54, 179, 190, 111, 183, 176, 61, 26, 47, 140, 189, 93, 243, 213, 189, 90, 134, 126, 61, 44, 146, 193, 190, 123, 4, 213, 190, 233, 68, 227, 62, 38, 75, 185, 189, 196, 53, 155, 190, 186, 153, 214, 60, 36, 64, 31, 62, 5, 255, 105, 61, 179, 114, 231, 62, 159, 198, 90, 62, 118, 130, 131, 61, 70, 247, 151, 189, 208, 73, 94, 62, 26, 124, 43, 190, 217, 214, 51, 189, 94, 35, 131, 61, 2, 175, 226, 61, 173, 33, 48, 62, 150, 95, 25, 190, 127, 6, 16, 62, 0, 127, 217, 61, 203, 211, 83, 62, 48, 77, 165, 61, 18, 136, 214, 189, 198, 208, 62, 61, 47, 84, 173, 61, 159, 103, 223, 189, 128, 43, 215, 188, 94, 41, 134, 189, 104, 90, 221, 188, 165, 51, 32, 62, 85, 28, 41, 190, 232, 125, 95, 62, 166, 152, 145, 190, 72, 205, 139, 190, 66, 252, 60, 62, 25, 205, 211, 61, 11, 163, 8, 62, 99, 237, 120, 60, 43, 14, 22, 190, 110, 186, 172, 187, 39, 35, 69, 189, 118, 0, 47, 190, 167, 252, 144, 189, 186, 51, 191, 61, 214, 111, 68, 190, 38, 216, 75, 189, 26, 174, 83, 62, 214, 178, 134, 189, 32, 183, 85, 190, 42, 128, 202, 190, 228, 190, 114, 62, 230, 135, 254, 189, 250, 158, 48, 62, 16, 160, 212, 190, 71, 25, 134, 190, 223, 176, 93, 62, 98, 9, 195, 62, 162, 219, 131, 188, 132, 186, 71, 62, 3, 55, 150, 190, 139, 134, 89, 61, 185, 213, 200, 62, 192, 174, 91, 190, 55, 245, 242, 62, 19, 170, 22, 190, 115, 32, 237, 190, 52, 191, 210, 60, 169, 246, 2, 62, 52, 130, 86, 190, 14, 127, 97, 61, 235, 217, 238, 61, 108, 159, 68, 62, 63, 183, 172, 190, 134, 113, 42, 62, 108, 230, 135, 62, 72, 50, 52, 190, 129, 168, 47, 61, 180, 81, 190, 61, 13, 27, 178, 189, 245, 138, 150, 190, 12, 2, 58, 190, 64, 251, 133, 62, 140, 200, 130, 61, 104, 235, 228, 189, 231, 26, 253, 189, 149, 64, 132, 62, 116, 156, 211, 61, 121, 126, 213, 189, 236, 210, 107, 61, 204, 219, 244, 189, 106, 208, 38, 189, 113, 195, 102, 189, 138, 215, 25, 61, 184, 132, 194, 189, 115, 143, 106, 62, 27, 84, 149, 61, 100, 239, 106, 60, 30, 209, 222, 189, 224, 129, 143, 61, 56, 84, 121, 59, 23, 133, 210, 189, 6, 134, 190, 61, 67, 14, 8, 190, 26, 122, 22, 62, 127, 105, 98, 61, 177, 67, 144, 60, 150, 189, 60, 62, 18, 238, 202, 189, 176, 210, 196, 189, 214, 161, 136, 62, 28, 69, 17, 190, 5, 218, 141, 189, 144, 84, 22, 190, 51, 97, 167, 61, 123, 239, 178, 190, 133, 6, 253, 189, 65, 26, 152, 190, 34, 98, 22, 62, 115, 55, 68, 62, 204, 208, 249, 189, 172, 191, 11, 190, 178, 198, 66, 62, 212, 101, 21, 62, 52, 73, 75, 62, 24, 70, 184, 61, 37, 70, 5, 189, 141, 204, 222, 61, 8, 125, 179, 188, 34, 173, 144, 188, 161, 62, 183, 62, 151, 225, 135, 188, 148, 237, 78, 190, 42, 14, 111, 62, 23, 86, 80, 62, 129, 249, 92, 189, 66, 36, 160, 190, 178, 249, 109, 62, 121, 91, 199, 61, 186, 155, 203, 61, 239, 111, 223, 61, 201, 247, 5, 190, 105, 199, 64, 189, 247, 80, 64, 61, 227, 240, 133, 62, 155, 156, 129, 61, 34, 179, 7, 190, 24, 165, 122, 62, 21, 32, 3, 62, 64, 233, 166, 62, 165, 96, 42, 61, 219, 95, 138, 187, 155, 68, 39, 190, 5, 167, 3, 62, 146, 222, 178, 190, 83, 220, 51, 62, 0, 191, 24, 190, 161, 86, 152, 189, 44, 179, 255, 61, 39, 39, 251, 60, 42, 22, 112, 62, 85, 105, 237, 190, 134, 21, 197, 190, 157, 104, 223, 61, 13, 144, 66, 188, 176, 54, 87, 189, 50, 216, 160, 190, 105, 16, 65, 189, 124, 17, 143, 190, 146, 239, 44, 188, 176, 110, 224, 61, 244, 101, 3, 62, 161, 211, 138, 190, 22, 204, 46, 189, 116, 85, 203, 61, 246, 252, 138, 190, 152, 98, 201, 190, 227, 209, 131, 189, 163, 93, 82, 62, 237, 116, 234, 190, 109, 241, 198, 188, 158, 132, 107, 191, 22, 35, 7, 62, 255, 180, 19, 61, 167, 47, 179, 190, 72, 233, 188, 190, 32, 63, 22, 61, 130, 249, 67, 190, 253, 246, 42, 62, 56, 243, 89, 190, 201, 109, 112, 190, 229, 21, 123, 190, 182, 132, 35, 191, 23, 77, 44, 62, 152, 211, 149, 62, 29, 121, 178, 190, 132, 54, 42, 62, 94, 239, 84, 189, 32, 26, 160, 62, 46, 192, 151, 62, 43, 230, 235, 190, 135, 130, 173, 60, 56, 189, 227, 60, 15, 149, 35, 190, 3, 196, 190, 187, 145, 69, 6, 61, 68, 191, 239, 61, 65, 78, 43, 189, 23, 4, 26, 190, 6, 84, 203, 188, 180, 121, 50, 60, 27, 234, 106, 189, 113, 179, 16, 190, 89, 172, 247, 61, 243, 154, 215, 189, 159, 198, 8, 62, 38, 36, 11, 190, 20, 5, 58, 188, 235, 138, 168, 61, 65, 58, 160, 189, 146, 122, 245, 61, 53, 133, 35, 62, 244, 124, 36, 190, 124, 206, 148, 61, 37, 181, 50, 188, 246, 242, 48, 62, 226, 51, 40, 190, 86, 238, 143, 189, 141, 203, 25, 62, 112, 111, 143, 187, 33, 66, 48, 189, 215, 127, 145, 189, 177, 64, 19, 62, 128, 189, 190, 189, 222, 168, 16, 62, 108, 206, 8, 189, 188, 170, 236, 61, 222, 146, 26, 62, 248, 128, 74, 62, 57, 10, 88, 189, 197, 98, 14, 62, 43, 186, 75, 62, 231, 246, 33, 62, 129, 242, 172, 62, 29, 196, 85, 62, 200, 96, 27, 62, 138, 105, 221, 61, 240, 158, 132, 190, 177, 249, 5, 62, 88, 28, 229, 61, 120, 111, 250, 60, 203, 170, 228, 61, 252, 7, 96, 190, 226, 184, 90, 61, 32, 61, 177, 61, 171, 211, 55, 190, 66, 198, 56, 61, 71, 240, 181, 62, 182, 12, 156, 190, 193, 105, 199, 189, 17, 196, 11, 190, 43, 237, 244, 61, 21, 44, 51, 190, 221, 0, 131, 190, 183, 209, 145, 62, 188, 121, 8, 62, 55, 255, 135, 188, 84, 206, 57, 190, 78, 246, 144, 61, 96, 50, 98, 190, 204, 190, 84, 190, 223, 22, 92, 190, 122, 10, 77, 62, 155, 217, 61, 62, 75, 156, 24, 190, 140, 2, 203, 62, 121, 220, 39, 189, 240, 117, 151, 62, 166, 175, 212, 190, 39, 160, 55, 189, 225, 92, 51, 190, 165, 196, 74, 62, 84, 110, 194, 190, 221, 162, 230, 188, 64, 27, 160, 190, 139, 152, 159, 61, 201, 91, 93, 62, 173, 183, 245, 61, 208, 124, 229, 62, 18, 3, 22, 191, 233, 9, 121, 191, 22, 115, 249, 189, 52, 47, 199, 61, 146, 95, 33, 190, 151, 174, 155, 190, 196, 218, 113, 61, 112, 102, 75, 189, 97, 202, 124, 190, 10, 211, 41, 189, 123, 15, 63, 62, 129, 234, 185, 190, 214, 85, 249, 190, 39, 97, 211, 189, 233, 188, 165, 190, 160, 173, 157, 190, 236, 44, 239, 61, 222, 113, 154, 62, 66, 205, 156, 190, 181, 190, 247, 188, 222, 84, 173, 191, 211, 140, 153, 61, 8, 188, 253, 62, 72, 55, 40, 190, 46, 221, 4, 191, 96, 250, 38, 62, 207, 160, 187, 61, 159, 98, 177, 62, 165, 166, 140, 190, 172, 107, 183, 190, 142, 38, 18, 62, 62, 197, 51, 191, 34, 192, 151, 62, 236, 75, 214, 62, 96, 138, 155, 58, 141, 64, 111, 62, 133, 11, 215, 61, 38, 26, 189, 61, 129, 108, 85, 62, 203, 100, 19, 191, 230, 177, 216, 62, 47, 144, 161, 189, 179, 139, 133, 190, 30, 69, 158, 188, 234, 143, 42, 188, 111, 144, 152, 190, 227, 180, 77, 62, 239, 51, 154, 61, 105, 43, 254, 189, 52, 125, 82, 190, 75, 217, 143, 62, 61, 123, 58, 62, 244, 185, 67, 61, 32, 134, 227, 189, 70, 171, 4, 62, 56, 199, 135, 61, 129, 160, 114, 188, 137, 155, 3, 62, 122, 199, 6, 189, 164, 187, 93, 189, 32, 82, 94, 62, 108, 182, 70, 61, 158, 124, 59, 61, 36, 235, 156, 62, 156, 228, 242, 190, 225, 135, 99, 190, 104, 5, 125, 60, 77, 22, 233, 187, 63, 26, 202, 189, 58, 112, 144, 189, 210, 144, 12, 187, 182, 230, 1, 61, 1, 186, 249, 61, 179, 220, 144, 60, 158, 96, 167, 189, 211, 203, 143, 190, 66, 78, 137, 61, 43, 119, 9, 61, 148, 196, 0, 190, 213, 51, 224, 188, 223, 154, 70, 62, 127, 208, 19, 62, 58, 10, 93, 190, 202, 45, 244, 61, 108, 186, 231, 190, 190, 171, 174, 60, 172, 195, 5, 62, 207, 181, 73, 187, 217, 107, 138, 190, 151, 44, 74, 189, 222, 179, 66, 62, 203, 174, 119, 62, 71, 68, 151, 61, 130, 248, 94, 190, 67, 185, 111, 62, 9, 210, 131, 189, 213, 42, 155, 62, 78, 33, 27, 62, 208, 64, 45, 60, 0, 23, 184, 189, 155, 25, 20, 62, 124, 238, 113, 61, 95, 163, 217, 61, 221, 209, 176, 190, 24, 102, 130, 62, 90, 38, 31, 62, 161, 169, 137, 62, 103, 181, 129, 189, 217, 217, 164, 189, 98, 124, 247, 61, 71, 198, 20, 190, 99, 93, 78, 190, 44, 53, 142, 190, 221, 181, 98, 62, 142, 242, 222, 188, 21, 71, 152, 190, 161, 51, 79, 61, 97, 17, 31, 61, 153, 18, 216, 60, 196, 199, 248, 189, 27, 249, 24, 62, 34, 26, 10, 190, 159, 170, 136, 189, 244, 63, 56, 61, 49, 61, 115, 188, 40, 112, 179, 61, 58, 126, 23, 62, 204, 180, 203, 189, 126, 110, 250, 189, 71, 252, 217, 188, 96, 106, 206, 60, 30, 72, 144, 190, 197, 200, 162, 61, 56, 186, 45, 189, 129, 202, 20, 60, 151, 42, 227, 189, 251, 31, 222, 61};
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
                alignas(float) const unsigned char memory[] = {71, 139, 62, 190, 211, 174, 228, 60, 63, 117, 59, 61, 24, 98, 154, 60, 200, 245, 158, 62, 251, 198, 134, 60, 0, 69, 26, 190, 190, 157, 153, 61, 81, 10, 98, 62, 187, 161, 156, 189, 108, 249, 190, 189, 249, 56, 114, 62, 86, 47, 242, 61, 110, 173, 24, 60, 12, 87, 68, 59, 196, 87, 125, 189, 99, 68, 134, 62, 192, 0, 29, 62, 71, 19, 245, 189, 223, 96, 184, 188, 229, 201, 168, 189, 8, 83, 42, 61, 95, 178, 144, 62, 121, 166, 135, 61, 172, 46, 115, 62, 21, 135, 9, 189, 35, 221, 41, 61, 90, 227, 216, 61, 96, 68, 160, 62, 190, 136, 110, 62, 217, 155, 39, 62, 179, 239, 69, 190};
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
                alignas(float) const unsigned char memory[] = {169, 152, 75, 190, 99, 108, 206, 190, 45, 227, 18, 62, 159, 179, 16, 191, 221, 171, 178, 189, 182, 45, 0, 63, 179, 160, 24, 189, 20, 116, 29, 190, 191, 52, 216, 60, 62, 228, 85, 190, 134, 31, 158, 190, 233, 213, 89, 63, 71, 170, 133, 189, 93, 145, 31, 63, 77, 134, 35, 190, 75, 20, 40, 62, 191, 212, 214, 189, 104, 189, 10, 190, 233, 31, 231, 62, 183, 227, 94, 62, 211, 219, 200, 62, 146, 99, 249, 189, 228, 65, 92, 190, 186, 85, 147, 62, 16, 19, 28, 191, 133, 104, 49, 189, 121, 95, 120, 190, 153, 56, 43, 63, 191, 190, 21, 191, 145, 173, 172, 61, 55, 87, 166, 190, 74, 224, 203, 189, 236, 104, 245, 62, 169, 57, 212, 61, 212, 72, 15, 190, 254, 15, 150, 60, 232, 75, 88, 190, 142, 172, 46, 61, 230, 137, 44, 62, 158, 185, 87, 190, 32, 254, 105, 190, 117, 233, 22, 189, 45, 73, 243, 61, 243, 178, 61, 62, 196, 23, 185, 189, 42, 201, 61, 62, 180, 42, 54, 190, 138, 205, 113, 190, 141, 64, 93, 190, 177, 188, 176, 188, 57, 220, 79, 62, 229, 132, 78, 60, 62, 184, 62, 61, 118, 180, 25, 62, 149, 137, 202, 189, 188, 37, 72, 190, 101, 67, 109, 62, 24, 215, 21, 190, 142, 250, 84, 62, 123, 110, 52, 61, 250, 169, 32, 61, 188, 134, 66, 190, 216, 131, 36, 189, 87, 127, 3, 62};
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
                alignas(float) const unsigned char memory[] = {142, 3, 4, 190, 58, 208, 209, 189};
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
    alignas(float) const unsigned char memory[] = {131, 34, 229, 190, 207, 44, 46, 191, 237, 134, 228, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {100, 245, 81, 190, 177, 249, 70, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0099/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
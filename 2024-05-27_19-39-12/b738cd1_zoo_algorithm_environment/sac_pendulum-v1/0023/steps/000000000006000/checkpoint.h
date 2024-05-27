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
                alignas(float) const unsigned char memory[] = {4, 148, 151, 190, 155, 66, 72, 191, 185, 39, 37, 191, 240, 34, 209, 190, 88, 151, 111, 191, 59, 119, 224, 189, 176, 24, 70, 61, 93, 100, 37, 191, 7, 192, 123, 62, 115, 79, 190, 62, 7, 227, 46, 190, 72, 35, 108, 62, 71, 27, 9, 191, 114, 218, 134, 62, 53, 52, 32, 63, 10, 43, 148, 62, 54, 204, 66, 191, 217, 75, 88, 190, 176, 169, 157, 190, 3, 148, 75, 191, 95, 229, 114, 62, 39, 227, 167, 62, 83, 177, 240, 62, 52, 195, 12, 190, 125, 94, 249, 190, 105, 252, 105, 63, 205, 118, 254, 62, 208, 82, 43, 62, 176, 65, 42, 63, 227, 49, 197, 62, 207, 201, 105, 62, 219, 221, 67, 191, 66, 179, 182, 190, 47, 30, 208, 62, 187, 92, 92, 191, 21, 177, 85, 190, 180, 201, 83, 62, 225, 25, 42, 191, 44, 93, 15, 62, 144, 248, 25, 63, 190, 118, 6, 63, 150, 160, 38, 63, 174, 41, 173, 62, 155, 110, 42, 63, 177, 24, 25, 190, 20, 138, 13, 191, 46, 246, 195, 61, 228, 25, 100, 61, 174, 108, 57, 63, 62, 111, 103, 191, 224, 69, 137, 190, 102, 150, 3, 63, 52, 159, 136, 191, 99, 181, 124, 190, 50, 106, 228, 62, 202, 151, 150, 62, 50, 253, 245, 190, 209, 237, 241, 190, 68, 220, 64, 191, 12, 80, 8, 62, 254, 149, 8, 191, 199, 126, 208, 189, 33, 177, 150, 60, 148, 216, 53, 191, 105, 135, 137, 190, 54, 242, 118, 189, 69, 152, 147, 190, 16, 212, 145, 190, 104, 109, 243, 189, 69, 83, 200, 190, 92, 194, 96, 191, 49, 238, 133, 190, 130, 12, 236, 61, 87, 39, 73, 63, 215, 73, 221, 62, 151, 226, 238, 190, 235, 128, 198, 62, 0, 59, 105, 190, 94, 217, 28, 61, 248, 153, 238, 62, 56, 255, 45, 63, 137, 109, 86, 63, 9, 118, 23, 63, 85, 224, 25, 63, 124, 45, 141, 190, 241, 254, 160, 62, 251, 217, 221, 190, 139, 11, 9, 191, 8, 121, 66, 191, 180, 179, 32, 191, 13, 62, 124, 190, 114, 110, 186, 190, 225, 36, 130, 63, 246, 75, 240, 190, 198, 57, 93, 63, 245, 56, 89, 62};
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
                alignas(float) const unsigned char memory[] = {230, 191, 7, 191, 187, 153, 251, 62, 172, 114, 125, 190, 200, 224, 54, 63, 186, 109, 10, 191, 217, 182, 47, 191, 109, 187, 171, 190, 196, 23, 65, 63, 183, 217, 162, 190, 222, 127, 27, 191, 111, 168, 31, 62, 248, 31, 212, 61, 128, 27, 77, 189, 101, 59, 135, 189, 122, 30, 159, 62, 149, 212, 140, 62, 97, 208, 201, 189, 211, 194, 215, 61, 178, 106, 178, 62, 251, 248, 111, 59, 21, 214, 16, 63, 133, 127, 181, 62, 57, 213, 39, 63, 28, 30, 1, 62, 110, 20, 146, 62, 189, 57, 219, 62, 240, 145, 165, 61, 71, 132, 12, 62, 64, 95, 50, 190, 11, 49, 178, 62, 115, 195, 141, 190, 222, 71, 84, 62};
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
                alignas(float) const unsigned char memory[] = {145, 28, 170, 188, 179, 55, 57, 61, 241, 91, 67, 191, 24, 52, 30, 190, 178, 214, 133, 191, 72, 149, 190, 190, 244, 186, 167, 190, 96, 214, 94, 62, 3, 44, 186, 190, 91, 126, 63, 190, 41, 174, 185, 189, 33, 109, 30, 190, 167, 82, 41, 191, 42, 241, 12, 190, 8, 2, 177, 61, 159, 176, 33, 60, 156, 28, 144, 61, 121, 16, 189, 189, 51, 243, 129, 188, 116, 92, 154, 189, 17, 198, 204, 61, 238, 220, 88, 189, 93, 145, 137, 189, 65, 232, 179, 189, 100, 148, 52, 190, 62, 105, 249, 61, 127, 77, 39, 191, 84, 58, 44, 190, 109, 83, 167, 61, 10, 21, 119, 62, 185, 242, 42, 191, 191, 194, 216, 189, 150, 32, 108, 190, 120, 95, 252, 61, 243, 9, 190, 62, 135, 168, 97, 62, 64, 248, 150, 61, 162, 129, 208, 190, 227, 23, 232, 189, 73, 13, 31, 62, 160, 182, 29, 189, 117, 219, 166, 190, 53, 42, 255, 189, 145, 8, 74, 62, 253, 120, 145, 62, 236, 251, 161, 59, 224, 48, 130, 190, 180, 175, 200, 57, 127, 63, 133, 62, 200, 174, 117, 62, 143, 200, 43, 62, 25, 226, 14, 61, 16, 173, 192, 60, 219, 61, 139, 61, 127, 209, 1, 62, 200, 87, 65, 191, 125, 133, 120, 61, 2, 184, 31, 61, 123, 140, 157, 189, 12, 37, 114, 189, 244, 79, 99, 190, 34, 27, 5, 191, 214, 75, 13, 61, 146, 93, 72, 62, 200, 53, 169, 190, 88, 64, 222, 61, 167, 80, 33, 62, 187, 166, 82, 61, 182, 246, 151, 62, 98, 201, 12, 59, 179, 68, 153, 62, 251, 16, 168, 60, 116, 184, 104, 62, 131, 149, 174, 61, 64, 110, 10, 62, 52, 237, 84, 62, 251, 123, 46, 62, 114, 54, 203, 60, 233, 115, 140, 62, 24, 17, 0, 62, 167, 250, 139, 190, 95, 203, 180, 61, 88, 202, 17, 190, 41, 229, 141, 62, 58, 41, 129, 189, 186, 41, 237, 190, 27, 82, 158, 61, 208, 127, 180, 62, 9, 164, 108, 60, 158, 104, 183, 186, 183, 24, 31, 62, 37, 219, 18, 190, 2, 57, 154, 190, 125, 172, 129, 60, 252, 245, 111, 62, 88, 149, 247, 189, 167, 204, 171, 61, 104, 154, 34, 62, 131, 16, 176, 61, 107, 234, 94, 189, 153, 72, 42, 190, 216, 130, 149, 189, 245, 162, 214, 61, 199, 49, 133, 61, 15, 25, 249, 189, 101, 6, 141, 61, 125, 241, 226, 59, 148, 159, 148, 189, 40, 239, 13, 190, 41, 38, 53, 60, 105, 143, 252, 189, 228, 203, 138, 189, 183, 70, 145, 61, 247, 53, 47, 190, 42, 216, 21, 62, 178, 249, 75, 61, 73, 137, 20, 190, 164, 111, 175, 61, 61, 49, 66, 190, 11, 193, 63, 190, 130, 216, 131, 60, 222, 183, 14, 189, 120, 91, 62, 61, 96, 22, 32, 190, 60, 245, 126, 189, 152, 178, 161, 189, 154, 58, 10, 62, 66, 15, 29, 190, 217, 183, 199, 61, 32, 169, 86, 188, 208, 221, 27, 62, 130, 220, 53, 62, 150, 232, 77, 191, 106, 185, 186, 190, 186, 21, 203, 188, 169, 131, 164, 62, 82, 28, 14, 191, 190, 110, 155, 189, 132, 226, 25, 62, 11, 58, 208, 61, 46, 248, 203, 61, 196, 116, 26, 62, 26, 189, 148, 62, 209, 74, 165, 189, 40, 244, 104, 62, 139, 164, 174, 60, 189, 7, 9, 62, 89, 237, 43, 188, 228, 193, 185, 189, 162, 172, 162, 61, 63, 36, 9, 62, 34, 157, 214, 61, 200, 190, 116, 189, 132, 25, 193, 189, 242, 127, 145, 190, 111, 31, 81, 62, 159, 119, 170, 189, 18, 198, 191, 61, 222, 144, 130, 190, 154, 72, 238, 189, 238, 156, 241, 60, 53, 123, 62, 189, 92, 108, 173, 189, 117, 96, 241, 189, 53, 248, 137, 61, 112, 41, 32, 190, 107, 238, 151, 61, 194, 245, 62, 190, 188, 190, 53, 190, 254, 244, 8, 190, 52, 92, 143, 189, 176, 201, 111, 189, 38, 79, 14, 189, 253, 205, 194, 60, 67, 58, 129, 61, 70, 42, 135, 61, 191, 253, 156, 189, 221, 125, 15, 61, 201, 41, 165, 189, 3, 239, 48, 190, 151, 171, 202, 61, 109, 218, 177, 61, 189, 26, 129, 189, 83, 158, 242, 61, 57, 222, 40, 60, 117, 151, 41, 60, 98, 110, 172, 187, 149, 89, 139, 189, 22, 20, 112, 61, 70, 173, 40, 186, 199, 101, 195, 189, 124, 205, 185, 60, 77, 38, 17, 190, 61, 85, 240, 188, 196, 51, 103, 189, 79, 43, 203, 189, 113, 138, 11, 62, 178, 185, 195, 188, 145, 194, 162, 61, 192, 67, 10, 189, 66, 15, 139, 189, 255, 2, 147, 61, 225, 208, 2, 62, 18, 47, 1, 62, 253, 218, 19, 190, 122, 17, 7, 190, 229, 6, 208, 189, 202, 18, 110, 189, 16, 2, 48, 188, 146, 64, 158, 189, 158, 122, 99, 61, 138, 122, 32, 190, 155, 236, 135, 60, 104, 37, 145, 61, 42, 234, 40, 190, 250, 45, 0, 189, 37, 54, 9, 62, 221, 235, 55, 61, 41, 201, 76, 60, 202, 93, 137, 61, 75, 232, 5, 61, 193, 89, 29, 190, 103, 216, 179, 189, 24, 72, 52, 190, 172, 250, 20, 62, 84, 176, 66, 61, 29, 40, 160, 62, 213, 73, 75, 60, 8, 254, 17, 61, 104, 210, 47, 190, 127, 116, 135, 190, 159, 74, 21, 190, 117, 159, 32, 62, 255, 12, 154, 190, 177, 138, 152, 61, 21, 185, 102, 62, 5, 46, 116, 62, 151, 187, 19, 190, 91, 2, 242, 189, 27, 146, 115, 62, 108, 250, 133, 62, 249, 136, 164, 61, 97, 36, 72, 62, 239, 36, 25, 190, 210, 167, 59, 62, 158, 104, 85, 62, 144, 214, 50, 62, 44, 22, 144, 190, 55, 227, 238, 189, 172, 157, 22, 190, 93, 173, 27, 62, 82, 86, 89, 189, 40, 8, 184, 61, 164, 64, 37, 187, 0, 69, 224, 61, 223, 113, 136, 62, 213, 173, 209, 190, 8, 5, 42, 188, 186, 76, 41, 190, 248, 103, 56, 62, 57, 242, 87, 191, 212, 0, 45, 191, 77, 166, 11, 63, 11, 30, 14, 62, 222, 112, 40, 191, 193, 238, 23, 62, 113, 6, 155, 190, 177, 155, 250, 189, 84, 68, 111, 190, 187, 233, 152, 62, 138, 86, 203, 62, 169, 59, 167, 188, 188, 16, 230, 190, 39, 180, 222, 190, 100, 227, 91, 190, 138, 212, 57, 62, 92, 235, 195, 61, 30, 228, 165, 61, 134, 91, 195, 61, 220, 79, 153, 62, 83, 228, 192, 188, 33, 92, 204, 61, 155, 203, 225, 188, 208, 10, 146, 62, 138, 6, 123, 61, 248, 194, 187, 62, 59, 32, 30, 61, 133, 69, 147, 190, 199, 196, 226, 189, 34, 134, 32, 191, 139, 8, 85, 62, 219, 22, 116, 62, 194, 11, 77, 61, 223, 73, 139, 188, 149, 36, 63, 61, 101, 98, 120, 62, 133, 243, 251, 189, 38, 186, 83, 190, 208, 153, 43, 61, 98, 125, 31, 188, 86, 212, 216, 189, 173, 111, 246, 61, 96, 145, 183, 62, 143, 241, 105, 61, 254, 139, 191, 61, 104, 159, 137, 61, 228, 189, 147, 62, 193, 184, 73, 62, 82, 56, 198, 189, 235, 109, 170, 190, 146, 11, 3, 190, 119, 114, 57, 190, 3, 63, 140, 61, 144, 157, 174, 190, 188, 191, 161, 60, 66, 129, 62, 62, 58, 161, 76, 189, 5, 29, 128, 190, 9, 216, 136, 61, 169, 152, 6, 190, 168, 195, 228, 189, 217, 201, 11, 60, 60, 9, 158, 60, 5, 6, 213, 61, 222, 171, 209, 189, 120, 173, 127, 61, 89, 93, 217, 61, 13, 2, 172, 189, 30, 115, 10, 62, 204, 83, 146, 61, 94, 237, 48, 190, 96, 217, 164, 61, 91, 53, 2, 190, 10, 58, 33, 190, 238, 75, 24, 190, 101, 79, 143, 189, 167, 110, 66, 189, 154, 155, 49, 62, 142, 75, 79, 185, 201, 79, 62, 190, 98, 60, 59, 190, 99, 99, 247, 61, 253, 147, 164, 189, 212, 75, 147, 61, 118, 82, 247, 61, 32, 69, 212, 61, 40, 34, 23, 189, 10, 126, 133, 189, 53, 214, 52, 190, 248, 119, 70, 61, 13, 96, 22, 189, 85, 113, 20, 62, 181, 0, 99, 190, 201, 66, 37, 190, 208, 51, 20, 191, 31, 165, 217, 61, 93, 164, 202, 190, 200, 204, 190, 190, 9, 214, 131, 189, 70, 196, 23, 62, 248, 21, 87, 189, 128, 43, 68, 62, 76, 108, 60, 190, 130, 204, 67, 190, 206, 119, 181, 190, 9, 91, 162, 62, 164, 65, 180, 62, 29, 139, 216, 60, 136, 108, 187, 190, 99, 117, 247, 189, 98, 6, 227, 61, 146, 63, 133, 61, 62, 5, 230, 188, 139, 8, 233, 61, 34, 22, 188, 61, 70, 26, 189, 61, 142, 62, 44, 190, 158, 245, 177, 189, 220, 34, 167, 61, 227, 241, 47, 62, 81, 78, 214, 61, 2, 8, 142, 61, 104, 129, 204, 189, 22, 122, 53, 190, 205, 249, 78, 189, 241, 60, 237, 187, 95, 122, 205, 62, 196, 180, 62, 62, 29, 93, 97, 62, 48, 243, 29, 60, 97, 246, 183, 190, 16, 163, 104, 62, 8, 2, 129, 61, 33, 246, 159, 190, 209, 232, 231, 189, 94, 128, 6, 62, 61, 85, 176, 62, 37, 208, 18, 189, 252, 222, 211, 61, 207, 17, 200, 61, 32, 208, 168, 61, 176, 157, 136, 188, 33, 24, 26, 62, 119, 102, 224, 189, 77, 222, 134, 62, 71, 236, 178, 61, 108, 62, 149, 62, 248, 158, 81, 188, 221, 93, 117, 187, 197, 106, 227, 189, 166, 196, 21, 62, 17, 181, 25, 190, 247, 245, 62, 189, 228, 83, 132, 189, 139, 105, 191, 61, 216, 238, 163, 62, 213, 162, 247, 60, 194, 239, 136, 61, 181, 230, 19, 62, 172, 223, 17, 190, 40, 147, 108, 189, 239, 164, 14, 62, 149, 213, 161, 59, 168, 226, 1, 190, 182, 36, 182, 189, 126, 150, 101, 61, 9, 239, 57, 190, 57, 91, 84, 61, 255, 32, 197, 61, 197, 241, 24, 190, 26, 85, 129, 189, 145, 237, 229, 189, 161, 144, 8, 62, 123, 210, 70, 190, 95, 56, 100, 60, 248, 34, 49, 190, 222, 57, 160, 61, 175, 2, 43, 190, 149, 174, 132, 189, 116, 158, 8, 62, 109, 148, 211, 189, 193, 169, 180, 188, 148, 134, 3, 190, 48, 245, 204, 189, 159, 133, 23, 190, 246, 110, 70, 61, 189, 4, 14, 190, 63, 8, 106, 60, 241, 223, 135, 189, 7, 224, 80, 190, 118, 241, 13, 190, 154, 53, 143, 61, 103, 204, 54, 190, 137, 208, 209, 188, 126, 136, 241, 61, 159, 60, 226, 189, 196, 221, 3, 190, 197, 3, 27, 190, 242, 73, 24, 62, 237, 81, 5, 61, 87, 219, 137, 189, 114, 196, 224, 188, 7, 88, 220, 188, 111, 239, 236, 189, 140, 206, 194, 189, 56, 236, 221, 61, 173, 114, 17, 190, 177, 41, 130, 61, 241, 107, 242, 61, 150, 132, 218, 61, 167, 8, 221, 189, 223, 141, 48, 190, 225, 192, 59, 190, 27, 237, 187, 61, 156, 6, 110, 187, 196, 236, 9, 189, 186, 87, 186, 189, 228, 62, 0, 61, 142, 77, 22, 189, 27, 102, 200, 60, 212, 239, 34, 61, 205, 163, 70, 62, 98, 198, 221, 59, 208, 98, 175, 189, 182, 96, 120, 62, 102, 177, 191, 62, 235, 212, 109, 189, 208, 59, 195, 61, 96, 186, 254, 188, 38, 112, 171, 190, 147, 137, 153, 61, 81, 19, 182, 188, 66, 176, 2, 62, 153, 12, 35, 190, 234, 171, 41, 190, 196, 140, 54, 62, 10, 77, 150, 62, 114, 3, 37, 61, 175, 193, 208, 189, 161, 198, 167, 61, 172, 7, 46, 62, 232, 208, 8, 62, 227, 233, 139, 62, 125, 144, 23, 189, 8, 228, 7, 62, 107, 222, 152, 61, 95, 184, 210, 60, 207, 86, 117, 190, 151, 129, 24, 62, 192, 69, 17, 190, 122, 184, 62, 60, 4, 96, 13, 62, 190, 128, 90, 60, 67, 73, 13, 188, 121, 86, 188, 60, 145, 108, 8, 189, 123, 123, 225, 189, 117, 42, 139, 61, 147, 119, 190, 61, 157, 172, 136, 60, 15, 214, 27, 61, 9, 114, 15, 190, 232, 37, 144, 189, 222, 187, 3, 61, 91, 12, 50, 189, 177, 88, 14, 190, 229, 130, 130, 189, 56, 148, 8, 190, 50, 182, 29, 190, 179, 103, 47, 190, 148, 96, 63, 61, 130, 20, 252, 60, 69, 135, 147, 189, 235, 109, 6, 190, 180, 206, 0, 62, 232, 127, 249, 189, 57, 123, 208, 189, 4, 150, 135, 189, 173, 42, 117, 189, 90, 38, 1, 190, 40, 248, 34, 62, 134, 177, 30, 190, 207, 203, 175, 188, 87, 65, 57, 189, 172, 96, 67, 61, 89, 49, 65, 62, 248, 139, 88, 190, 134, 226, 64, 62, 132, 152, 176, 190, 175, 60, 148, 61, 182, 135, 154, 62, 208, 189, 147, 189, 21, 82, 154, 190, 182, 217, 214, 187, 50, 130, 113, 60, 107, 168, 74, 190, 220, 171, 100, 60, 145, 225, 165, 62, 10, 219, 68, 61, 131, 32, 138, 189, 51, 78, 15, 189, 8, 99, 93, 190, 186, 141, 6, 188, 126, 143, 58, 62, 31, 207, 28, 190, 24, 214, 128, 188, 12, 139, 177, 61, 217, 43, 164, 62, 206, 226, 144, 61, 169, 176, 57, 61, 185, 209, 117, 189, 196, 174, 122, 62, 192, 33, 129, 187, 151, 83, 83, 62, 190, 250, 105, 60, 42, 209, 143, 190, 118, 46, 16, 61, 200, 250, 76, 61, 152, 79, 235, 61, 180, 86, 64, 62, 55, 46, 106, 59, 149, 158, 66, 190, 7, 115, 153, 190, 225, 145, 63, 62, 29, 237, 145, 61, 227, 228, 135, 189, 214, 99, 180, 61, 221, 5, 38, 62, 44, 128, 77, 61, 18, 186, 214, 59, 189, 209, 239, 61, 76, 222, 83, 62, 141, 22, 11, 188, 73, 164, 31, 62, 122, 141, 24, 190, 198, 189, 247, 189, 90, 177, 7, 62, 126, 2, 74, 62, 152, 36, 220, 61, 235, 65, 70, 190, 40, 201, 200, 61, 50, 110, 90, 190, 232, 78, 87, 61, 143, 243, 179, 189, 188, 122, 52, 189, 134, 40, 168, 189, 1, 116, 6, 61, 141, 76, 20, 62, 120, 93, 225, 190, 113, 45, 184, 62, 123, 235, 250, 190, 156, 242, 48, 59, 113, 183, 165, 191, 230, 79, 27, 191, 88, 8, 28, 63, 204, 139, 152, 61, 2, 252, 35, 191, 110, 204, 43, 190, 76, 195, 86, 190, 103, 215, 168, 190, 217, 198, 125, 191, 252, 59, 239, 61, 227, 5, 109, 61, 1, 153, 186, 61, 120, 136, 130, 190, 231, 201, 30, 190, 127, 158, 156, 189, 178, 83, 89, 62, 183, 24, 26, 62, 22, 170, 111, 62, 114, 30, 132, 62, 197, 79, 201, 61, 127, 89, 155, 190, 247, 165, 94, 62, 194, 73, 64, 191, 38, 55, 255, 61, 43, 51, 226, 60, 214, 46, 129, 61, 154, 87, 46, 191, 176, 1, 15, 191, 247, 215, 3, 62, 159, 220, 114, 191, 221, 4, 240, 189, 38, 55, 107, 61, 26, 89, 119, 189, 169, 180, 176, 190, 36, 158, 171, 61, 84, 189, 213, 62, 6, 103, 28, 189, 53, 240, 129, 62, 231, 7, 58, 62, 7, 40, 17, 191, 219, 58, 173, 189, 238, 246, 89, 62, 115, 152, 5, 63, 215, 161, 195, 61, 20, 141, 21, 61, 33, 243, 11, 191, 255, 92, 185, 62, 73, 162, 37, 190, 125, 127, 144, 189, 186, 103, 189, 190, 56, 194, 171, 189, 241, 179, 94, 62, 62, 82, 129, 189, 212, 83, 61, 56, 41, 186, 107, 61, 76, 137, 169, 62, 160, 116, 42, 62, 36, 203, 59, 61, 132, 74, 241, 61, 224, 195, 14, 190, 179, 31, 66, 62, 100, 201, 129, 190, 52, 121, 139, 189, 64, 137, 114, 190, 217, 26, 74, 190, 167, 240, 135, 62, 22, 99, 235, 189, 163, 26, 169, 61, 102, 67, 68, 190, 84, 146, 184, 62, 183, 118, 97, 189, 67, 112, 16, 190, 29, 97, 67, 190, 165, 233, 156, 62, 116, 9, 94, 62, 174, 200, 136, 190, 106, 217, 47, 190, 234, 254, 250, 189, 148, 161, 62, 62, 104, 245, 5, 191, 255, 205, 18, 190, 17, 54, 233, 61, 87, 52, 70, 190, 98, 185, 35, 62, 152, 109, 179, 62, 126, 94, 5, 62, 149, 194, 199, 189, 217, 135, 254, 61, 125, 45, 162, 62, 18, 33, 40, 62, 50, 95, 159, 61, 37, 208, 221, 62, 114, 19, 135, 62, 47, 165, 46, 189, 217, 160, 111, 62, 13, 56, 68, 62, 106, 40, 113, 62, 90, 122, 222, 62, 58, 16, 186, 61, 210, 73, 16, 189, 175, 138, 227, 61, 6, 186, 27, 62, 89, 157, 40, 62, 172, 200, 131, 187, 156, 4, 134, 62, 16, 85, 52, 62, 29, 176, 132, 61, 25, 35, 113, 190, 126, 251, 145, 61, 83, 117, 178, 189, 146, 43, 51, 61, 231, 142, 73, 190, 112, 247, 12, 61, 104, 186, 23, 191, 101, 140, 221, 190, 146, 179, 148, 62, 69, 158, 60, 62, 33, 161, 172, 190, 136, 197, 243, 61, 148, 234, 108, 61, 242, 180, 168, 189, 110, 151, 124, 61, 251, 174, 143, 62, 208, 95, 10, 62, 205, 96, 160, 190, 72, 205, 73, 62, 139, 233, 54, 190, 149, 48, 135, 62, 189, 12, 32, 189, 23, 211, 151, 190, 24, 239, 202, 60, 46, 9, 72, 61, 182, 104, 19, 62, 107, 16, 26, 190, 172, 155, 10, 188, 3, 121, 58, 62, 46, 249, 125, 189, 191, 140, 111, 190, 183, 145, 211, 61, 173, 181, 91, 62, 231, 168, 205, 62, 82, 205, 218, 59, 43, 9, 142, 61, 68, 9, 163, 61, 21, 67, 19, 62, 219, 151, 226, 61, 32, 223, 85, 60, 105, 47, 75, 191, 182, 21, 43, 60, 237, 163, 107, 190, 73, 124, 66, 190, 233, 136, 119, 189, 236, 173, 2, 61, 229, 68, 43, 191, 60, 141, 0, 62, 185, 221, 25, 62, 1, 203, 140, 62, 195, 178, 237, 189, 35, 67, 153, 61, 16, 191, 166, 190, 231, 114, 39, 62, 78, 10, 155, 61, 160, 27, 49, 190, 160, 6, 2, 190, 182, 216, 26, 62, 207, 103, 43, 62, 76, 60, 191, 61, 188, 93, 182, 188, 183, 144, 159, 190, 104, 79, 222, 189, 203, 26, 145, 189, 32, 99, 77, 191, 101, 13, 49, 62, 38, 90, 153, 189, 97, 238, 140, 61, 140, 13, 204, 61, 1, 141, 138, 189, 50, 249, 251, 61, 92, 230, 57, 190, 12, 66, 21, 189, 184, 57, 57, 190, 192, 49, 176, 189, 223, 188, 153, 189, 234, 81, 53, 189, 179, 217, 226, 189, 132, 44, 31, 62, 157, 207, 49, 190, 113, 178, 41, 190, 90, 99, 176, 61, 116, 1, 43, 189, 25, 187, 136, 62, 86, 61, 244, 58, 60, 45, 134, 62, 176, 206, 163, 62, 211, 213, 151, 190, 30, 123, 210, 189, 124, 189, 96, 62, 12, 188, 162, 190, 194, 218, 13, 62, 155, 67, 47, 62, 219, 34, 76, 62, 219, 5, 17, 190, 83, 47, 207, 190, 110, 113, 7, 62, 6, 81, 7, 62, 94, 228, 197, 61, 236, 51, 225, 61, 39, 1, 228, 189, 147, 215, 139, 189, 112, 173, 106, 188, 205, 172, 185, 189, 42, 157, 211, 189, 17, 180, 150, 61, 249, 7, 170, 188, 160, 96, 49, 189, 242, 222, 12, 189, 136, 121, 225, 59, 166, 151, 56, 189, 128, 137, 252, 61, 202, 85, 74, 62, 234, 231, 13, 61, 70, 167, 117, 62, 80, 149, 223, 62, 67, 188, 140, 62, 240, 108, 227, 61, 155, 90, 130, 190, 173, 200, 157, 188, 86, 202, 7, 190, 10, 85, 141, 62, 7, 16, 63, 189, 23, 8, 252, 187, 79, 214, 142, 62, 135, 240, 191, 62, 26, 120, 44, 189, 138, 179, 0, 191, 148, 10, 42, 189, 95, 159, 170, 62, 227, 235, 157, 61, 179, 246, 26, 62, 210, 18, 64, 62, 232, 141, 152, 189, 78, 86, 194, 61, 214, 255, 114, 62, 59, 143, 209, 190, 50, 230, 145, 188, 182, 253, 241, 189, 203, 49, 112, 62, 191, 158, 161, 190, 179, 92, 220, 189, 165, 172, 178, 190, 84, 188, 54, 188, 189, 126, 37, 61, 178, 29, 141, 189, 78, 223, 190, 61, 135, 148, 208, 61, 162, 30, 240, 61, 125, 5, 182, 61, 164, 32, 195, 190, 170, 215, 62, 62, 69, 204, 141, 60, 48, 141, 13, 61, 178, 135, 39, 190, 89, 232, 162, 188, 248, 153, 209, 187, 200, 189, 41, 189, 233, 193, 74, 189, 41, 198, 4, 62, 80, 130, 225, 189, 2, 49, 93, 62, 121, 103, 254, 61, 105, 1, 147, 61, 22, 205, 42, 62, 87, 22, 157, 186, 223, 94, 85, 189, 100, 155, 97, 61, 169, 147, 170, 188, 116, 44, 185, 189, 94, 225, 194, 189, 3, 138, 1, 61, 237, 103, 214, 61, 224, 101, 226, 58, 60, 244, 21, 190, 120, 202, 35, 190, 252, 175, 199, 190, 141, 252, 6, 190, 208, 166, 219, 189, 185, 192, 184, 189, 8, 106, 111, 188, 255, 143, 237, 190, 236, 90, 198, 190, 245, 187, 89, 62, 56, 14, 112, 61, 252, 16, 189, 190, 89, 161, 192, 61, 214, 103, 26, 190, 206, 51, 228, 61, 182, 193, 181, 190, 109, 31, 70, 62, 119, 73, 155, 62, 207, 79, 142, 189, 96, 19, 15, 190, 90, 221, 157, 61, 140, 50, 242, 188, 184, 99, 152, 188, 252, 7, 142, 61, 28, 135, 214, 61, 176, 127, 74, 62, 9, 198, 163, 61, 92, 185, 192, 189, 154, 215, 170, 61, 93, 161, 3, 189, 166, 66, 122, 62, 59, 149, 33, 61, 2, 97, 71, 61, 140, 215, 114, 61, 243, 216, 114, 190, 46, 197, 33, 62, 189, 25, 112, 62, 88, 186, 87, 62, 57, 130, 85, 62, 133, 236, 146, 189, 129, 4, 150, 190, 85, 227, 110, 190, 217, 37, 176, 189, 77, 139, 226, 61, 14, 94, 113, 190, 142, 31, 49, 62, 41, 44, 201, 188, 170, 201, 16, 62, 23, 233, 30, 61, 131, 82, 114, 190, 122, 180, 213, 189, 206, 195, 94, 61, 173, 114, 75, 62, 29, 166, 98, 187, 101, 13, 37, 190, 172, 44, 65, 62, 175, 5, 117, 62, 192, 213, 149, 62, 1, 0, 173, 190, 12, 46, 104, 62, 141, 228, 4, 62, 33, 255, 147, 189, 243, 67, 49, 189, 216, 134, 58, 190, 48, 73, 3, 190, 169, 217, 1, 62, 195, 189, 55, 61, 33, 184, 220, 189, 199, 252, 184, 61, 136, 224, 16, 191, 215, 171, 129, 60, 34, 229, 51, 191, 160, 166, 186, 60, 249, 108, 18, 190, 129, 252, 145, 62, 128, 55, 136, 190, 99, 90, 10, 61, 120, 121, 87, 60, 249, 110, 40, 61, 184, 202, 170, 190, 52, 110, 196, 62, 119, 144, 139, 62, 157, 97, 214, 61, 39, 3, 90, 61, 176, 229, 104, 188, 39, 81, 158, 189, 43, 78, 147, 62, 211, 164, 236, 61, 53, 14, 65, 61, 246, 238, 14, 62, 140, 232, 95, 61, 12, 217, 247, 189, 38, 229, 224, 189, 165, 12, 99, 62, 19, 71, 184, 62, 59, 123, 56, 62, 3, 76, 83, 62, 113, 239, 232, 189, 254, 99, 84, 190, 246, 110, 199, 190, 206, 163, 208, 61, 60, 88, 72, 191, 231, 117, 99, 190, 210, 64, 118, 191, 232, 1, 28, 191, 74, 146, 55, 63, 61, 69, 208, 61, 120, 229, 22, 191, 115, 250, 66, 190, 115, 238, 85, 60, 203, 126, 0, 190, 106, 98, 95, 191, 143, 57, 103, 190, 47, 3, 88, 61, 116, 81, 113, 61, 156, 83, 55, 190, 72, 104, 181, 190, 181, 42, 157, 190, 91, 145, 249, 62, 118, 35, 134, 62, 113, 79, 78, 62, 120, 48, 110, 59, 248, 227, 38, 62, 44, 17, 185, 190, 198, 238, 251, 61, 204, 111, 120, 191, 112, 241, 141, 190, 176, 206, 66, 62, 74, 239, 251, 59, 206, 184, 39, 191, 10, 205, 213, 190};
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
                alignas(float) const unsigned char memory[] = {212, 232, 198, 60, 229, 198, 12, 62, 15, 34, 45, 190, 80, 159, 141, 189, 231, 164, 98, 188, 157, 44, 37, 190, 105, 157, 171, 188, 11, 118, 193, 61, 173, 136, 30, 62, 100, 31, 27, 62, 200, 123, 74, 190, 63, 120, 26, 62, 20, 81, 133, 62, 218, 249, 244, 61, 250, 12, 21, 189, 1, 252, 36, 62, 154, 50, 143, 188, 247, 148, 60, 61, 229, 227, 175, 61, 241, 61, 114, 62, 15, 110, 5, 62, 59, 26, 106, 190, 232, 184, 253, 189, 136, 239, 46, 62, 163, 155, 129, 190, 95, 58, 207, 61, 201, 235, 149, 189, 36, 127, 134, 62, 160, 189, 174, 61, 93, 111, 165, 61, 236, 80, 232, 61, 166, 201, 162, 62};
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
                alignas(float) const unsigned char memory[] = {96, 30, 205, 190, 233, 34, 202, 62, 166, 254, 205, 190, 188, 136, 244, 189, 237, 231, 253, 61, 237, 24, 76, 61, 236, 47, 6, 189, 101, 151, 98, 62, 134, 185, 31, 191, 47, 136, 47, 190, 91, 66, 243, 61, 65, 231, 135, 190, 172, 179, 164, 62, 35, 223, 7, 190, 190, 133, 37, 189, 10, 132, 131, 62, 186, 192, 33, 189, 73, 224, 161, 190, 203, 167, 154, 61, 147, 201, 41, 191, 39, 158, 243, 190, 173, 60, 234, 62, 90, 208, 121, 190, 49, 198, 211, 62, 75, 188, 123, 62, 114, 193, 72, 62, 164, 135, 186, 62, 180, 65, 129, 188, 132, 247, 84, 190, 162, 24, 93, 62, 1, 52, 191, 190, 19, 42, 131, 191, 21, 222, 64, 190, 251, 209, 49, 190, 211, 196, 7, 62, 110, 142, 5, 60, 5, 22, 146, 190, 180, 13, 146, 61, 163, 44, 231, 61, 5, 42, 77, 189, 80, 45, 17, 62, 180, 29, 140, 190, 19, 199, 25, 190, 36, 14, 11, 189, 254, 120, 91, 190, 217, 15, 39, 61, 192, 153, 2, 62, 93, 153, 84, 62, 139, 182, 139, 61, 177, 62, 77, 61, 152, 7, 229, 189, 194, 22, 216, 61, 70, 234, 169, 61, 231, 72, 252, 61, 36, 1, 126, 188, 34, 41, 128, 190, 56, 82, 57, 62, 165, 230, 22, 62, 176, 71, 24, 61, 159, 110, 70, 190, 132, 93, 123, 190, 250, 253, 45, 190, 17, 75, 181, 189, 251, 251, 9, 189};
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
                alignas(float) const unsigned char memory[] = {56, 49, 88, 62, 202, 212, 235, 189};
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
    alignas(float) const unsigned char memory[] = {196, 101, 26, 63, 33, 117, 34, 64, 99, 77, 211, 189};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {67, 200, 230, 191, 53, 4, 27, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0023/steps/000000000006000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
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
                alignas(float) const unsigned char memory[] = {39, 79, 35, 63, 126, 23, 4, 63, 196, 16, 7, 63, 154, 205, 6, 62, 239, 183, 65, 190, 164, 60, 109, 189, 5, 53, 105, 191, 217, 211, 25, 190, 240, 82, 202, 61, 66, 53, 69, 191, 95, 172, 162, 62, 143, 127, 79, 62, 175, 169, 178, 61, 127, 112, 209, 190, 19, 164, 43, 191, 113, 228, 19, 63, 246, 160, 225, 62, 153, 188, 202, 62, 42, 250, 82, 63, 190, 21, 140, 189, 55, 170, 188, 61, 201, 114, 175, 190, 206, 117, 207, 190, 68, 249, 34, 63, 90, 147, 193, 189, 194, 200, 163, 190, 252, 51, 232, 62, 142, 154, 65, 62, 166, 14, 3, 63, 227, 108, 223, 62, 23, 5, 103, 62, 54, 49, 217, 60, 251, 10, 120, 62, 183, 69, 230, 190, 62, 123, 100, 63, 54, 12, 101, 189, 89, 156, 10, 191, 71, 67, 61, 63, 60, 30, 40, 191, 70, 139, 241, 190, 162, 204, 33, 63, 100, 190, 47, 63, 159, 95, 12, 63, 148, 106, 223, 190, 33, 69, 192, 62, 17, 215, 9, 191, 57, 20, 185, 189, 29, 155, 147, 62, 142, 163, 167, 62, 246, 235, 135, 63, 7, 49, 70, 189, 137, 184, 29, 189, 205, 50, 135, 191, 174, 100, 152, 62, 37, 46, 5, 63, 121, 157, 102, 63, 135, 13, 205, 62, 149, 198, 233, 190, 171, 244, 140, 60, 196, 89, 133, 191, 120, 10, 2, 63, 172, 91, 15, 62, 169, 143, 133, 61, 82, 34, 31, 62, 172, 108, 61, 191, 26, 156, 3, 63, 37, 75, 160, 62, 76, 134, 126, 63, 211, 4, 246, 190, 66, 124, 149, 190, 57, 21, 252, 62, 166, 36, 80, 191, 146, 65, 213, 190, 46, 159, 26, 191, 106, 138, 106, 61, 126, 144, 105, 191, 206, 247, 198, 62, 14, 201, 55, 190, 155, 160, 219, 190, 53, 34, 225, 189, 237, 158, 30, 63, 155, 105, 51, 63, 0, 167, 21, 191, 24, 211, 152, 190, 81, 73, 146, 61, 187, 125, 61, 63, 63, 224, 238, 190, 180, 191, 167, 189, 208, 20, 9, 63, 33, 251, 20, 63, 57, 91, 146, 61, 46, 9, 81, 191, 164, 5, 235, 61, 132, 86, 25, 61, 248, 92, 83, 191, 172, 149, 177, 190};
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
                alignas(float) const unsigned char memory[] = {236, 127, 225, 190, 236, 103, 55, 63, 241, 215, 4, 190, 65, 72, 60, 63, 39, 72, 247, 190, 156, 147, 93, 189, 47, 233, 189, 60, 168, 134, 117, 190, 177, 191, 167, 62, 29, 248, 21, 63, 18, 245, 163, 189, 205, 148, 129, 62, 35, 189, 167, 190, 27, 46, 60, 190, 191, 192, 166, 62, 46, 79, 4, 191, 225, 11, 113, 62, 231, 36, 54, 190, 193, 230, 231, 190, 81, 125, 78, 61, 65, 232, 2, 63, 226, 193, 205, 189, 37, 249, 204, 62, 103, 28, 72, 60, 140, 133, 169, 59, 74, 72, 157, 190, 19, 45, 86, 61, 65, 191, 169, 190, 103, 109, 18, 62, 100, 143, 27, 62, 134, 17, 244, 61, 240, 192, 212, 62};
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
                alignas(float) const unsigned char memory[] = {131, 251, 111, 190, 56, 1, 74, 62, 69, 217, 148, 62, 188, 90, 227, 61, 91, 30, 98, 189, 248, 73, 231, 189, 179, 155, 202, 190, 81, 208, 38, 62, 217, 226, 142, 61, 254, 89, 58, 190, 89, 38, 30, 190, 168, 70, 46, 190, 220, 199, 136, 189, 25, 117, 110, 190, 218, 86, 90, 190, 124, 96, 163, 61, 20, 197, 22, 191, 41, 82, 32, 62, 94, 110, 32, 189, 26, 252, 156, 61, 86, 26, 199, 190, 232, 16, 190, 61, 69, 192, 174, 59, 120, 192, 4, 61, 107, 55, 33, 63, 96, 84, 19, 62, 254, 93, 29, 62, 148, 23, 149, 189, 94, 234, 140, 189, 107, 126, 46, 190, 81, 65, 166, 61, 217, 33, 39, 62, 146, 136, 68, 61, 232, 0, 20, 190, 219, 158, 238, 61, 92, 240, 60, 190, 240, 139, 213, 61, 239, 69, 214, 189, 1, 236, 228, 188, 130, 109, 219, 189, 194, 1, 245, 61, 210, 172, 84, 187, 129, 26, 172, 61, 133, 217, 7, 62, 144, 67, 5, 190, 213, 106, 6, 62, 1, 126, 194, 59, 55, 165, 46, 190, 219, 250, 159, 187, 25, 252, 9, 61, 186, 255, 172, 188, 43, 220, 199, 60, 235, 9, 174, 189, 255, 55, 7, 62, 76, 6, 143, 60, 148, 119, 118, 188, 54, 103, 73, 189, 16, 60, 168, 189, 35, 244, 34, 189, 156, 230, 235, 61, 233, 26, 3, 190, 2, 46, 22, 190, 234, 164, 63, 190, 253, 127, 27, 60, 48, 86, 216, 61, 128, 161, 35, 60, 100, 31, 25, 62, 169, 139, 254, 189, 72, 74, 176, 61, 26, 110, 92, 61, 164, 103, 24, 190, 199, 177, 246, 60, 104, 241, 46, 61, 157, 0, 215, 59, 240, 150, 64, 61, 116, 103, 37, 190, 31, 28, 17, 189, 85, 101, 30, 190, 61, 237, 187, 188, 136, 79, 191, 189, 162, 59, 156, 189, 41, 143, 191, 189, 5, 3, 3, 62, 232, 207, 24, 190, 173, 98, 6, 188, 114, 2, 39, 190, 42, 175, 233, 189, 238, 141, 184, 189, 61, 24, 89, 61, 53, 89, 93, 61, 108, 80, 167, 61, 74, 179, 16, 62, 113, 193, 38, 62, 141, 212, 43, 189, 148, 115, 138, 61, 92, 242, 45, 190, 29, 30, 223, 62, 190, 7, 35, 191, 183, 147, 128, 189, 219, 141, 113, 188, 242, 116, 131, 189, 40, 31, 254, 188, 214, 167, 112, 62, 68, 209, 54, 61, 117, 60, 128, 189, 233, 173, 81, 189, 12, 6, 240, 61, 142, 235, 209, 189, 54, 138, 59, 190, 251, 186, 120, 189, 27, 68, 242, 189, 24, 199, 145, 190, 96, 176, 9, 62, 241, 195, 89, 190, 212, 149, 156, 62, 103, 152, 28, 61, 155, 3, 234, 61, 28, 82, 180, 61, 28, 196, 183, 190, 20, 77, 165, 190, 4, 116, 161, 190, 17, 16, 166, 61, 81, 8, 107, 60, 100, 123, 122, 59, 189, 68, 56, 190, 48, 104, 206, 188, 47, 192, 225, 190, 184, 48, 139, 190, 40, 10, 83, 62, 126, 239, 226, 61, 135, 183, 21, 190, 243, 31, 6, 62, 57, 65, 65, 61, 227, 220, 183, 61, 168, 142, 1, 190, 132, 252, 81, 188, 161, 17, 173, 61, 179, 58, 238, 61, 229, 124, 136, 61, 39, 151, 194, 61, 125, 60, 230, 190, 189, 7, 22, 62, 147, 8, 205, 61, 5, 127, 72, 190, 56, 222, 85, 62, 124, 94, 38, 59, 131, 106, 2, 62, 185, 38, 227, 188, 254, 57, 70, 62, 205, 191, 39, 62, 166, 48, 6, 189, 246, 110, 173, 190, 212, 37, 44, 190, 28, 43, 75, 191, 204, 115, 54, 62, 146, 45, 116, 188, 60, 211, 27, 190, 66, 10, 56, 62, 131, 124, 146, 188, 209, 31, 165, 189, 110, 153, 140, 190, 140, 156, 15, 187, 75, 152, 119, 190, 198, 131, 89, 190, 128, 96, 137, 62, 189, 181, 247, 189, 3, 182, 155, 62, 75, 51, 160, 61, 249, 68, 145, 190, 90, 108, 21, 190, 204, 44, 137, 61, 62, 112, 221, 61, 27, 187, 16, 62, 51, 72, 164, 61, 2, 198, 183, 62, 119, 141, 142, 190, 127, 233, 42, 62, 50, 230, 169, 62, 122, 102, 56, 190, 22, 248, 49, 62, 227, 75, 210, 62, 80, 252, 78, 189, 63, 167, 50, 60, 108, 87, 81, 62, 34, 86, 152, 61, 154, 135, 78, 62, 187, 225, 20, 190, 204, 34, 49, 62, 24, 227, 2, 188, 164, 89, 93, 189, 178, 140, 217, 56, 166, 76, 139, 62, 251, 227, 87, 62, 182, 53, 54, 62, 30, 94, 217, 62, 208, 142, 27, 62, 121, 228, 91, 190, 46, 161, 225, 62, 50, 63, 171, 61, 12, 184, 27, 191, 84, 164, 82, 61, 249, 169, 243, 189, 59, 27, 76, 62, 79, 194, 94, 189, 30, 5, 27, 62, 30, 201, 215, 190, 47, 160, 149, 61, 41, 251, 62, 191, 249, 247, 82, 62, 4, 209, 33, 191, 131, 157, 47, 62, 7, 170, 75, 62, 244, 135, 236, 189, 117, 250, 128, 62, 110, 162, 101, 62, 66, 84, 219, 61, 188, 85, 149, 62, 216, 255, 163, 189, 111, 248, 155, 190, 6, 215, 252, 60, 88, 160, 210, 61, 18, 26, 173, 190, 7, 150, 158, 189, 132, 28, 202, 60, 188, 67, 166, 61, 239, 119, 63, 189, 237, 49, 210, 189, 180, 134, 252, 189, 249, 122, 141, 189, 230, 65, 146, 188, 209, 69, 33, 62, 13, 25, 67, 190, 123, 85, 147, 189, 120, 99, 247, 189, 164, 202, 152, 61, 87, 43, 55, 61, 70, 234, 119, 188, 186, 90, 140, 60, 148, 208, 72, 61, 50, 14, 225, 189, 244, 198, 21, 190, 90, 189, 42, 190, 251, 235, 66, 189, 217, 212, 165, 188, 13, 222, 44, 60, 41, 28, 204, 61, 8, 212, 145, 189, 238, 7, 134, 184, 220, 17, 243, 189, 107, 89, 12, 190, 49, 74, 156, 61, 170, 42, 53, 189, 31, 105, 197, 61, 88, 55, 66, 190, 102, 234, 157, 188, 212, 113, 100, 189, 238, 46, 32, 190, 177, 151, 109, 188, 227, 176, 70, 187, 129, 124, 67, 190, 46, 215, 129, 189, 245, 225, 101, 61, 244, 46, 249, 188, 51, 104, 27, 60, 151, 216, 193, 61, 142, 188, 166, 61, 161, 123, 212, 189, 92, 182, 23, 190, 86, 183, 11, 189, 93, 102, 220, 188, 156, 121, 8, 190, 222, 104, 79, 60, 63, 188, 165, 189, 248, 254, 178, 189, 108, 1, 27, 190, 122, 134, 58, 61, 153, 194, 185, 189, 112, 1, 222, 60, 187, 42, 18, 61, 17, 228, 14, 190, 67, 91, 213, 61, 193, 227, 153, 61, 40, 63, 7, 62, 170, 111, 209, 59, 196, 52, 112, 189, 89, 56, 123, 61, 73, 254, 185, 60, 132, 56, 145, 189, 135, 143, 169, 61, 188, 35, 212, 188, 210, 252, 149, 61, 57, 246, 168, 190, 20, 249, 46, 61, 117, 125, 57, 62, 154, 254, 149, 62, 166, 242, 215, 187, 63, 88, 128, 189, 85, 44, 231, 189, 93, 167, 182, 61, 247, 214, 240, 189, 108, 10, 92, 189, 157, 229, 145, 188, 241, 149, 72, 62, 202, 190, 166, 190, 219, 127, 106, 190, 152, 255, 95, 190, 131, 157, 92, 190, 140, 219, 4, 62, 128, 203, 148, 61, 113, 79, 221, 61, 47, 249, 149, 60, 52, 105, 50, 186, 21, 124, 155, 60, 192, 187, 108, 62, 28, 201, 56, 188, 84, 128, 100, 61, 139, 109, 169, 61, 171, 153, 226, 189, 117, 228, 88, 188, 85, 24, 117, 62, 129, 170, 141, 190, 114, 150, 170, 61, 247, 63, 177, 189, 224, 31, 161, 190, 149, 218, 143, 62, 238, 44, 217, 189, 182, 169, 235, 62, 90, 159, 171, 61, 170, 14, 93, 61, 213, 129, 19, 190, 147, 138, 204, 190, 167, 228, 200, 190, 218, 99, 40, 190, 92, 235, 28, 190, 97, 162, 140, 190, 191, 193, 195, 61, 52, 62, 191, 189, 3, 253, 69, 61, 20, 218, 71, 189, 16, 0, 64, 188, 67, 131, 193, 61, 77, 28, 185, 190, 39, 163, 229, 189, 66, 186, 176, 61, 103, 7, 105, 61, 198, 115, 232, 61, 240, 175, 77, 190, 177, 62, 192, 188, 90, 202, 131, 186, 232, 96, 115, 61, 223, 16, 184, 189, 197, 127, 161, 62, 222, 163, 177, 189, 190, 101, 62, 188, 55, 173, 209, 189, 85, 50, 81, 190, 187, 208, 123, 62, 21, 98, 46, 61, 6, 9, 47, 62, 156, 65, 156, 61, 119, 81, 140, 60, 194, 231, 12, 190, 129, 20, 232, 61, 58, 59, 227, 190, 91, 141, 109, 189, 234, 168, 82, 62, 156, 18, 182, 188, 202, 170, 96, 62, 248, 25, 24, 190, 150, 79, 39, 62, 139, 107, 211, 61, 130, 155, 9, 59, 215, 148, 153, 60, 28, 216, 232, 61, 56, 232, 195, 187, 176, 203, 164, 188, 55, 137, 1, 62, 77, 112, 5, 190, 198, 109, 49, 62, 199, 182, 41, 63, 130, 40, 161, 189, 160, 155, 56, 61, 242, 147, 116, 189, 188, 106, 122, 62, 235, 21, 138, 189, 65, 187, 42, 190, 71, 123, 1, 62, 3, 69, 133, 189, 247, 26, 146, 189, 44, 9, 6, 190, 146, 213, 1, 190, 35, 212, 8, 190, 145, 236, 4, 190, 236, 130, 13, 62, 174, 129, 80, 61, 181, 221, 13, 190, 21, 3, 156, 61, 54, 95, 180, 61, 247, 34, 194, 61, 229, 82, 32, 60, 118, 105, 249, 189, 140, 178, 196, 189, 62, 101, 42, 190, 251, 234, 156, 61, 70, 115, 217, 61, 135, 134, 33, 189, 138, 113, 142, 189, 123, 179, 248, 189, 37, 214, 174, 61, 37, 144, 17, 190, 172, 107, 27, 62, 135, 205, 120, 61, 23, 75, 32, 190, 7, 111, 12, 190, 20, 212, 248, 61, 134, 33, 228, 189, 99, 34, 143, 189, 226, 159, 51, 61, 168, 23, 129, 62, 6, 255, 200, 61, 90, 234, 145, 190, 230, 27, 94, 62, 240, 177, 135, 190, 102, 46, 220, 190, 175, 78, 119, 190, 187, 38, 4, 190, 229, 194, 12, 60, 222, 240, 153, 62, 104, 45, 190, 61, 73, 108, 15, 191, 120, 221, 38, 61, 9, 193, 51, 191, 46, 64, 221, 61, 48, 63, 36, 191, 201, 181, 113, 62, 60, 246, 22, 62, 10, 37, 230, 189, 144, 102, 210, 189, 114, 25, 158, 62, 170, 185, 147, 62, 84, 201, 111, 62, 99, 106, 0, 62, 193, 91, 221, 189, 164, 45, 126, 190, 33, 128, 99, 62, 131, 197, 199, 190, 50, 128, 106, 190, 107, 148, 185, 188, 53, 218, 182, 189, 171, 205, 253, 188, 18, 79, 50, 61, 129, 151, 249, 61, 125, 251, 85, 190, 192, 202, 52, 188, 207, 112, 191, 62, 42, 208, 16, 190, 198, 218, 16, 62, 26, 234, 215, 189, 124, 240, 58, 190, 5, 212, 14, 61, 157, 35, 221, 190, 74, 154, 210, 61, 169, 247, 219, 189, 152, 39, 139, 62, 165, 43, 194, 189, 147, 238, 244, 189, 46, 245, 149, 189, 164, 96, 0, 191, 12, 49, 163, 190, 57, 4, 189, 188, 16, 64, 13, 189, 133, 172, 15, 191, 149, 220, 92, 61, 93, 93, 192, 62, 44, 234, 45, 62, 67, 6, 15, 190, 213, 93, 234, 190, 128, 97, 192, 61, 220, 117, 162, 189, 213, 105, 176, 190, 113, 145, 122, 190, 45, 52, 44, 62, 193, 204, 77, 60, 29, 126, 23, 61, 210, 158, 180, 62, 215, 94, 106, 61, 105, 162, 78, 62, 250, 174, 89, 61, 154, 77, 99, 62, 2, 171, 74, 189, 202, 214, 0, 190, 59, 183, 167, 190, 222, 173, 12, 190, 174, 75, 46, 188, 193, 27, 46, 190, 247, 177, 165, 62, 212, 163, 79, 189, 92, 118, 21, 62, 145, 148, 132, 190, 53, 209, 62, 62, 181, 68, 66, 62, 4, 145, 82, 190, 56, 123, 200, 189, 240, 31, 46, 190, 11, 181, 187, 61, 12, 88, 40, 190, 207, 21, 42, 62, 20, 102, 250, 62, 58, 247, 242, 189, 47, 181, 117, 61, 84, 58, 200, 60, 136, 6, 66, 62, 3, 207, 193, 62, 179, 1, 186, 61, 187, 33, 249, 61, 220, 128, 178, 59, 221, 168, 201, 190, 167, 110, 131, 60, 68, 195, 63, 62, 209, 142, 173, 189, 50, 81, 176, 187, 175, 93, 35, 190, 47, 220, 51, 62, 83, 204, 181, 62, 4, 214, 75, 61, 20, 96, 228, 188, 5, 235, 8, 62, 47, 112, 152, 190, 245, 150, 139, 62, 74, 22, 253, 190, 182, 224, 135, 62, 40, 27, 137, 188, 164, 118, 79, 62, 152, 165, 184, 61, 241, 65, 141, 60, 250, 111, 39, 62, 49, 170, 84, 190, 72, 147, 194, 61, 104, 124, 124, 60, 235, 136, 194, 190, 89, 185, 37, 62, 255, 70, 61, 189, 114, 41, 163, 190, 231, 198, 135, 60, 24, 22, 113, 62, 5, 101, 140, 62, 1, 44, 112, 62, 71, 168, 21, 61, 12, 42, 118, 190, 5, 178, 226, 62, 95, 90, 21, 62, 165, 53, 2, 191, 102, 82, 251, 61, 177, 159, 111, 189, 148, 147, 97, 62, 72, 119, 189, 60, 134, 17, 145, 62, 205, 145, 214, 190, 197, 1, 184, 61, 63, 103, 54, 191, 58, 156, 76, 62, 178, 72, 86, 191, 175, 100, 202, 62, 22, 70, 63, 62, 123, 26, 252, 187, 78, 236, 247, 61, 95, 111, 44, 62, 30, 47, 139, 188, 160, 81, 200, 61, 252, 1, 111, 60, 255, 187, 67, 190, 94, 58, 159, 189, 206, 137, 101, 62, 144, 163, 87, 190, 77, 9, 121, 190, 25, 122, 96, 187, 167, 191, 137, 190, 161, 212, 175, 61, 34, 84, 2, 62, 233, 237, 170, 189, 254, 230, 122, 62, 243, 94, 125, 190, 92, 60, 56, 188, 111, 246, 20, 62, 74, 144, 133, 61, 3, 231, 139, 60, 253, 5, 59, 190, 109, 170, 128, 190, 199, 134, 82, 189, 161, 2, 108, 60, 140, 116, 107, 190, 31, 12, 124, 62, 247, 160, 178, 61, 174, 204, 149, 62, 1, 235, 59, 190, 50, 215, 114, 189, 128, 251, 143, 62, 37, 168, 8, 190, 51, 202, 15, 62, 192, 46, 53, 190, 45, 12, 118, 62, 241, 90, 169, 189, 77, 214, 61, 62, 178, 144, 100, 62, 54, 239, 61, 190, 52, 98, 135, 61, 167, 111, 98, 62, 126, 13, 71, 188, 233, 168, 235, 190, 244, 248, 73, 62, 88, 12, 143, 62, 213, 37, 191, 59, 200, 65, 128, 190, 159, 214, 135, 190, 46, 205, 107, 62, 97, 114, 139, 62, 165, 63, 223, 59, 90, 147, 153, 188, 37, 228, 213, 188, 2, 22, 133, 62, 141, 237, 51, 191, 67, 28, 38, 62, 222, 163, 27, 190, 111, 237, 100, 62, 48, 49, 84, 190, 230, 221, 133, 60, 8, 181, 137, 190, 224, 4, 157, 191, 237, 158, 146, 61, 83, 0, 62, 190, 49, 198, 235, 190, 33, 180, 136, 191, 150, 36, 150, 62, 126, 246, 214, 62, 149, 232, 40, 62, 38, 64, 132, 62, 81, 6, 96, 191, 2, 18, 26, 61, 16, 171, 4, 62, 17, 149, 74, 190, 253, 37, 84, 62, 230, 226, 200, 189, 115, 117, 184, 189, 39, 163, 180, 61, 202, 244, 57, 62, 45, 191, 189, 61, 214, 139, 143, 189, 131, 28, 134, 190, 247, 79, 128, 190, 126, 212, 130, 188, 23, 221, 145, 62, 107, 185, 158, 60, 56, 124, 87, 62, 105, 205, 18, 62, 39, 224, 243, 187, 47, 80, 156, 190, 106, 186, 114, 62, 241, 41, 107, 188, 158, 13, 175, 61, 119, 203, 65, 62, 109, 222, 7, 61, 81, 55, 2, 62, 58, 72, 85, 61, 182, 228, 6, 62, 147, 128, 65, 190, 142, 90, 72, 61, 84, 107, 39, 188, 201, 117, 243, 189, 115, 42, 18, 62, 203, 70, 46, 189, 115, 62, 188, 190, 199, 213, 78, 189, 248, 114, 90, 190, 228, 253, 35, 62, 141, 63, 129, 62, 46, 205, 216, 61, 173, 67, 56, 62, 153, 56, 82, 190, 222, 86, 246, 62, 126, 71, 215, 60, 85, 2, 122, 61, 159, 89, 2, 190, 93, 178, 182, 190, 102, 93, 53, 62, 33, 128, 81, 191, 240, 208, 61, 61, 170, 51, 28, 190, 43, 236, 151, 61, 101, 40, 133, 190, 179, 211, 136, 62, 72, 111, 186, 189, 220, 12, 54, 191, 154, 107, 152, 187, 191, 236, 151, 190, 204, 114, 208, 190, 150, 193, 125, 191, 185, 125, 121, 62, 198, 65, 87, 189, 29, 56, 79, 62, 242, 166, 234, 62, 245, 89, 34, 191, 229, 212, 58, 62, 76, 12, 106, 62, 165, 113, 173, 60, 164, 144, 244, 189, 148, 161, 171, 62, 125, 98, 213, 190, 137, 116, 203, 190, 150, 209, 147, 62, 198, 40, 165, 189, 145, 153, 10, 63, 208, 170, 35, 190, 57, 187, 62, 61, 187, 131, 236, 189, 119, 34, 50, 61, 168, 208, 50, 191, 71, 193, 92, 190, 153, 204, 151, 190, 29, 17, 214, 62, 147, 219, 12, 191, 185, 128, 45, 190, 215, 237, 193, 62, 150, 42, 46, 190, 241, 4, 73, 189, 119, 112, 147, 62, 61, 186, 160, 188, 135, 55, 22, 188, 211, 109, 233, 61, 203, 180, 63, 60, 79, 255, 204, 60, 79, 154, 23, 190, 47, 148, 138, 62, 128, 4, 171, 188, 51, 101, 34, 190, 93, 199, 167, 62, 66, 166, 167, 62, 167, 234, 5, 190, 66, 105, 122, 61, 53, 212, 173, 60, 76, 64, 212, 61, 109, 162, 248, 187, 152, 190, 48, 190, 96, 61, 99, 190, 51, 69, 78, 190, 52, 192, 88, 190, 128, 43, 155, 62, 121, 9, 59, 190, 220, 110, 178, 62, 35, 135, 124, 62, 217, 253, 83, 187, 49, 246, 56, 61, 172, 210, 21, 62, 118, 233, 133, 62, 94, 167, 88, 190, 180, 242, 194, 188, 231, 247, 166, 61, 59, 190, 125, 185, 38, 98, 121, 190, 195, 158, 23, 61, 172, 158, 72, 62, 140, 171, 232, 190, 242, 22, 250, 61, 111, 244, 0, 190, 138, 82, 83, 61, 105, 250, 112, 62, 248, 63, 220, 189, 41, 32, 161, 190, 230, 39, 72, 190, 127, 0, 63, 190, 63, 135, 174, 188, 171, 177, 35, 62, 159, 112, 49, 62, 57, 209, 33, 62, 116, 163, 237, 189, 180, 195, 175, 62, 94, 196, 51, 62, 218, 18, 66, 62, 125, 159, 55, 61, 61, 69, 210, 189, 48, 168, 4, 61, 46, 142, 82, 191, 218, 89, 40, 189, 26, 10, 212, 61, 89, 71, 92, 62, 227, 46, 132, 190, 63, 113, 12, 62, 204, 164, 54, 190, 143, 186, 65, 191, 221, 190, 158, 62, 131, 206, 187, 189, 124, 103, 175, 190, 105, 56, 131, 191, 62, 80, 68, 62, 157, 200, 136, 186, 225, 165, 42, 62, 178, 146, 108, 62, 28, 1, 248, 190, 26, 76, 169, 189, 49, 192, 53, 62, 28, 160, 242, 56, 88, 192, 10, 190, 218, 23, 98, 188, 253, 10, 164, 189, 43, 107, 189, 61, 210, 76, 202, 188, 207, 14, 7, 62, 41, 134, 17, 62, 182, 139, 22, 190, 99, 47, 8, 62, 54, 2, 75, 190, 145, 214, 24, 189, 32, 240, 146, 61, 30, 93, 232, 188, 50, 106, 236, 59, 77, 142, 202, 60, 251, 42, 221, 61, 59, 51, 59, 190, 194, 36, 50, 61, 225, 72, 132, 189, 207, 90, 215, 59, 149, 158, 84, 61, 61, 120, 41, 190, 8, 3, 43, 190, 181, 237, 182, 61, 165, 107, 250, 61, 92, 47, 184, 189, 17, 220, 246, 188, 205, 193, 36, 190, 164, 116, 15, 62, 34, 233, 83, 61, 13, 130, 53, 190, 145, 172, 225, 189, 140, 149, 58, 190, 223, 76, 9, 62, 211, 38, 129, 190, 125, 90, 135, 190, 8, 129, 26, 188, 228, 143, 58, 190, 46, 150, 182, 62, 65, 80, 31, 61, 76, 224, 166, 190, 14, 65, 78, 190, 50, 58, 192, 188, 154, 127, 28, 190, 202, 208, 238, 189, 199, 124, 63, 190, 16, 44, 99, 62, 227, 98, 166, 189, 103, 14, 50, 190, 241, 6, 50, 62, 142, 142, 52, 189, 216, 230, 111, 62, 87, 173, 29, 61, 90, 82, 175, 190, 192, 126, 167, 61, 143, 167, 218, 189, 18, 56, 124, 187, 120, 117, 40, 62, 3, 104, 137, 190, 166, 174, 142, 189, 213, 253, 177, 60, 255, 96, 186, 190, 192, 29, 94, 61, 7, 92, 147, 62, 251, 119, 45, 189, 81, 75, 104, 62, 131, 210, 76, 61, 7, 9, 136, 61, 21, 101, 133, 190, 23, 29, 131, 62, 143, 56, 141, 189, 201, 99, 244, 60, 95, 50, 221, 188, 156, 212, 13, 60, 80, 48, 113, 60, 170, 24, 183, 188, 209, 25, 32, 62, 119, 142, 10, 62, 90, 5, 85, 62, 107, 61, 41, 190, 185, 69, 145, 62, 74, 38, 20, 190, 104, 133, 33, 62, 117, 156, 218, 189, 117, 218, 146, 62, 173, 16, 135, 189, 130, 60, 240, 61, 179, 253, 227, 189, 122, 106, 131, 189, 68, 233, 52, 190, 17, 57, 26, 189, 247, 64, 95, 189, 197, 4, 213, 61, 59, 201, 114, 189, 31, 130, 211, 188, 103, 162, 233, 61, 228, 135, 101, 188, 211, 202, 77, 190, 197, 186, 209, 190, 15, 112, 134, 190, 232, 89, 86, 62, 237, 91, 243, 189, 5, 13, 19, 191, 17, 170, 40, 190, 5, 37, 138, 61, 204, 1, 244, 60, 68, 162, 51, 190, 85, 249, 102, 190, 92, 88, 78, 190, 68, 107, 164, 61, 43, 62, 38, 190, 36, 239, 33, 190, 98, 163, 247, 190, 203, 159, 119, 190, 126, 187, 253, 59, 127, 239, 214, 61, 12, 127, 251, 189, 194, 68, 198, 189, 219, 186, 18, 60, 155, 136, 219, 61, 244, 177, 4, 190, 8, 1, 209, 190, 30, 218, 45, 189, 55, 204, 180, 62, 224, 102, 35, 190, 67, 65, 135, 60, 225, 73, 186, 61, 76, 212, 162, 188, 56, 4, 21, 62, 250, 25, 164, 189, 160, 255, 68, 189, 66, 153, 134, 61, 179, 116, 42, 61, 198, 176, 39, 190, 212, 200, 138, 61, 182, 45, 24, 190, 118, 243, 15, 190, 70, 158, 57, 61, 54, 7, 93, 189, 67, 180, 180, 189, 124, 69, 31, 190, 63, 84, 28, 62, 3, 81, 72, 190, 95, 86, 139, 61, 196, 182, 110, 53, 89, 54, 233, 189, 28, 13, 18, 62, 4, 218, 53, 190, 227, 231, 27, 190, 69, 71, 7, 190, 134, 4, 8, 62, 134, 136, 25, 189, 212, 65, 25, 189, 77, 211, 191, 61, 186, 18, 165, 61, 249, 16, 220, 189, 43, 70, 113, 189, 230, 4, 52, 190, 228, 201, 182, 61, 245, 17, 129, 61, 222, 11, 197, 62, 177, 120, 125, 61, 214, 229, 137, 62, 178, 123, 71, 62, 226, 212, 170, 190, 3, 109, 221, 61, 188, 58, 201, 189, 12, 235, 3, 190, 48, 243, 16, 62, 179, 95, 43, 62, 235, 208, 47, 62, 47, 5, 5, 62, 249, 10, 119, 62, 205, 230, 218, 189, 151, 179, 131, 62, 126, 254, 42, 190, 197, 230, 165, 62, 140, 116, 171, 188, 127, 228, 30, 62, 107, 148, 192, 189, 108, 143, 60, 187, 49, 183, 154, 62, 237, 246, 36, 62, 97, 172, 122, 61, 110, 170, 5, 189, 185, 35, 55, 189, 159, 20, 13, 62, 154, 113, 107, 190, 66, 229, 247, 60, 29, 111, 176, 60, 47, 158, 182, 61, 175, 65, 235, 61, 76, 209, 170, 189, 20, 238, 66, 188, 119, 165, 7, 191, 33, 137, 179, 190, 211, 79, 105, 62, 106, 179, 153, 186, 19, 211, 25, 191, 149, 79, 39, 190, 82, 82, 9, 190, 204, 177, 203, 189, 183, 162, 190, 61, 230, 185, 134, 190, 70, 217, 188, 189, 247, 93, 64, 190, 116, 148, 102, 190, 99, 13, 23, 188, 39, 138, 219, 190, 97, 213, 49, 190, 195, 15, 166, 61, 228, 46, 22, 188, 39, 162, 119, 190, 109, 255, 184, 189, 230, 181, 16, 189, 153, 175, 35, 188, 227, 118, 39, 190, 76, 133, 119, 190, 46, 197, 251, 189, 199, 1, 202, 62, 50, 74, 234, 189, 199, 242, 22, 62, 242, 23, 207, 188, 229, 183, 116, 61};
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
                alignas(float) const unsigned char memory[] = {228, 173, 194, 61, 192, 128, 168, 189, 114, 121, 103, 61, 42, 186, 147, 190, 141, 83, 184, 189, 240, 125, 50, 62, 197, 238, 7, 62, 74, 215, 237, 60, 15, 184, 37, 190, 93, 41, 232, 61, 244, 166, 88, 61, 180, 39, 166, 189, 141, 108, 176, 189, 99, 190, 92, 62, 107, 116, 161, 61, 255, 84, 65, 190, 161, 209, 63, 61, 56, 109, 112, 62, 107, 142, 15, 60, 76, 3, 66, 62, 45, 109, 122, 189, 46, 133, 204, 61, 170, 93, 90, 62, 154, 228, 203, 189, 73, 65, 224, 61, 169, 113, 207, 189, 6, 179, 46, 61, 86, 212, 9, 62, 53, 213, 231, 189, 245, 60, 201, 188, 57, 170, 158, 60, 49, 243, 149, 189};
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
                alignas(float) const unsigned char memory[] = {10, 138, 109, 190, 246, 132, 4, 190, 233, 95, 188, 61, 135, 65, 234, 62, 40, 16, 108, 190, 96, 237, 148, 62, 248, 50, 172, 190, 121, 222, 201, 189, 186, 141, 146, 61, 113, 133, 199, 61, 77, 85, 121, 62, 33, 65, 174, 61, 71, 16, 128, 189, 228, 152, 192, 190, 46, 210, 151, 62, 93, 48, 156, 62, 142, 249, 152, 190, 34, 78, 4, 191, 51, 203, 111, 62, 164, 153, 120, 63, 50, 122, 136, 62, 241, 164, 1, 63, 193, 102, 162, 62, 63, 141, 129, 62, 136, 134, 147, 62, 109, 106, 84, 188, 170, 209, 146, 62, 130, 107, 210, 189, 55, 91, 150, 190, 253, 56, 196, 189, 76, 65, 135, 190, 97, 37, 188, 190, 150, 147, 131, 189, 97, 65, 140, 61, 165, 201, 103, 61, 239, 149, 191, 62, 144, 235, 101, 190, 160, 6, 165, 189, 184, 253, 93, 190, 47, 57, 239, 61, 24, 213, 203, 60, 34, 173, 238, 189, 119, 23, 5, 190, 128, 191, 130, 62, 118, 133, 226, 61, 228, 3, 0, 189, 242, 96, 133, 61, 142, 242, 93, 62, 31, 33, 233, 61, 100, 198, 43, 190, 110, 104, 116, 62, 24, 156, 129, 61, 190, 101, 32, 62, 109, 229, 21, 190, 214, 208, 118, 190, 202, 77, 94, 62, 149, 62, 81, 190, 57, 52, 14, 61, 37, 135, 50, 190, 31, 17, 81, 190, 178, 207, 244, 62, 190, 244, 70, 189, 224, 98, 2, 61, 101, 44, 179, 62};
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
                alignas(float) const unsigned char memory[] = {211, 191, 76, 190, 97, 21, 135, 190};
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
    alignas(float) const unsigned char memory[] = {191, 189, 137, 191, 233, 225, 227, 189, 165, 48, 209, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {80, 229, 3, 192, 166, 85, 48, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0029/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
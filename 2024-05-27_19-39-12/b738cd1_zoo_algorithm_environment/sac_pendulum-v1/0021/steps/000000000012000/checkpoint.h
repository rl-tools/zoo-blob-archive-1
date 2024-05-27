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
                alignas(float) const unsigned char memory[] = {231, 58, 233, 62, 138, 28, 16, 62, 230, 199, 39, 191, 31, 148, 233, 61, 23, 192, 54, 63, 81, 150, 45, 63, 64, 49, 117, 62, 143, 119, 252, 187, 39, 216, 195, 61, 123, 48, 30, 190, 207, 150, 29, 191, 88, 53, 168, 62, 40, 108, 54, 191, 159, 29, 35, 191, 166, 180, 144, 60, 185, 16, 227, 189, 197, 30, 38, 63, 14, 216, 254, 190, 35, 215, 45, 62, 126, 151, 79, 191, 189, 22, 11, 62, 94, 68, 159, 190, 31, 77, 67, 191, 177, 51, 202, 62, 255, 133, 101, 191, 9, 251, 74, 191, 1, 89, 237, 59, 31, 157, 209, 60, 168, 164, 23, 62, 39, 28, 48, 191, 19, 125, 74, 62, 179, 239, 74, 63, 142, 215, 8, 190, 154, 65, 228, 60, 14, 105, 70, 63, 209, 71, 142, 190, 125, 7, 22, 62, 72, 126, 39, 63, 106, 6, 186, 189, 52, 52, 107, 191, 251, 14, 31, 63, 217, 27, 97, 189, 245, 7, 69, 63, 102, 114, 128, 191, 77, 182, 68, 190, 177, 135, 164, 190, 41, 75, 159, 191, 103, 197, 160, 190, 236, 211, 236, 62, 192, 207, 178, 63, 114, 110, 175, 62, 43, 59, 162, 62, 48, 211, 122, 191, 200, 44, 72, 62, 200, 97, 6, 191, 79, 82, 121, 62, 136, 66, 28, 191, 95, 45, 223, 190, 65, 147, 233, 63, 44, 98, 193, 62, 32, 235, 16, 63, 147, 177, 138, 191, 157, 21, 222, 190, 132, 23, 27, 63, 13, 234, 174, 61, 232, 59, 15, 63, 179, 191, 37, 62, 225, 76, 52, 63, 127, 180, 236, 62, 72, 202, 123, 190, 40, 106, 249, 190, 123, 188, 34, 63, 100, 207, 96, 190, 93, 61, 252, 62, 170, 250, 251, 190, 226, 136, 150, 190, 168, 228, 188, 62, 1, 128, 62, 63, 132, 9, 27, 62, 17, 180, 145, 63, 73, 143, 152, 62, 210, 39, 114, 63, 220, 101, 49, 191, 170, 17, 56, 62, 17, 198, 7, 63, 151, 83, 13, 63, 225, 134, 120, 62, 108, 62, 60, 62, 152, 73, 151, 63, 59, 236, 177, 62, 194, 148, 124, 61, 233, 215, 149, 191, 122, 64, 209, 190, 157, 206, 19, 61, 204, 227, 11, 191, 44, 72, 164, 190};
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
                alignas(float) const unsigned char memory[] = {108, 175, 137, 190, 113, 17, 234, 62, 47, 62, 197, 62, 182, 58, 59, 62, 0, 57, 189, 62, 235, 246, 14, 191, 114, 186, 70, 190, 139, 63, 29, 190, 156, 186, 15, 63, 13, 162, 251, 62, 136, 147, 215, 189, 94, 196, 118, 189, 60, 60, 11, 63, 66, 60, 231, 189, 188, 247, 95, 61, 164, 55, 210, 62, 150, 55, 215, 62, 43, 123, 36, 62, 245, 87, 5, 191, 133, 242, 216, 189, 100, 80, 232, 190, 77, 82, 12, 191, 222, 159, 253, 62, 173, 130, 10, 190, 30, 176, 207, 190, 231, 96, 28, 62, 134, 59, 181, 61, 35, 124, 136, 62, 122, 114, 213, 190, 234, 71, 59, 62, 129, 140, 238, 190, 176, 76, 225, 187};
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
                alignas(float) const unsigned char memory[] = {38, 220, 72, 62, 23, 232, 87, 61, 134, 175, 180, 187, 72, 220, 245, 62, 138, 229, 44, 60, 7, 137, 18, 62, 98, 233, 75, 188, 65, 93, 99, 63, 243, 199, 141, 190, 0, 143, 251, 61, 235, 170, 124, 62, 230, 75, 184, 62, 153, 251, 37, 190, 143, 116, 251, 188, 77, 252, 164, 189, 22, 48, 194, 189, 46, 52, 149, 190, 109, 45, 27, 190, 184, 92, 120, 58, 108, 36, 186, 61, 139, 127, 11, 61, 64, 29, 47, 60, 39, 78, 186, 190, 117, 90, 141, 62, 249, 28, 232, 188, 72, 136, 236, 190, 74, 131, 167, 190, 3, 209, 171, 190, 69, 127, 169, 190, 243, 230, 185, 190, 151, 132, 198, 189, 187, 23, 152, 188, 94, 13, 78, 62, 188, 5, 174, 61, 172, 181, 193, 61, 0, 56, 82, 190, 88, 22, 155, 188, 224, 230, 227, 190, 88, 196, 107, 189, 75, 110, 171, 190, 243, 65, 89, 61, 121, 251, 7, 190, 208, 205, 10, 191, 104, 80, 142, 62, 120, 72, 82, 62, 116, 172, 40, 62, 12, 15, 93, 62, 65, 147, 200, 186, 144, 66, 185, 190, 118, 184, 21, 190, 191, 134, 134, 190, 94, 157, 16, 63, 34, 69, 17, 63, 23, 210, 148, 190, 70, 139, 251, 61, 206, 43, 119, 62, 221, 101, 115, 62, 77, 141, 200, 62, 60, 107, 0, 191, 121, 80, 172, 62, 131, 170, 113, 191, 64, 2, 217, 190, 241, 164, 78, 191, 244, 249, 255, 189, 205, 175, 145, 190, 147, 53, 222, 190, 160, 141, 61, 60, 255, 173, 112, 189, 132, 95, 98, 60, 43, 27, 22, 190, 143, 176, 74, 61, 2, 78, 32, 188, 83, 86, 173, 62, 184, 232, 13, 62, 113, 233, 157, 190, 55, 39, 56, 190, 37, 223, 119, 190, 245, 45, 193, 190, 52, 28, 141, 190, 122, 191, 73, 62, 221, 202, 109, 190, 68, 107, 219, 61, 20, 25, 194, 189, 184, 151, 61, 191, 38, 113, 131, 189, 144, 17, 33, 190, 252, 183, 170, 190, 165, 178, 162, 190, 200, 49, 143, 190, 82, 4, 103, 190, 186, 212, 21, 190, 28, 173, 31, 191, 240, 13, 227, 188, 66, 104, 180, 189, 175, 175, 83, 190, 22, 191, 220, 61, 47, 82, 92, 190, 58, 43, 230, 191, 64, 158, 155, 190, 152, 231, 101, 62, 65, 73, 198, 62, 185, 214, 65, 61, 120, 50, 134, 61, 137, 193, 21, 63, 3, 120, 174, 62, 230, 110, 113, 62, 185, 56, 162, 62, 196, 114, 189, 190, 71, 141, 29, 61, 223, 0, 83, 62, 33, 195, 199, 190, 45, 251, 158, 62, 242, 151, 0, 62, 68, 96, 50, 190, 206, 90, 174, 62, 55, 176, 119, 191, 209, 24, 236, 188, 132, 80, 207, 60, 54, 220, 156, 191, 243, 203, 75, 191, 109, 240, 137, 190, 199, 116, 66, 191, 62, 98, 175, 189, 217, 211, 9, 62, 124, 219, 1, 190, 178, 198, 166, 62, 105, 207, 236, 187, 26, 170, 164, 61, 45, 20, 179, 190, 64, 95, 209, 190, 224, 173, 54, 62, 102, 174, 211, 61, 79, 248, 192, 62, 52, 111, 143, 62, 47, 245, 195, 61, 125, 175, 28, 62, 199, 93, 137, 62, 57, 72, 144, 62, 176, 190, 113, 62, 138, 26, 56, 190, 205, 54, 119, 62, 180, 56, 150, 187, 233, 39, 37, 191, 61, 194, 218, 187, 150, 11, 147, 62, 139, 250, 17, 190, 242, 225, 61, 61, 173, 2, 87, 191, 181, 101, 13, 191, 1, 246, 137, 62, 156, 229, 183, 189, 12, 210, 218, 190, 204, 134, 135, 190, 36, 152, 243, 190, 226, 52, 230, 62, 57, 7, 183, 189, 5, 231, 129, 189, 98, 211, 109, 62, 42, 66, 170, 189, 238, 252, 57, 62, 227, 233, 123, 190, 186, 106, 127, 190, 80, 176, 216, 60, 219, 63, 12, 62, 176, 139, 211, 189, 245, 191, 91, 62, 33, 252, 132, 190, 245, 41, 129, 189, 241, 40, 191, 190, 109, 6, 39, 62, 138, 73, 10, 62, 201, 220, 129, 62, 85, 41, 161, 62, 31, 215, 108, 62, 130, 163, 250, 190, 84, 236, 49, 190, 228, 166, 26, 62, 247, 185, 40, 60, 142, 199, 2, 190, 138, 186, 42, 61, 139, 118, 57, 191, 195, 111, 140, 189, 6, 62, 122, 190, 51, 155, 35, 190, 13, 194, 18, 62, 77, 18, 177, 189, 182, 133, 95, 62, 72, 101, 218, 61, 182, 167, 70, 189, 36, 139, 72, 62, 222, 3, 143, 190, 160, 133, 91, 190, 162, 41, 180, 189, 161, 36, 150, 188, 103, 27, 231, 61, 127, 207, 4, 62, 234, 199, 223, 189, 46, 178, 160, 62, 133, 136, 61, 189, 222, 240, 94, 189, 210, 66, 73, 189, 198, 207, 5, 189, 100, 40, 179, 62, 240, 175, 156, 190, 20, 55, 101, 62, 147, 131, 170, 62, 42, 202, 165, 190, 85, 48, 155, 190, 109, 189, 208, 61, 15, 76, 4, 189, 250, 62, 113, 62, 91, 178, 18, 191, 72, 49, 10, 191, 199, 120, 135, 189, 157, 37, 176, 189, 7, 234, 52, 190, 252, 21, 176, 189, 61, 143, 6, 62, 12, 33, 133, 61, 122, 59, 19, 62, 3, 216, 244, 190, 195, 200, 153, 62, 26, 90, 155, 190, 238, 198, 239, 61, 255, 108, 21, 61, 48, 16, 148, 189, 36, 80, 142, 61, 146, 120, 2, 191, 84, 237, 248, 190, 146, 105, 106, 190, 75, 204, 147, 62, 23, 93, 50, 191, 191, 85, 121, 190, 242, 84, 106, 61, 207, 134, 158, 188, 128, 248, 20, 62, 21, 184, 74, 62, 153, 10, 195, 190, 33, 191, 180, 62, 125, 26, 184, 188, 223, 166, 170, 61, 87, 4, 222, 61, 236, 154, 136, 61, 116, 9, 177, 62, 215, 177, 187, 62, 33, 251, 65, 190, 196, 16, 38, 190, 26, 130, 158, 190, 131, 33, 45, 62, 209, 81, 11, 190, 117, 36, 194, 62, 3, 119, 222, 61, 105, 110, 40, 63, 29, 86, 62, 62, 118, 91, 66, 189, 226, 33, 92, 60, 61, 180, 167, 61, 146, 62, 124, 62, 241, 2, 7, 59, 29, 253, 182, 190, 100, 10, 69, 62, 201, 180, 173, 190, 32, 216, 81, 61, 103, 99, 92, 190, 205, 127, 135, 61, 144, 54, 209, 190, 51, 84, 212, 61, 13, 176, 38, 63, 75, 138, 47, 61, 244, 153, 249, 62, 213, 94, 109, 62, 122, 220, 68, 190, 212, 31, 224, 59, 35, 194, 139, 189, 230, 5, 9, 191, 220, 77, 175, 62, 104, 216, 5, 60, 109, 222, 243, 188, 28, 116, 233, 61, 0, 148, 74, 62, 246, 146, 14, 63, 77, 92, 158, 62, 28, 181, 63, 190, 75, 204, 129, 190, 24, 119, 2, 187, 15, 206, 114, 190, 8, 92, 228, 187, 175, 217, 152, 191, 233, 109, 89, 62, 47, 247, 55, 60, 89, 138, 95, 61, 47, 82, 221, 189, 200, 79, 71, 62, 68, 40, 2, 62, 58, 84, 242, 190, 112, 195, 62, 187, 233, 225, 19, 60, 198, 223, 4, 190, 201, 157, 181, 62, 17, 183, 233, 189, 209, 103, 160, 61, 16, 136, 110, 62, 73, 99, 175, 62, 1, 57, 136, 190, 78, 11, 79, 62, 243, 110, 4, 190, 163, 19, 5, 60, 147, 134, 140, 62, 170, 149, 108, 62, 217, 30, 123, 190, 67, 223, 41, 62, 106, 78, 241, 189, 252, 156, 39, 189, 25, 33, 58, 62, 134, 218, 32, 190, 56, 225, 233, 62, 158, 71, 238, 190, 238, 104, 95, 187, 159, 110, 3, 191, 143, 68, 135, 188, 60, 166, 142, 189, 240, 71, 124, 62, 99, 194, 122, 62, 109, 90, 179, 190, 1, 113, 136, 62, 230, 204, 13, 191, 231, 165, 128, 62, 199, 183, 194, 189, 32, 164, 93, 62, 100, 60, 118, 189, 135, 78, 80, 190, 70, 89, 67, 62, 74, 232, 12, 190, 121, 7, 153, 187, 139, 237, 154, 62, 0, 51, 29, 188, 73, 106, 176, 189, 73, 247, 137, 62, 176, 221, 143, 190, 90, 82, 14, 62, 252, 73, 49, 61, 22, 218, 182, 189, 229, 63, 4, 62, 198, 183, 62, 62, 105, 237, 25, 62, 97, 228, 103, 62, 171, 76, 162, 189, 68, 33, 252, 188, 22, 111, 239, 189, 37, 189, 150, 61, 57, 165, 163, 62, 168, 145, 151, 61, 143, 40, 214, 61, 181, 88, 206, 61, 221, 128, 30, 62, 233, 147, 132, 190, 67, 39, 76, 191, 196, 223, 226, 61, 161, 165, 220, 190, 148, 82, 233, 190, 6, 255, 146, 190, 129, 5, 226, 188, 181, 232, 255, 62, 33, 40, 32, 188, 130, 130, 28, 62, 197, 79, 25, 190, 234, 107, 199, 189, 159, 166, 111, 189, 205, 246, 92, 59, 140, 170, 10, 191, 71, 165, 250, 61, 17, 221, 90, 62, 220, 165, 11, 61, 140, 118, 234, 187, 243, 184, 59, 190, 163, 0, 227, 190, 17, 252, 10, 190, 229, 7, 181, 189, 223, 38, 186, 62, 135, 172, 145, 190, 83, 123, 21, 63, 93, 211, 5, 62, 199, 15, 82, 62, 42, 38, 152, 188, 237, 127, 173, 189, 236, 93, 167, 189, 240, 50, 81, 190, 61, 136, 176, 190, 130, 36, 28, 62, 131, 72, 134, 190, 177, 29, 57, 189, 67, 53, 145, 190, 240, 73, 100, 62, 60, 35, 28, 190, 20, 208, 19, 190, 113, 30, 229, 62, 239, 155, 115, 62, 91, 134, 173, 62, 168, 50, 109, 190, 131, 173, 55, 61, 192, 190, 64, 191, 235, 107, 142, 189, 56, 67, 57, 190, 161, 243, 230, 61, 54, 13, 7, 191, 94, 49, 132, 190, 177, 51, 124, 61, 48, 201, 28, 62, 223, 20, 152, 62, 226, 4, 166, 188, 235, 228, 125, 191, 84, 7, 136, 61, 16, 121, 56, 190, 255, 95, 93, 191, 140, 226, 122, 61, 119, 196, 17, 190, 201, 178, 19, 62, 244, 229, 134, 189, 10, 177, 187, 189, 12, 137, 29, 191, 0, 112, 211, 190, 152, 14, 98, 190, 70, 130, 188, 190, 143, 108, 119, 190, 152, 223, 131, 190, 46, 125, 55, 61, 115, 25, 27, 62, 33, 145, 108, 58, 74, 220, 57, 61, 27, 113, 201, 189, 10, 230, 161, 189, 86, 210, 131, 190, 10, 114, 72, 62, 238, 193, 56, 191, 40, 63, 90, 190, 253, 14, 11, 62, 41, 132, 73, 60, 243, 46, 22, 191, 74, 255, 26, 62, 231, 46, 3, 191, 230, 171, 186, 188, 87, 233, 88, 190, 24, 83, 172, 61, 150, 128, 11, 62, 212, 132, 236, 190, 62, 114, 107, 62, 39, 201, 132, 61, 179, 48, 239, 188, 2, 200, 23, 190, 19, 120, 19, 189, 70, 218, 85, 189, 239, 172, 221, 189, 133, 62, 128, 61, 5, 70, 131, 62, 167, 120, 159, 189, 114, 79, 143, 61, 164, 159, 70, 62, 120, 40, 51, 62, 168, 0, 77, 62, 169, 66, 93, 190, 37, 145, 64, 62, 126, 240, 96, 189, 182, 19, 164, 190, 73, 242, 248, 189, 97, 65, 98, 62, 220, 19, 13, 189, 229, 185, 63, 62, 34, 30, 164, 190, 150, 160, 169, 190, 58, 251, 68, 62, 29, 206, 178, 61, 199, 221, 81, 61, 142, 175, 17, 190, 159, 252, 157, 188, 141, 252, 38, 190, 223, 114, 15, 62, 205, 162, 155, 190, 110, 107, 96, 62, 38, 190, 4, 190, 248, 189, 71, 61, 8, 3, 230, 60, 174, 32, 166, 187, 23, 51, 129, 189, 14, 38, 92, 190, 180, 225, 190, 190, 58, 84, 184, 61, 215, 11, 87, 191, 186, 108, 239, 60, 101, 151, 187, 191, 227, 198, 95, 62, 178, 217, 147, 62, 101, 207, 139, 61, 140, 60, 87, 62, 53, 152, 237, 61, 16, 240, 252, 190, 179, 214, 42, 191, 5, 110, 91, 62, 137, 195, 192, 190, 80, 187, 0, 190, 105, 52, 14, 61, 173, 180, 13, 191, 6, 101, 72, 62, 156, 168, 81, 61, 232, 74, 194, 189, 177, 123, 121, 61, 30, 142, 101, 61, 133, 94, 144, 189, 133, 13, 254, 188, 205, 31, 21, 190, 111, 26, 102, 61, 106, 171, 44, 191, 0, 25, 3, 190, 113, 244, 137, 190, 157, 90, 220, 61, 162, 176, 48, 62, 153, 81, 228, 61, 198, 170, 145, 62, 70, 245, 161, 61, 186, 81, 46, 61, 157, 62, 160, 61, 80, 128, 233, 188, 127, 228, 40, 190, 162, 170, 206, 189, 44, 176, 201, 62, 69, 40, 248, 189, 72, 26, 231, 188, 183, 20, 170, 61, 71, 164, 217, 189, 215, 41, 119, 62, 130, 0, 58, 62, 177, 46, 113, 190, 90, 151, 38, 190, 234, 200, 77, 191, 104, 213, 46, 62, 98, 28, 69, 62, 90, 66, 145, 62, 57, 189, 212, 189, 86, 246, 192, 61, 73, 191, 152, 61, 90, 0, 241, 187, 78, 32, 178, 186, 188, 26, 73, 188, 209, 165, 116, 191, 28, 82, 101, 190, 176, 166, 59, 62, 51, 158, 47, 189, 228, 68, 115, 62, 206, 109, 152, 62, 191, 140, 155, 190, 30, 245, 139, 62, 196, 239, 130, 62, 137, 151, 205, 61, 229, 110, 153, 190, 228, 162, 205, 60, 72, 212, 101, 62, 237, 76, 139, 62, 159, 6, 166, 62, 158, 253, 168, 61, 13, 9, 225, 62, 159, 238, 161, 61, 147, 42, 156, 190, 76, 138, 80, 62, 6, 53, 133, 188, 88, 248, 241, 62, 107, 93, 147, 188, 187, 117, 186, 190, 201, 104, 192, 190, 49, 132, 8, 190, 231, 230, 144, 61, 206, 149, 30, 191, 46, 233, 21, 191, 12, 184, 151, 190, 253, 59, 6, 191, 116, 101, 150, 190, 5, 249, 134, 60, 9, 82, 189, 62, 151, 223, 149, 61, 209, 199, 142, 189, 116, 135, 112, 189, 10, 166, 40, 62, 43, 142, 152, 61, 61, 241, 159, 60, 4, 30, 60, 61, 78, 188, 182, 61, 177, 204, 21, 190, 114, 0, 129, 189, 175, 136, 244, 189, 183, 221, 21, 188, 94, 77, 119, 61, 202, 10, 77, 61, 196, 135, 232, 189, 147, 242, 17, 190, 138, 182, 0, 190, 40, 92, 198, 189, 114, 61, 184, 189, 15, 106, 50, 62, 24, 41, 29, 190, 211, 72, 21, 61, 4, 38, 29, 190, 209, 108, 245, 189, 66, 152, 209, 61, 34, 59, 53, 60, 242, 96, 113, 189, 234, 169, 14, 190, 122, 48, 3, 61, 250, 26, 32, 190, 31, 58, 14, 62, 128, 160, 3, 190, 224, 0, 72, 61, 113, 21, 15, 62, 167, 90, 59, 61, 162, 108, 154, 190, 43, 133, 59, 62, 27, 73, 36, 191, 235, 35, 161, 62, 194, 46, 122, 190, 100, 173, 74, 62, 241, 208, 176, 188, 49, 66, 99, 190, 140, 118, 156, 62, 154, 237, 162, 61, 41, 24, 158, 188, 67, 139, 32, 62, 243, 118, 160, 61, 121, 80, 41, 190, 14, 14, 117, 62, 173, 205, 129, 190, 28, 161, 15, 62, 229, 242, 159, 188, 15, 214, 72, 190, 126, 129, 135, 188, 63, 63, 136, 62, 180, 116, 166, 61, 53, 243, 209, 61, 118, 192, 30, 191, 224, 88, 102, 189, 13, 169, 72, 191, 145, 252, 149, 190, 180, 35, 10, 61, 192, 17, 50, 190, 14, 158, 44, 190, 246, 149, 128, 61, 0, 184, 142, 61, 44, 139, 131, 61, 114, 33, 239, 189, 126, 247, 29, 62, 38, 108, 143, 190, 212, 100, 120, 189, 231, 181, 157, 191, 72, 63, 18, 62, 35, 215, 160, 62, 23, 91, 136, 61, 97, 29, 129, 62, 130, 69, 205, 62, 221, 212, 143, 190, 83, 60, 48, 191, 64, 159, 140, 62, 116, 7, 3, 190, 122, 158, 203, 61, 16, 200, 100, 189, 105, 107, 178, 190, 97, 224, 90, 189, 195, 35, 65, 61, 241, 54, 129, 190, 172, 24, 162, 189, 1, 24, 14, 190, 208, 106, 156, 188, 133, 222, 149, 62, 88, 43, 53, 190, 8, 232, 100, 60, 148, 79, 13, 191, 8, 190, 57, 60, 117, 182, 246, 190, 220, 184, 150, 189, 55, 143, 121, 62, 191, 105, 237, 61, 171, 202, 150, 189, 116, 229, 38, 63, 22, 136, 153, 61, 53, 203, 122, 62, 250, 168, 21, 190, 144, 252, 215, 62, 221, 212, 194, 62, 29, 80, 245, 190, 253, 64, 239, 61, 223, 201, 246, 61, 240, 61, 71, 191, 5, 178, 155, 188, 141, 95, 64, 62, 168, 136, 34, 190, 10, 247, 196, 62, 59, 183, 170, 190, 111, 167, 139, 191, 26, 165, 119, 62, 92, 244, 10, 190, 202, 137, 76, 190, 164, 39, 188, 190, 117, 92, 28, 190, 232, 182, 174, 62, 115, 23, 6, 63, 176, 247, 79, 61, 81, 103, 161, 62, 74, 237, 178, 190, 81, 96, 78, 61, 156, 254, 217, 189, 167, 182, 51, 62, 213, 169, 156, 62, 124, 61, 126, 61, 162, 63, 72, 62, 245, 70, 76, 62, 213, 229, 132, 188, 199, 108, 7, 190, 26, 232, 45, 190, 60, 17, 222, 61, 246, 60, 186, 62, 59, 161, 37, 190, 173, 199, 195, 62, 155, 225, 0, 61, 138, 148, 15, 190, 57, 4, 255, 189, 191, 252, 175, 61, 34, 37, 168, 61, 130, 208, 155, 61, 7, 30, 172, 190, 139, 195, 42, 190, 97, 171, 227, 60, 63, 55, 33, 62, 177, 237, 71, 190, 150, 188, 62, 190, 146, 91, 205, 189, 30, 204, 26, 190, 19, 131, 160, 62, 167, 60, 251, 190, 55, 243, 44, 62, 150, 98, 42, 61, 128, 36, 85, 61, 85, 36, 206, 61, 86, 218, 133, 190, 186, 163, 206, 62, 84, 5, 216, 62, 137, 183, 105, 190, 14, 212, 151, 188, 215, 35, 134, 62, 36, 81, 146, 62, 101, 176, 32, 190, 70, 66, 1, 62, 151, 154, 198, 189, 116, 14, 224, 62, 93, 200, 139, 61, 48, 244, 190, 190, 250, 179, 148, 62, 31, 221, 11, 190, 209, 91, 44, 190, 21, 90, 233, 62, 122, 116, 2, 62, 61, 43, 60, 190, 186, 210, 134, 188, 209, 159, 90, 190, 254, 197, 63, 190, 148, 172, 249, 61, 149, 122, 205, 60, 148, 16, 140, 190, 17, 133, 80, 191, 218, 2, 227, 62, 17, 83, 61, 191, 59, 158, 210, 190, 61, 197, 141, 61, 143, 134, 131, 62, 156, 35, 25, 190, 6, 21, 152, 189, 46, 12, 205, 188, 190, 142, 58, 61, 254, 67, 91, 61, 13, 92, 178, 189, 122, 62, 146, 187, 243, 136, 103, 189, 134, 165, 88, 189, 3, 126, 1, 190, 45, 171, 33, 190, 156, 158, 129, 189, 189, 186, 232, 61, 42, 158, 16, 60, 110, 51, 16, 190, 130, 99, 195, 189, 169, 39, 207, 189, 241, 120, 16, 190, 105, 152, 52, 61, 186, 143, 133, 188, 116, 197, 126, 188, 192, 128, 149, 189, 143, 153, 147, 189, 57, 97, 45, 188, 230, 161, 153, 188, 224, 15, 48, 62, 65, 89, 4, 62, 185, 10, 146, 60, 32, 39, 41, 62, 251, 249, 9, 190, 202, 108, 226, 189, 16, 27, 226, 61, 170, 87, 235, 62, 203, 15, 207, 189, 189, 47, 216, 189, 181, 120, 138, 62, 104, 49, 84, 190, 24, 211, 45, 190, 239, 242, 146, 62, 10, 160, 140, 62, 76, 61, 151, 189, 43, 33, 31, 190, 219, 57, 233, 189, 182, 142, 48, 61, 218, 34, 123, 190, 129, 81, 88, 191, 48, 83, 34, 62, 218, 99, 233, 189, 207, 193, 109, 191, 212, 162, 220, 61, 37, 241, 243, 189, 80, 90, 64, 189, 75, 206, 232, 62, 81, 251, 4, 191, 142, 186, 90, 190, 161, 37, 78, 62, 137, 23, 47, 62, 102, 196, 42, 190, 243, 101, 166, 190, 99, 34, 133, 62, 106, 136, 142, 60, 212, 85, 53, 191, 117, 242, 139, 60, 145, 221, 150, 61, 27, 145, 162, 60, 110, 174, 55, 62, 177, 24, 46, 62, 164, 122, 182, 190, 3, 169, 50, 61, 42, 37, 67, 191, 8, 18, 201, 61, 115, 45, 179, 189, 142, 255, 25, 62, 147, 183, 159, 61, 246, 248, 171, 189, 204, 225, 152, 62, 195, 58, 175, 61, 78, 59, 236, 61, 165, 236, 211, 61, 9, 13, 169, 61, 209, 196, 136, 190, 93, 126, 133, 62, 87, 221, 195, 190, 50, 123, 51, 62, 189, 152, 157, 61, 194, 135, 201, 190, 226, 87, 68, 62, 169, 3, 46, 62, 17, 64, 45, 61, 4, 168, 12, 62, 76, 204, 54, 191, 108, 245, 4, 62, 47, 178, 87, 191, 177, 249, 244, 190, 249, 76, 226, 61, 211, 188, 168, 189, 36, 87, 63, 62, 50, 110, 60, 62, 38, 141, 197, 188, 180, 217, 50, 62, 53, 18, 145, 189, 180, 224, 0, 187, 181, 176, 45, 62, 182, 78, 4, 189, 60, 245, 84, 189, 111, 56, 86, 190, 193, 124, 163, 190, 246, 223, 116, 62, 78, 167, 170, 190, 182, 131, 20, 188, 214, 175, 184, 62, 245, 204, 55, 190, 52, 123, 99, 61, 51, 46, 100, 188, 116, 60, 193, 57, 74, 123, 30, 61, 155, 199, 70, 62, 17, 24, 160, 187, 30, 232, 26, 189, 180, 13, 26, 62, 137, 63, 25, 62, 142, 126, 144, 62, 108, 179, 232, 61, 110, 127, 83, 62, 164, 204, 86, 62, 118, 46, 53, 188, 103, 10, 97, 62, 109, 190, 52, 190, 136, 254, 176, 61, 96, 38, 150, 190, 99, 121, 9, 190, 103, 191, 11, 190, 225, 132, 19, 190, 238, 66, 15, 190, 46, 59, 184, 189, 141, 107, 46, 190, 74, 110, 175, 61, 226, 69, 35, 190, 226, 9, 133, 190, 10, 124, 163, 189, 9, 102, 215, 189, 156, 105, 3, 188, 38, 166, 232, 189, 165, 134, 197, 61, 162, 11, 166, 189, 36, 138, 67, 190, 229, 108, 144, 188, 183, 179, 100, 61, 48, 74, 15, 190, 129, 73, 98, 189, 227, 13, 152, 61, 106, 176, 67, 190, 100, 49, 233, 189, 168, 128, 44, 60, 238, 35, 110, 61, 239, 235, 42, 190, 122, 157, 128, 189, 19, 31, 163, 190, 246, 153, 129, 61, 32, 6, 65, 190, 242, 2, 38, 190, 22, 149, 3, 191, 75, 204, 12, 190, 104, 190, 74, 62, 139, 94, 12, 61, 65, 69, 189, 62, 100, 70, 152, 189, 45, 154, 62, 62, 122, 64, 120, 62, 111, 36, 9, 62, 28, 72, 54, 62, 183, 197, 255, 190, 76, 252, 62, 61, 113, 232, 186, 189, 77, 107, 171, 190, 146, 14, 226, 61, 180, 84, 199, 62, 161, 87, 191, 190, 81, 46, 159, 62, 112, 229, 85, 191, 126, 105, 224, 189, 195, 102, 215, 62, 141, 127, 66, 190, 230, 67, 211, 190, 201, 209, 17, 190, 143, 224, 208, 190, 5, 123, 4, 63, 37, 198, 135, 60, 169, 63, 186, 61, 239, 200, 175, 62, 17, 53, 83, 61, 154, 243, 153, 61, 230, 74, 251, 61, 220, 250, 218, 61, 20, 7, 161, 189, 60, 76, 3, 191, 224, 82, 148, 61, 93, 63, 3, 191, 20, 177, 157, 189, 96, 17, 155, 190, 227, 113, 145, 189, 215, 222, 104, 189, 46, 226, 201, 190, 7, 109, 209, 62, 117, 32, 218, 61, 56, 57, 156, 62, 95, 125, 42, 188, 1, 25, 152, 189, 156, 249, 182, 190, 137, 239, 153, 189, 68, 113, 45, 190, 179, 187, 102, 62, 192, 38, 9, 62, 74, 32, 28, 190, 250, 9, 206, 61, 178, 159, 33, 62, 211, 103, 25, 62, 55, 192, 33, 62, 176, 75, 14, 191, 242, 203, 218, 189, 111, 231, 15, 191, 22, 45, 188, 190, 123, 149, 210, 61, 92, 58, 217, 190, 251, 216, 173, 190, 244, 24, 60, 191, 159, 6, 168, 189, 106, 79, 195, 62, 78, 192, 151, 62, 248, 10, 1, 63, 102, 11, 26, 189, 172, 68, 131, 62, 76, 48, 114, 189, 115, 0, 60, 62, 1, 230, 147, 62, 49, 234, 143, 190, 253, 216, 213, 188, 188, 196, 212, 61, 171, 158, 60, 190, 69, 13, 48, 62, 60, 30, 61, 62, 123, 117, 155, 190, 107, 37, 154, 62, 156, 21, 135, 191, 131, 103, 136, 190, 95, 113, 16, 190, 116, 72, 210, 190, 69, 196, 223, 190, 31, 76, 194, 189, 90, 67, 157, 190, 35, 195, 225, 62, 224, 193, 171, 62, 96, 25, 95, 190, 222, 184, 227, 62, 1, 246, 249, 188, 159, 19, 95, 62};
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
                alignas(float) const unsigned char memory[] = {133, 73, 0, 188, 83, 193, 216, 61, 135, 2, 157, 61, 195, 168, 22, 189, 203, 31, 17, 62, 155, 145, 83, 61, 107, 130, 127, 62, 85, 11, 154, 189, 134, 205, 88, 62, 45, 168, 209, 61, 180, 14, 88, 62, 225, 213, 2, 190, 140, 240, 142, 62, 189, 109, 104, 190, 0, 27, 59, 61, 208, 48, 50, 62, 118, 225, 226, 61, 69, 224, 163, 58, 79, 150, 152, 189, 163, 216, 192, 62, 196, 95, 242, 60, 244, 8, 4, 61, 54, 190, 54, 62, 5, 38, 127, 62, 169, 48, 27, 190, 124, 32, 166, 189, 154, 136, 148, 61, 185, 202, 108, 190, 179, 194, 221, 61, 229, 157, 174, 61, 123, 16, 68, 189, 54, 247, 8, 58};
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
                alignas(float) const unsigned char memory[] = {13, 251, 49, 62, 48, 16, 126, 63, 168, 81, 83, 191, 221, 194, 38, 191, 57, 130, 91, 191, 6, 203, 163, 190, 223, 118, 222, 190, 89, 222, 132, 62, 38, 249, 9, 63, 139, 129, 60, 62, 149, 113, 45, 62, 189, 164, 56, 63, 251, 161, 101, 63, 178, 104, 142, 190, 158, 185, 113, 189, 177, 0, 23, 191, 212, 71, 165, 190, 32, 27, 201, 62, 253, 76, 51, 190, 11, 238, 249, 62, 91, 187, 2, 191, 245, 172, 47, 191, 10, 38, 13, 189, 187, 162, 107, 62, 134, 54, 6, 62, 130, 216, 40, 191, 43, 108, 36, 63, 176, 247, 76, 190, 46, 201, 211, 185, 54, 46, 193, 190, 112, 20, 40, 63, 108, 111, 158, 190, 72, 123, 38, 60, 120, 81, 36, 63, 147, 240, 21, 62, 114, 60, 131, 189, 190, 20, 141, 61, 164, 161, 7, 63, 140, 176, 248, 190, 233, 33, 62, 190, 110, 100, 72, 189, 227, 160, 100, 190, 15, 154, 30, 190, 120, 75, 148, 62, 43, 222, 7, 189, 151, 51, 137, 62, 119, 144, 54, 190, 40, 131, 226, 189, 198, 1, 126, 60, 211, 215, 10, 61, 117, 70, 145, 61, 210, 4, 116, 189, 196, 183, 152, 190, 185, 226, 131, 62, 222, 185, 193, 190, 188, 56, 58, 190, 73, 56, 150, 189, 253, 200, 186, 62, 101, 111, 4, 62, 45, 219, 123, 61, 18, 29, 39, 62, 190, 100, 72, 62, 199, 33, 230, 61, 46, 93, 120, 187};
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
                alignas(float) const unsigned char memory[] = {148, 243, 176, 59, 206, 242, 176, 190};
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
    alignas(float) const unsigned char memory[] = {103, 143, 151, 62, 58, 121, 150, 62, 94, 130, 6, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {19, 9, 143, 191, 42, 115, 167, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0021/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
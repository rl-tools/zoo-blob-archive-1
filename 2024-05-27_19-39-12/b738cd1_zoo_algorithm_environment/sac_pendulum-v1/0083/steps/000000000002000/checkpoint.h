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
                alignas(float) const unsigned char memory[] = {228, 72, 254, 190, 1, 123, 193, 187, 98, 90, 60, 60, 185, 54, 130, 190, 23, 173, 63, 63, 1, 194, 17, 191, 92, 23, 200, 189, 165, 210, 66, 191, 175, 80, 46, 62, 219, 165, 31, 63, 140, 244, 91, 190, 76, 244, 158, 61, 27, 252, 85, 190, 89, 64, 13, 191, 199, 95, 82, 62, 141, 9, 165, 62, 234, 1, 194, 61, 118, 180, 245, 190, 216, 230, 101, 189, 13, 144, 122, 62, 182, 173, 1, 63, 54, 16, 51, 63, 179, 31, 158, 190, 165, 199, 6, 191, 97, 19, 46, 63, 26, 48, 21, 63, 194, 77, 174, 61, 25, 1, 141, 190, 241, 150, 33, 191, 6, 20, 145, 62, 193, 70, 17, 61, 240, 60, 215, 188, 50, 254, 98, 190, 176, 73, 198, 190, 254, 60, 108, 191, 15, 140, 36, 190, 113, 173, 153, 62, 104, 48, 229, 190, 46, 237, 149, 190, 75, 173, 231, 190, 57, 252, 25, 191, 15, 94, 19, 63, 152, 255, 118, 188, 6, 46, 102, 191, 144, 101, 77, 190, 99, 16, 17, 190, 187, 100, 196, 62, 115, 152, 103, 62, 89, 115, 15, 62, 66, 28, 21, 191, 126, 179, 40, 62, 38, 214, 101, 190, 209, 131, 134, 191, 150, 61, 13, 190, 0, 152, 192, 62, 164, 2, 25, 62, 191, 19, 25, 191, 208, 109, 211, 190, 221, 143, 29, 63, 71, 16, 79, 62, 110, 116, 129, 190, 114, 145, 145, 190, 218, 36, 188, 62, 188, 114, 163, 62, 11, 179, 99, 63, 164, 146, 207, 62, 219, 252, 217, 61, 112, 201, 29, 63, 37, 98, 95, 62, 221, 65, 26, 191, 100, 3, 6, 63, 194, 70, 4, 191, 76, 112, 153, 62, 102, 110, 185, 62, 72, 151, 214, 62, 103, 160, 221, 61, 208, 81, 0, 191, 240, 26, 13, 63, 148, 42, 12, 191, 218, 23, 165, 61, 252, 201, 255, 61, 98, 130, 252, 62, 174, 11, 82, 189, 36, 45, 222, 62, 198, 123, 234, 62, 76, 249, 23, 190, 254, 86, 146, 62, 115, 79, 199, 62, 111, 205, 14, 191, 231, 243, 8, 63, 122, 193, 12, 191, 189, 92, 38, 190, 162, 21, 174, 62, 90, 80, 154, 190, 250, 224, 37, 63, 94, 215, 200, 190};
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
                alignas(float) const unsigned char memory[] = {58, 83, 25, 191, 184, 201, 199, 62, 77, 144, 158, 190, 32, 7, 6, 63, 189, 192, 22, 188, 91, 85, 229, 190, 30, 69, 36, 191, 178, 80, 242, 62, 200, 234, 199, 190, 184, 95, 153, 189, 190, 89, 212, 62, 144, 91, 182, 62, 19, 197, 248, 62, 121, 204, 18, 63, 33, 13, 255, 62, 32, 213, 55, 63, 89, 225, 224, 62, 19, 7, 107, 62, 94, 80, 67, 190, 204, 149, 15, 191, 35, 135, 131, 60, 218, 50, 71, 63, 0, 79, 44, 63, 191, 117, 193, 188, 80, 79, 72, 62, 183, 124, 3, 191, 176, 220, 41, 63, 115, 207, 178, 62, 222, 140, 146, 60, 119, 247, 210, 189, 202, 112, 106, 61, 210, 127, 223, 189};
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
                alignas(float) const unsigned char memory[] = {104, 234, 157, 61, 9, 231, 35, 62, 38, 203, 48, 62, 113, 139, 138, 62, 240, 224, 22, 190, 128, 29, 90, 190, 39, 115, 137, 188, 27, 73, 248, 61, 217, 184, 157, 61, 15, 47, 24, 190, 90, 122, 171, 189, 183, 114, 243, 189, 103, 186, 33, 190, 199, 19, 135, 61, 57, 47, 84, 190, 186, 65, 153, 61, 123, 18, 162, 188, 134, 252, 35, 190, 82, 92, 17, 190, 69, 188, 107, 190, 14, 124, 62, 190, 197, 18, 117, 62, 9, 216, 42, 62, 236, 220, 33, 62, 128, 37, 9, 62, 150, 101, 212, 61, 168, 30, 14, 62, 91, 224, 240, 61, 208, 85, 30, 62, 220, 60, 84, 189, 37, 11, 73, 189, 78, 152, 210, 61, 211, 139, 146, 61, 13, 166, 26, 190, 141, 74, 42, 189, 255, 250, 163, 61, 56, 79, 232, 61, 152, 151, 27, 62, 206, 185, 0, 61, 224, 14, 149, 188, 116, 214, 45, 190, 232, 167, 30, 189, 19, 84, 170, 61, 74, 51, 30, 61, 39, 255, 35, 62, 99, 234, 121, 61, 254, 247, 189, 189, 31, 188, 99, 189, 196, 245, 194, 61, 48, 115, 195, 189, 241, 90, 75, 189, 7, 144, 50, 62, 196, 112, 34, 62, 159, 41, 176, 189, 225, 126, 169, 61, 76, 190, 23, 190, 78, 105, 22, 190, 90, 9, 90, 189, 224, 222, 51, 190, 25, 46, 144, 189, 54, 218, 237, 60, 151, 77, 68, 187, 156, 214, 193, 188, 88, 170, 125, 61, 176, 71, 245, 61, 94, 225, 51, 62, 207, 111, 16, 190, 14, 146, 195, 61, 119, 34, 241, 189, 16, 65, 17, 62, 106, 171, 43, 62, 200, 67, 23, 62, 225, 98, 17, 190, 186, 7, 140, 188, 31, 254, 101, 189, 200, 214, 230, 189, 65, 127, 210, 189, 195, 182, 115, 61, 34, 64, 220, 61, 114, 7, 64, 189, 5, 25, 255, 60, 80, 50, 27, 62, 116, 47, 103, 189, 86, 250, 39, 190, 57, 221, 24, 190, 225, 205, 240, 189, 255, 46, 191, 189, 97, 77, 107, 189, 123, 180, 158, 60, 38, 222, 213, 188, 33, 165, 24, 190, 228, 149, 238, 61, 5, 227, 241, 188, 149, 145, 5, 62, 249, 28, 16, 190, 98, 28, 21, 190, 107, 227, 148, 61, 223, 172, 67, 62, 54, 207, 34, 187, 204, 199, 137, 61, 92, 149, 242, 61, 122, 244, 132, 61, 209, 219, 176, 61, 14, 54, 49, 189, 221, 206, 98, 190, 161, 67, 235, 60, 91, 66, 110, 61, 204, 255, 133, 189, 113, 147, 134, 189, 226, 81, 15, 62, 70, 168, 87, 60, 178, 17, 56, 61, 79, 247, 140, 61, 75, 34, 22, 62, 102, 119, 48, 62, 117, 187, 11, 62, 143, 141, 32, 62, 29, 56, 16, 61, 232, 174, 103, 190, 4, 75, 47, 190, 210, 85, 246, 61, 167, 166, 41, 190, 13, 151, 133, 61, 99, 146, 60, 190, 50, 167, 1, 190, 108, 4, 35, 190, 141, 136, 209, 189, 96, 175, 225, 189, 126, 166, 205, 60, 34, 7, 179, 61, 38, 19, 52, 59, 213, 170, 118, 188, 149, 125, 124, 62, 22, 237, 31, 62, 7, 184, 9, 62, 251, 203, 61, 62, 111, 55, 164, 61, 68, 30, 126, 62, 127, 236, 163, 60, 24, 170, 75, 62, 183, 103, 209, 61, 14, 77, 197, 189, 186, 232, 52, 62, 243, 64, 200, 189, 249, 90, 107, 62, 203, 89, 148, 61, 152, 144, 174, 61, 10, 108, 103, 189, 31, 127, 66, 62, 103, 190, 57, 190, 69, 92, 42, 188, 21, 235, 160, 189, 251, 239, 219, 61, 148, 43, 83, 188, 253, 236, 32, 189, 27, 63, 203, 59, 11, 191, 147, 61, 225, 140, 40, 60, 130, 144, 135, 189, 35, 192, 16, 62, 238, 39, 49, 61, 11, 116, 89, 60, 108, 79, 201, 188, 213, 9, 133, 189, 225, 250, 76, 188, 185, 189, 188, 61, 27, 198, 180, 187, 6, 50, 183, 189, 233, 115, 188, 189, 113, 89, 211, 189, 149, 131, 174, 61, 88, 224, 180, 189, 119, 42, 28, 190, 41, 209, 200, 61, 73, 39, 207, 61, 84, 9, 4, 62, 68, 196, 32, 190, 121, 79, 221, 189, 164, 101, 37, 60, 212, 191, 29, 189, 131, 1, 139, 61, 236, 131, 34, 190, 103, 76, 47, 190, 251, 210, 236, 60, 121, 142, 193, 61, 97, 136, 174, 189, 95, 114, 134, 189, 209, 139, 198, 61, 134, 155, 25, 190, 16, 57, 129, 60, 216, 74, 63, 189, 2, 162, 19, 189, 64, 33, 31, 189, 94, 193, 116, 61, 7, 196, 250, 189, 36, 109, 176, 188, 17, 72, 31, 190, 146, 168, 180, 189, 117, 195, 150, 187, 4, 219, 63, 62, 199, 59, 58, 58, 121, 165, 243, 188, 95, 233, 72, 61, 99, 239, 148, 190, 168, 50, 131, 189, 153, 140, 48, 189, 159, 45, 146, 61, 41, 147, 40, 190, 123, 236, 24, 190, 182, 112, 210, 189, 156, 181, 27, 60, 27, 244, 82, 61, 28, 86, 26, 62, 222, 145, 95, 190, 188, 62, 201, 60, 202, 229, 144, 60, 96, 100, 197, 58, 139, 184, 149, 61, 80, 156, 8, 61, 41, 0, 230, 61, 228, 233, 241, 60, 170, 184, 186, 189, 116, 175, 233, 61, 225, 8, 187, 61, 223, 207, 22, 61, 45, 86, 39, 190, 235, 161, 189, 190, 141, 226, 39, 190, 129, 254, 34, 62, 179, 229, 14, 190, 206, 165, 144, 189, 228, 105, 175, 61, 78, 91, 253, 61, 188, 64, 29, 62, 121, 171, 145, 189, 50, 58, 23, 61, 174, 16, 0, 62, 108, 120, 236, 61, 193, 6, 161, 61, 64, 182, 176, 189, 249, 193, 44, 60, 205, 27, 41, 62, 195, 250, 48, 62, 204, 245, 156, 189, 158, 155, 164, 189, 30, 174, 158, 189, 172, 79, 148, 189, 46, 54, 32, 190, 67, 87, 168, 189, 228, 177, 209, 189, 86, 223, 220, 58, 104, 221, 10, 61, 227, 148, 13, 188, 182, 5, 120, 61, 50, 174, 180, 61, 183, 122, 217, 60, 123, 105, 3, 60, 188, 159, 27, 190, 111, 176, 143, 186, 177, 255, 91, 189, 249, 80, 234, 61, 235, 110, 129, 61, 151, 117, 252, 189, 226, 75, 204, 188, 195, 78, 70, 189, 178, 45, 189, 57, 138, 175, 67, 61, 254, 149, 36, 60, 185, 192, 22, 61, 69, 86, 3, 61, 221, 251, 20, 189, 247, 184, 49, 61, 69, 112, 20, 190, 231, 141, 77, 62, 128, 135, 116, 61, 159, 147, 4, 62, 101, 87, 227, 189, 209, 5, 133, 188, 203, 111, 171, 60, 181, 118, 18, 62, 131, 62, 12, 189, 158, 137, 198, 61, 65, 40, 58, 62, 137, 167, 255, 189, 42, 219, 39, 190, 181, 24, 131, 189, 171, 136, 180, 61, 187, 226, 86, 189, 63, 25, 46, 190, 205, 167, 8, 190, 233, 222, 76, 189, 232, 206, 28, 62, 42, 206, 37, 190, 76, 192, 222, 61, 190, 153, 192, 61, 49, 39, 103, 62, 91, 95, 67, 188, 91, 181, 66, 190, 156, 66, 83, 62, 228, 154, 130, 59, 117, 153, 19, 62, 234, 121, 56, 190, 238, 28, 128, 59, 235, 232, 90, 190, 187, 213, 159, 189, 210, 177, 34, 190, 0, 238, 69, 62, 231, 220, 205, 189, 203, 90, 164, 61, 184, 46, 188, 61, 9, 151, 223, 188, 92, 250, 25, 61, 114, 156, 70, 190, 104, 139, 145, 60, 247, 75, 210, 189, 187, 136, 0, 190, 196, 85, 46, 62, 230, 205, 78, 189, 242, 14, 131, 61, 13, 55, 208, 61, 212, 244, 141, 61, 223, 198, 32, 188, 187, 237, 64, 61, 68, 242, 94, 61, 130, 143, 135, 61, 84, 169, 69, 189, 86, 45, 44, 62, 205, 47, 53, 190, 72, 9, 77, 62, 110, 132, 1, 61, 134, 211, 135, 61, 73, 131, 255, 189, 165, 185, 214, 61, 226, 19, 68, 187, 15, 157, 228, 60, 54, 59, 135, 188, 18, 112, 236, 189, 94, 105, 131, 60, 45, 51, 141, 61, 148, 126, 9, 189, 81, 72, 200, 189, 219, 173, 203, 60, 109, 251, 39, 62, 180, 50, 66, 61, 21, 197, 0, 62, 208, 153, 138, 60, 184, 48, 148, 61, 44, 208, 177, 60, 170, 130, 214, 189, 81, 132, 135, 189, 110, 247, 10, 61, 35, 60, 77, 62, 222, 15, 45, 189, 186, 130, 27, 190, 177, 250, 153, 189, 154, 40, 12, 190, 134, 174, 59, 61, 143, 168, 48, 61, 12, 139, 5, 190, 129, 36, 75, 62, 13, 236, 73, 61, 251, 69, 6, 189, 112, 196, 19, 62, 217, 28, 34, 62, 186, 133, 73, 62, 198, 174, 32, 62, 205, 58, 151, 61, 89, 100, 184, 189, 228, 222, 243, 189, 234, 107, 12, 62, 105, 220, 151, 60, 188, 4, 121, 61, 36, 71, 144, 61, 167, 100, 74, 190, 104, 231, 180, 59, 104, 100, 155, 189, 140, 93, 156, 61, 61, 194, 0, 60, 180, 138, 179, 60, 117, 169, 10, 189, 66, 172, 96, 190, 242, 218, 143, 188, 249, 218, 237, 61, 19, 22, 73, 189, 39, 155, 7, 190, 13, 214, 91, 62, 72, 10, 3, 62, 44, 87, 135, 61, 211, 56, 28, 190, 244, 13, 130, 190, 107, 145, 254, 188, 85, 75, 19, 190, 245, 41, 77, 62, 134, 155, 141, 190, 68, 217, 38, 62, 228, 69, 115, 61, 189, 142, 231, 189, 161, 175, 249, 189, 53, 105, 75, 190, 133, 187, 187, 60, 80, 55, 190, 61, 234, 22, 73, 190, 89, 7, 231, 60, 114, 21, 215, 185, 38, 77, 47, 189, 141, 65, 90, 62, 80, 187, 60, 61, 117, 65, 240, 61, 165, 239, 195, 61, 139, 146, 168, 189, 74, 204, 8, 62, 36, 230, 177, 61, 108, 200, 181, 61, 124, 170, 27, 62, 170, 127, 85, 189, 13, 88, 92, 189, 232, 26, 143, 61, 58, 101, 219, 189, 77, 180, 22, 62, 145, 133, 65, 189, 101, 208, 42, 61, 107, 38, 103, 189, 223, 143, 191, 61, 242, 72, 234, 189, 73, 167, 73, 189, 230, 234, 184, 189, 212, 11, 231, 189, 144, 241, 130, 60, 100, 169, 16, 188, 111, 79, 156, 61, 71, 26, 255, 189, 88, 214, 15, 190, 70, 29, 180, 61, 228, 63, 44, 61, 17, 44, 176, 60, 104, 230, 191, 61, 57, 134, 204, 189, 59, 53, 203, 189, 188, 232, 143, 189, 229, 189, 241, 61, 242, 76, 108, 61, 72, 179, 70, 61, 47, 244, 8, 62, 154, 78, 214, 189, 213, 224, 215, 61, 11, 88, 0, 189, 53, 115, 129, 189, 151, 77, 18, 62, 34, 167, 204, 189, 60, 31, 49, 188, 219, 37, 2, 62, 198, 187, 133, 189, 183, 70, 15, 190, 22, 86, 45, 190, 204, 56, 116, 61, 87, 148, 111, 189, 160, 145, 50, 190, 199, 57, 239, 61, 169, 53, 231, 188, 190, 70, 5, 62, 19, 127, 28, 189, 169, 209, 228, 189, 241, 80, 198, 60, 175, 168, 39, 190, 24, 251, 156, 59, 38, 88, 232, 189, 88, 81, 88, 188, 189, 63, 190, 61, 232, 79, 106, 189, 242, 115, 2, 60, 231, 53, 40, 62, 120, 14, 148, 61, 117, 45, 192, 61, 253, 180, 3, 62, 82, 192, 87, 60, 154, 170, 43, 61, 200, 157, 234, 188, 103, 236, 106, 189, 124, 185, 18, 190, 215, 25, 144, 189, 138, 230, 37, 62, 177, 126, 32, 61, 251, 138, 88, 190, 37, 8, 43, 62, 124, 208, 62, 61, 107, 218, 185, 60, 141, 66, 13, 190, 234, 22, 182, 188, 135, 122, 2, 190, 186, 172, 143, 62, 166, 206, 110, 62, 81, 178, 134, 61, 35, 41, 213, 61, 4, 203, 76, 62, 128, 5, 213, 60, 160, 44, 147, 189, 253, 244, 143, 62, 20, 126, 102, 62, 68, 183, 131, 189, 57, 104, 219, 189, 22, 189, 199, 189, 143, 24, 46, 190, 217, 130, 20, 190, 250, 107, 83, 190, 227, 41, 37, 190, 109, 202, 180, 189, 167, 196, 46, 62, 249, 26, 67, 190, 238, 31, 40, 190, 15, 200, 52, 61, 25, 218, 63, 189, 200, 216, 97, 190, 148, 214, 255, 61, 167, 189, 32, 190, 198, 58, 99, 187, 234, 132, 228, 189, 209, 224, 59, 62, 179, 104, 43, 62, 221, 98, 78, 61, 237, 242, 47, 62, 189, 136, 108, 190, 24, 102, 228, 61, 45, 56, 33, 190, 6, 145, 54, 62, 13, 209, 17, 62, 138, 1, 181, 60, 104, 107, 223, 61, 241, 111, 219, 61, 54, 143, 249, 188, 188, 204, 54, 189, 7, 190, 164, 189, 198, 149, 11, 190, 2, 129, 252, 189, 111, 69, 137, 61, 250, 165, 213, 189, 74, 179, 203, 188, 114, 232, 233, 60, 75, 189, 49, 190, 14, 102, 210, 189, 65, 236, 144, 189, 231, 186, 7, 61, 155, 72, 61, 190, 172, 240, 219, 61, 49, 153, 69, 61, 116, 126, 196, 189, 59, 145, 42, 62, 108, 183, 0, 61, 94, 101, 124, 189, 145, 117, 94, 190, 182, 31, 82, 190, 227, 197, 37, 61, 115, 11, 63, 190, 67, 117, 228, 189, 248, 22, 245, 190, 117, 255, 63, 61, 246, 130, 41, 190, 40, 185, 43, 61, 216, 221, 60, 190, 220, 75, 106, 189, 164, 230, 67, 59, 32, 153, 223, 188, 215, 203, 137, 190, 116, 198, 56, 190, 28, 235, 207, 61, 244, 226, 72, 190, 96, 174, 131, 62, 13, 219, 167, 62, 217, 7, 153, 62, 152, 37, 147, 61, 26, 159, 134, 190, 159, 231, 122, 61, 25, 215, 90, 189, 139, 193, 235, 189, 92, 220, 3, 190, 248, 110, 133, 61, 66, 103, 159, 61, 230, 3, 10, 62, 121, 234, 5, 62, 230, 161, 55, 190, 220, 50, 142, 190, 195, 145, 184, 190, 232, 48, 226, 189, 108, 116, 6, 187, 89, 223, 208, 61, 10, 252, 229, 189, 201, 59, 201, 190, 152, 175, 137, 61, 96, 204, 50, 190, 152, 9, 47, 60, 215, 162, 28, 188, 108, 91, 170, 61, 72, 170, 172, 62, 61, 196, 230, 190, 208, 112, 44, 61, 202, 145, 217, 189, 1, 178, 194, 189, 62, 135, 190, 189, 199, 122, 3, 62, 129, 163, 89, 62, 183, 196, 96, 189, 96, 226, 226, 60, 162, 45, 152, 190, 114, 166, 61, 62, 7, 120, 2, 190, 96, 35, 202, 187, 215, 190, 150, 190, 126, 219, 29, 190, 214, 110, 240, 58, 79, 178, 185, 60, 125, 125, 223, 190, 238, 120, 232, 189, 27, 106, 159, 190, 96, 91, 163, 61, 144, 234, 135, 190, 195, 136, 212, 189, 65, 61, 184, 189, 40, 18, 16, 62, 80, 75, 9, 62, 245, 214, 99, 60, 100, 113, 229, 62, 31, 248, 188, 187, 171, 189, 9, 62, 191, 90, 43, 62, 41, 216, 184, 189, 196, 150, 1, 62, 114, 187, 44, 62, 64, 30, 114, 189, 178, 185, 32, 62, 26, 98, 47, 61, 23, 126, 177, 189, 203, 159, 3, 62, 67, 231, 124, 190, 179, 147, 158, 60, 36, 166, 234, 189, 11, 199, 60, 62, 203, 173, 243, 188, 222, 174, 53, 190, 228, 238, 137, 61, 110, 133, 87, 189, 254, 199, 133, 190, 229, 188, 170, 61, 90, 38, 33, 62, 38, 74, 183, 189, 241, 79, 7, 190, 139, 246, 164, 189, 43, 34, 252, 189, 214, 107, 235, 61, 172, 135, 34, 188, 9, 215, 17, 190, 159, 231, 34, 190, 99, 164, 243, 60, 174, 55, 51, 189, 234, 141, 143, 61, 47, 110, 31, 189, 93, 200, 224, 189, 167, 2, 21, 190, 77, 179, 249, 189, 205, 167, 253, 60, 198, 153, 17, 190, 6, 225, 167, 189, 55, 248, 34, 62, 113, 26, 151, 189, 109, 11, 165, 61, 79, 176, 58, 62, 4, 72, 57, 62, 136, 49, 123, 185, 0, 128, 57, 62, 235, 106, 252, 188, 191, 81, 177, 188, 8, 243, 14, 62, 233, 66, 215, 189, 15, 93, 170, 60, 184, 93, 186, 189, 170, 35, 246, 61, 235, 191, 235, 61, 14, 169, 33, 61, 33, 114, 89, 190, 79, 133, 78, 189, 167, 115, 180, 189, 44, 39, 11, 190, 129, 31, 79, 62, 246, 121, 33, 189, 53, 154, 46, 188, 177, 190, 147, 190, 234, 28, 170, 60, 213, 213, 236, 61, 86, 168, 38, 190, 75, 197, 234, 61, 189, 144, 254, 189, 251, 113, 75, 190, 80, 58, 60, 190, 222, 126, 205, 189, 233, 85, 52, 190, 51, 182, 96, 189, 55, 112, 194, 61, 236, 146, 128, 62, 85, 218, 44, 62, 42, 72, 63, 62, 81, 235, 0, 62, 245, 191, 255, 188, 214, 0, 35, 61, 44, 6, 33, 61, 69, 153, 11, 190, 99, 11, 142, 61, 3, 98, 235, 189, 93, 72, 112, 61, 145, 98, 219, 189, 210, 105, 42, 61, 189, 117, 193, 62, 231, 109, 200, 189, 48, 244, 176, 189, 132, 206, 255, 189, 11, 176, 198, 189, 25, 124, 129, 61, 74, 64, 87, 61, 216, 120, 52, 62, 123, 13, 181, 189, 235, 155, 235, 60, 228, 219, 36, 62, 40, 208, 231, 189, 62, 155, 69, 62, 155, 251, 85, 62, 197, 174, 146, 188, 143, 171, 112, 188, 206, 133, 99, 61, 12, 144, 152, 61, 6, 17, 55, 190, 25, 253, 220, 189, 22, 198, 237, 61, 38, 53, 75, 190, 199, 47, 236, 61, 186, 20, 99, 190, 134, 215, 16, 190, 163, 50, 111, 190, 127, 211, 124, 62, 233, 50, 7, 189, 230, 156, 104, 189, 169, 37, 239, 61, 233, 174, 80, 61, 200, 253, 66, 61, 130, 47, 217, 61, 185, 80, 64, 190, 144, 233, 86, 189, 83, 248, 163, 189, 143, 157, 55, 189, 222, 217, 11, 190, 208, 183, 162, 61, 106, 141, 17, 190, 5, 170, 137, 61, 47, 69, 111, 190, 61, 92, 208, 189, 243, 228, 2, 190, 232, 150, 216, 187, 169, 208, 71, 190, 76, 194, 141, 60, 237, 87, 232, 189, 232, 98, 122, 190, 218, 204, 152, 61, 84, 182, 197, 60, 49, 156, 158, 189, 238, 3, 79, 190, 159, 114, 227, 189, 52, 76, 43, 62, 116, 18, 8, 190, 96, 224, 67, 188, 196, 30, 98, 190, 97, 61, 11, 190, 81, 209, 9, 190, 251, 254, 16, 60, 207, 92, 44, 62, 73, 61, 16, 189, 212, 170, 243, 60, 43, 186, 119, 61, 163, 108, 59, 62, 31, 58, 218, 61, 99, 8, 18, 190, 114, 190, 118, 189, 227, 117, 132, 61, 233, 218, 120, 62, 99, 252, 34, 189, 121, 150, 213, 188, 254, 234, 152, 61, 74, 190, 184, 188, 181, 205, 245, 189, 153, 176, 156, 189, 61, 104, 6, 190, 78, 91, 205, 189, 225, 154, 95, 190, 142, 78, 136, 58, 215, 36, 52, 62, 49, 95, 128, 61, 104, 226, 251, 61, 99, 68, 142, 61, 189, 172, 171, 189, 243, 10, 6, 190, 132, 142, 148, 60, 140, 81, 144, 61, 203, 193, 87, 62, 20, 59, 12, 62, 222, 236, 25, 62, 175, 221, 21, 190, 88, 214, 175, 190, 66, 4, 129, 190, 213, 222, 192, 189, 110, 133, 184, 62, 157, 225, 134, 60, 244, 11, 203, 190, 174, 211, 8, 62, 253, 37, 19, 62, 229, 246, 251, 188, 221, 164, 66, 61, 97, 174, 26, 62, 85, 154, 104, 61, 153, 5, 152, 62, 213, 165, 151, 61, 124, 216, 105, 61, 8, 223, 116, 62, 59, 201, 182, 62, 138, 173, 46, 188, 255, 52, 219, 60, 153, 230, 44, 62, 2, 15, 25, 190, 214, 179, 44, 190, 253, 29, 134, 190, 80, 105, 249, 189, 55, 154, 130, 190, 164, 31, 237, 61, 51, 211, 34, 62, 64, 147, 168, 189, 116, 49, 85, 190, 247, 216, 132, 60, 152, 90, 172, 190, 157, 52, 188, 189, 205, 213, 131, 62, 72, 246, 251, 61, 50, 84, 79, 62, 31, 2, 177, 189, 91, 28, 124, 62, 196, 179, 40, 62, 162, 72, 243, 188, 169, 98, 101, 190, 79, 8, 160, 61, 204, 239, 172, 189, 36, 240, 200, 189, 144, 87, 233, 59, 55, 134, 8, 190, 59, 81, 46, 190, 29, 39, 13, 61, 155, 105, 244, 61, 146, 155, 59, 190, 243, 138, 206, 61, 23, 95, 164, 61, 205, 56, 199, 189, 38, 93, 236, 60, 90, 155, 98, 189, 64, 214, 101, 61, 73, 177, 147, 60, 94, 110, 13, 62, 204, 243, 89, 190, 103, 255, 20, 190, 123, 31, 151, 61, 201, 203, 51, 190, 82, 127, 235, 61, 94, 22, 120, 62, 207, 187, 144, 189, 8, 163, 176, 62, 95, 92, 163, 61, 101, 154, 130, 62, 17, 207, 105, 190, 136, 15, 155, 190, 208, 193, 27, 189, 137, 145, 95, 190, 194, 203, 193, 61, 136, 50, 246, 189, 244, 234, 56, 61, 79, 97, 125, 61, 10, 183, 121, 60, 63, 1, 128, 189, 161, 184, 131, 190, 237, 158, 59, 62, 10, 53, 188, 61, 180, 12, 241, 190, 204, 39, 172, 189, 252, 112, 49, 61, 48, 251, 250, 189, 95, 194, 140, 61, 182, 20, 76, 62, 46, 22, 203, 61, 217, 223, 197, 60, 147, 66, 11, 62, 51, 214, 80, 61, 51, 222, 87, 61, 85, 109, 146, 189, 193, 196, 238, 189, 45, 241, 28, 61, 85, 212, 149, 61, 196, 147, 197, 189, 87, 103, 0, 61, 111, 67, 103, 61, 90, 24, 182, 189, 118, 62, 8, 61, 137, 234, 7, 62, 105, 78, 9, 190, 139, 169, 40, 60, 24, 79, 254, 61, 111, 26, 211, 189, 131, 147, 241, 189, 96, 97, 17, 190, 197, 52, 172, 188, 208, 87, 234, 189, 217, 10, 35, 62, 172, 24, 228, 61, 104, 81, 254, 189, 41, 89, 132, 189, 79, 13, 192, 187, 200, 70, 255, 61, 109, 185, 194, 61, 94, 25, 45, 189, 63, 34, 109, 189, 140, 85, 233, 189, 49, 97, 15, 189, 19, 175, 253, 61, 54, 12, 185, 189, 197, 191, 1, 62, 76, 53, 242, 61, 180, 142, 179, 61, 235, 211, 165, 189, 252, 101, 73, 187, 12, 7, 25, 62, 134, 229, 10, 61, 232, 206, 14, 190, 139, 20, 188, 190, 210, 227, 140, 60, 115, 255, 129, 190, 250, 30, 214, 61, 109, 249, 218, 189, 14, 200, 77, 190, 186, 126, 8, 60, 150, 94, 129, 61, 28, 106, 37, 62, 6, 71, 136, 61, 193, 231, 184, 61, 192, 144, 34, 189, 164, 201, 172, 188, 85, 82, 217, 189, 209, 114, 128, 62, 222, 72, 89, 190, 128, 28, 36, 187, 163, 174, 201, 61, 34, 211, 69, 190, 124, 169, 139, 61, 186, 242, 97, 190, 93, 103, 6, 190, 87, 188, 166, 61, 86, 103, 163, 61, 221, 221, 171, 61, 173, 216, 129, 61, 227, 247, 194, 189, 148, 76, 235, 61, 27, 130, 175, 190, 42, 94, 14, 189, 36, 197, 88, 62, 107, 118, 13, 62, 41, 45, 10, 62, 202, 84, 23, 61, 28, 174, 207, 189, 17, 70, 27, 62, 160, 61, 211, 189, 199, 221, 94, 62, 247, 56, 108, 190, 98, 214, 84, 62, 59, 178, 119, 190, 75, 178, 106, 61, 41, 28, 219, 189, 210, 132, 8, 190, 97, 156, 141, 61, 4, 47, 33, 189, 196, 117, 144, 190, 80, 195, 245, 189, 174, 64, 21, 61, 199, 165, 17, 187, 15, 221, 35, 189, 211, 198, 132, 62, 97, 185, 35, 61, 179, 208, 203, 189, 64, 200, 35, 190, 93, 43, 33, 62, 253, 21, 252, 60, 183, 43, 63, 62, 248, 177, 78, 62, 101, 200, 65, 190, 168, 94, 39, 189, 158, 26, 170, 61, 59, 142, 210, 61, 214, 194, 249, 61, 16, 24, 249, 189, 179, 146, 201, 188, 159, 168, 46, 60, 37, 66, 185, 61, 201, 116, 65, 190, 166, 255, 204, 189, 70, 8, 19, 62, 155, 59, 107, 189, 88, 102, 150, 60, 123, 100, 20, 62, 114, 78, 11, 60, 162, 39, 168, 58, 175, 145, 180, 189, 16, 105, 20, 61, 72, 48, 11, 190, 202, 122, 88, 60, 189, 171, 111, 60, 188, 146, 205, 189, 111, 66, 251, 189, 254, 186, 19, 190, 189, 66, 134, 189, 184, 13, 175, 61, 153, 26, 16, 189, 77, 185, 66, 190, 2, 112, 218, 60, 116, 199, 59, 189, 3, 88, 226, 189, 161, 212, 27, 62, 242, 94, 245, 59};
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
                alignas(float) const unsigned char memory[] = {186, 55, 250, 60, 158, 188, 51, 190, 87, 243, 92, 188, 64, 44, 184, 189, 118, 52, 159, 61, 39, 244, 19, 61, 142, 133, 85, 190, 150, 124, 19, 62, 64, 51, 137, 61, 118, 87, 7, 62, 104, 134, 206, 189, 85, 159, 37, 62, 109, 2, 40, 188, 132, 195, 236, 189, 147, 176, 131, 189, 40, 147, 133, 62, 2, 103, 31, 61, 236, 59, 106, 62, 8, 135, 203, 189, 78, 0, 219, 189, 134, 43, 1, 188, 253, 120, 74, 62, 143, 154, 17, 190, 45, 203, 36, 62, 95, 41, 155, 189, 43, 133, 130, 61, 162, 197, 245, 189, 126, 241, 139, 60, 140, 93, 60, 190, 199, 5, 208, 189, 243, 78, 119, 62, 82, 208, 163, 61};
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
                alignas(float) const unsigned char memory[] = {197, 212, 136, 190, 134, 64, 38, 62, 207, 152, 79, 61, 19, 1, 16, 62, 248, 244, 223, 61, 6, 132, 4, 61, 79, 41, 202, 61, 203, 168, 47, 62, 140, 191, 156, 61, 207, 168, 53, 62, 101, 156, 200, 189, 49, 228, 103, 62, 199, 132, 49, 190, 148, 147, 212, 61, 218, 231, 6, 190, 135, 72, 155, 62, 80, 244, 54, 62, 52, 59, 246, 190, 245, 76, 204, 190, 10, 77, 136, 62, 255, 153, 197, 189, 68, 212, 127, 190, 200, 95, 243, 61, 98, 106, 123, 62, 155, 173, 13, 190, 155, 135, 27, 63, 94, 88, 130, 62, 231, 187, 131, 190, 245, 223, 211, 61, 170, 75, 26, 62, 22, 63, 71, 190, 167, 243, 248, 189, 34, 101, 22, 190, 124, 201, 82, 60, 56, 42, 18, 60, 107, 240, 97, 189, 179, 234, 250, 189, 140, 135, 40, 61, 229, 213, 61, 189, 30, 136, 99, 189, 7, 9, 63, 62, 241, 223, 53, 190, 58, 13, 133, 61, 150, 172, 141, 189, 159, 148, 142, 60, 15, 63, 187, 189, 138, 23, 12, 62, 33, 8, 175, 59, 37, 98, 172, 61, 117, 249, 90, 190, 80, 181, 209, 61, 108, 199, 152, 189, 151, 153, 14, 62, 162, 4, 178, 58, 124, 173, 69, 62, 80, 39, 80, 190, 27, 176, 52, 61, 31, 207, 179, 189, 240, 103, 11, 61, 20, 134, 150, 187, 104, 245, 182, 189, 18, 61, 112, 61, 185, 58, 12, 189, 76, 189, 210, 58};
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
                alignas(float) const unsigned char memory[] = {110, 35, 69, 190, 125, 217, 144, 190};
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
    alignas(float) const unsigned char memory[] = {93, 46, 21, 191, 6, 39, 251, 190, 129, 250, 246, 189};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {26, 180, 228, 63, 254, 254, 190, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0083/steps/000000000002000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
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
                alignas(float) const unsigned char memory[] = {71, 253, 234, 61, 185, 108, 252, 189, 16, 59, 56, 191, 87, 150, 37, 191, 122, 140, 172, 190, 50, 2, 40, 191, 96, 35, 47, 63, 89, 219, 133, 63, 91, 190, 142, 62, 165, 52, 79, 61, 8, 35, 61, 190, 188, 187, 26, 63, 107, 100, 0, 61, 88, 180, 150, 62, 168, 6, 206, 190, 162, 135, 40, 63, 132, 195, 95, 191, 67, 174, 202, 190, 197, 101, 206, 62, 224, 25, 47, 63, 87, 21, 135, 62, 233, 45, 130, 189, 55, 115, 14, 191, 153, 193, 207, 190, 86, 213, 133, 61, 87, 192, 65, 62, 4, 96, 70, 60, 212, 68, 38, 63, 184, 248, 88, 191, 8, 153, 226, 190, 137, 141, 225, 189, 127, 5, 107, 191, 101, 241, 164, 60, 124, 45, 91, 63, 72, 251, 72, 63, 222, 238, 150, 62, 250, 93, 29, 63, 43, 8, 33, 63, 161, 27, 188, 62, 6, 141, 178, 62, 233, 156, 66, 63, 245, 38, 146, 62, 146, 111, 26, 190, 179, 233, 136, 63, 33, 188, 181, 62, 183, 215, 115, 61, 62, 223, 253, 61, 212, 174, 130, 61, 200, 58, 106, 61, 96, 76, 108, 63, 85, 200, 167, 62, 12, 196, 252, 189, 14, 41, 52, 191, 132, 50, 254, 62, 162, 167, 235, 62, 51, 123, 73, 63, 151, 55, 169, 61, 22, 218, 242, 61, 247, 30, 118, 190, 26, 202, 9, 63, 18, 138, 12, 191, 130, 165, 128, 191, 176, 91, 26, 191, 157, 128, 65, 189, 86, 176, 188, 62, 100, 169, 254, 61, 176, 105, 150, 189, 167, 45, 199, 190, 80, 127, 63, 59, 21, 179, 201, 190, 158, 26, 13, 62, 216, 44, 157, 190, 225, 81, 234, 62, 92, 212, 111, 63, 20, 52, 213, 62, 170, 197, 39, 62, 215, 86, 137, 62, 18, 199, 24, 191, 110, 66, 98, 63, 73, 225, 137, 191, 58, 13, 143, 190, 199, 152, 93, 63, 133, 156, 122, 63, 171, 186, 157, 62, 32, 139, 78, 190, 198, 92, 168, 63, 218, 195, 163, 62, 37, 11, 229, 60, 227, 171, 44, 62, 180, 30, 177, 190, 243, 182, 108, 62, 132, 190, 90, 63, 249, 40, 217, 62, 144, 106, 150, 190, 130, 63, 175, 191, 72, 186, 229, 190};
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
                alignas(float) const unsigned char memory[] = {141, 190, 19, 191, 245, 160, 244, 190, 105, 18, 111, 190, 39, 93, 16, 190, 179, 41, 186, 61, 129, 230, 127, 190, 219, 39, 160, 190, 106, 165, 27, 63, 166, 7, 180, 190, 32, 80, 175, 61, 191, 65, 137, 62, 18, 120, 81, 62, 237, 139, 12, 191, 40, 161, 15, 62, 130, 84, 187, 189, 117, 59, 51, 63, 86, 184, 180, 61, 201, 114, 18, 63, 100, 220, 227, 61, 45, 182, 89, 190, 12, 117, 175, 60, 112, 134, 157, 190, 171, 55, 230, 62, 106, 77, 250, 62, 148, 203, 130, 189, 156, 175, 91, 62, 38, 194, 191, 62, 185, 55, 195, 190, 205, 109, 1, 190, 143, 129, 223, 189, 74, 49, 152, 62, 205, 177, 231, 60};
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
                alignas(float) const unsigned char memory[] = {130, 71, 122, 188, 247, 241, 9, 190, 143, 99, 13, 61, 7, 199, 93, 189, 103, 234, 132, 189, 163, 45, 49, 190, 72, 143, 201, 189, 11, 86, 26, 62, 103, 228, 243, 189, 194, 163, 114, 189, 54, 199, 0, 190, 71, 215, 89, 61, 133, 192, 158, 61, 43, 65, 31, 189, 144, 163, 1, 190, 190, 60, 195, 189, 135, 25, 187, 189, 234, 207, 151, 187, 131, 150, 222, 189, 167, 58, 214, 189, 111, 191, 1, 62, 9, 237, 135, 60, 168, 85, 205, 189, 176, 205, 32, 190, 194, 25, 234, 189, 145, 66, 8, 61, 9, 60, 65, 189, 41, 6, 243, 189, 157, 221, 235, 59, 190, 6, 70, 61, 170, 147, 62, 190, 217, 64, 184, 61, 156, 136, 95, 62, 107, 116, 227, 190, 79, 81, 175, 190, 123, 1, 204, 61, 190, 193, 203, 190, 10, 72, 35, 63, 234, 14, 11, 190, 19, 47, 52, 189, 29, 69, 8, 61, 35, 136, 213, 61, 29, 128, 233, 61, 18, 97, 137, 189, 22, 247, 64, 190, 127, 235, 87, 190, 193, 76, 190, 188, 1, 81, 118, 62, 59, 70, 219, 189, 34, 152, 224, 61, 187, 24, 212, 189, 173, 16, 120, 189, 22, 162, 223, 190, 116, 135, 226, 189, 24, 6, 244, 61, 74, 195, 16, 189, 16, 48, 142, 190, 246, 116, 130, 62, 113, 143, 121, 62, 184, 247, 3, 191, 234, 159, 14, 190, 86, 164, 181, 190, 59, 222, 207, 61, 184, 237, 140, 190, 154, 135, 211, 61, 58, 219, 203, 189, 109, 84, 37, 62, 124, 253, 33, 189, 237, 206, 33, 189, 227, 160, 119, 189, 114, 82, 44, 189, 150, 36, 93, 61, 115, 83, 51, 61, 244, 198, 91, 62, 151, 61, 147, 62, 92, 238, 20, 62, 255, 76, 94, 188, 74, 186, 108, 62, 196, 209, 21, 62, 7, 124, 111, 61, 119, 22, 44, 189, 200, 171, 105, 188, 235, 237, 109, 189, 255, 14, 43, 188, 113, 134, 244, 61, 106, 201, 32, 189, 14, 224, 113, 62, 247, 108, 212, 190, 174, 137, 87, 62, 119, 234, 172, 189, 144, 208, 240, 61, 198, 112, 13, 62, 38, 145, 19, 190, 67, 233, 224, 189, 137, 242, 139, 62, 59, 197, 86, 62, 106, 205, 62, 187, 14, 71, 48, 62, 43, 56, 219, 190, 132, 170, 6, 60, 206, 156, 137, 190, 104, 28, 150, 62, 223, 43, 4, 191, 249, 62, 70, 62, 130, 89, 138, 61, 128, 225, 131, 62, 141, 144, 205, 61, 97, 198, 4, 61, 65, 62, 56, 190, 103, 55, 8, 190, 207, 138, 129, 189, 207, 166, 131, 190, 173, 45, 111, 190, 218, 188, 109, 62, 2, 179, 29, 189, 63, 57, 53, 62, 130, 58, 236, 58, 172, 111, 150, 190, 59, 218, 147, 189, 107, 92, 89, 190, 83, 36, 63, 190, 40, 20, 40, 62, 125, 244, 159, 62, 239, 138, 7, 191, 201, 55, 124, 190, 51, 101, 142, 190, 8, 47, 244, 61, 231, 75, 153, 188, 33, 47, 161, 60, 161, 65, 25, 190, 106, 144, 225, 61, 199, 40, 148, 189, 4, 153, 183, 188, 98, 114, 217, 59, 43, 196, 82, 188, 190, 125, 184, 61, 113, 124, 122, 189, 74, 207, 34, 189, 148, 135, 32, 62, 55, 245, 30, 189, 9, 241, 220, 61, 176, 102, 254, 188, 145, 239, 195, 189, 189, 39, 59, 60, 221, 140, 207, 189, 212, 70, 159, 187, 123, 124, 30, 190, 231, 164, 225, 60, 96, 251, 23, 190, 183, 218, 46, 189, 89, 6, 79, 189, 214, 145, 237, 188, 239, 241, 103, 61, 22, 76, 17, 190, 46, 132, 217, 189, 207, 240, 103, 61, 131, 68, 33, 62, 1, 11, 111, 58, 116, 89, 16, 190, 204, 136, 223, 61, 5, 90, 177, 189, 203, 170, 54, 62, 126, 202, 111, 189, 39, 114, 176, 61, 177, 112, 188, 62, 173, 252, 236, 189, 150, 33, 131, 62, 105, 94, 134, 188, 160, 167, 163, 189, 100, 22, 213, 188, 232, 123, 6, 191, 85, 155, 36, 189, 207, 237, 104, 62, 89, 49, 153, 60, 53, 4, 171, 189, 47, 197, 244, 60, 155, 129, 235, 189, 42, 225, 115, 189, 88, 108, 142, 188, 141, 224, 119, 189, 236, 15, 197, 61, 225, 155, 19, 62, 7, 203, 112, 60, 209, 205, 97, 62, 102, 72, 124, 61, 103, 162, 137, 188, 200, 218, 186, 190, 102, 192, 148, 61, 199, 126, 181, 62, 57, 172, 0, 62, 58, 153, 51, 62, 27, 14, 8, 189, 168, 221, 226, 189, 98, 76, 239, 60, 24, 192, 101, 190, 17, 27, 158, 61, 255, 130, 209, 189, 77, 6, 196, 61, 59, 183, 208, 188, 236, 52, 19, 62, 33, 51, 194, 189, 16, 194, 61, 62, 230, 146, 41, 190, 62, 246, 203, 60, 74, 51, 92, 190, 169, 207, 146, 58, 8, 13, 187, 61, 77, 172, 69, 61, 181, 224, 168, 59, 144, 179, 230, 189, 21, 83, 3, 61, 183, 23, 87, 190, 218, 110, 138, 190, 224, 29, 173, 61, 246, 226, 15, 59, 253, 133, 45, 62, 56, 192, 7, 190, 73, 75, 12, 62, 128, 13, 172, 61, 239, 229, 31, 190, 97, 66, 222, 189, 128, 60, 30, 191, 65, 10, 13, 190, 126, 15, 14, 191, 33, 125, 62, 62, 110, 86, 249, 190, 218, 163, 212, 190, 96, 132, 18, 62, 51, 101, 62, 191, 29, 122, 77, 62, 68, 114, 43, 190, 113, 80, 0, 190, 119, 244, 134, 61, 29, 244, 128, 60, 125, 240, 100, 61, 253, 142, 111, 59, 238, 105, 147, 190, 123, 56, 52, 190, 74, 74, 57, 61, 18, 71, 54, 62, 115, 101, 56, 62, 112, 178, 77, 62, 236, 131, 241, 189, 46, 124, 59, 190, 250, 19, 37, 191, 224, 17, 159, 61, 190, 138, 109, 62, 226, 39, 137, 190, 147, 43, 53, 190, 241, 14, 23, 62, 51, 125, 176, 62, 214, 227, 219, 190, 68, 194, 25, 61, 202, 68, 4, 191, 199, 243, 116, 189, 129, 96, 86, 190, 44, 124, 186, 188, 131, 86, 30, 190, 138, 62, 79, 62, 227, 241, 51, 188, 255, 153, 204, 61, 76, 35, 209, 189, 171, 223, 165, 61, 112, 184, 206, 189, 244, 166, 232, 189, 97, 66, 23, 189, 185, 34, 18, 61, 229, 74, 79, 62, 155, 212, 58, 62, 191, 80, 173, 60, 198, 96, 62, 61, 226, 112, 153, 62, 29, 175, 1, 62, 93, 214, 88, 62, 129, 159, 196, 62, 8, 231, 35, 190, 125, 230, 33, 61, 1, 82, 110, 190, 148, 61, 188, 61, 23, 59, 7, 62, 81, 218, 141, 61, 141, 102, 251, 187, 119, 183, 174, 61, 109, 197, 149, 62, 226, 123, 137, 187, 222, 122, 61, 62, 59, 66, 52, 62, 83, 113, 139, 62, 245, 163, 8, 190, 254, 189, 49, 191, 71, 141, 141, 190, 27, 123, 208, 61, 97, 41, 43, 191, 98, 160, 27, 62, 141, 105, 81, 190, 27, 49, 40, 57, 25, 197, 27, 190, 231, 170, 245, 188, 19, 216, 149, 190, 130, 246, 225, 61, 254, 118, 194, 190, 77, 248, 4, 190, 242, 237, 8, 61, 116, 107, 165, 62, 153, 232, 210, 189, 152, 90, 226, 61, 99, 243, 159, 190, 118, 110, 39, 61, 132, 107, 81, 191, 247, 112, 39, 190, 75, 133, 16, 62, 189, 84, 223, 188, 35, 43, 97, 190, 123, 101, 232, 187, 36, 180, 30, 62, 1, 80, 230, 190, 174, 118, 21, 190, 78, 243, 85, 191, 179, 85, 32, 62, 3, 164, 237, 190, 89, 140, 157, 61, 218, 78, 202, 190, 200, 104, 203, 190, 188, 198, 190, 60, 33, 220, 189, 190, 162, 151, 61, 62, 190, 30, 87, 190, 213, 2, 148, 189, 82, 151, 12, 62, 211, 58, 81, 60, 21, 219, 173, 190, 217, 213, 24, 62, 254, 88, 76, 190, 112, 86, 92, 61, 59, 198, 84, 62, 233, 232, 47, 62, 188, 78, 195, 59, 33, 49, 48, 62, 191, 219, 34, 62, 80, 18, 97, 190, 186, 75, 220, 190, 87, 240, 45, 62, 47, 196, 143, 61, 195, 227, 201, 61, 134, 84, 8, 59, 183, 79, 73, 62, 67, 48, 222, 62, 75, 203, 198, 190, 242, 153, 230, 189, 174, 187, 169, 190, 93, 185, 80, 62, 255, 254, 164, 190, 180, 188, 239, 61, 25, 76, 72, 190, 92, 170, 69, 190, 193, 207, 177, 61, 218, 176, 185, 190, 108, 248, 60, 62, 91, 30, 123, 190, 204, 44, 8, 61, 230, 33, 221, 189, 164, 165, 128, 62, 213, 6, 6, 190, 50, 195, 36, 189, 254, 230, 20, 190, 255, 249, 52, 62, 223, 183, 6, 62, 248, 60, 63, 61, 193, 112, 147, 61, 228, 141, 154, 61, 145, 176, 111, 189, 215, 149, 50, 190, 3, 138, 166, 190, 196, 225, 246, 61, 156, 166, 20, 62, 164, 194, 34, 187, 165, 101, 109, 61, 1, 239, 59, 62, 203, 65, 215, 62, 106, 199, 10, 191, 155, 149, 219, 61, 111, 249, 248, 190, 55, 251, 238, 60, 205, 230, 212, 190, 94, 93, 35, 62, 17, 20, 8, 62, 152, 69, 195, 189, 98, 217, 144, 61, 55, 251, 163, 61, 219, 213, 80, 61, 234, 251, 19, 190, 30, 3, 88, 62, 4, 89, 207, 189, 65, 28, 24, 62, 133, 48, 12, 189, 17, 193, 14, 62, 18, 211, 46, 189, 14, 186, 135, 61, 223, 55, 180, 189, 171, 253, 132, 62, 48, 206, 80, 190, 121, 39, 147, 61, 36, 47, 65, 62, 248, 146, 95, 189, 225, 252, 74, 189, 235, 125, 190, 189, 239, 145, 28, 61, 255, 98, 63, 62, 61, 187, 112, 61, 190, 97, 37, 62, 7, 184, 176, 61, 7, 18, 88, 190, 147, 41, 138, 187, 127, 228, 128, 190, 195, 98, 242, 61, 125, 200, 144, 189, 221, 160, 199, 190, 108, 69, 222, 190, 179, 78, 180, 62, 13, 108, 95, 189, 186, 249, 180, 190, 27, 105, 159, 190, 175, 97, 251, 188, 202, 185, 91, 61, 109, 197, 50, 62, 79, 20, 62, 190, 120, 245, 216, 61, 145, 121, 126, 62, 9, 220, 26, 62, 121, 97, 55, 189, 169, 206, 83, 190, 119, 204, 21, 62, 62, 228, 55, 60, 40, 144, 94, 189, 43, 114, 149, 60, 48, 31, 250, 187, 71, 108, 13, 190, 18, 119, 136, 190, 14, 82, 179, 61, 150, 99, 165, 188, 221, 20, 146, 62, 31, 78, 152, 190, 146, 43, 73, 190, 248, 213, 177, 62, 53, 166, 21, 190, 250, 39, 49, 190, 134, 136, 34, 190, 47, 90, 141, 62, 145, 152, 52, 189, 32, 43, 25, 190, 151, 46, 181, 62, 251, 48, 141, 189, 142, 31, 112, 190, 10, 103, 205, 189, 44, 97, 91, 62, 36, 151, 139, 189, 25, 44, 88, 61, 33, 139, 63, 62, 119, 152, 90, 190, 158, 220, 60, 62, 226, 210, 124, 62, 129, 179, 98, 62, 189, 7, 17, 62, 143, 250, 47, 190, 116, 214, 185, 189, 158, 133, 235, 57, 183, 242, 248, 61, 69, 134, 245, 188, 189, 232, 231, 61, 93, 119, 22, 62, 13, 203, 10, 191, 126, 107, 161, 190, 160, 0, 61, 61, 6, 85, 31, 189, 243, 61, 81, 190, 89, 119, 180, 62, 186, 35, 137, 189, 136, 28, 18, 189, 201, 59, 13, 62, 93, 218, 113, 61, 96, 243, 185, 190, 174, 184, 137, 61, 77, 28, 137, 61, 31, 247, 236, 188, 251, 33, 128, 62, 217, 120, 208, 190, 236, 181, 65, 61, 9, 225, 169, 61, 8, 159, 104, 189, 91, 60, 150, 190, 98, 22, 204, 189, 20, 7, 222, 61, 232, 97, 110, 62, 115, 129, 252, 189, 136, 135, 229, 61, 46, 2, 160, 187, 172, 121, 98, 60, 0, 109, 31, 190, 140, 237, 181, 61, 212, 27, 71, 188, 69, 92, 149, 61, 13, 39, 146, 61, 182, 203, 49, 62, 58, 110, 203, 62, 69, 92, 134, 189, 37, 25, 75, 190, 108, 96, 205, 190, 79, 7, 159, 62, 155, 167, 160, 62, 158, 206, 130, 62, 73, 26, 234, 188, 111, 159, 53, 188, 134, 201, 252, 189, 162, 178, 17, 62, 8, 77, 210, 189, 90, 122, 25, 61, 64, 237, 101, 61, 237, 159, 194, 61, 45, 59, 52, 190, 64, 43, 16, 190, 45, 119, 201, 188, 171, 233, 246, 188, 35, 66, 220, 189, 9, 238, 144, 189, 116, 78, 162, 187, 215, 212, 83, 189, 6, 255, 180, 189, 238, 119, 23, 189, 101, 50, 222, 189, 36, 18, 46, 190, 99, 87, 227, 188, 40, 10, 99, 189, 110, 114, 234, 189, 63, 147, 50, 188, 5, 142, 70, 189, 233, 155, 237, 59, 82, 82, 198, 61, 37, 89, 219, 189, 114, 75, 128, 189, 79, 46, 238, 59, 92, 162, 162, 61, 158, 53, 206, 189, 67, 165, 155, 61, 97, 140, 135, 187, 26, 116, 8, 190, 119, 126, 129, 59, 138, 123, 123, 61, 157, 214, 14, 190, 61, 15, 198, 189, 39, 22, 46, 190, 29, 71, 35, 190, 215, 179, 51, 190, 172, 30, 84, 189, 240, 173, 82, 61, 6, 130, 34, 61, 206, 157, 33, 190, 76, 156, 63, 59, 234, 165, 232, 61, 248, 193, 101, 59, 138, 105, 138, 189, 6, 158, 178, 187, 196, 22, 240, 189, 12, 178, 236, 189, 35, 25, 57, 190, 70, 122, 38, 62, 225, 89, 14, 190, 49, 78, 176, 61, 172, 247, 61, 189, 70, 134, 117, 187, 145, 196, 167, 189, 224, 232, 147, 61, 35, 84, 33, 62, 92, 202, 133, 189, 121, 72, 113, 61, 33, 146, 163, 61, 37, 109, 16, 190, 209, 106, 49, 190, 66, 132, 18, 61, 126, 199, 105, 190, 212, 245, 114, 191, 245, 19, 177, 61, 69, 186, 1, 191, 39, 228, 238, 190, 75, 9, 123, 61, 242, 76, 168, 60, 168, 132, 197, 190, 0, 144, 25, 62, 117, 79, 240, 190, 31, 175, 176, 60, 91, 2, 90, 191, 31, 3, 28, 62, 24, 139, 173, 62, 177, 113, 71, 60, 55, 158, 32, 190, 152, 33, 75, 190, 144, 6, 242, 190, 198, 26, 63, 62, 80, 247, 248, 59, 8, 203, 210, 61, 211, 152, 161, 62, 78, 123, 70, 191, 198, 152, 101, 190, 173, 205, 95, 190, 214, 202, 153, 190, 209, 192, 47, 63, 158, 126, 186, 189, 109, 76, 244, 59, 82, 24, 248, 61, 42, 59, 251, 189, 46, 60, 31, 62, 176, 109, 168, 62, 56, 136, 195, 188, 96, 53, 177, 62, 102, 227, 241, 190, 220, 178, 106, 61, 111, 91, 0, 62, 35, 160, 72, 189, 26, 53, 133, 190, 240, 33, 163, 61, 122, 76, 37, 62, 50, 79, 195, 61, 78, 217, 248, 61, 141, 206, 174, 189, 240, 2, 51, 189, 145, 189, 87, 61, 13, 184, 219, 60, 181, 172, 176, 62, 197, 143, 30, 61, 86, 248, 98, 189, 75, 179, 78, 190, 191, 86, 6, 61, 204, 155, 217, 61, 142, 52, 254, 61, 110, 78, 245, 189, 57, 199, 1, 190, 159, 40, 57, 62, 59, 179, 240, 60, 231, 192, 13, 62, 18, 143, 194, 61, 89, 206, 161, 61, 224, 181, 69, 190, 160, 239, 19, 62, 166, 185, 247, 62, 114, 236, 185, 190, 70, 240, 158, 61, 102, 173, 13, 191, 72, 170, 140, 60, 142, 171, 123, 62, 211, 248, 21, 189, 109, 235, 17, 188, 77, 253, 218, 61, 69, 47, 43, 62, 123, 109, 56, 61, 240, 250, 252, 61, 150, 76, 6, 191, 75, 158, 42, 62, 113, 161, 201, 190, 196, 50, 107, 189, 239, 140, 191, 62, 189, 244, 182, 61, 82, 199, 166, 61, 94, 173, 22, 191, 8, 2, 61, 62, 69, 20, 136, 62, 203, 159, 163, 62, 165, 201, 68, 190, 246, 92, 165, 190, 2, 79, 169, 62, 196, 193, 41, 191, 95, 69, 53, 62, 59, 182, 83, 190, 34, 149, 132, 187, 254, 33, 85, 62, 242, 0, 193, 189, 54, 52, 153, 190, 174, 108, 15, 61, 153, 46, 190, 190, 19, 69, 2, 63, 248, 146, 166, 190, 140, 53, 64, 190, 75, 44, 140, 189, 251, 51, 158, 62, 101, 135, 92, 189, 122, 49, 131, 190, 200, 11, 168, 190, 137, 191, 7, 62, 136, 211, 212, 62, 12, 196, 237, 60, 175, 148, 140, 62, 97, 162, 9, 62, 185, 231, 27, 190, 54, 24, 235, 189, 122, 128, 215, 189, 74, 32, 240, 61, 114, 233, 243, 189, 27, 195, 143, 61, 98, 139, 40, 190, 17, 117, 144, 62, 101, 6, 163, 62, 145, 123, 1, 191, 59, 231, 10, 62, 1, 81, 108, 190, 213, 168, 107, 62, 236, 60, 154, 190, 98, 121, 169, 190, 108, 79, 114, 62, 226, 195, 113, 62, 0, 152, 60, 190, 187, 225, 166, 62, 78, 17, 23, 191, 56, 129, 14, 61, 229, 105, 111, 62, 101, 109, 40, 190, 238, 222, 3, 190, 133, 201, 134, 62, 176, 88, 34, 62, 72, 146, 21, 60, 80, 222, 67, 62, 199, 100, 191, 190, 217, 139, 23, 61, 162, 47, 177, 190, 249, 132, 13, 189, 5, 29, 197, 62, 169, 248, 219, 60, 224, 241, 209, 61, 96, 95, 183, 190, 36, 153, 133, 60, 253, 106, 52, 62, 105, 78, 39, 62, 168, 99, 132, 189, 167, 233, 74, 190, 67, 22, 92, 62, 12, 100, 12, 191, 120, 6, 142, 60, 229, 205, 60, 190, 171, 127, 8, 189, 243, 26, 179, 189, 6, 28, 182, 189, 210, 185, 209, 190, 89, 121, 132, 62, 114, 121, 107, 189, 6, 133, 192, 190, 33, 177, 131, 190, 75, 39, 78, 190, 251, 129, 20, 62, 131, 145, 87, 190, 141, 147, 205, 190, 190, 7, 75, 190, 172, 204, 126, 190, 14, 67, 36, 190, 106, 174, 75, 62, 173, 42, 194, 62, 96, 50, 150, 62, 55, 121, 71, 189, 45, 17, 241, 190, 199, 90, 61, 190, 194, 140, 250, 190, 9, 39, 147, 61, 181, 74, 16, 62, 158, 168, 14, 62, 168, 188, 167, 189, 231, 10, 205, 62, 83, 228, 71, 62, 34, 46, 232, 190, 39, 182, 85, 62, 55, 238, 192, 189, 196, 99, 142, 62, 67, 165, 18, 191, 143, 113, 178, 62, 202, 97, 108, 190, 112, 76, 130, 189, 143, 22, 135, 61, 40, 119, 216, 187, 212, 54, 17, 62, 51, 21, 45, 190, 160, 107, 205, 61, 245, 167, 152, 61, 241, 15, 161, 62, 209, 127, 115, 189, 34, 176, 37, 189, 115, 220, 180, 190, 253, 234, 22, 62, 195, 142, 195, 60, 68, 7, 184, 61, 207, 201, 32, 62, 228, 222, 248, 61, 202, 92, 133, 190, 3, 29, 168, 189, 121, 247, 79, 190, 92, 82, 11, 62, 237, 20, 230, 60, 35, 55, 165, 188, 127, 87, 78, 190, 53, 10, 91, 62, 80, 73, 134, 62, 103, 111, 159, 190, 89, 179, 65, 62, 130, 66, 11, 191, 205, 6, 217, 61, 119, 234, 151, 190, 124, 235, 0, 62, 51, 211, 158, 61, 90, 12, 86, 61, 157, 205, 212, 189, 5, 161, 134, 61, 198, 125, 20, 62, 94, 232, 113, 60, 5, 15, 82, 190, 59, 205, 5, 62, 37, 227, 86, 190, 152, 127, 150, 61, 99, 122, 252, 189, 58, 128, 184, 189, 236, 160, 187, 61, 124, 97, 182, 188, 204, 134, 237, 60, 34, 17, 244, 61, 130, 84, 212, 189, 116, 13, 42, 61, 118, 140, 15, 190, 13, 225, 190, 60, 56, 59, 99, 189, 231, 65, 52, 190, 177, 20, 210, 189, 230, 65, 34, 190, 55, 206, 48, 61, 31, 226, 88, 188, 146, 13, 144, 189, 184, 180, 129, 61, 9, 108, 69, 190, 31, 130, 16, 189, 145, 108, 54, 189, 185, 64, 134, 60, 154, 179, 62, 189, 110, 196, 38, 190, 250, 212, 13, 62, 86, 2, 162, 189, 140, 46, 26, 189, 101, 252, 172, 61, 191, 226, 210, 59, 41, 148, 139, 188, 46, 122, 61, 60, 236, 246, 51, 189, 81, 246, 135, 59, 179, 80, 1, 190, 227, 67, 171, 189, 108, 71, 210, 189, 220, 92, 38, 190, 183, 134, 75, 61, 136, 141, 11, 190, 16, 136, 224, 61, 73, 167, 143, 60, 60, 184, 176, 189, 63, 206, 182, 61, 235, 90, 0, 62, 150, 172, 50, 58, 44, 155, 109, 189, 84, 175, 168, 60, 85, 168, 57, 61, 245, 71, 91, 190, 97, 101, 95, 190, 228, 145, 54, 190, 150, 230, 241, 61, 214, 233, 43, 188, 250, 208, 110, 190, 175, 78, 59, 189, 209, 245, 109, 62, 30, 240, 101, 190, 165, 220, 110, 62, 31, 25, 207, 190, 60, 22, 132, 189, 63, 62, 15, 62, 179, 203, 51, 188, 216, 119, 157, 188, 43, 67, 54, 61, 12, 8, 164, 62, 46, 227, 196, 61, 168, 23, 20, 189, 173, 206, 150, 190, 255, 19, 112, 61, 139, 34, 90, 190, 55, 239, 73, 189, 119, 46, 189, 62, 252, 116, 55, 189, 110, 244, 143, 62, 46, 53, 140, 189, 158, 41, 220, 189, 198, 88, 179, 61, 28, 58, 142, 61, 211, 69, 58, 190, 105, 229, 70, 189, 180, 255, 42, 62, 240, 232, 136, 190, 92, 122, 27, 62, 159, 203, 72, 190, 65, 58, 127, 189, 21, 2, 144, 62, 93, 101, 130, 189, 112, 232, 203, 190, 127, 184, 30, 62, 45, 9, 7, 190, 37, 94, 94, 62, 1, 47, 185, 190, 146, 228, 39, 190, 79, 4, 34, 189, 214, 60, 213, 60, 57, 164, 105, 190, 95, 130, 109, 62, 160, 175, 51, 190, 232, 193, 84, 61, 148, 10, 135, 189, 210, 198, 8, 62, 222, 5, 35, 190, 7, 211, 18, 61, 81, 203, 19, 61, 26, 166, 253, 60, 87, 193, 78, 189, 235, 87, 36, 190, 0, 166, 133, 61, 14, 76, 255, 61, 73, 134, 41, 190, 114, 169, 64, 62, 216, 238, 143, 62, 222, 63, 244, 190, 220, 158, 87, 190, 34, 215, 6, 191, 127, 94, 4, 62, 132, 123, 40, 190, 161, 128, 42, 62, 67, 182, 197, 61, 239, 233, 153, 61, 24, 151, 21, 190, 192, 71, 38, 190, 132, 59, 192, 189, 59, 118, 17, 188, 36, 142, 145, 188, 213, 104, 1, 62, 254, 1, 15, 190, 162, 2, 44, 61, 188, 209, 229, 61, 76, 255, 43, 62, 103, 79, 242, 189, 152, 4, 20, 190, 67, 11, 42, 190, 100, 116, 115, 59, 13, 82, 19, 190, 18, 234, 5, 189, 138, 12, 133, 189, 248, 104, 203, 189, 224, 188, 43, 190, 126, 19, 9, 62, 108, 20, 47, 190, 214, 217, 168, 61, 55, 90, 218, 61, 10, 169, 224, 61, 168, 91, 197, 189, 239, 120, 104, 58, 213, 135, 99, 61, 37, 6, 235, 189, 83, 118, 206, 189, 75, 129, 163, 62, 124, 22, 142, 190, 224, 36, 159, 189, 40, 85, 189, 61, 92, 133, 4, 62, 27, 181, 110, 190, 112, 231, 145, 188, 121, 131, 2, 189, 70, 210, 2, 190, 32, 151, 218, 189, 143, 34, 165, 190, 153, 84, 51, 61, 223, 51, 207, 189, 79, 169, 72, 189, 58, 68, 72, 62, 144, 12, 140, 62, 202, 108, 106, 62, 137, 194, 30, 190, 186, 216, 178, 62, 186, 119, 203, 61, 69, 135, 172, 61, 205, 158, 241, 188, 189, 46, 181, 61, 181, 203, 85, 190, 145, 193, 34, 62, 161, 44, 106, 62, 76, 73, 2, 62, 203, 126, 64, 62, 6, 67, 188, 60, 237, 4, 7, 189, 109, 195, 48, 62, 32, 208, 28, 191, 90, 155, 146, 190, 243, 76, 39, 61, 109, 82, 184, 62, 104, 13, 198, 189, 3, 210, 152, 62, 126, 45, 177, 190, 114, 151, 152, 187, 66, 147, 159, 62, 91, 155, 67, 60, 123, 16, 109, 190, 97, 61, 151, 62, 226, 72, 12, 61, 207, 181, 68, 187, 35, 165, 5, 61, 181, 188, 34, 191, 200, 100, 48, 62, 88, 215, 119, 191, 20, 234, 121, 188, 123, 46, 53, 61, 226, 64, 40, 61, 253, 152, 14, 188, 143, 22, 190, 60, 52, 227, 235, 61, 82, 3, 138, 62, 158, 66, 56, 190, 54, 186, 29, 190, 90, 115, 63, 190, 4, 28, 210, 59, 145, 254, 65, 191, 41, 177, 91, 62, 233, 144, 102, 191, 117, 208, 199, 189};
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
                alignas(float) const unsigned char memory[] = {75, 225, 159, 189, 26, 130, 43, 62, 193, 15, 15, 62, 155, 68, 206, 189, 219, 220, 50, 190, 169, 107, 9, 62, 187, 22, 162, 62, 87, 146, 60, 189, 120, 66, 181, 62, 160, 130, 20, 62, 241, 57, 234, 61, 209, 193, 150, 62, 228, 41, 147, 62, 197, 23, 237, 61, 29, 39, 141, 190, 201, 205, 104, 189, 233, 207, 149, 61, 81, 65, 207, 61, 167, 222, 24, 62, 82, 207, 250, 61, 112, 217, 72, 62, 140, 63, 134, 61, 250, 101, 156, 61, 57, 104, 147, 62, 101, 73, 34, 62, 72, 0, 244, 185, 104, 115, 17, 190, 128, 13, 117, 62, 56, 50, 1, 61, 255, 58, 37, 190, 35, 16, 121, 60, 123, 122, 177, 62};
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
                alignas(float) const unsigned char memory[] = {73, 237, 13, 190, 101, 87, 239, 62, 32, 44, 89, 190, 31, 102, 153, 62, 190, 128, 139, 60, 86, 33, 197, 62, 104, 108, 135, 62, 63, 221, 10, 63, 155, 128, 114, 190, 202, 98, 44, 63, 145, 199, 170, 62, 236, 50, 221, 62, 241, 80, 101, 59, 203, 222, 204, 190, 168, 103, 175, 62, 238, 131, 8, 63, 73, 6, 171, 60, 104, 95, 15, 62, 186, 116, 78, 63, 79, 120, 27, 190, 11, 122, 71, 191, 131, 18, 10, 63, 113, 163, 37, 191, 214, 104, 29, 63, 5, 221, 212, 62, 42, 115, 1, 61, 217, 234, 220, 189, 127, 215, 165, 190, 167, 223, 104, 62, 188, 197, 185, 189, 143, 236, 40, 190, 108, 112, 101, 191, 81, 214, 233, 61, 232, 93, 22, 62, 153, 247, 22, 190, 147, 100, 151, 62, 67, 134, 230, 189, 14, 154, 195, 60, 229, 130, 140, 190, 133, 31, 52, 62, 231, 129, 73, 190, 113, 207, 81, 190, 168, 100, 167, 190, 237, 28, 24, 190, 138, 230, 108, 190, 69, 158, 36, 62, 150, 62, 191, 62, 243, 212, 4, 61, 133, 96, 171, 61, 175, 174, 255, 61, 79, 60, 55, 62, 92, 26, 75, 60, 123, 87, 116, 61, 35, 188, 154, 62, 74, 147, 253, 59, 161, 155, 98, 62, 106, 120, 69, 190, 113, 230, 12, 189, 67, 182, 31, 190, 132, 110, 58, 190, 109, 87, 63, 190, 203, 145, 20, 190, 250, 70, 190, 189, 149, 101, 81, 189};
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
                alignas(float) const unsigned char memory[] = {186, 183, 76, 189, 69, 64, 130, 190};
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
    alignas(float) const unsigned char memory[] = {144, 82, 93, 63, 145, 11, 8, 62, 45, 207, 211, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {156, 105, 87, 190, 182, 124, 218, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0095/steps/000000000006000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
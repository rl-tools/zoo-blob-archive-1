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
                alignas(float) const unsigned char memory[] = {254, 215, 157, 190, 66, 54, 135, 190, 101, 163, 54, 62, 192, 191, 33, 190, 8, 160, 19, 190, 86, 34, 216, 190, 33, 29, 252, 62, 250, 234, 67, 62, 89, 183, 101, 190, 56, 95, 168, 190, 51, 129, 11, 63, 47, 163, 140, 190, 238, 81, 127, 62, 252, 105, 58, 62, 111, 181, 167, 190, 64, 170, 218, 62, 226, 122, 162, 62, 240, 178, 16, 61, 13, 130, 18, 191, 230, 106, 121, 61, 181, 233, 185, 62, 106, 5, 171, 190, 98, 254, 60, 62, 51, 69, 227, 62, 22, 231, 202, 189, 170, 236, 81, 189, 171, 227, 243, 60, 111, 226, 53, 190, 93, 46, 197, 190, 155, 218, 12, 63, 95, 58, 17, 190, 20, 250, 172, 190, 102, 114, 1, 191, 128, 150, 153, 62, 202, 22, 143, 62, 86, 99, 131, 190, 223, 253, 203, 61, 99, 98, 127, 190, 80, 198, 167, 189, 158, 223, 156, 61, 227, 242, 208, 189, 235, 72, 140, 188, 146, 240, 169, 188, 34, 68, 133, 61, 39, 166, 28, 62, 197, 173, 248, 62, 143, 82, 15, 191, 222, 21, 73, 62, 5, 4, 2, 63, 10, 167, 148, 62, 34, 62, 146, 189, 103, 11, 212, 62, 184, 130, 155, 61, 197, 38, 133, 62, 201, 95, 15, 63, 209, 10, 138, 190, 60, 58, 181, 190, 229, 152, 58, 62, 186, 172, 189, 62, 238, 142, 24, 62, 226, 250, 59, 62, 164, 229, 229, 188, 188, 3, 12, 191, 110, 214, 96, 61, 11, 48, 19, 189, 219, 128, 45, 189, 240, 62, 34, 62, 241, 65, 93, 62, 143, 87, 100, 188, 104, 156, 138, 62, 163, 252, 11, 63, 28, 113, 80, 62, 168, 153, 141, 190, 227, 13, 6, 191, 20, 185, 27, 62, 205, 84, 154, 60, 185, 49, 121, 62, 176, 197, 199, 61, 194, 180, 198, 190, 152, 77, 18, 62, 195, 218, 251, 190, 3, 34, 39, 190, 196, 16, 206, 62, 19, 182, 215, 61, 151, 44, 200, 62, 34, 253, 229, 190, 65, 8, 97, 190, 70, 5, 169, 62, 162, 56, 23, 189, 38, 231, 218, 190, 79, 145, 45, 61, 186, 173, 130, 190, 28, 116, 10, 61, 166, 228, 15, 191, 94, 232, 162, 190, 136, 164, 94, 190};
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
                alignas(float) const unsigned char memory[] = {38, 150, 19, 191, 181, 246, 95, 61, 30, 102, 192, 190, 123, 50, 130, 190, 203, 136, 196, 189, 89, 217, 192, 62, 86, 210, 100, 62, 21, 57, 94, 62, 169, 66, 217, 189, 109, 72, 198, 62, 85, 76, 12, 63, 182, 188, 215, 61, 40, 36, 35, 190, 165, 200, 228, 190, 249, 24, 150, 190, 196, 32, 217, 190, 25, 93, 152, 62, 133, 155, 211, 190, 113, 205, 158, 62, 5, 172, 82, 60, 34, 246, 15, 63, 164, 4, 146, 62, 238, 229, 4, 63, 8, 195, 42, 62, 162, 174, 80, 190, 187, 183, 10, 63, 28, 67, 113, 190, 124, 4, 113, 62, 103, 110, 180, 61, 92, 224, 211, 62, 103, 63, 51, 189, 126, 218, 24, 186};
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
                alignas(float) const unsigned char memory[] = {150, 152, 52, 60, 228, 167, 100, 187, 79, 218, 76, 61, 223, 50, 46, 62, 223, 54, 67, 189, 64, 218, 9, 62, 26, 219, 31, 190, 95, 130, 11, 188, 145, 181, 159, 61, 137, 234, 28, 61, 62, 159, 72, 61, 117, 156, 9, 62, 73, 157, 255, 61, 237, 114, 160, 61, 205, 92, 201, 61, 207, 107, 152, 188, 175, 122, 47, 190, 227, 3, 225, 189, 241, 21, 78, 60, 185, 80, 151, 188, 226, 95, 197, 188, 83, 236, 249, 189, 44, 26, 43, 189, 94, 236, 159, 61, 27, 59, 224, 60, 217, 187, 137, 61, 157, 61, 255, 59, 24, 206, 205, 61, 99, 227, 192, 60, 232, 226, 225, 61, 124, 134, 134, 61, 66, 45, 35, 190, 150, 184, 212, 189, 45, 164, 17, 62, 13, 35, 73, 61, 247, 192, 0, 62, 129, 223, 109, 61, 99, 118, 211, 189, 198, 236, 10, 190, 61, 212, 246, 189, 67, 214, 216, 189, 143, 17, 67, 189, 56, 246, 208, 60, 139, 112, 22, 190, 135, 184, 29, 61, 172, 133, 44, 62, 125, 227, 70, 60, 142, 193, 188, 60, 128, 75, 241, 61, 43, 134, 98, 189, 18, 32, 5, 59, 30, 225, 29, 190, 239, 41, 194, 189, 36, 6, 83, 61, 195, 71, 21, 61, 111, 119, 46, 190, 178, 181, 215, 189, 211, 62, 44, 60, 219, 143, 172, 189, 78, 79, 31, 190, 121, 15, 237, 61, 187, 129, 33, 190, 186, 188, 243, 61, 64, 254, 40, 190, 88, 245, 48, 62, 146, 58, 4, 188, 187, 150, 249, 61, 39, 130, 1, 62, 40, 138, 142, 61, 246, 200, 25, 190, 120, 9, 141, 189, 27, 129, 220, 61, 52, 175, 188, 61, 28, 86, 240, 189, 144, 34, 19, 62, 91, 254, 45, 62, 2, 241, 247, 61, 80, 216, 44, 61, 128, 111, 215, 58, 138, 253, 66, 61, 38, 203, 238, 59, 158, 91, 25, 62, 24, 179, 4, 62, 220, 74, 247, 61, 37, 137, 158, 60, 67, 54, 63, 188, 109, 118, 150, 61, 63, 160, 45, 62, 18, 141, 199, 61, 94, 133, 15, 189, 30, 122, 234, 61, 240, 202, 20, 190, 49, 51, 30, 190, 88, 184, 91, 189, 226, 217, 35, 188, 170, 238, 18, 190, 246, 178, 169, 60, 227, 57, 183, 189, 105, 233, 28, 60, 62, 194, 196, 61, 92, 137, 252, 60, 242, 39, 33, 62, 93, 105, 10, 62, 25, 36, 49, 190, 252, 234, 36, 190, 120, 162, 229, 187, 70, 59, 70, 189, 18, 138, 3, 62, 121, 188, 45, 62, 232, 208, 14, 62, 253, 108, 226, 187, 175, 87, 46, 190, 214, 109, 38, 62, 239, 3, 120, 61, 6, 71, 23, 62, 17, 133, 155, 189, 229, 23, 68, 61, 59, 233, 129, 189, 8, 252, 32, 190, 124, 108, 23, 190, 110, 175, 24, 62, 114, 220, 77, 61, 41, 225, 132, 61, 63, 51, 252, 61, 115, 103, 34, 188, 165, 106, 150, 189, 95, 171, 20, 190, 117, 216, 207, 61, 23, 188, 27, 190, 197, 46, 212, 61, 15, 33, 19, 61, 168, 7, 34, 190, 207, 86, 145, 60, 250, 143, 12, 62, 205, 71, 2, 62, 163, 232, 95, 60, 174, 199, 245, 189, 92, 70, 147, 60, 107, 246, 8, 190, 175, 101, 176, 189, 104, 162, 39, 190, 196, 198, 57, 189, 18, 112, 245, 188, 6, 23, 182, 189, 17, 159, 16, 62, 175, 243, 152, 189, 101, 230, 187, 189, 173, 232, 38, 190, 147, 11, 34, 190, 173, 232, 245, 61, 89, 22, 171, 188, 1, 173, 142, 61, 35, 57, 192, 189, 113, 204, 137, 61, 223, 28, 43, 190, 28, 159, 14, 62, 249, 45, 145, 188, 196, 160, 39, 190, 221, 188, 116, 61, 212, 230, 8, 62, 223, 183, 162, 61, 26, 57, 138, 188, 173, 76, 9, 189, 243, 158, 42, 190, 224, 148, 165, 61, 140, 188, 21, 62, 189, 112, 181, 61, 200, 134, 44, 190, 178, 218, 169, 189, 42, 17, 20, 62, 184, 193, 181, 189, 14, 68, 66, 61, 180, 146, 12, 190, 87, 237, 83, 61, 202, 99, 22, 190, 238, 165, 24, 62, 222, 184, 23, 62, 156, 123, 27, 62, 74, 91, 159, 59, 208, 123, 132, 61, 23, 56, 102, 61, 23, 167, 48, 189, 228, 125, 142, 189, 182, 163, 39, 190, 135, 14, 4, 190, 57, 169, 52, 190, 118, 162, 65, 61, 151, 227, 206, 61, 32, 35, 164, 61, 124, 52, 33, 189, 23, 200, 248, 60, 145, 208, 249, 189, 120, 64, 141, 61, 167, 107, 230, 189, 75, 24, 28, 190, 246, 208, 26, 190, 10, 184, 199, 188, 41, 169, 146, 60, 87, 135, 169, 60, 99, 249, 174, 189, 119, 74, 28, 190, 182, 178, 43, 62, 22, 102, 160, 189, 117, 20, 37, 189, 57, 53, 38, 61, 111, 115, 11, 188, 15, 53, 13, 62, 255, 98, 214, 61, 177, 173, 188, 61, 16, 166, 41, 190, 3, 16, 3, 62, 41, 179, 249, 61, 105, 196, 187, 188, 92, 168, 18, 62, 127, 250, 231, 61, 41, 205, 18, 190, 216, 112, 12, 59, 252, 151, 59, 189, 125, 41, 126, 189, 127, 55, 177, 61, 243, 45, 48, 62, 207, 242, 130, 189, 245, 250, 43, 62, 25, 41, 47, 189, 74, 221, 9, 190, 173, 182, 30, 189, 184, 127, 11, 58, 204, 19, 215, 61, 250, 125, 210, 61, 249, 249, 74, 189, 135, 161, 213, 61, 87, 37, 204, 189, 12, 137, 33, 62, 209, 112, 110, 187, 252, 4, 128, 60, 70, 175, 38, 189, 106, 141, 49, 62, 35, 140, 33, 190, 76, 202, 34, 62, 136, 95, 178, 61, 199, 98, 237, 61, 44, 127, 27, 61, 128, 114, 242, 189, 123, 22, 20, 62, 189, 30, 208, 189, 233, 123, 143, 61, 187, 15, 51, 62, 206, 120, 13, 190, 17, 237, 23, 62, 113, 42, 23, 189, 105, 20, 17, 190, 140, 42, 196, 188, 193, 115, 241, 189, 62, 123, 50, 190, 71, 113, 230, 61, 184, 106, 170, 188, 224, 2, 2, 61, 243, 59, 38, 189, 38, 213, 203, 189, 183, 228, 204, 189, 5, 74, 8, 61, 214, 159, 184, 189, 166, 5, 27, 190, 11, 84, 8, 62, 146, 47, 146, 189, 36, 163, 150, 189, 225, 250, 40, 62, 214, 113, 18, 190, 83, 207, 28, 190, 226, 47, 10, 62, 22, 184, 253, 60, 121, 158, 222, 61, 92, 82, 250, 61, 59, 181, 5, 62, 253, 199, 93, 61, 215, 225, 146, 188, 198, 115, 248, 189, 186, 100, 9, 60, 132, 255, 1, 190, 71, 248, 199, 60, 37, 204, 18, 62, 33, 142, 137, 189, 87, 52, 50, 61, 152, 48, 149, 61, 78, 240, 185, 188, 72, 4, 186, 59, 213, 74, 76, 189, 198, 77, 8, 60, 232, 40, 6, 61, 106, 231, 59, 60, 36, 172, 140, 61, 215, 212, 168, 61, 30, 177, 91, 189, 252, 177, 216, 61, 142, 44, 96, 189, 188, 211, 202, 61, 13, 91, 166, 188, 251, 109, 250, 189, 167, 87, 54, 61, 186, 148, 166, 61, 48, 103, 12, 190, 221, 217, 89, 60, 143, 137, 243, 60, 23, 150, 161, 61, 179, 58, 233, 189, 178, 248, 6, 62, 213, 210, 137, 189, 140, 191, 26, 189, 154, 189, 255, 59, 253, 146, 95, 59, 152, 3, 122, 61, 125, 221, 11, 190, 234, 68, 54, 59, 39, 83, 153, 61, 86, 197, 242, 188, 254, 169, 162, 61, 18, 141, 221, 189, 4, 140, 32, 62, 160, 187, 24, 61, 76, 11, 21, 190, 46, 245, 84, 188, 156, 80, 36, 61, 148, 148, 11, 59, 157, 127, 178, 61, 233, 230, 171, 61, 236, 41, 48, 61, 182, 254, 44, 190, 234, 70, 193, 59, 191, 218, 13, 62, 239, 252, 246, 61, 140, 13, 120, 187, 25, 16, 208, 60, 23, 120, 5, 62, 98, 93, 189, 60, 143, 159, 66, 189, 96, 20, 174, 61, 248, 198, 240, 189, 254, 175, 122, 61, 69, 131, 27, 62, 67, 52, 18, 62, 16, 123, 193, 61, 170, 205, 31, 186, 54, 146, 245, 59, 93, 108, 185, 61, 222, 88, 29, 188, 240, 65, 40, 62, 92, 12, 167, 60, 129, 21, 4, 62, 62, 144, 170, 189, 178, 23, 150, 188, 47, 235, 31, 60, 131, 130, 192, 186, 142, 87, 150, 187, 244, 44, 24, 189, 201, 81, 46, 189, 244, 155, 42, 189, 148, 141, 164, 188, 27, 160, 38, 61, 134, 228, 128, 189, 166, 90, 140, 61, 30, 204, 96, 189, 17, 36, 134, 60, 59, 44, 19, 62, 26, 239, 168, 61, 64, 152, 166, 61, 249, 22, 199, 188, 72, 255, 215, 189, 160, 106, 1, 62, 172, 156, 201, 188, 156, 104, 189, 60, 175, 153, 45, 61, 92, 94, 165, 189, 71, 153, 42, 190, 199, 67, 186, 61, 56, 116, 51, 190, 199, 129, 116, 61, 48, 104, 217, 189, 209, 123, 4, 190, 80, 42, 230, 189, 200, 177, 50, 62, 104, 3, 27, 190, 79, 239, 156, 189, 237, 144, 210, 61, 114, 187, 24, 190, 114, 195, 8, 62, 85, 100, 158, 183, 228, 6, 20, 61, 31, 56, 37, 188, 31, 244, 7, 190, 190, 254, 17, 190, 121, 172, 30, 62, 50, 6, 81, 61, 170, 213, 24, 189, 218, 97, 167, 61, 47, 208, 152, 61, 246, 129, 110, 60, 194, 202, 207, 59, 5, 181, 34, 62, 238, 95, 12, 62, 217, 195, 255, 189, 206, 83, 204, 61, 24, 5, 169, 189, 197, 253, 161, 189, 56, 115, 226, 188, 64, 122, 196, 188, 99, 253, 74, 189, 85, 247, 74, 61, 92, 41, 22, 190, 205, 72, 195, 59, 45, 212, 219, 61, 85, 217, 23, 190, 66, 210, 229, 189, 187, 220, 44, 62, 53, 149, 129, 189, 3, 168, 123, 61, 176, 24, 236, 189, 235, 139, 78, 189, 95, 88, 73, 189, 68, 88, 164, 61, 250, 73, 212, 189, 243, 40, 28, 62, 142, 75, 34, 62, 121, 205, 189, 61, 143, 40, 8, 190, 32, 27, 254, 60, 187, 64, 34, 190, 228, 2, 217, 189, 92, 56, 131, 189, 49, 107, 116, 61, 190, 247, 234, 189, 211, 66, 239, 59, 113, 74, 20, 61, 59, 33, 66, 60, 73, 196, 186, 61, 202, 210, 98, 61, 238, 91, 41, 62, 174, 32, 141, 61, 125, 157, 144, 189, 185, 90, 180, 61, 83, 218, 228, 61, 145, 195, 119, 60, 185, 115, 53, 189, 191, 125, 21, 61, 134, 8, 71, 188, 0, 190, 47, 190, 38, 142, 46, 62, 210, 32, 23, 62, 151, 118, 77, 189, 134, 180, 132, 189, 100, 145, 217, 189, 111, 102, 19, 189, 110, 63, 219, 61, 79, 94, 7, 61, 88, 125, 171, 60, 212, 245, 70, 61, 245, 230, 7, 61, 134, 231, 183, 61, 11, 36, 205, 189, 189, 242, 254, 61, 115, 1, 175, 189, 89, 251, 107, 189, 20, 132, 174, 61, 174, 74, 148, 189, 138, 252, 0, 189, 108, 20, 56, 59, 1, 52, 44, 190, 154, 246, 161, 189, 64, 56, 27, 190, 78, 119, 145, 61, 99, 198, 52, 190, 165, 225, 95, 189, 23, 130, 234, 189, 24, 223, 225, 189, 163, 158, 103, 61, 65, 228, 63, 61, 19, 242, 164, 60, 10, 146, 108, 61, 149, 71, 20, 190, 98, 184, 10, 62, 112, 74, 103, 189, 121, 157, 152, 61, 45, 43, 32, 62, 92, 171, 36, 190, 59, 156, 46, 190, 174, 53, 39, 60, 176, 110, 90, 61, 151, 39, 241, 60, 171, 198, 15, 62, 116, 209, 35, 190, 238, 100, 63, 60, 2, 147, 232, 61, 40, 255, 24, 62, 137, 13, 17, 190, 82, 123, 129, 61, 206, 132, 45, 62, 59, 114, 217, 61, 105, 84, 200, 61, 14, 244, 12, 188, 76, 71, 51, 60, 243, 99, 115, 61, 1, 235, 186, 189, 131, 254, 240, 61, 178, 204, 70, 189, 24, 207, 165, 189, 253, 92, 222, 61, 188, 207, 19, 62, 237, 239, 39, 189, 126, 180, 134, 188, 198, 171, 231, 61, 6, 27, 37, 62, 76, 49, 194, 189, 118, 19, 45, 62, 99, 186, 22, 190, 51, 51, 204, 189, 137, 50, 137, 61, 203, 201, 26, 190, 251, 29, 167, 61, 153, 219, 165, 60, 26, 98, 37, 62, 244, 113, 9, 190, 190, 86, 0, 62, 154, 174, 13, 189, 61, 202, 241, 189, 162, 145, 242, 189, 89, 219, 21, 190, 29, 100, 109, 61, 194, 41, 37, 61, 105, 69, 88, 189, 196, 49, 69, 185, 204, 10, 174, 60, 19, 0, 146, 188, 69, 23, 163, 189, 172, 21, 16, 62, 203, 243, 54, 189, 119, 159, 223, 189, 198, 17, 255, 61, 240, 7, 27, 190, 161, 189, 92, 188, 124, 159, 41, 190, 85, 11, 33, 190, 43, 227, 139, 189, 206, 204, 127, 187, 20, 192, 35, 62, 104, 168, 132, 189, 100, 103, 83, 61, 62, 172, 48, 190, 195, 213, 201, 61, 97, 184, 244, 188, 19, 218, 253, 188, 242, 197, 223, 188, 89, 173, 40, 62, 244, 34, 40, 190, 94, 218, 30, 190, 39, 67, 41, 190, 47, 54, 216, 61, 75, 74, 9, 190, 187, 32, 36, 190, 243, 57, 248, 189, 189, 7, 193, 61, 89, 196, 37, 190, 41, 38, 30, 190, 171, 45, 153, 61, 169, 236, 46, 190, 60, 196, 32, 62, 200, 122, 217, 61, 35, 83, 150, 60, 4, 131, 231, 61, 74, 100, 173, 189, 83, 242, 215, 61, 127, 91, 41, 62, 12, 23, 40, 61, 40, 60, 130, 189, 34, 108, 84, 60, 129, 82, 241, 61, 21, 50, 45, 62, 235, 93, 216, 61, 152, 205, 172, 189, 61, 208, 92, 188, 123, 36, 232, 61, 97, 46, 17, 62, 60, 119, 161, 189, 59, 127, 45, 61, 56, 1, 27, 190, 93, 173, 130, 61, 9, 54, 165, 61, 253, 234, 133, 189, 151, 11, 35, 190, 241, 239, 250, 188, 119, 45, 110, 189, 171, 127, 175, 189, 70, 21, 14, 62, 212, 112, 130, 188, 49, 25, 189, 60, 80, 35, 231, 61, 54, 193, 241, 60, 255, 178, 47, 189, 249, 254, 60, 189, 164, 33, 35, 190, 101, 239, 245, 188, 84, 240, 70, 189, 197, 34, 97, 61, 164, 130, 42, 189, 79, 145, 3, 61, 180, 9, 151, 188, 96, 204, 37, 190, 3, 41, 28, 61, 81, 58, 4, 62, 25, 109, 31, 62, 226, 105, 4, 190, 172, 53, 190, 188, 45, 36, 168, 61, 154, 107, 118, 189, 162, 170, 7, 61, 65, 226, 45, 190, 248, 239, 177, 189, 136, 221, 153, 189, 8, 98, 39, 190, 102, 129, 36, 190, 181, 222, 55, 61, 56, 218, 110, 188, 31, 147, 215, 187, 54, 164, 188, 61, 28, 243, 237, 189, 124, 118, 140, 189, 217, 95, 5, 190, 167, 138, 239, 61, 204, 160, 83, 61, 84, 153, 37, 61, 153, 61, 4, 189, 193, 163, 174, 61, 212, 152, 240, 189, 148, 49, 1, 62, 37, 67, 22, 190, 130, 218, 246, 61, 235, 209, 62, 189, 68, 182, 9, 62, 29, 169, 65, 60, 163, 199, 21, 189, 46, 108, 228, 189, 79, 251, 160, 188, 196, 228, 203, 60, 229, 163, 124, 61, 19, 10, 7, 61, 253, 78, 174, 61, 68, 121, 207, 187, 94, 186, 147, 59, 194, 212, 226, 61, 191, 141, 37, 61, 137, 10, 11, 62, 91, 92, 190, 189, 123, 65, 24, 62, 253, 164, 147, 61, 48, 12, 191, 60, 210, 167, 5, 190, 3, 84, 202, 61, 197, 102, 3, 62, 177, 98, 226, 60, 98, 77, 222, 189, 43, 74, 17, 59, 198, 58, 12, 62, 34, 41, 5, 189, 226, 3, 30, 190, 235, 170, 26, 62, 18, 229, 118, 61, 47, 126, 21, 62, 141, 87, 168, 188, 20, 100, 57, 61, 70, 239, 12, 190, 241, 39, 2, 62, 156, 190, 189, 61, 181, 112, 200, 61, 112, 85, 38, 190, 165, 21, 225, 188, 103, 11, 80, 189, 186, 57, 44, 62, 185, 192, 189, 61, 187, 97, 41, 62, 4, 112, 178, 61, 250, 63, 128, 189, 39, 40, 36, 61, 108, 216, 120, 61, 143, 59, 146, 60, 88, 49, 26, 190, 200, 131, 50, 189, 210, 80, 139, 61, 136, 249, 186, 189, 210, 83, 180, 59, 237, 158, 14, 190, 100, 50, 242, 60, 196, 3, 33, 62, 171, 11, 129, 189, 128, 187, 0, 190, 23, 102, 122, 189, 23, 253, 229, 188, 136, 86, 16, 62, 235, 218, 3, 190, 192, 228, 74, 189, 202, 6, 186, 61, 72, 21, 15, 188, 104, 16, 87, 189, 133, 135, 62, 59, 101, 36, 147, 61, 138, 72, 19, 62, 166, 44, 5, 62, 107, 170, 243, 61, 253, 110, 56, 189, 219, 244, 52, 190, 37, 116, 23, 62, 194, 153, 56, 188, 119, 102, 13, 62, 99, 60, 184, 61, 36, 234, 20, 62, 194, 77, 11, 61, 238, 65, 194, 189, 68, 18, 46, 188, 0, 240, 172, 188, 73, 184, 38, 62, 198, 96, 237, 189, 119, 8, 214, 60, 36, 152, 151, 59, 35, 141, 227, 188, 94, 228, 37, 190, 19, 63, 176, 189, 171, 151, 92, 60, 196, 19, 93, 60, 30, 21, 33, 62, 250, 226, 58, 188, 214, 134, 175, 189, 146, 50, 186, 189, 192, 169, 160, 60, 228, 39, 226, 61, 175, 165, 31, 62, 69, 46, 244, 61, 150, 169, 120, 189, 47, 71, 209, 60, 5, 31, 24, 62, 248, 209, 46, 62, 28, 158, 205, 189, 222, 7, 206, 61, 230, 251, 220, 61, 113, 121, 14, 62, 198, 236, 44, 61, 49, 212, 195, 188, 100, 27, 8, 190, 178, 38, 44, 62, 213, 103, 137, 189, 105, 173, 18, 190, 47, 67, 171, 189, 21, 45, 200, 189, 165, 62, 20, 190, 143, 163, 173, 58, 186, 33, 14, 188, 160, 133, 12, 190, 38, 162, 46, 190, 1, 32, 127, 188, 120, 182, 168, 189, 11, 55, 9, 189, 218, 176, 49, 190, 137, 65, 228, 59, 1, 156, 70, 61, 120, 168, 252, 59, 39, 120, 39, 190, 251, 147, 40, 190, 54, 142, 186, 60, 181, 55, 30, 190, 1, 152, 41, 60, 234, 235, 197, 60, 197, 235, 45, 190, 162, 77, 14, 61, 134, 28, 37, 190, 137, 7, 177, 186, 53, 190, 148, 189, 166, 171, 29, 62, 194, 211, 26, 190, 214, 120, 25, 62, 68, 137, 242, 189, 128, 181, 249, 61, 50, 6, 85, 61, 44, 109, 229, 61, 248, 53, 1, 62, 75, 24, 10, 62, 186, 131, 137, 189, 216, 237, 191, 60, 94, 42, 184, 189, 248, 11, 161, 61, 8, 6, 95, 61, 101, 66, 5, 62, 69, 88, 237, 61, 51, 113, 96, 61, 73, 176, 115, 189, 70, 182, 146, 189, 17, 198, 24, 190, 92, 209, 178, 189, 57, 77, 254, 61, 169, 25, 181, 189, 87, 196, 6, 62, 217, 204, 228, 61, 11, 200, 129, 189, 160, 174, 29, 190, 124, 223, 33, 189, 15, 108, 172, 61, 103, 11, 141, 61, 69, 185, 58, 189, 76, 37, 228, 188, 145, 147, 6, 61, 125, 57, 63, 189, 201, 250, 227, 189, 17, 142, 163, 61, 248, 70, 7, 62, 170, 202, 191, 58, 24, 121, 31, 190, 248, 152, 181, 189, 195, 156, 119, 189, 86, 172, 187, 61, 138, 160, 142, 61, 223, 244, 14, 190, 20, 99, 52, 62, 77, 13, 83, 61, 25, 244, 26, 62, 150, 160, 31, 62, 218, 100, 21, 62, 23, 108, 252, 61, 29, 234, 54, 61, 133, 235, 60, 189, 58, 73, 28, 62, 213, 75, 218, 61, 105, 182, 15, 59, 116, 77, 176, 61, 180, 98, 192, 61, 169, 117, 24, 190, 222, 48, 242, 61, 186, 44, 2, 190, 37, 153, 166, 61, 146, 60, 151, 59, 168, 241, 17, 62, 247, 159, 136, 61, 229, 218, 204, 61, 105, 252, 182, 59, 237, 97, 39, 62, 63, 115, 29, 62, 218, 9, 249, 61, 95, 157, 22, 190, 58, 67, 234, 187, 196, 217, 87, 61, 59, 36, 46, 61, 203, 50, 153, 60, 55, 248, 219, 186, 206, 28, 160, 61, 91, 162, 41, 62, 235, 252, 71, 188, 37, 247, 184, 189, 44, 188, 249, 189, 89, 95, 179, 61, 102, 114, 44, 190, 148, 26, 39, 62, 75, 249, 51, 62, 132, 174, 84, 188, 229, 50, 247, 188, 114, 96, 42, 190, 102, 21, 30, 190, 239, 10, 182, 61, 59, 170, 51, 190, 104, 109, 7, 62, 15, 89, 22, 188, 17, 149, 248, 188, 117, 163, 52, 190, 162, 250, 129, 61, 61, 79, 3, 60, 85, 156, 140, 187, 220, 132, 145, 59, 212, 100, 28, 61, 218, 224, 220, 60, 79, 122, 191, 189, 29, 112, 50, 62, 149, 73, 243, 189, 168, 149, 6, 189, 251, 28, 89, 60, 135, 226, 162, 188, 119, 109, 148, 189, 33, 24, 176, 189, 42, 235, 27, 190, 141, 54, 176, 189, 56, 17, 137, 189, 27, 106, 34, 62, 57, 31, 143, 189, 249, 32, 4, 189, 250, 205, 38, 190, 251, 138, 14, 62, 60, 54, 217, 61, 181, 199, 107, 189, 254, 70, 23, 190, 189, 60, 159, 61, 43, 30, 94, 61, 174, 204, 79, 189, 105, 22, 231, 61, 213, 90, 250, 188, 16, 98, 203, 189, 174, 189, 91, 61, 142, 153, 195, 61, 118, 24, 135, 61, 253, 154, 155, 189, 18, 4, 86, 61, 180, 169, 123, 189, 14, 203, 180, 61, 233, 168, 52, 190, 136, 200, 137, 61, 204, 168, 121, 61, 177, 34, 52, 62, 140, 85, 42, 62, 86, 161, 38, 62, 95, 14, 49, 190, 194, 80, 47, 62, 158, 88, 211, 189, 174, 112, 228, 61, 226, 232, 39, 62, 70, 239, 3, 189, 42, 156, 150, 189, 19, 140, 15, 61, 101, 0, 228, 187, 170, 90, 168, 61, 34, 208, 165, 189, 121, 86, 154, 61, 159, 49, 27, 62, 170, 161, 17, 190, 67, 193, 229, 61, 156, 31, 208, 187, 154, 168, 202, 60, 56, 200, 62, 59, 196, 212, 42, 62, 253, 26, 42, 190, 97, 83, 102, 61, 236, 10, 39, 61, 218, 248, 242, 189, 238, 127, 164, 61, 45, 249, 219, 61, 237, 66, 186, 188, 45, 78, 79, 61, 115, 245, 157, 188, 67, 211, 9, 62, 223, 82, 211, 61, 130, 145, 108, 61, 139, 247, 28, 190, 186, 194, 255, 60, 126, 140, 95, 61, 223, 187, 39, 62, 49, 156, 183, 189, 75, 109, 36, 61, 114, 213, 221, 61, 21, 148, 43, 61, 53, 161, 221, 61, 11, 115, 10, 62, 247, 134, 192, 61, 44, 72, 65, 189, 51, 50, 139, 189, 2, 116, 74, 60, 65, 166, 19, 62, 196, 252, 2, 62, 44, 128, 81, 189, 15, 112, 25, 190, 104, 186, 211, 188, 123, 164, 191, 61, 106, 84, 239, 61, 53, 127, 165, 61, 37, 214, 34, 62, 43, 180, 14, 62, 121, 30, 167, 189, 33, 46, 19, 189, 242, 77, 81, 189, 199, 198, 84, 189, 123, 13, 32, 190, 56, 44, 103, 189, 221, 69, 157, 60, 60, 171, 2, 190, 207, 48, 203, 188, 69, 240, 9, 189, 166, 20, 34, 61, 3, 79, 220, 60, 136, 91, 27, 62, 192, 231, 142, 61, 168, 1, 177, 60, 83, 1, 91, 61, 118, 83, 194, 189, 72, 191, 9, 62, 255, 133, 240, 189, 98, 139, 186, 60, 77, 221, 52, 62, 167, 140, 224, 61, 191, 9, 95, 61, 92, 230, 39, 190, 216, 98, 35, 190, 21, 177, 3, 61, 35, 163, 12, 62, 182, 163, 67, 61, 58, 151, 33, 190, 91, 194, 30, 62, 137, 221, 34, 61, 34, 23, 133, 61, 161, 244, 174, 61, 131, 255, 172, 57, 41, 113, 227, 189, 176, 230, 213, 189, 195, 171, 120, 59, 241, 76, 8, 62, 165, 59, 49, 190, 104, 155, 198, 61, 247, 255, 105, 187, 208, 14, 192, 61, 113, 130, 36, 188, 62, 17, 229, 189, 70, 138, 254, 187, 43, 236, 193, 189, 2, 244, 183, 189, 203, 0, 91, 61, 117, 68, 212, 189, 46, 106, 197, 188, 113, 141, 24, 62, 43, 213, 253, 187, 160, 221, 174, 189, 109, 39, 247, 60, 90, 155, 152, 61, 211, 105, 181, 61, 51, 50, 22, 189, 8, 140, 84, 189, 129, 239, 159, 61};
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
                alignas(float) const unsigned char memory[] = {187, 27, 234, 61, 159, 232, 138, 189, 45, 143, 149, 189, 159, 24, 201, 188, 180, 137, 27, 62, 40, 219, 22, 62, 159, 89, 16, 62, 140, 101, 47, 61, 127, 174, 253, 60, 23, 104, 45, 62, 228, 77, 28, 189, 173, 159, 130, 61, 221, 16, 232, 189, 89, 20, 129, 189, 144, 7, 29, 62, 54, 94, 228, 189, 69, 250, 183, 189, 148, 10, 146, 189, 214, 84, 161, 61, 7, 88, 220, 60, 36, 17, 105, 189, 25, 225, 182, 61, 156, 118, 11, 62, 190, 226, 130, 188, 22, 49, 39, 60, 59, 223, 241, 61, 145, 222, 58, 189, 129, 114, 164, 189, 207, 7, 156, 61, 12, 191, 11, 62, 146, 15, 3, 62, 104, 10, 112, 189};
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
                alignas(float) const unsigned char memory[] = {140, 92, 216, 61, 178, 113, 14, 61, 6, 152, 129, 61, 74, 125, 236, 60, 180, 56, 235, 61, 7, 119, 61, 189, 141, 237, 26, 61, 237, 132, 183, 60, 196, 54, 162, 188, 72, 173, 225, 189, 72, 74, 234, 189, 4, 24, 182, 189, 239, 102, 224, 61, 163, 11, 193, 189, 67, 48, 23, 61, 142, 43, 243, 189, 23, 18, 6, 190, 28, 109, 71, 59, 90, 197, 248, 189, 144, 14, 7, 190, 84, 244, 162, 61, 234, 49, 29, 62, 37, 201, 51, 62, 85, 217, 167, 61, 203, 140, 128, 60, 233, 231, 86, 188, 184, 227, 38, 62, 51, 115, 35, 190, 62, 165, 53, 61, 92, 192, 77, 61, 29, 193, 1, 189, 42, 120, 11, 61, 58, 222, 125, 61, 14, 63, 248, 61, 4, 18, 142, 61, 190, 84, 230, 189, 69, 9, 0, 190, 54, 114, 84, 61, 97, 215, 13, 190, 172, 36, 195, 61, 38, 210, 20, 190, 254, 237, 184, 61, 191, 184, 47, 190, 146, 76, 29, 62, 173, 6, 239, 61, 209, 185, 130, 61, 1, 132, 1, 62, 23, 67, 41, 190, 181, 154, 224, 61, 6, 11, 27, 62, 67, 125, 17, 190, 162, 106, 237, 188, 144, 129, 213, 61, 177, 214, 129, 189, 184, 15, 171, 61, 212, 31, 13, 190, 224, 44, 33, 190, 78, 172, 199, 189, 82, 71, 193, 61, 124, 176, 222, 61, 23, 135, 238, 187, 214, 26, 93, 188, 87, 240, 43, 62, 33, 226, 133, 188};
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
                alignas(float) const unsigned char memory[] = {194, 15, 3, 62, 104, 98, 250, 189};
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
    alignas(float) const unsigned char memory[] = {56, 34, 126, 191, 108, 249, 1, 61, 162, 235, 54, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {24, 185, 140, 62, 210, 222, 86, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0092/steps/000000000000000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
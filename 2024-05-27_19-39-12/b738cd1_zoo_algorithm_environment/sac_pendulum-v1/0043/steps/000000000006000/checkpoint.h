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
                alignas(float) const unsigned char memory[] = {21, 87, 175, 62, 232, 83, 195, 189, 209, 183, 20, 191, 65, 209, 225, 190, 157, 254, 244, 189, 118, 136, 18, 63, 145, 45, 141, 190, 160, 47, 30, 63, 76, 140, 52, 62, 113, 15, 233, 62, 144, 152, 67, 191, 68, 110, 133, 189, 176, 129, 223, 62, 209, 32, 50, 63, 173, 219, 0, 63, 184, 102, 73, 191, 187, 72, 160, 63, 177, 236, 196, 62, 19, 98, 30, 191, 0, 79, 109, 189, 229, 81, 18, 63, 191, 198, 102, 63, 57, 121, 73, 191, 61, 17, 66, 190, 106, 47, 51, 191, 49, 222, 245, 188, 10, 146, 42, 61, 129, 98, 248, 61, 241, 82, 164, 190, 97, 253, 165, 190, 107, 90, 145, 188, 250, 123, 94, 62, 243, 53, 1, 191, 210, 122, 155, 189, 236, 49, 73, 63, 147, 93, 219, 62, 50, 99, 230, 189, 136, 163, 81, 62, 117, 63, 205, 190, 0, 116, 137, 190, 124, 2, 114, 62, 41, 93, 213, 190, 113, 192, 133, 190, 49, 239, 9, 191, 218, 6, 210, 62, 37, 65, 137, 190, 121, 250, 136, 61, 222, 159, 44, 191, 231, 17, 104, 63, 66, 192, 46, 63, 77, 135, 22, 63, 237, 3, 205, 190, 72, 189, 44, 191, 71, 84, 35, 63, 144, 183, 224, 190, 152, 200, 99, 191, 255, 101, 207, 190, 33, 81, 10, 191, 53, 105, 3, 63, 37, 31, 5, 63, 166, 118, 87, 190, 252, 159, 60, 61, 11, 99, 185, 190, 168, 16, 9, 63, 146, 155, 252, 189, 59, 169, 11, 63, 83, 88, 140, 190, 180, 96, 48, 191, 38, 192, 195, 187, 193, 64, 53, 63, 250, 16, 100, 191, 72, 33, 150, 190, 76, 16, 61, 191, 192, 196, 222, 190, 62, 2, 198, 190, 144, 113, 40, 63, 131, 68, 39, 63, 232, 93, 120, 62, 214, 218, 246, 190, 240, 173, 128, 190, 80, 171, 129, 189, 111, 86, 78, 63, 29, 97, 184, 190, 23, 177, 27, 63, 210, 17, 221, 61, 180, 130, 202, 190, 8, 206, 184, 190, 150, 160, 90, 62, 96, 15, 121, 62, 16, 64, 162, 62, 196, 13, 49, 63, 10, 117, 9, 191, 153, 148, 164, 190, 24, 28, 235, 190, 98, 138, 29, 191, 136, 112, 61, 62};
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
                alignas(float) const unsigned char memory[] = {183, 65, 65, 191, 124, 41, 119, 62, 156, 63, 54, 63, 229, 61, 116, 188, 2, 176, 41, 190, 237, 158, 4, 62, 220, 36, 115, 190, 69, 0, 106, 61, 192, 101, 75, 62, 191, 137, 99, 188, 220, 197, 235, 62, 235, 213, 114, 62, 172, 158, 78, 63, 105, 47, 96, 190, 210, 186, 199, 62, 203, 216, 190, 189, 162, 144, 99, 189, 122, 137, 31, 62, 63, 208, 156, 190, 108, 186, 127, 60, 32, 47, 216, 190, 43, 224, 250, 190, 238, 27, 236, 62, 108, 72, 153, 190, 120, 33, 12, 191, 129, 85, 6, 61, 74, 152, 30, 63, 119, 217, 31, 62, 253, 101, 72, 190, 204, 206, 49, 191, 188, 177, 52, 191, 242, 227, 128, 190};
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
                alignas(float) const unsigned char memory[] = {32, 5, 213, 189, 117, 81, 66, 190, 228, 70, 107, 58, 120, 231, 73, 190, 138, 73, 136, 62, 175, 20, 130, 61, 189, 190, 134, 190, 31, 62, 158, 61, 224, 223, 226, 189, 255, 253, 191, 61, 248, 110, 173, 189, 161, 72, 19, 62, 50, 191, 86, 190, 248, 71, 54, 62, 27, 99, 149, 189, 126, 113, 254, 188, 142, 21, 187, 62, 113, 23, 224, 189, 34, 66, 81, 62, 129, 96, 100, 190, 129, 76, 204, 60, 0, 174, 19, 62, 250, 78, 149, 189, 186, 238, 130, 190, 1, 244, 156, 62, 31, 238, 180, 59, 91, 78, 67, 189, 234, 215, 55, 62, 246, 130, 23, 187, 205, 237, 13, 62, 13, 180, 208, 189, 3, 178, 190, 62, 45, 226, 250, 189, 222, 154, 53, 62, 28, 179, 148, 189, 23, 37, 106, 189, 118, 160, 25, 62, 160, 144, 63, 189, 120, 66, 229, 61, 10, 206, 19, 190, 178, 49, 36, 190, 33, 99, 135, 61, 212, 85, 121, 190, 27, 176, 151, 189, 139, 130, 64, 190, 55, 172, 47, 190, 22, 54, 167, 189, 178, 138, 32, 62, 100, 234, 132, 61, 95, 205, 34, 190, 111, 105, 32, 190, 20, 72, 42, 62, 80, 19, 165, 60, 74, 5, 114, 62, 93, 198, 189, 189, 50, 165, 79, 190, 185, 137, 0, 62, 170, 192, 132, 62, 230, 42, 231, 190, 245, 170, 48, 62, 184, 110, 92, 61, 58, 3, 54, 61, 37, 200, 24, 189, 21, 252, 87, 62, 236, 51, 26, 190, 208, 163, 42, 61, 215, 175, 144, 62, 100, 181, 133, 190, 207, 176, 135, 189, 125, 226, 8, 191, 40, 198, 205, 189, 218, 131, 166, 190, 127, 79, 150, 62, 180, 182, 241, 188, 11, 52, 238, 61, 100, 114, 26, 190, 147, 181, 190, 61, 230, 114, 34, 61, 61, 110, 33, 190, 168, 25, 44, 189, 137, 80, 35, 62, 168, 27, 252, 188, 217, 193, 2, 190, 94, 101, 200, 190, 172, 166, 55, 189, 239, 196, 42, 188, 119, 114, 233, 187, 116, 89, 168, 190, 55, 168, 152, 61, 59, 11, 197, 62, 81, 104, 73, 189, 74, 117, 166, 188, 99, 151, 70, 61, 179, 168, 144, 189, 173, 89, 71, 190, 193, 213, 120, 63, 243, 154, 128, 61, 32, 31, 129, 190, 198, 198, 183, 190, 169, 107, 197, 190, 200, 87, 74, 62, 61, 172, 185, 190, 182, 182, 38, 190, 242, 138, 22, 191, 254, 216, 12, 189, 51, 63, 189, 61, 138, 14, 95, 62, 159, 63, 92, 59, 64, 64, 33, 62, 93, 49, 222, 61, 154, 40, 57, 190, 79, 91, 190, 61, 126, 106, 255, 189, 249, 58, 138, 190, 218, 147, 152, 62, 211, 139, 252, 189, 243, 253, 89, 62, 97, 148, 132, 190, 90, 131, 141, 190, 55, 132, 64, 190, 138, 232, 140, 186, 155, 15, 203, 190, 210, 174, 73, 190, 64, 211, 38, 189, 20, 249, 7, 190, 188, 51, 141, 61, 80, 55, 11, 190, 114, 235, 173, 62, 219, 70, 134, 189, 253, 228, 58, 189, 51, 114, 203, 61, 77, 92, 123, 61, 30, 129, 185, 60, 22, 43, 250, 188, 222, 54, 27, 189, 222, 2, 138, 62, 174, 108, 55, 190, 2, 39, 12, 62, 230, 107, 215, 61, 54, 154, 22, 190, 169, 19, 242, 61, 56, 227, 116, 189, 19, 27, 250, 61, 204, 35, 50, 190, 191, 171, 229, 188, 24, 220, 1, 62, 202, 65, 178, 190, 218, 184, 217, 60, 35, 249, 111, 189, 111, 111, 198, 189, 88, 205, 86, 189, 7, 213, 236, 61, 147, 51, 181, 190, 248, 112, 226, 189, 10, 89, 234, 188, 93, 128, 208, 61, 241, 225, 17, 61, 253, 109, 33, 190, 240, 26, 21, 189, 20, 97, 244, 189, 0, 126, 59, 62, 148, 237, 153, 188, 210, 255, 75, 60, 23, 100, 241, 62, 187, 98, 212, 189, 238, 153, 18, 62, 183, 184, 208, 61, 149, 32, 15, 62, 74, 131, 12, 62, 204, 5, 187, 61, 111, 66, 238, 60, 81, 175, 9, 190, 42, 242, 31, 62, 86, 0, 88, 190, 230, 174, 77, 62, 111, 228, 40, 190, 152, 112, 47, 190, 107, 32, 81, 189, 111, 125, 55, 191, 206, 108, 28, 62, 210, 241, 11, 190, 38, 139, 145, 61, 85, 113, 158, 61, 100, 35, 16, 62, 217, 21, 16, 191, 244, 189, 233, 189, 31, 206, 148, 62, 79, 52, 66, 189, 243, 242, 45, 61, 222, 148, 56, 189, 65, 73, 144, 61, 247, 120, 121, 190, 217, 112, 98, 62, 208, 191, 188, 187, 21, 56, 120, 62, 199, 121, 3, 190, 189, 33, 2, 190, 170, 22, 184, 190, 157, 20, 250, 189, 95, 162, 144, 62, 30, 38, 57, 191, 203, 161, 53, 60, 0, 103, 177, 61, 107, 113, 78, 190, 245, 66, 70, 189, 140, 206, 122, 61, 238, 195, 5, 188, 65, 27, 207, 61, 49, 30, 61, 189, 127, 112, 191, 187, 24, 37, 107, 190, 164, 187, 116, 190, 12, 220, 155, 60, 198, 234, 14, 190, 61, 4, 253, 189, 177, 25, 252, 190, 182, 40, 145, 190, 124, 163, 126, 62, 217, 200, 79, 190, 27, 132, 217, 61, 178, 184, 171, 188, 222, 255, 196, 189, 4, 237, 66, 191, 144, 30, 24, 190, 80, 93, 156, 187, 26, 142, 100, 61, 104, 186, 36, 190, 225, 71, 151, 189, 135, 39, 42, 190, 152, 26, 38, 189, 119, 64, 167, 61, 103, 24, 133, 61, 107, 1, 239, 61, 251, 234, 11, 190, 76, 107, 21, 58, 75, 206, 33, 190, 207, 185, 18, 62, 193, 140, 37, 62, 156, 155, 26, 190, 111, 110, 25, 190, 166, 193, 0, 190, 195, 119, 208, 189, 174, 168, 25, 61, 47, 199, 25, 190, 152, 108, 38, 61, 142, 32, 31, 61, 89, 174, 162, 189, 15, 20, 239, 189, 196, 68, 167, 59, 222, 130, 226, 189, 79, 200, 200, 61, 57, 86, 189, 59, 113, 211, 240, 189, 219, 148, 177, 61, 23, 34, 146, 188, 38, 177, 253, 61, 7, 255, 159, 189, 232, 84, 57, 61, 157, 85, 17, 61, 210, 235, 4, 62, 84, 189, 3, 62, 22, 7, 40, 190, 146, 3, 42, 189, 240, 2, 171, 61, 22, 150, 15, 190, 140, 106, 27, 62, 139, 228, 70, 190, 218, 10, 1, 61, 122, 199, 100, 190, 12, 217, 104, 61, 229, 104, 161, 189, 242, 135, 243, 189, 77, 149, 29, 61, 183, 214, 156, 189, 47, 73, 194, 60, 81, 233, 225, 61, 17, 51, 251, 189, 71, 18, 183, 61, 184, 164, 41, 190, 182, 241, 26, 190, 68, 183, 35, 190, 32, 180, 179, 61, 16, 169, 183, 190, 62, 44, 218, 189, 31, 141, 44, 190, 116, 5, 184, 189, 44, 100, 9, 62, 140, 149, 254, 59, 199, 16, 196, 61, 42, 63, 103, 189, 227, 92, 86, 190, 11, 108, 13, 191, 9, 19, 34, 62, 167, 41, 235, 189, 175, 162, 239, 189, 172, 28, 61, 190, 177, 110, 65, 190, 154, 34, 39, 190, 147, 165, 61, 61, 235, 104, 152, 189, 70, 217, 192, 188, 169, 42, 0, 62, 228, 35, 77, 190, 71, 18, 37, 61, 121, 51, 35, 62, 195, 186, 143, 189, 226, 198, 163, 59, 9, 165, 66, 190, 74, 73, 90, 62, 161, 70, 146, 189, 142, 90, 5, 191, 3, 189, 152, 189, 49, 183, 77, 62, 200, 232, 48, 188, 234, 252, 188, 190, 5, 203, 44, 62, 204, 217, 147, 61, 15, 225, 250, 61, 251, 88, 109, 62, 136, 73, 24, 190, 172, 48, 5, 63, 211, 56, 39, 62, 9, 100, 40, 62, 64, 230, 87, 62, 219, 215, 218, 189, 134, 42, 65, 62, 125, 126, 58, 62, 44, 221, 248, 60, 5, 139, 102, 62, 103, 47, 20, 190, 76, 171, 210, 189, 3, 105, 208, 189, 202, 108, 65, 62, 69, 226, 67, 191, 232, 238, 10, 62, 114, 127, 168, 190, 233, 247, 191, 190, 218, 203, 225, 60, 129, 226, 200, 190, 123, 1, 91, 61, 109, 161, 186, 190, 112, 130, 149, 190, 79, 0, 5, 62, 41, 194, 81, 62, 48, 113, 167, 190, 62, 17, 139, 189, 234, 64, 208, 62, 142, 49, 218, 190, 239, 134, 118, 60, 110, 103, 239, 189, 58, 59, 27, 63, 142, 110, 9, 60, 68, 162, 180, 62, 178, 143, 28, 62, 112, 173, 98, 190, 237, 105, 174, 62, 79, 223, 117, 190, 62, 126, 33, 62, 228, 213, 186, 62, 147, 218, 207, 62, 255, 12, 8, 60, 20, 52, 125, 187, 222, 129, 99, 62, 225, 5, 209, 188, 109, 221, 246, 61, 220, 54, 17, 190, 240, 157, 173, 62, 57, 83, 72, 190, 135, 189, 221, 190, 22, 149, 231, 61, 181, 24, 231, 190, 120, 202, 160, 62, 250, 171, 55, 190, 224, 204, 154, 190, 98, 233, 226, 61, 243, 22, 209, 62, 178, 27, 12, 191, 202, 254, 59, 190, 188, 83, 146, 62, 50, 159, 49, 190, 126, 252, 189, 61, 25, 249, 212, 190, 48, 184, 63, 62, 46, 165, 26, 190, 117, 42, 53, 62, 134, 97, 243, 60, 184, 117, 222, 188, 123, 27, 86, 60, 54, 192, 147, 61, 116, 87, 40, 190, 212, 38, 138, 60, 13, 218, 56, 189, 194, 249, 167, 189, 148, 11, 177, 188, 91, 225, 208, 189, 47, 179, 29, 190, 194, 28, 145, 188, 233, 61, 220, 189, 157, 196, 46, 190, 48, 193, 216, 61, 248, 66, 208, 60, 164, 18, 40, 190, 28, 246, 240, 189, 241, 238, 90, 61, 174, 144, 19, 189, 229, 137, 22, 189, 137, 220, 146, 189, 113, 157, 140, 189, 147, 44, 12, 189, 130, 132, 152, 61, 183, 191, 172, 61, 196, 78, 14, 190, 86, 124, 249, 189, 36, 44, 84, 61, 105, 45, 13, 62, 181, 122, 172, 61, 29, 153, 181, 189, 20, 64, 198, 189, 222, 23, 196, 61, 198, 144, 2, 190, 22, 246, 41, 62, 31, 117, 219, 188, 164, 215, 27, 190, 178, 191, 236, 188, 168, 9, 50, 190, 87, 138, 199, 189, 186, 93, 26, 61, 147, 11, 61, 190, 58, 250, 129, 61, 22, 117, 7, 62, 189, 56, 61, 190, 55, 201, 71, 62, 48, 241, 12, 62, 61, 133, 95, 190, 71, 101, 92, 189, 235, 81, 110, 61, 83, 195, 232, 60, 76, 36, 164, 189, 8, 178, 168, 61, 123, 114, 106, 190, 63, 114, 41, 62, 152, 197, 130, 61, 27, 35, 154, 189, 235, 214, 15, 62, 8, 48, 47, 190, 49, 150, 212, 61, 231, 205, 148, 59, 103, 84, 15, 62, 213, 212, 23, 189, 121, 128, 63, 187, 172, 172, 37, 190, 67, 51, 32, 190, 217, 64, 186, 188, 111, 215, 2, 62, 216, 132, 143, 189, 230, 242, 2, 190, 40, 136, 142, 61, 4, 42, 248, 61, 242, 84, 134, 61, 174, 168, 100, 59, 238, 57, 44, 61, 239, 52, 68, 188, 185, 22, 157, 61, 160, 93, 162, 61, 148, 88, 156, 189, 222, 132, 122, 190, 85, 144, 186, 189, 19, 48, 125, 60, 165, 57, 95, 190, 42, 169, 99, 187, 115, 170, 137, 189, 91, 184, 98, 60, 206, 25, 183, 189, 128, 185, 67, 189, 58, 136, 22, 190, 155, 76, 89, 190, 33, 184, 219, 60, 31, 29, 124, 61, 65, 69, 33, 62, 25, 108, 133, 190, 107, 59, 133, 188, 114, 201, 222, 189, 208, 185, 158, 188, 165, 136, 177, 190, 1, 136, 56, 190, 65, 77, 144, 190, 81, 134, 80, 190, 53, 45, 72, 61, 221, 223, 233, 190, 96, 141, 63, 62, 174, 75, 2, 62, 69, 176, 226, 189, 32, 227, 73, 61, 160, 231, 239, 188, 37, 168, 23, 61, 19, 57, 1, 62, 248, 1, 42, 62, 236, 127, 7, 190, 58, 213, 115, 190, 0, 208, 155, 190, 33, 125, 207, 61, 232, 16, 154, 61, 72, 155, 43, 62, 213, 136, 84, 191, 192, 8, 170, 190, 180, 50, 14, 62, 25, 189, 182, 190, 121, 183, 41, 62, 109, 253, 105, 61, 153, 246, 133, 190, 248, 157, 9, 191, 18, 209, 207, 189, 12, 93, 149, 62, 178, 245, 125, 60, 159, 4, 129, 189, 134, 132, 110, 62, 111, 57, 204, 61, 121, 148, 185, 189, 86, 239, 105, 57, 187, 84, 103, 60, 90, 80, 247, 190, 149, 251, 62, 188, 36, 51, 45, 190, 102, 177, 12, 62, 6, 251, 112, 190, 185, 213, 182, 60, 246, 66, 23, 187, 235, 200, 141, 61, 78, 252, 40, 62, 43, 18, 188, 189, 160, 180, 191, 189, 98, 106, 188, 189, 57, 200, 250, 59, 16, 237, 134, 61, 196, 83, 90, 190, 212, 85, 125, 62, 195, 47, 87, 61, 185, 103, 42, 62, 119, 82, 97, 190, 202, 201, 13, 189, 78, 73, 145, 61, 159, 105, 145, 61, 206, 148, 46, 62, 2, 193, 68, 62, 246, 74, 242, 190, 42, 251, 52, 191, 137, 167, 88, 62, 129, 97, 146, 190, 219, 31, 66, 190, 121, 65, 57, 191, 9, 229, 67, 191, 62, 72, 233, 190, 157, 118, 178, 61, 236, 192, 70, 189, 119, 193, 131, 62, 137, 148, 176, 190, 213, 250, 85, 62, 60, 124, 14, 188, 2, 102, 89, 191, 170, 238, 0, 61, 95, 253, 49, 62, 14, 149, 169, 190, 151, 120, 51, 61, 57, 110, 28, 191, 107, 93, 254, 189, 141, 202, 23, 189, 57, 73, 29, 62, 85, 253, 24, 191, 247, 59, 46, 62, 151, 174, 159, 62, 71, 171, 146, 62, 213, 207, 59, 190, 131, 216, 25, 190, 249, 205, 211, 189, 120, 227, 202, 190, 84, 123, 96, 63, 221, 42, 249, 188, 127, 194, 31, 188, 223, 21, 130, 61, 61, 225, 20, 62, 123, 221, 149, 188, 34, 122, 12, 190, 22, 39, 27, 190, 233, 172, 219, 58, 0, 219, 51, 190, 243, 185, 48, 61, 227, 229, 167, 189, 138, 143, 42, 62, 198, 76, 220, 189, 22, 63, 152, 189, 178, 177, 241, 189, 84, 212, 246, 189, 219, 161, 121, 189, 140, 44, 108, 189, 170, 31, 78, 187, 212, 222, 24, 62, 192, 149, 8, 190, 138, 51, 238, 189, 18, 78, 43, 190, 56, 144, 128, 189, 13, 181, 176, 60, 225, 45, 23, 190, 224, 236, 238, 59, 236, 102, 253, 189, 110, 217, 230, 189, 51, 83, 16, 190, 246, 172, 206, 61, 61, 96, 162, 189, 181, 56, 44, 189, 237, 33, 86, 188, 39, 91, 180, 60, 109, 12, 245, 62, 108, 96, 140, 190, 118, 206, 235, 61, 144, 175, 75, 62, 145, 107, 200, 62, 130, 125, 225, 61, 39, 16, 15, 190, 205, 160, 137, 189, 53, 205, 211, 189, 64, 51, 36, 62, 68, 162, 165, 188, 37, 208, 100, 62, 115, 223, 83, 190, 159, 203, 160, 190, 22, 30, 146, 62, 102, 196, 140, 191, 219, 9, 83, 62, 18, 6, 225, 190, 179, 181, 77, 190, 228, 138, 218, 61, 232, 125, 132, 62, 49, 138, 111, 191, 83, 1, 194, 190, 229, 4, 106, 62, 71, 173, 25, 189, 106, 219, 241, 186, 114, 190, 171, 190, 195, 232, 16, 190, 253, 152, 134, 190, 8, 199, 66, 190, 99, 133, 240, 188, 115, 179, 42, 188, 39, 104, 254, 188, 94, 141, 181, 61, 58, 104, 147, 190, 128, 249, 110, 190, 96, 78, 65, 62, 227, 170, 121, 62, 243, 174, 129, 190, 205, 132, 242, 189, 221, 166, 221, 189, 195, 125, 25, 62, 79, 122, 187, 189, 108, 21, 2, 190, 183, 59, 117, 190, 188, 156, 181, 62, 64, 131, 150, 189, 121, 71, 145, 62, 11, 193, 157, 190, 232, 227, 196, 190, 97, 181, 74, 62, 109, 18, 156, 62, 66, 43, 4, 190, 61, 63, 8, 61, 193, 55, 173, 62, 78, 157, 168, 61, 40, 3, 155, 62, 153, 146, 25, 190, 219, 165, 158, 61, 141, 201, 60, 61, 246, 154, 223, 62, 63, 79, 180, 61, 95, 246, 16, 62, 227, 146, 33, 190, 226, 59, 139, 61, 102, 9, 21, 190, 85, 212, 169, 61, 40, 131, 234, 61, 28, 63, 161, 62, 190, 110, 138, 61, 144, 242, 16, 62, 187, 79, 63, 62, 157, 1, 80, 189, 136, 234, 159, 61, 14, 69, 228, 189, 103, 118, 121, 62, 48, 72, 112, 186, 93, 196, 75, 61, 207, 185, 130, 189, 84, 92, 30, 190, 58, 182, 145, 188, 32, 117, 245, 189, 223, 252, 140, 190, 208, 246, 222, 188, 176, 241, 172, 61, 209, 102, 84, 190, 243, 125, 15, 62, 182, 204, 213, 61, 223, 204, 28, 62, 166, 173, 15, 62, 4, 70, 227, 60, 3, 205, 160, 60, 140, 217, 242, 188, 28, 0, 130, 190, 41, 247, 21, 62, 218, 140, 51, 60, 1, 53, 221, 58, 117, 80, 88, 62, 242, 34, 135, 61, 240, 247, 82, 190, 158, 238, 20, 190, 138, 31, 21, 189, 62, 152, 247, 61, 13, 129, 226, 60, 96, 237, 196, 61, 235, 204, 64, 62, 159, 25, 18, 189, 239, 223, 16, 190, 99, 170, 35, 61, 125, 204, 28, 62, 210, 202, 222, 60, 59, 44, 4, 62, 88, 4, 41, 62, 33, 54, 161, 189, 172, 88, 145, 189, 66, 78, 167, 61, 119, 251, 245, 190, 19, 137, 197, 189, 210, 216, 134, 62, 175, 234, 173, 189, 74, 60, 34, 62, 156, 176, 99, 189, 56, 98, 117, 61, 112, 104, 187, 189, 205, 70, 8, 62, 38, 68, 9, 191, 227, 72, 124, 190, 95, 159, 202, 61, 39, 205, 215, 190, 118, 82, 31, 188, 90, 45, 43, 191, 137, 250, 186, 190, 171, 72, 133, 190, 147, 38, 164, 61, 231, 106, 120, 60, 113, 41, 76, 62, 187, 88, 35, 190, 201, 50, 229, 59, 80, 80, 120, 62, 208, 254, 17, 190, 46, 172, 184, 61, 116, 154, 134, 62, 242, 31, 182, 189, 59, 204, 109, 62, 145, 23, 62, 190, 217, 59, 156, 189, 59, 114, 6, 62, 212, 45, 52, 62, 117, 250, 45, 191, 223, 121, 79, 62, 12, 243, 122, 62, 100, 59, 14, 61, 139, 76, 170, 61, 171, 137, 185, 61, 56, 152, 25, 62, 64, 46, 151, 190, 151, 10, 93, 63, 81, 12, 143, 190, 213, 29, 230, 189, 195, 124, 165, 62, 11, 213, 208, 189, 223, 215, 237, 189, 45, 237, 0, 62, 190, 152, 182, 61, 124, 197, 150, 190, 3, 238, 122, 62, 157, 7, 247, 190, 36, 146, 193, 187, 143, 44, 247, 61, 204, 253, 25, 62, 32, 136, 131, 187, 143, 225, 136, 190, 198, 197, 137, 189, 64, 152, 226, 189, 203, 130, 112, 190, 89, 121, 106, 191, 215, 132, 28, 62, 167, 239, 43, 190, 227, 175, 144, 189, 158, 4, 247, 188, 75, 51, 117, 189, 134, 26, 13, 191, 32, 238, 65, 62, 37, 141, 34, 62, 235, 223, 90, 190, 157, 5, 177, 188, 117, 46, 135, 190, 36, 46, 241, 189, 233, 169, 196, 190, 248, 202, 103, 190, 193, 93, 0, 190, 112, 15, 134, 61, 62, 168, 139, 190, 214, 230, 29, 62, 97, 108, 225, 190, 184, 70, 181, 189, 240, 79, 131, 189, 142, 18, 58, 188, 93, 15, 151, 61, 105, 17, 192, 61, 174, 83, 255, 60, 142, 5, 34, 189, 169, 78, 40, 62, 92, 250, 13, 188, 107, 90, 131, 61, 219, 28, 46, 62, 3, 193, 41, 190, 76, 148, 181, 60, 209, 75, 230, 189, 44, 21, 11, 62, 29, 197, 131, 62, 244, 144, 117, 62, 25, 143, 15, 191, 174, 10, 193, 189, 171, 121, 109, 61, 83, 253, 40, 188, 207, 69, 35, 62, 14, 12, 45, 190, 184, 79, 165, 189, 170, 193, 112, 190, 99, 167, 29, 63, 15, 104, 3, 190, 204, 76, 5, 62, 203, 79, 212, 189, 108, 248, 199, 189, 154, 162, 170, 61, 46, 236, 136, 189, 202, 66, 29, 61, 142, 123, 79, 190, 150, 97, 150, 60, 217, 3, 2, 62, 246, 167, 185, 61, 60, 252, 219, 189, 187, 228, 150, 60, 247, 250, 141, 189, 160, 221, 108, 190, 113, 197, 254, 188, 185, 25, 207, 61, 21, 61, 125, 190, 201, 136, 101, 61, 114, 213, 238, 189, 189, 195, 72, 61, 125, 255, 6, 59, 92, 168, 149, 189, 243, 172, 242, 61, 107, 69, 24, 183, 176, 27, 239, 189, 195, 162, 203, 189, 216, 60, 245, 189, 20, 195, 50, 190, 233, 96, 52, 190, 150, 179, 199, 61, 174, 150, 111, 61, 63, 167, 165, 189, 207, 218, 13, 189, 3, 231, 150, 188, 43, 205, 26, 61, 80, 116, 140, 189, 244, 212, 15, 190, 106, 130, 70, 189, 54, 33, 28, 61, 177, 205, 185, 61, 192, 122, 146, 189, 135, 64, 14, 188, 204, 66, 182, 61, 77, 1, 40, 190, 9, 248, 245, 187, 109, 95, 83, 61, 40, 63, 1, 190, 120, 173, 221, 188, 147, 116, 50, 189, 204, 137, 181, 188, 72, 146, 34, 190, 108, 72, 255, 188, 118, 113, 16, 190, 161, 194, 158, 189, 59, 35, 28, 62, 198, 87, 220, 189, 172, 69, 42, 62, 104, 200, 111, 61, 1, 95, 144, 61, 161, 147, 32, 62, 197, 231, 47, 62, 23, 5, 5, 61, 114, 129, 142, 189, 41, 64, 191, 60, 61, 61, 90, 189, 94, 195, 201, 189, 221, 159, 31, 190, 136, 143, 194, 189, 17, 143, 161, 189, 188, 236, 0, 190, 121, 70, 123, 190, 10, 197, 211, 187, 181, 205, 161, 189, 44, 18, 154, 190, 147, 38, 204, 61, 209, 127, 130, 190, 238, 216, 9, 190, 142, 60, 200, 189, 117, 162, 143, 61, 38, 17, 41, 189, 225, 59, 169, 189, 7, 139, 47, 190, 117, 174, 73, 189, 34, 98, 143, 60, 12, 72, 2, 62, 114, 229, 32, 190, 10, 48, 33, 190, 103, 101, 177, 59, 173, 17, 166, 61, 46, 186, 83, 190, 134, 22, 31, 62, 228, 157, 81, 61, 46, 224, 244, 60, 12, 129, 10, 62, 197, 149, 15, 190, 238, 200, 204, 187, 178, 142, 155, 61, 132, 100, 244, 61, 8, 99, 36, 62, 49, 226, 149, 61, 188, 101, 36, 62, 109, 208, 22, 62, 124, 27, 219, 61, 85, 93, 130, 62, 4, 195, 156, 190, 137, 209, 16, 190, 11, 18, 56, 189, 127, 159, 120, 61, 150, 243, 198, 190, 89, 99, 182, 61, 56, 91, 109, 190, 1, 14, 35, 190, 40, 88, 119, 189, 193, 56, 222, 189, 11, 203, 29, 61, 128, 233, 138, 190, 173, 50, 170, 190, 206, 9, 246, 61, 63, 22, 9, 61, 63, 70, 84, 190, 252, 147, 115, 189, 222, 90, 83, 62, 223, 16, 180, 190, 198, 49, 149, 189, 222, 176, 136, 190, 9, 114, 162, 62, 103, 18, 234, 61, 12, 85, 147, 189, 151, 173, 52, 190, 217, 191, 176, 61, 131, 102, 4, 61, 246, 140, 26, 190, 185, 83, 200, 189, 251, 20, 140, 187, 178, 53, 66, 62, 75, 197, 119, 61, 228, 59, 174, 61, 99, 182, 168, 189, 17, 22, 93, 190, 11, 152, 241, 61, 216, 99, 156, 188, 44, 156, 158, 57, 117, 142, 138, 190, 139, 226, 133, 61, 179, 119, 0, 60, 239, 141, 140, 59, 215, 94, 173, 61, 61, 230, 143, 190, 243, 40, 44, 190, 87, 3, 11, 62, 94, 89, 150, 188, 235, 68, 148, 187, 22, 200, 184, 60, 121, 231, 92, 188, 203, 233, 203, 61, 214, 214, 119, 190, 130, 126, 168, 189, 245, 219, 160, 190, 34, 169, 61, 190, 8, 126, 58, 61, 41, 129, 17, 190, 184, 209, 99, 189, 219, 219, 155, 190, 112, 254, 86, 62, 182, 169, 219, 61, 10, 132, 122, 190, 124, 125, 22, 191, 39, 14, 191, 189, 112, 9, 195, 189, 69, 22, 47, 62, 238, 247, 128, 62, 65, 41, 157, 60, 86, 237, 120, 189, 139, 149, 144, 190, 166, 0, 228, 60, 157, 208, 177, 188, 115, 238, 134, 190, 233, 142, 215, 61, 228, 120, 13, 61, 195, 208, 81, 62, 119, 176, 72, 190, 134, 37, 83, 190, 151, 252, 69, 62, 182, 23, 200, 61, 29, 93, 39, 62, 183, 62, 238, 61, 21, 175, 88, 189, 6, 10, 109, 188, 157, 238, 59, 187, 0, 185, 17, 62, 62, 168, 1, 191};
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
                alignas(float) const unsigned char memory[] = {239, 19, 253, 61, 17, 159, 147, 61, 68, 239, 36, 188, 55, 6, 72, 190, 138, 65, 187, 61, 106, 209, 229, 188, 12, 186, 155, 62, 105, 38, 63, 190, 181, 83, 140, 190, 214, 58, 137, 190, 178, 81, 155, 60, 239, 64, 189, 62, 173, 145, 41, 189, 119, 94, 68, 190, 127, 226, 152, 188, 222, 236, 137, 62, 228, 193, 74, 190, 121, 188, 223, 62, 92, 12, 18, 60, 195, 50, 247, 62, 183, 178, 154, 58, 62, 126, 127, 62, 43, 170, 157, 62, 36, 11, 113, 62, 97, 151, 7, 189, 144, 230, 35, 62, 31, 81, 24, 190, 195, 13, 65, 190, 53, 38, 103, 189, 165, 220, 26, 62, 106, 176, 136, 62, 195, 50, 254, 61};
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
                alignas(float) const unsigned char memory[] = {219, 40, 68, 190, 62, 123, 67, 190, 195, 218, 206, 190, 50, 235, 132, 62, 170, 207, 94, 61, 159, 157, 68, 62, 143, 137, 232, 190, 177, 160, 230, 60, 185, 28, 26, 61, 83, 69, 128, 62, 220, 165, 52, 191, 31, 108, 33, 63, 152, 14, 89, 61, 182, 157, 240, 189, 231, 158, 8, 61, 59, 4, 191, 190, 224, 129, 66, 190, 182, 73, 146, 191, 53, 233, 27, 190, 236, 240, 90, 63, 191, 241, 192, 190, 109, 27, 166, 61, 207, 179, 214, 189, 26, 234, 20, 191, 98, 39, 3, 63, 93, 166, 160, 190, 74, 105, 189, 187, 46, 206, 183, 61, 12, 146, 22, 62, 1, 220, 225, 190, 14, 127, 143, 60, 52, 148, 151, 62, 250, 138, 214, 188, 231, 19, 211, 61, 7, 140, 89, 62, 174, 112, 40, 190, 87, 26, 13, 190, 168, 73, 188, 61, 44, 232, 31, 191, 243, 184, 33, 190, 50, 5, 52, 62, 43, 94, 121, 61, 58, 179, 211, 61, 107, 207, 80, 61, 170, 4, 221, 61, 192, 42, 74, 62, 243, 44, 153, 60, 227, 19, 31, 190, 172, 139, 47, 62, 61, 33, 160, 189, 199, 252, 159, 188, 45, 86, 30, 190, 101, 26, 211, 189, 133, 125, 66, 190, 50, 231, 14, 190, 214, 132, 224, 61, 65, 2, 46, 62, 153, 193, 89, 60, 7, 239, 136, 61, 181, 107, 31, 190, 136, 109, 84, 61, 69, 124, 167, 189, 83, 154, 92, 190, 37, 68, 86, 60};
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
                alignas(float) const unsigned char memory[] = {106, 140, 53, 62, 161, 37, 147, 190};
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
    alignas(float) const unsigned char memory[] = {154, 89, 201, 62, 187, 148, 204, 189, 201, 232, 182, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {89, 101, 223, 61, 212, 92, 77, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0043/steps/000000000006000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
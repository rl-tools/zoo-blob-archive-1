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
                alignas(float) const unsigned char memory[] = {233, 182, 200, 190, 181, 46, 146, 62, 175, 247, 120, 188, 56, 172, 48, 191, 206, 11, 231, 190, 255, 13, 45, 63, 54, 74, 9, 63, 179, 187, 64, 191, 209, 184, 41, 190, 248, 82, 180, 190, 101, 154, 208, 191, 46, 239, 202, 189, 255, 243, 183, 190, 28, 187, 71, 191, 190, 77, 55, 191, 151, 60, 83, 62, 25, 80, 181, 62, 115, 71, 50, 63, 108, 100, 195, 61, 74, 66, 129, 190, 156, 127, 11, 63, 205, 77, 30, 63, 8, 215, 62, 63, 137, 60, 160, 62, 104, 219, 58, 191, 155, 90, 183, 61, 160, 191, 52, 191, 158, 210, 43, 62, 253, 16, 135, 63, 134, 144, 189, 190, 31, 229, 40, 63, 132, 160, 152, 63, 87, 73, 116, 62, 171, 97, 61, 191, 150, 123, 211, 63, 33, 177, 182, 62, 238, 19, 212, 62, 202, 217, 51, 63, 26, 155, 212, 61, 167, 11, 85, 63, 195, 165, 57, 191, 149, 171, 171, 190, 239, 215, 127, 62, 52, 77, 9, 63, 216, 181, 16, 191, 93, 244, 226, 190, 37, 222, 135, 61, 38, 171, 179, 61, 161, 11, 239, 62, 81, 90, 152, 191, 71, 229, 178, 190, 229, 248, 49, 191, 254, 252, 194, 62, 101, 166, 3, 190, 140, 213, 40, 63, 187, 8, 220, 189, 76, 172, 33, 190, 82, 249, 15, 191, 253, 194, 87, 63, 189, 248, 130, 61, 58, 244, 22, 191, 1, 50, 61, 62, 130, 187, 159, 62, 12, 175, 151, 61, 33, 39, 5, 63, 196, 246, 34, 61, 37, 197, 160, 188, 55, 80, 31, 191, 44, 202, 240, 60, 60, 127, 121, 189, 208, 229, 64, 63, 154, 32, 170, 62, 225, 95, 9, 63, 230, 175, 134, 191, 23, 16, 109, 190, 2, 218, 201, 62, 224, 17, 116, 191, 252, 42, 189, 190, 0, 46, 107, 189, 100, 124, 7, 62, 157, 197, 13, 191, 50, 11, 218, 62, 55, 191, 118, 63, 227, 178, 50, 62, 114, 247, 6, 62, 127, 244, 51, 191, 169, 226, 32, 63, 244, 174, 215, 190, 86, 209, 93, 189, 3, 7, 190, 190, 107, 35, 170, 190, 22, 150, 7, 191, 218, 168, 130, 56, 62, 162, 45, 63, 3, 242, 147, 62, 78, 186, 156, 190};
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
                alignas(float) const unsigned char memory[] = {115, 120, 27, 191, 124, 93, 187, 189, 146, 209, 92, 62, 245, 230, 8, 63, 109, 0, 184, 190, 217, 96, 100, 188, 191, 214, 122, 62, 209, 217, 210, 190, 122, 59, 113, 190, 81, 213, 57, 62, 170, 18, 38, 190, 159, 94, 118, 190, 56, 70, 184, 189, 175, 59, 48, 191, 32, 202, 232, 61, 131, 185, 138, 62, 111, 242, 104, 62, 13, 129, 101, 62, 54, 203, 173, 190, 92, 183, 6, 63, 240, 10, 156, 62, 236, 104, 208, 62, 55, 197, 130, 62, 93, 252, 58, 191, 194, 56, 51, 190, 24, 33, 250, 189, 184, 72, 0, 191, 171, 161, 252, 189, 119, 91, 34, 62, 174, 244, 53, 191, 52, 144, 32, 191, 187, 255, 55, 191};
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
                alignas(float) const unsigned char memory[] = {162, 32, 81, 189, 82, 58, 175, 62, 89, 53, 6, 62, 63, 214, 206, 60, 113, 241, 158, 190, 104, 163, 26, 190, 118, 9, 5, 62, 207, 128, 202, 190, 219, 236, 143, 191, 18, 118, 196, 190, 88, 213, 131, 188, 192, 90, 38, 63, 85, 124, 162, 190, 67, 210, 11, 62, 84, 196, 74, 190, 169, 32, 145, 62, 136, 52, 164, 190, 62, 13, 18, 190, 187, 140, 197, 61, 169, 80, 151, 62, 138, 234, 163, 62, 60, 248, 144, 61, 180, 226, 36, 62, 50, 106, 179, 190, 138, 50, 103, 60, 133, 236, 238, 189, 96, 36, 217, 189, 156, 119, 145, 190, 160, 245, 29, 190, 38, 207, 97, 61, 122, 227, 205, 62, 219, 175, 233, 190, 74, 74, 32, 189, 198, 133, 9, 190, 244, 18, 96, 190, 100, 115, 100, 61, 207, 193, 207, 189, 176, 179, 13, 190, 147, 81, 213, 61, 236, 66, 55, 189, 160, 87, 22, 190, 233, 98, 248, 61, 236, 0, 41, 190, 79, 65, 6, 190, 164, 164, 31, 190, 181, 249, 183, 189, 118, 194, 234, 189, 248, 206, 71, 190, 83, 136, 188, 60, 142, 211, 161, 189, 226, 255, 119, 189, 89, 84, 15, 189, 67, 203, 134, 61, 89, 124, 11, 62, 192, 87, 89, 188, 112, 198, 235, 189, 36, 193, 249, 59, 27, 67, 147, 61, 216, 85, 222, 189, 225, 60, 225, 61, 21, 88, 59, 189, 54, 244, 168, 188, 180, 34, 176, 188, 168, 230, 207, 61, 31, 255, 252, 188, 237, 222, 76, 61, 13, 170, 135, 62, 79, 166, 190, 61, 188, 47, 55, 189, 68, 62, 133, 190, 48, 42, 128, 190, 112, 173, 76, 190, 227, 20, 159, 188, 252, 115, 80, 62, 212, 75, 31, 190, 174, 49, 10, 189, 175, 170, 50, 190, 119, 189, 124, 190, 148, 12, 164, 189, 174, 34, 50, 61, 36, 223, 232, 61, 182, 207, 189, 189, 42, 181, 233, 61, 110, 116, 39, 62, 73, 33, 220, 61, 36, 177, 50, 62, 42, 19, 77, 61, 111, 124, 37, 187, 234, 162, 198, 190, 178, 95, 123, 61, 222, 223, 80, 190, 220, 177, 59, 190, 252, 96, 204, 190, 176, 30, 254, 189, 133, 11, 200, 60, 150, 61, 48, 62, 100, 7, 246, 189, 171, 17, 97, 62, 15, 86, 211, 62, 143, 195, 140, 62, 200, 157, 141, 190, 225, 134, 154, 190, 130, 142, 15, 187, 205, 155, 126, 190, 225, 99, 26, 191, 118, 35, 213, 61, 225, 109, 100, 190, 163, 129, 147, 190, 103, 134, 236, 189, 62, 183, 51, 189, 123, 167, 136, 62, 116, 59, 244, 188, 2, 132, 144, 187, 68, 85, 28, 191, 48, 21, 214, 62, 148, 145, 158, 190, 145, 39, 112, 189, 149, 64, 92, 62, 208, 246, 132, 188, 122, 54, 10, 191, 154, 203, 166, 62, 30, 98, 124, 62, 203, 19, 151, 189, 189, 69, 139, 190, 16, 11, 199, 187, 153, 228, 38, 190, 50, 240, 229, 61, 129, 145, 149, 62, 252, 20, 217, 61, 69, 152, 104, 190, 38, 39, 151, 188, 126, 142, 255, 62, 62, 158, 59, 62, 217, 185, 177, 62, 191, 81, 244, 61, 89, 1, 165, 61, 27, 45, 122, 61, 13, 135, 175, 61, 157, 61, 237, 62, 177, 21, 7, 191, 105, 201, 141, 189, 170, 91, 133, 60, 199, 171, 166, 190, 210, 228, 191, 61, 141, 114, 255, 61, 224, 91, 235, 188, 255, 234, 137, 60, 15, 132, 186, 190, 114, 29, 178, 189, 82, 161, 79, 60, 161, 154, 142, 62, 103, 68, 162, 62, 44, 96, 6, 190, 34, 222, 75, 190, 130, 28, 255, 189, 204, 93, 80, 62, 141, 71, 211, 62, 133, 10, 165, 61, 232, 233, 60, 190, 218, 146, 154, 61, 104, 78, 122, 189, 213, 157, 56, 190, 57, 84, 32, 190, 88, 73, 25, 188, 171, 125, 117, 60, 14, 29, 173, 61, 5, 199, 36, 61, 150, 89, 165, 61, 137, 212, 234, 187, 122, 13, 199, 188, 119, 12, 43, 190, 119, 118, 105, 60, 88, 49, 3, 190, 41, 241, 207, 189, 35, 226, 56, 60, 16, 208, 59, 190, 106, 126, 40, 61, 213, 89, 81, 189, 145, 248, 167, 187, 10, 33, 225, 59, 203, 30, 196, 189, 126, 214, 125, 61, 184, 58, 45, 190, 148, 249, 16, 190, 218, 169, 95, 189, 219, 160, 165, 61, 124, 136, 110, 61, 178, 0, 41, 60, 255, 61, 145, 61, 36, 215, 225, 189, 240, 139, 46, 190, 208, 114, 6, 189, 246, 146, 190, 59, 58, 42, 205, 190, 11, 197, 101, 190, 206, 10, 102, 62, 152, 251, 58, 190, 239, 71, 141, 191, 102, 88, 25, 191, 243, 58, 23, 191, 251, 41, 106, 190, 174, 207, 203, 190, 58, 127, 144, 191, 109, 12, 172, 190, 153, 105, 117, 191, 95, 113, 103, 190, 136, 194, 148, 61, 19, 124, 174, 61, 247, 87, 155, 190, 207, 207, 184, 62, 96, 64, 130, 188, 249, 164, 31, 62, 167, 40, 187, 189, 41, 197, 141, 189, 72, 151, 10, 191, 25, 99, 126, 190, 32, 192, 84, 61, 38, 205, 171, 189, 6, 128, 158, 61, 181, 174, 108, 190, 187, 110, 171, 191, 128, 205, 128, 62, 85, 190, 47, 62, 173, 237, 174, 190, 176, 173, 241, 61, 26, 22, 39, 191, 56, 89, 95, 190, 84, 190, 243, 190, 252, 105, 81, 61, 28, 145, 83, 189, 37, 77, 161, 190, 216, 57, 74, 62, 114, 36, 113, 62, 225, 62, 24, 63, 240, 45, 126, 62, 27, 157, 207, 190, 163, 22, 12, 63, 95, 134, 129, 191, 62, 148, 136, 190, 227, 248, 54, 62, 187, 118, 211, 187, 109, 36, 8, 62, 181, 53, 154, 61, 194, 17, 217, 62, 213, 147, 48, 62, 153, 98, 137, 62, 162, 121, 181, 189, 97, 67, 164, 189, 215, 153, 171, 191, 214, 85, 30, 191, 208, 45, 153, 190, 78, 81, 230, 61, 135, 13, 148, 189, 109, 192, 23, 190, 26, 40, 166, 190, 56, 139, 216, 60, 48, 185, 50, 190, 231, 145, 245, 60, 154, 19, 214, 59, 48, 209, 28, 190, 199, 1, 127, 60, 156, 175, 31, 189, 152, 195, 205, 189, 109, 108, 37, 189, 5, 183, 55, 61, 117, 85, 102, 61, 82, 144, 151, 61, 63, 243, 95, 60, 122, 22, 159, 189, 98, 194, 228, 61, 158, 126, 57, 189, 129, 192, 134, 61, 206, 115, 137, 189, 154, 162, 49, 190, 210, 112, 15, 190, 225, 211, 242, 59, 58, 194, 199, 61, 220, 62, 202, 189, 155, 1, 33, 190, 96, 114, 27, 190, 234, 252, 245, 189, 177, 5, 162, 61, 193, 248, 146, 189, 1, 179, 34, 190, 59, 146, 0, 188, 15, 37, 120, 188, 62, 146, 231, 59, 150, 251, 154, 188, 195, 127, 63, 189, 147, 232, 207, 61, 23, 3, 159, 60, 199, 144, 208, 188, 35, 112, 43, 61, 25, 124, 116, 189, 38, 172, 63, 190, 61, 69, 48, 62, 94, 48, 230, 59, 77, 226, 48, 190, 155, 244, 0, 62, 190, 168, 42, 190, 130, 150, 12, 189, 141, 66, 195, 188, 46, 17, 77, 60, 72, 216, 111, 61, 74, 137, 24, 61, 26, 211, 87, 188, 169, 64, 26, 190, 162, 179, 15, 190, 51, 189, 255, 61, 238, 217, 244, 189, 245, 175, 173, 189, 120, 69, 37, 61, 223, 157, 146, 58, 132, 99, 32, 190, 192, 226, 184, 59, 57, 96, 36, 62, 72, 121, 83, 189, 163, 168, 217, 61, 192, 124, 245, 61, 87, 233, 166, 189, 133, 164, 68, 189, 189, 156, 57, 62, 181, 167, 91, 62, 87, 124, 136, 189, 119, 124, 38, 190, 88, 252, 145, 61, 147, 236, 34, 62, 130, 65, 68, 188, 93, 220, 92, 61, 202, 130, 43, 62, 8, 173, 136, 189, 63, 60, 199, 190, 147, 247, 18, 62, 7, 77, 158, 191, 245, 149, 64, 61, 227, 240, 218, 61, 217, 12, 99, 190, 131, 31, 95, 189, 230, 53, 2, 190, 214, 76, 105, 62, 74, 41, 30, 62, 26, 187, 32, 62, 228, 128, 93, 62, 239, 11, 64, 190, 122, 63, 86, 191, 230, 198, 177, 190, 114, 54, 132, 62, 201, 39, 150, 62, 60, 79, 109, 61, 255, 27, 230, 188, 113, 30, 81, 62, 136, 153, 209, 62, 30, 129, 119, 61, 95, 208, 144, 62, 32, 244, 184, 62, 248, 217, 67, 188, 147, 24, 3, 191, 179, 44, 156, 190, 102, 179, 30, 62, 113, 129, 224, 190, 96, 79, 27, 191, 149, 146, 54, 190, 153, 56, 158, 190, 200, 60, 235, 190, 221, 103, 199, 190, 15, 247, 135, 62, 11, 100, 170, 62, 79, 135, 151, 189, 136, 55, 70, 190, 191, 32, 185, 190, 16, 13, 25, 62, 48, 50, 146, 189, 208, 199, 235, 60, 241, 207, 85, 62, 139, 71, 147, 62, 31, 204, 33, 191, 118, 112, 165, 62, 43, 211, 139, 62, 151, 236, 211, 61, 81, 161, 181, 190, 145, 116, 246, 189, 138, 26, 232, 189, 94, 138, 243, 62, 142, 199, 196, 189, 239, 205, 51, 62, 145, 54, 119, 62, 0, 235, 135, 61, 180, 58, 154, 190, 22, 233, 220, 186, 189, 133, 141, 190, 236, 223, 194, 61, 206, 152, 189, 190, 35, 220, 11, 61, 148, 210, 76, 61, 160, 248, 164, 190, 159, 222, 89, 190, 80, 159, 248, 190, 150, 166, 65, 62, 71, 128, 192, 189, 242, 159, 50, 189, 107, 93, 106, 190, 102, 147, 31, 61, 94, 70, 63, 62, 16, 205, 33, 190, 129, 8, 7, 61, 156, 154, 21, 62, 243, 97, 171, 61, 62, 254, 189, 189, 236, 101, 186, 62, 117, 61, 216, 61, 138, 149, 183, 61, 41, 50, 24, 190, 213, 200, 99, 189, 99, 8, 132, 61, 91, 241, 88, 61, 251, 250, 136, 61, 40, 218, 21, 189, 90, 33, 192, 189, 2, 159, 36, 190, 206, 153, 50, 189, 144, 105, 140, 189, 28, 234, 158, 189, 226, 106, 17, 190, 121, 56, 206, 189, 239, 241, 111, 61, 158, 68, 252, 188, 90, 122, 116, 61, 247, 22, 9, 62, 53, 78, 190, 189, 108, 154, 76, 61, 199, 235, 2, 190, 166, 62, 130, 189, 202, 124, 78, 190, 84, 64, 106, 189, 58, 84, 195, 189, 209, 142, 161, 61, 159, 59, 243, 187, 177, 33, 63, 190, 140, 3, 185, 189, 162, 191, 92, 61, 196, 147, 16, 189, 166, 74, 35, 190, 75, 20, 238, 61, 34, 187, 9, 190, 22, 62, 213, 61, 137, 191, 227, 61, 234, 27, 238, 189, 131, 161, 35, 188, 11, 219, 92, 189, 217, 93, 174, 189, 230, 64, 252, 186, 123, 223, 178, 61, 34, 121, 218, 61, 244, 66, 147, 61, 141, 26, 147, 189, 209, 236, 201, 61, 247, 61, 13, 61, 167, 3, 44, 190, 87, 93, 46, 190, 52, 187, 13, 190, 46, 96, 193, 61, 137, 17, 37, 190, 212, 100, 55, 59, 134, 75, 9, 62, 126, 188, 228, 189, 142, 59, 1, 190, 241, 204, 20, 190, 223, 206, 53, 61, 130, 97, 100, 61, 201, 181, 97, 188, 54, 137, 194, 189, 92, 121, 136, 61, 207, 136, 68, 189, 108, 65, 229, 189, 140, 9, 193, 189, 152, 109, 252, 188, 128, 30, 155, 188, 209, 238, 253, 61, 204, 171, 40, 62, 136, 176, 160, 188, 174, 97, 195, 57, 221, 9, 4, 190, 41, 148, 125, 62, 223, 244, 249, 190, 230, 142, 104, 60, 229, 171, 143, 190, 118, 35, 38, 60, 212, 96, 27, 191, 170, 3, 107, 190, 92, 136, 36, 190, 34, 11, 143, 190, 197, 243, 24, 62, 104, 232, 221, 190, 244, 34, 20, 63, 55, 197, 153, 61, 32, 146, 135, 190, 186, 150, 12, 62, 195, 97, 14, 61, 159, 92, 20, 63, 224, 19, 97, 61, 40, 70, 178, 61, 65, 48, 17, 62, 110, 174, 234, 61, 131, 229, 15, 188, 204, 230, 128, 62, 48, 54, 147, 62, 228, 77, 118, 62, 217, 126, 59, 191, 69, 243, 162, 190, 196, 37, 171, 187, 10, 108, 236, 60, 221, 127, 148, 62, 153, 84, 17, 190, 101, 18, 135, 190, 129, 154, 77, 62, 247, 152, 219, 61, 25, 201, 247, 190, 208, 244, 113, 190, 58, 25, 7, 61, 65, 71, 236, 190, 223, 84, 17, 191, 84, 91, 188, 190, 98, 9, 174, 190, 28, 40, 242, 190, 110, 240, 232, 190, 207, 66, 140, 189, 156, 165, 17, 191, 191, 48, 73, 190, 149, 253, 247, 59, 199, 140, 105, 190, 6, 106, 205, 190, 80, 164, 208, 189, 29, 151, 129, 190, 247, 8, 38, 190, 207, 24, 128, 189, 72, 13, 21, 191, 71, 146, 138, 62, 37, 40, 177, 60, 1, 170, 31, 191, 153, 19, 178, 190, 61, 101, 162, 61, 10, 168, 116, 190, 67, 13, 79, 61, 152, 88, 164, 190, 13, 174, 87, 187, 187, 144, 59, 62, 159, 187, 175, 62, 58, 2, 241, 62, 16, 109, 45, 191, 106, 88, 43, 190, 84, 182, 180, 62, 108, 103, 61, 191, 252, 87, 157, 191, 148, 240, 157, 190, 142, 202, 221, 190, 106, 37, 96, 62, 217, 16, 138, 191, 250, 120, 76, 190, 230, 208, 113, 62, 179, 58, 225, 61, 186, 99, 30, 191, 169, 209, 145, 61, 39, 69, 244, 189, 141, 186, 141, 189, 212, 156, 218, 61, 17, 193, 44, 61, 254, 170, 35, 61, 67, 176, 2, 191, 150, 120, 177, 61, 211, 29, 131, 190, 140, 65, 138, 189, 134, 96, 11, 191, 184, 117, 145, 189, 129, 238, 148, 61, 253, 191, 221, 62, 59, 42, 68, 61, 72, 77, 154, 187, 72, 170, 87, 61, 35, 13, 138, 62, 125, 144, 102, 62, 177, 128, 249, 190, 69, 92, 131, 187, 111, 92, 39, 61, 166, 14, 252, 190, 189, 88, 146, 191, 95, 20, 82, 191, 177, 175, 88, 190, 185, 151, 245, 62, 122, 191, 106, 190, 182, 114, 111, 60, 101, 65, 19, 191, 36, 17, 99, 62, 34, 225, 186, 191, 128, 143, 205, 62, 172, 251, 201, 190, 252, 178, 36, 63, 24, 62, 103, 62, 212, 103, 39, 62, 242, 29, 56, 190, 169, 94, 107, 190, 48, 139, 118, 62, 136, 184, 187, 191, 32, 149, 144, 190, 54, 78, 159, 190, 119, 57, 173, 61, 230, 93, 146, 188, 67, 207, 64, 190, 18, 201, 47, 190, 162, 13, 113, 187, 204, 102, 166, 190, 208, 241, 159, 62, 81, 181, 193, 62, 104, 102, 24, 188, 244, 200, 214, 189, 107, 242, 195, 61, 188, 123, 130, 190, 114, 214, 224, 60, 11, 49, 5, 62, 146, 153, 139, 189, 47, 242, 152, 61, 98, 105, 112, 189, 17, 68, 82, 190, 20, 198, 0, 190, 96, 4, 46, 62, 56, 72, 216, 61, 247, 117, 2, 61, 205, 128, 246, 188, 212, 191, 144, 62, 12, 193, 1, 62, 43, 70, 38, 62, 214, 221, 35, 62, 35, 78, 83, 62, 100, 17, 117, 190, 65, 175, 174, 189, 115, 252, 42, 190, 225, 153, 89, 190, 191, 255, 117, 61, 49, 232, 184, 60, 111, 64, 29, 62, 43, 213, 107, 62, 46, 111, 138, 61, 92, 104, 79, 61, 44, 92, 207, 190, 13, 227, 146, 62, 199, 181, 72, 62, 5, 61, 39, 61, 77, 0, 183, 61, 19, 23, 57, 190, 202, 27, 83, 190, 11, 145, 60, 190, 68, 74, 24, 191, 208, 170, 152, 62, 238, 192, 140, 190, 134, 118, 106, 62, 129, 156, 27, 189, 27, 208, 187, 62, 181, 147, 32, 62, 95, 96, 108, 61, 131, 77, 200, 62, 101, 3, 230, 61, 67, 217, 160, 62, 237, 196, 199, 190, 3, 75, 160, 189, 198, 197, 5, 62, 220, 232, 214, 62, 235, 244, 20, 62, 198, 202, 217, 188, 153, 47, 50, 190, 40, 199, 125, 189, 248, 107, 60, 62, 210, 39, 27, 61, 234, 232, 0, 62, 186, 55, 121, 189, 73, 230, 1, 191, 148, 55, 92, 61, 205, 216, 107, 189, 251, 32, 227, 189, 179, 91, 55, 191, 141, 195, 66, 191, 175, 149, 111, 190, 132, 186, 224, 61, 2, 50, 173, 62, 249, 159, 85, 61, 236, 175, 237, 190, 32, 139, 36, 62, 224, 3, 122, 61, 224, 250, 25, 61, 124, 141, 117, 189, 210, 45, 186, 61, 75, 70, 87, 61, 35, 129, 134, 62, 147, 128, 48, 190, 76, 10, 227, 190, 198, 252, 5, 61, 79, 233, 228, 61, 154, 34, 39, 191, 103, 4, 108, 190, 229, 126, 111, 62, 81, 98, 85, 61, 31, 143, 210, 189, 47, 164, 254, 190, 185, 14, 190, 188, 51, 172, 59, 62, 141, 22, 6, 63, 151, 178, 26, 190, 151, 32, 25, 189, 19, 59, 35, 189, 51, 247, 113, 189, 50, 5, 204, 188, 16, 168, 108, 61, 0, 198, 231, 61, 107, 27, 180, 189, 183, 149, 36, 190, 88, 7, 34, 190, 79, 78, 46, 190, 184, 228, 12, 62, 210, 186, 66, 189, 24, 118, 237, 189, 133, 70, 20, 62, 8, 185, 182, 61, 3, 126, 2, 190, 185, 152, 60, 190, 157, 195, 215, 189, 167, 85, 173, 189, 156, 193, 22, 188, 99, 231, 94, 189, 138, 146, 147, 186, 12, 255, 50, 189, 181, 162, 88, 189, 207, 127, 116, 189, 65, 96, 76, 60, 181, 110, 46, 189, 61, 22, 34, 190, 126, 141, 11, 61, 251, 55, 51, 62, 198, 100, 54, 61, 140, 231, 252, 61, 77, 139, 227, 189, 248, 164, 230, 189, 35, 147, 216, 190, 23, 244, 170, 189, 40, 32, 62, 191, 6, 70, 142, 190, 186, 241, 5, 191, 109, 137, 37, 62, 193, 10, 32, 62, 237, 161, 127, 191, 152, 13, 49, 191, 101, 159, 57, 191, 144, 229, 3, 62, 130, 81, 151, 61, 192, 136, 180, 189, 107, 18, 170, 189, 250, 166, 30, 62, 235, 253, 175, 62, 209, 65, 196, 189, 229, 164, 19, 191, 40, 159, 75, 190, 80, 220, 223, 190, 128, 157, 130, 188, 168, 11, 167, 188, 158, 81, 228, 60, 72, 154, 12, 188, 162, 217, 134, 191, 230, 104, 23, 191, 152, 207, 62, 62, 159, 38, 22, 190, 225, 189, 63, 62, 55, 6, 115, 188, 75, 73, 70, 189, 137, 73, 1, 190, 39, 37, 173, 61, 215, 90, 112, 61, 24, 229, 55, 190, 193, 155, 202, 61, 10, 71, 139, 60, 207, 7, 153, 189, 73, 149, 139, 189, 207, 0, 124, 189, 178, 190, 219, 187, 216, 88, 202, 61, 141, 170, 247, 61, 230, 32, 194, 189, 145, 130, 198, 188, 236, 125, 11, 189, 43, 57, 61, 190, 73, 15, 23, 190, 73, 102, 234, 189, 232, 68, 167, 60, 235, 123, 220, 61, 117, 232, 26, 189, 37, 10, 234, 61, 202, 196, 152, 189, 152, 165, 231, 189, 42, 83, 78, 189, 133, 193, 23, 62, 71, 126, 136, 60, 81, 166, 61, 189, 113, 223, 151, 188, 59, 30, 57, 61, 202, 200, 69, 189, 195, 252, 3, 191, 84, 50, 54, 62, 38, 75, 171, 62, 248, 54, 156, 61, 128, 179, 81, 62, 236, 74, 65, 190, 210, 224, 127, 190, 78, 104, 117, 61, 136, 81, 248, 61, 145, 118, 82, 61, 227, 205, 150, 61, 97, 65, 174, 61, 231, 247, 189, 190, 127, 117, 141, 59, 194, 175, 8, 57, 219, 205, 41, 62, 55, 99, 135, 61, 28, 188, 188, 189, 19, 199, 94, 62, 11, 101, 150, 60, 180, 50, 91, 62, 194, 255, 73, 62, 60, 228, 39, 62, 113, 198, 17, 190, 39, 57, 212, 187, 41, 220, 25, 190, 148, 202, 107, 189, 112, 214, 24, 62, 79, 218, 23, 190, 247, 141, 20, 62, 166, 160, 7, 189, 12, 132, 158, 189, 251, 69, 6, 190, 92, 238, 71, 190, 223, 91, 7, 191, 54, 123, 86, 59, 10, 185, 148, 62, 160, 108, 206, 188, 153, 245, 11, 62, 38, 179, 250, 61, 69, 206, 156, 62, 65, 39, 159, 62, 229, 49, 76, 191, 168, 228, 35, 62, 228, 203, 53, 191, 38, 75, 169, 189, 209, 238, 60, 190, 2, 155, 174, 190, 255, 238, 140, 62, 73, 71, 152, 189, 140, 93, 223, 189, 4, 219, 179, 189, 23, 73, 52, 62, 91, 9, 190, 61, 157, 189, 37, 62, 138, 14, 105, 191, 91, 112, 14, 191, 100, 194, 32, 61, 116, 185, 37, 62, 34, 255, 34, 62, 41, 77, 163, 190, 173, 147, 38, 190, 225, 134, 82, 61, 199, 148, 181, 60, 154, 14, 165, 191, 75, 61, 29, 190, 137, 14, 85, 63, 41, 104, 174, 61, 214, 163, 205, 61, 74, 141, 75, 191, 213, 119, 67, 190, 206, 171, 44, 62, 84, 70, 69, 189, 12, 10, 40, 62, 73, 217, 151, 191, 213, 196, 145, 62, 198, 223, 70, 190, 17, 99, 31, 59, 216, 169, 50, 62, 199, 155, 102, 189, 134, 88, 92, 62, 191, 139, 178, 190, 62, 34, 13, 62, 40, 196, 253, 189, 230, 151, 226, 189, 62, 177, 176, 61, 82, 255, 62, 63, 45, 58, 245, 190, 149, 122, 99, 190, 76, 130, 38, 61, 5, 176, 160, 62, 27, 203, 168, 61, 104, 103, 9, 190, 222, 223, 21, 190, 154, 120, 108, 189, 20, 42, 212, 189, 157, 113, 135, 61, 69, 108, 101, 62, 70, 43, 73, 191, 16, 244, 168, 61, 139, 175, 222, 189, 207, 84, 85, 60, 192, 144, 249, 190, 41, 175, 157, 190, 121, 101, 39, 61, 17, 248, 224, 189, 60, 211, 24, 63, 31, 144, 187, 190, 97, 57, 23, 63, 87, 207, 6, 189, 90, 73, 148, 61, 63, 215, 121, 60, 136, 8, 48, 190, 13, 142, 75, 62, 17, 187, 52, 61, 137, 47, 190, 62, 27, 74, 0, 61, 178, 143, 35, 190, 22, 10, 107, 62, 26, 152, 198, 62, 39, 135, 49, 61, 196, 90, 93, 62, 2, 27, 143, 190, 15, 217, 208, 190, 93, 135, 113, 188, 235, 6, 238, 61, 214, 128, 185, 62, 252, 109, 52, 61, 80, 129, 134, 62, 28, 47, 192, 61, 76, 143, 25, 191, 131, 120, 36, 190, 164, 179, 166, 190, 76, 231, 108, 189, 172, 128, 160, 190, 45, 239, 113, 190, 99, 51, 110, 187, 231, 212, 10, 190, 213, 130, 34, 63, 22, 83, 216, 190, 72, 124, 40, 63, 169, 1, 76, 62, 215, 230, 131, 61, 147, 166, 122, 61, 164, 216, 252, 189, 218, 64, 74, 62, 48, 3, 133, 61, 81, 25, 172, 62, 34, 237, 47, 188, 187, 135, 46, 62, 47, 242, 16, 62, 108, 94, 125, 62, 79, 195, 66, 61, 48, 61, 157, 61, 67, 137, 145, 189, 145, 198, 215, 190, 137, 136, 175, 61, 165, 99, 84, 61, 174, 85, 213, 62, 217, 193, 169, 189, 207, 219, 153, 62, 225, 22, 226, 62, 174, 5, 215, 189, 2, 168, 187, 190, 130, 56, 132, 190, 58, 180, 35, 62, 180, 21, 34, 191, 218, 48, 157, 190, 45, 213, 98, 189, 254, 124, 109, 190, 20, 80, 105, 61, 233, 200, 0, 191, 185, 79, 11, 63, 213, 1, 4, 61, 207, 65, 199, 189, 23, 61, 135, 61, 201, 206, 64, 190, 199, 105, 80, 62, 245, 145, 11, 190, 193, 22, 212, 61, 108, 51, 143, 62, 44, 235, 97, 62, 161, 210, 165, 190, 228, 183, 235, 62, 209, 37, 125, 61, 136, 166, 125, 189, 84, 16, 238, 190, 40, 212, 158, 61, 188, 199, 180, 61, 64, 64, 142, 62, 131, 210, 142, 62, 36, 169, 254, 61, 83, 54, 28, 191, 107, 5, 109, 190, 217, 103, 50, 63, 83, 74, 133, 62, 131, 227, 154, 190, 12, 49, 132, 191, 177, 210, 19, 190, 68, 36, 210, 62, 50, 156, 117, 62, 223, 124, 81, 62, 50, 157, 32, 190, 179, 97, 22, 63, 233, 13, 132, 190, 185, 226, 216, 190, 105, 89, 64, 62, 149, 156, 95, 62, 149, 170, 103, 62, 87, 175, 35, 191, 35, 136, 8, 188, 200, 77, 92, 190, 139, 107, 71, 190, 13, 127, 17, 189, 210, 87, 247, 189, 218, 204, 223, 190, 202, 22, 35, 190, 99, 77, 131, 190, 92, 46, 146, 61, 148, 51, 155, 190, 57, 226, 195, 190, 192, 82, 64, 190, 48, 111, 176, 190};
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
                alignas(float) const unsigned char memory[] = {220, 150, 4, 189, 143, 161, 168, 189, 186, 249, 37, 62, 131, 44, 62, 62, 53, 187, 240, 61, 6, 99, 19, 190, 82, 40, 83, 189, 149, 203, 54, 62, 129, 33, 184, 188, 166, 86, 36, 190, 45, 21, 147, 61, 134, 77, 81, 62, 129, 125, 97, 189, 7, 118, 78, 189, 93, 187, 57, 190, 212, 72, 144, 190, 155, 230, 207, 188, 8, 140, 69, 62, 112, 106, 74, 62, 8, 186, 183, 62, 82, 21, 50, 190, 146, 36, 19, 62, 207, 190, 145, 189, 27, 247, 86, 190, 106, 145, 50, 190, 28, 150, 124, 62, 85, 45, 128, 62, 62, 79, 33, 62, 31, 70, 148, 61, 211, 227, 120, 61, 135, 202, 80, 189, 7, 87, 74, 62};
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
                alignas(float) const unsigned char memory[] = {179, 35, 6, 63, 33, 198, 184, 189, 225, 19, 136, 187, 237, 52, 164, 62, 211, 104, 136, 190, 202, 214, 195, 189, 61, 135, 165, 63, 187, 171, 135, 191, 79, 63, 0, 62, 148, 153, 203, 189, 138, 205, 176, 190, 209, 35, 229, 62, 248, 56, 78, 61, 136, 159, 36, 190, 58, 152, 32, 190, 160, 32, 7, 63, 14, 195, 54, 191, 218, 133, 150, 63, 17, 237, 140, 63, 145, 210, 87, 188, 78, 19, 22, 190, 193, 94, 51, 61, 199, 75, 9, 190, 174, 163, 171, 62, 148, 49, 181, 61, 171, 122, 21, 188, 149, 72, 42, 191, 233, 76, 95, 191, 142, 68, 119, 62, 119, 153, 73, 62, 109, 66, 165, 62, 160, 141, 90, 191, 132, 237, 132, 62, 157, 233, 91, 189, 222, 59, 150, 190, 146, 19, 233, 190, 139, 223, 206, 190, 34, 130, 173, 187, 166, 16, 185, 62, 145, 193, 15, 61, 40, 227, 44, 190, 21, 91, 161, 59, 47, 102, 177, 190, 150, 189, 152, 62, 25, 102, 206, 60, 254, 136, 53, 61, 160, 246, 30, 189, 92, 4, 184, 62, 27, 194, 200, 62, 174, 120, 234, 62, 169, 132, 211, 188, 113, 84, 244, 190, 213, 152, 183, 62, 168, 30, 25, 191, 62, 226, 46, 61, 238, 134, 153, 189, 21, 129, 49, 189, 223, 50, 217, 190, 246, 178, 155, 62, 153, 234, 142, 62, 23, 150, 110, 61, 63, 163, 216, 189, 7, 156, 236, 187, 238, 220, 1, 63};
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
                alignas(float) const unsigned char memory[] = {28, 128, 50, 190, 216, 222, 1, 191};
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
    alignas(float) const unsigned char memory[] = {174, 220, 36, 191, 121, 227, 221, 189, 164, 41, 126, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {90, 23, 100, 192, 102, 137, 77, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0000/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
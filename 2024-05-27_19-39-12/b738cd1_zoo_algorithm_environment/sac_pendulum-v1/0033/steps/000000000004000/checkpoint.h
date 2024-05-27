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
                alignas(float) const unsigned char memory[] = {174, 94, 152, 62, 27, 126, 176, 62, 186, 38, 255, 61, 102, 202, 132, 190, 65, 71, 239, 62, 78, 23, 8, 191, 45, 226, 53, 61, 38, 184, 63, 191, 43, 109, 164, 62, 94, 39, 52, 191, 140, 229, 221, 62, 25, 153, 57, 191, 51, 198, 241, 190, 247, 29, 51, 191, 154, 207, 207, 189, 29, 61, 144, 190, 121, 104, 96, 191, 114, 84, 105, 62, 229, 187, 83, 63, 140, 157, 228, 190, 57, 106, 129, 190, 26, 75, 65, 63, 70, 133, 75, 63, 237, 82, 25, 63, 34, 198, 79, 188, 11, 143, 102, 191, 160, 121, 248, 188, 246, 144, 144, 63, 66, 126, 207, 62, 62, 76, 242, 60, 76, 83, 132, 62, 214, 204, 149, 188, 59, 123, 251, 60, 189, 6, 55, 191, 79, 140, 12, 61, 10, 89, 239, 190, 0, 207, 228, 62, 29, 111, 129, 191, 123, 99, 84, 190, 227, 153, 177, 189, 196, 87, 216, 190, 107, 153, 232, 62, 23, 113, 5, 190, 142, 164, 13, 63, 15, 235, 13, 191, 171, 78, 174, 190, 110, 92, 245, 62, 94, 222, 252, 62, 132, 240, 38, 63, 212, 163, 36, 191, 137, 209, 206, 190, 71, 249, 224, 62, 133, 117, 104, 191, 121, 26, 192, 190, 165, 67, 201, 190, 65, 116, 91, 191, 203, 235, 61, 63, 95, 16, 216, 62, 174, 162, 35, 63, 79, 78, 247, 190, 62, 209, 24, 191, 204, 237, 209, 190, 75, 62, 92, 190, 145, 138, 137, 189, 64, 35, 115, 191, 179, 161, 33, 63, 156, 90, 177, 190, 112, 62, 37, 63, 79, 159, 244, 189, 81, 218, 88, 190, 241, 211, 46, 190, 188, 202, 31, 63, 146, 157, 163, 62, 104, 74, 52, 191, 67, 251, 174, 190, 254, 102, 95, 62, 1, 63, 50, 63, 203, 45, 23, 191, 65, 233, 33, 62, 244, 9, 103, 190, 134, 4, 181, 190, 255, 32, 45, 63, 252, 32, 81, 62, 245, 230, 102, 190, 8, 234, 15, 190, 165, 25, 94, 190, 101, 55, 44, 62, 63, 204, 113, 190, 22, 11, 78, 191, 78, 63, 248, 61, 199, 207, 13, 62, 243, 162, 16, 191, 91, 171, 248, 190, 32, 209, 57, 191, 247, 106, 65, 62, 227, 71, 207, 190};
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
                alignas(float) const unsigned char memory[] = {77, 130, 41, 191, 105, 125, 236, 190, 82, 225, 9, 190, 77, 203, 79, 190, 211, 204, 31, 63, 240, 237, 193, 190, 220, 252, 162, 62, 227, 28, 215, 190, 86, 246, 59, 63, 13, 137, 126, 62, 35, 94, 176, 190, 163, 52, 155, 190, 199, 7, 138, 190, 36, 122, 194, 190, 240, 144, 116, 62, 133, 152, 145, 62, 217, 245, 136, 189, 90, 205, 208, 190, 19, 208, 110, 190, 20, 186, 34, 63, 168, 93, 16, 191, 136, 66, 113, 60, 63, 60, 42, 63, 45, 227, 186, 62, 10, 66, 82, 191, 158, 52, 7, 188, 72, 23, 138, 190, 126, 69, 73, 190, 177, 19, 224, 62, 224, 4, 208, 189, 19, 88, 27, 191, 121, 50, 39, 63};
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
                alignas(float) const unsigned char memory[] = {179, 189, 85, 189, 232, 200, 33, 189, 238, 246, 39, 190, 167, 164, 32, 189, 222, 3, 174, 190, 72, 67, 51, 190, 18, 92, 26, 62, 171, 130, 181, 62, 76, 212, 132, 190, 13, 241, 231, 62, 199, 66, 81, 188, 68, 98, 31, 190, 115, 6, 173, 190, 138, 5, 68, 62, 161, 13, 143, 190, 170, 134, 145, 61, 130, 75, 81, 61, 135, 6, 53, 190, 187, 18, 135, 189, 165, 114, 25, 59, 180, 144, 30, 61, 53, 10, 28, 62, 41, 243, 217, 61, 74, 180, 158, 60, 122, 102, 204, 61, 33, 9, 225, 61, 226, 149, 35, 190, 75, 214, 165, 60, 228, 34, 149, 189, 101, 78, 204, 189, 107, 242, 10, 190, 152, 43, 157, 190, 164, 254, 251, 189, 97, 116, 7, 62, 141, 29, 5, 62, 186, 151, 194, 61, 57, 43, 192, 61, 20, 25, 151, 61, 48, 58, 47, 190, 86, 178, 220, 61, 217, 108, 186, 60, 28, 25, 154, 190, 99, 12, 32, 190, 75, 192, 63, 61, 82, 207, 212, 189, 48, 92, 161, 189, 234, 88, 53, 61, 43, 251, 205, 189, 189, 154, 20, 60, 29, 216, 11, 188, 150, 8, 235, 60, 59, 136, 133, 189, 120, 103, 247, 61, 173, 76, 156, 189, 75, 189, 168, 189, 167, 148, 120, 190, 96, 183, 73, 190, 87, 241, 174, 61, 225, 242, 6, 188, 221, 149, 237, 190, 234, 78, 136, 190, 181, 213, 35, 189, 207, 7, 1, 189, 117, 82, 38, 62, 151, 33, 201, 61, 94, 125, 6, 190, 7, 202, 9, 190, 195, 144, 77, 61, 162, 242, 92, 190, 50, 100, 99, 190, 153, 71, 150, 62, 150, 140, 116, 190, 167, 112, 202, 60, 134, 193, 198, 62, 232, 60, 239, 61, 152, 221, 63, 190, 123, 26, 44, 62, 51, 125, 14, 190, 13, 192, 64, 190, 139, 35, 36, 190, 6, 41, 86, 62, 239, 26, 66, 62, 4, 131, 89, 189, 23, 230, 168, 60, 10, 81, 37, 191, 217, 81, 132, 190, 46, 253, 156, 190, 167, 224, 151, 190, 199, 237, 35, 61, 71, 138, 22, 190, 182, 22, 194, 61, 9, 90, 55, 62, 114, 133, 144, 190, 54, 131, 238, 189, 17, 41, 206, 59, 172, 233, 196, 188, 26, 219, 238, 62, 120, 42, 242, 189, 38, 153, 32, 188, 150, 81, 173, 189, 231, 72, 76, 191, 253, 226, 13, 189, 252, 166, 139, 190, 18, 38, 72, 62, 226, 165, 143, 190, 37, 115, 100, 61, 33, 249, 139, 62, 52, 75, 18, 186, 39, 146, 42, 62, 249, 203, 58, 62, 127, 101, 15, 62, 46, 9, 73, 58, 91, 26, 245, 188, 240, 69, 223, 189, 65, 249, 9, 62, 113, 84, 60, 190, 102, 159, 183, 188, 207, 141, 8, 62, 188, 174, 236, 189, 79, 138, 24, 190, 197, 46, 149, 189, 138, 24, 166, 61, 24, 231, 254, 61, 5, 86, 215, 189, 241, 230, 246, 189, 175, 52, 31, 191, 186, 97, 45, 62, 16, 62, 242, 188, 196, 148, 106, 62, 146, 125, 99, 189, 145, 249, 147, 62, 186, 104, 128, 62, 63, 120, 109, 190, 47, 99, 174, 61, 103, 149, 6, 190, 249, 43, 9, 62, 199, 254, 114, 190, 133, 6, 21, 62, 57, 89, 90, 62, 143, 135, 76, 189, 92, 120, 21, 190, 240, 56, 14, 62, 183, 134, 109, 62, 150, 224, 187, 188, 130, 85, 89, 188, 234, 23, 51, 190, 246, 26, 52, 61, 136, 244, 128, 62, 77, 11, 199, 190, 225, 216, 26, 61, 72, 155, 75, 62, 136, 166, 41, 190, 119, 68, 14, 61, 102, 198, 24, 62, 136, 126, 66, 189, 36, 72, 33, 61, 122, 149, 55, 190, 210, 70, 7, 191, 7, 55, 38, 190, 152, 176, 22, 62, 176, 248, 88, 62, 254, 252, 132, 187, 117, 5, 160, 189, 211, 245, 94, 189, 138, 34, 15, 62, 184, 166, 169, 190, 235, 175, 26, 62, 202, 62, 54, 190, 115, 107, 37, 62, 167, 136, 126, 62, 112, 171, 30, 62, 210, 223, 205, 189, 89, 221, 146, 61, 93, 170, 245, 189, 168, 179, 162, 61, 105, 73, 131, 62, 126, 94, 82, 62, 115, 237, 1, 62, 97, 100, 130, 62, 134, 215, 41, 62, 180, 112, 211, 190, 165, 128, 181, 62, 122, 231, 144, 62, 17, 232, 239, 61, 171, 246, 173, 189, 205, 54, 24, 189, 71, 178, 33, 61, 19, 95, 65, 62, 202, 249, 4, 59, 111, 83, 20, 62, 115, 72, 128, 59, 233, 102, 128, 62, 222, 150, 51, 62, 29, 179, 212, 60, 100, 21, 61, 61, 47, 43, 72, 61, 91, 101, 219, 187, 46, 149, 99, 189, 3, 207, 211, 189, 168, 218, 204, 189, 194, 81, 17, 190, 74, 96, 12, 191, 192, 242, 107, 61, 44, 145, 85, 188, 183, 35, 110, 62, 27, 20, 234, 61, 21, 20, 102, 61, 190, 156, 116, 188, 79, 57, 20, 62, 79, 82, 2, 62, 240, 207, 25, 190, 221, 95, 187, 189, 216, 174, 191, 62, 27, 30, 131, 61, 94, 175, 131, 190, 158, 11, 222, 59, 135, 87, 69, 62, 248, 199, 65, 58, 50, 129, 187, 61, 243, 142, 179, 189, 21, 41, 236, 190, 215, 217, 100, 190, 156, 251, 38, 62, 124, 9, 37, 190, 31, 142, 44, 62, 119, 126, 23, 189, 161, 90, 11, 190, 189, 149, 109, 61, 3, 202, 16, 60, 182, 106, 59, 190, 232, 167, 65, 189, 9, 171, 129, 62, 0, 148, 121, 187, 140, 229, 135, 61, 112, 86, 164, 61, 45, 85, 54, 189, 129, 18, 155, 62, 61, 130, 134, 61, 11, 42, 201, 189, 199, 127, 67, 190, 82, 41, 148, 189, 61, 144, 92, 62, 10, 163, 172, 60, 164, 78, 135, 189, 64, 225, 24, 60, 155, 34, 27, 189, 233, 65, 86, 190, 27, 44, 98, 59, 207, 152, 88, 62, 103, 25, 40, 190, 92, 66, 16, 62, 33, 49, 157, 62, 70, 37, 53, 189, 140, 145, 20, 189, 84, 51, 173, 61, 21, 4, 1, 190, 96, 131, 185, 190, 224, 31, 49, 61, 152, 118, 148, 60, 104, 80, 161, 61, 197, 182, 213, 188, 167, 204, 147, 188, 67, 213, 202, 189, 198, 81, 143, 188, 164, 112, 89, 189, 231, 172, 85, 189, 177, 23, 14, 190, 252, 181, 251, 188, 252, 80, 151, 189, 127, 61, 68, 62, 81, 89, 65, 62, 177, 66, 215, 189, 91, 172, 10, 60, 79, 42, 117, 189, 254, 227, 140, 190, 189, 165, 99, 62, 147, 216, 50, 62, 156, 186, 179, 190, 103, 188, 101, 62, 190, 10, 8, 190, 17, 244, 231, 188, 1, 91, 64, 189, 210, 167, 31, 190, 124, 143, 20, 62, 35, 251, 124, 188, 122, 71, 149, 190, 73, 165, 99, 61, 21, 44, 238, 187, 39, 86, 162, 189, 53, 20, 131, 190, 116, 4, 254, 60, 192, 188, 54, 62, 176, 253, 41, 61, 15, 109, 19, 190, 191, 66, 25, 62, 214, 188, 5, 189, 98, 120, 46, 62, 34, 69, 80, 61, 252, 231, 113, 190, 40, 113, 12, 62, 85, 197, 174, 190, 19, 138, 13, 61, 5, 85, 20, 62, 205, 161, 137, 190, 23, 130, 96, 190, 197, 49, 128, 190, 236, 208, 135, 191, 49, 151, 212, 60, 24, 153, 155, 190, 119, 240, 150, 191, 50, 99, 176, 62, 175, 99, 201, 189, 185, 133, 73, 190, 120, 172, 150, 190, 83, 232, 98, 188, 198, 5, 17, 190, 165, 179, 206, 60, 147, 69, 5, 59, 217, 141, 130, 190, 49, 254, 145, 62, 9, 52, 40, 190, 103, 119, 72, 188, 124, 215, 13, 58, 83, 94, 120, 60, 112, 144, 63, 62, 215, 210, 11, 61, 251, 149, 22, 190, 220, 197, 38, 62, 153, 195, 29, 61, 6, 158, 169, 188, 234, 198, 183, 189, 20, 72, 25, 62, 98, 240, 191, 189, 231, 179, 210, 189, 120, 104, 93, 62, 71, 81, 122, 189, 95, 85, 250, 187, 95, 95, 131, 61, 35, 44, 26, 191, 98, 196, 0, 62, 45, 155, 74, 62, 39, 176, 84, 191, 210, 65, 143, 188, 243, 235, 151, 190, 81, 60, 222, 61, 67, 27, 171, 60, 34, 207, 16, 190, 11, 252, 57, 60, 235, 156, 0, 62, 148, 118, 113, 190, 115, 14, 9, 190, 115, 219, 129, 62, 65, 154, 249, 61, 176, 24, 236, 189, 221, 109, 165, 61, 228, 73, 191, 189, 135, 184, 228, 61, 167, 95, 38, 60, 70, 203, 11, 190, 54, 21, 225, 189, 97, 204, 31, 62, 51, 183, 55, 61, 65, 111, 79, 61, 216, 15, 31, 62, 6, 107, 229, 189, 99, 247, 76, 61, 154, 35, 153, 189, 23, 158, 197, 188, 166, 146, 23, 61, 34, 40, 105, 187, 135, 136, 191, 189, 234, 248, 176, 189, 93, 248, 98, 188, 124, 207, 17, 190, 102, 154, 27, 190, 133, 131, 9, 61, 68, 108, 242, 189, 37, 98, 21, 60, 218, 74, 5, 62, 92, 164, 234, 61, 12, 65, 54, 190, 1, 214, 77, 61, 235, 7, 193, 189, 126, 235, 216, 189, 3, 173, 181, 190, 251, 246, 6, 62, 249, 186, 35, 190, 138, 150, 6, 190, 254, 110, 218, 190, 132, 155, 59, 62, 213, 73, 115, 62, 48, 245, 156, 62, 43, 196, 101, 189, 58, 59, 109, 62, 196, 133, 82, 60, 105, 92, 88, 189, 92, 254, 121, 190, 185, 249, 132, 62, 142, 30, 74, 189, 7, 48, 244, 61, 178, 131, 175, 188, 252, 135, 5, 189, 234, 56, 140, 188, 107, 238, 166, 61, 233, 178, 29, 190, 108, 161, 41, 190, 96, 91, 146, 61, 101, 77, 53, 61, 64, 53, 181, 61, 66, 47, 146, 189, 144, 179, 99, 61, 32, 109, 195, 188, 196, 197, 166, 61, 49, 28, 42, 190, 134, 129, 196, 189, 147, 134, 101, 190, 57, 34, 100, 61, 95, 204, 19, 190, 85, 67, 235, 61, 68, 217, 178, 189, 47, 172, 61, 190, 35, 235, 254, 61, 59, 210, 174, 60, 48, 230, 78, 189, 133, 169, 203, 189, 11, 114, 53, 62, 72, 179, 173, 61, 13, 111, 168, 189, 132, 135, 198, 189, 62, 39, 222, 189, 221, 10, 22, 62, 108, 64, 47, 190, 7, 34, 160, 61, 102, 87, 181, 60, 152, 36, 23, 62, 209, 49, 42, 190, 21, 135, 34, 61, 119, 70, 13, 190, 34, 243, 39, 190, 212, 249, 15, 61, 109, 179, 60, 189, 126, 198, 136, 189, 88, 90, 133, 61, 157, 84, 144, 60, 14, 170, 31, 190, 204, 184, 243, 189, 231, 206, 174, 61, 5, 232, 33, 60, 250, 46, 88, 190, 226, 147, 131, 61, 97, 196, 215, 189, 84, 126, 92, 190, 156, 48, 8, 191, 120, 92, 104, 61, 221, 1, 63, 188, 208, 196, 38, 62, 112, 178, 64, 190, 103, 89, 162, 62, 31, 124, 131, 189, 96, 63, 124, 190, 188, 52, 165, 190, 156, 72, 99, 189, 197, 161, 164, 61, 27, 125, 163, 61, 228, 43, 223, 59, 14, 126, 171, 187, 233, 15, 130, 190, 219, 108, 84, 62, 10, 163, 133, 190, 181, 87, 85, 61, 170, 127, 30, 62, 157, 57, 80, 189, 202, 41, 55, 189, 17, 56, 209, 61, 159, 164, 33, 61, 95, 241, 30, 62, 162, 131, 62, 62, 199, 238, 204, 190, 30, 128, 93, 190, 4, 124, 141, 190, 97, 164, 79, 62, 68, 102, 193, 189, 224, 13, 192, 189, 81, 181, 181, 190, 113, 155, 101, 62, 110, 155, 90, 190, 165, 144, 2, 62, 83, 112, 156, 190, 228, 209, 244, 60, 247, 42, 213, 61, 131, 90, 37, 62, 20, 192, 177, 59, 231, 202, 10, 62, 17, 99, 63, 190, 30, 63, 68, 190, 78, 40, 165, 61, 217, 47, 91, 62, 191, 153, 50, 62, 240, 40, 187, 62, 156, 184, 44, 190, 250, 2, 180, 61, 90, 131, 124, 62, 239, 224, 3, 62, 38, 116, 41, 62, 92, 94, 77, 60, 212, 35, 136, 189, 106, 59, 127, 62, 164, 233, 189, 190, 115, 133, 7, 62, 135, 116, 169, 61, 106, 206, 74, 62, 254, 129, 51, 188, 0, 197, 26, 62, 132, 216, 14, 190, 0, 21, 70, 190, 26, 221, 126, 190, 84, 185, 100, 62, 138, 43, 200, 190, 49, 180, 92, 62, 98, 80, 178, 190, 118, 188, 106, 61, 177, 165, 169, 62, 210, 91, 39, 62, 41, 79, 147, 190, 28, 155, 42, 62, 54, 148, 1, 191, 99, 130, 71, 190, 177, 174, 61, 62, 109, 152, 136, 62, 203, 165, 253, 61, 249, 57, 198, 62, 198, 14, 56, 190, 204, 216, 65, 190, 233, 59, 159, 62, 239, 55, 46, 61, 110, 97, 114, 60, 56, 231, 227, 188, 19, 231, 0, 62, 142, 40, 174, 61, 234, 208, 162, 61, 2, 162, 214, 60, 237, 41, 181, 59, 172, 109, 49, 60, 244, 15, 10, 59, 71, 247, 135, 61, 97, 2, 136, 187, 1, 207, 13, 190, 145, 163, 35, 60, 172, 206, 161, 189, 193, 159, 47, 190, 50, 240, 128, 61, 8, 34, 6, 61, 2, 92, 184, 189, 39, 44, 218, 60, 238, 206, 185, 61, 78, 167, 152, 61, 158, 80, 221, 61, 153, 84, 65, 189, 6, 252, 44, 190, 135, 233, 81, 190, 74, 39, 253, 189, 167, 218, 24, 190, 11, 113, 211, 61, 83, 53, 25, 190, 222, 157, 184, 61, 37, 0, 132, 61, 29, 123, 17, 62, 102, 79, 9, 190, 160, 45, 111, 189, 203, 187, 80, 61, 42, 113, 45, 190, 77, 231, 189, 61, 202, 154, 200, 189, 41, 94, 184, 61, 147, 44, 216, 61, 193, 184, 181, 189, 31, 204, 133, 60, 55, 62, 15, 190, 56, 3, 105, 61, 2, 253, 0, 62, 24, 104, 51, 189, 226, 83, 182, 189, 226, 240, 26, 190, 245, 41, 241, 189, 121, 218, 159, 189, 252, 188, 255, 60, 230, 76, 177, 59, 90, 22, 22, 62, 189, 102, 37, 190, 32, 167, 4, 62, 186, 174, 51, 190, 211, 130, 55, 190, 76, 237, 149, 189, 180, 135, 42, 61, 163, 3, 206, 189, 32, 91, 236, 189, 28, 17, 24, 62, 108, 99, 0, 62, 152, 246, 136, 61, 198, 46, 222, 61, 38, 121, 242, 60, 205, 10, 140, 60, 90, 88, 252, 189, 40, 124, 243, 189, 79, 35, 169, 61, 118, 247, 178, 189, 45, 164, 218, 189, 105, 46, 196, 187, 177, 216, 175, 189, 11, 193, 211, 190, 188, 142, 14, 190, 137, 172, 175, 62, 61, 134, 63, 62, 115, 131, 195, 60, 109, 3, 141, 190, 248, 13, 32, 61, 213, 62, 7, 190, 206, 205, 102, 61, 40, 85, 216, 189, 171, 49, 57, 62, 86, 30, 218, 189, 138, 38, 252, 59, 164, 165, 137, 62, 232, 54, 38, 190, 135, 119, 83, 189, 144, 54, 239, 61, 136, 31, 163, 190, 6, 32, 195, 59, 163, 205, 112, 61, 36, 223, 218, 190, 166, 62, 201, 61, 38, 138, 148, 190, 128, 65, 117, 190, 18, 84, 209, 190, 99, 213, 191, 61, 94, 81, 19, 191, 194, 82, 211, 61, 56, 42, 255, 61, 104, 128, 70, 190, 224, 253, 8, 62, 46, 252, 133, 190, 138, 41, 85, 189, 110, 210, 147, 189, 74, 108, 122, 189, 220, 49, 203, 61, 170, 75, 221, 61, 152, 129, 180, 61, 199, 202, 246, 189, 101, 189, 54, 62, 206, 243, 94, 190, 167, 189, 153, 190, 151, 66, 66, 190, 58, 112, 99, 62, 198, 202, 160, 60, 56, 239, 14, 190, 35, 3, 203, 61, 74, 4, 48, 62, 48, 124, 111, 189, 162, 87, 154, 62, 206, 174, 69, 60, 231, 214, 74, 62, 114, 181, 255, 61, 175, 82, 225, 189, 24, 203, 13, 62, 117, 189, 51, 62, 46, 219, 13, 189, 37, 57, 48, 189, 242, 5, 41, 189, 15, 51, 203, 59, 33, 20, 170, 62, 247, 55, 234, 188, 72, 40, 129, 190, 142, 137, 171, 190, 62, 37, 169, 190, 84, 17, 41, 62, 116, 240, 95, 61, 18, 166, 10, 190, 220, 65, 4, 62, 129, 89, 192, 188, 154, 77, 181, 62, 156, 57, 60, 62, 83, 155, 162, 62, 95, 182, 197, 188, 44, 42, 65, 60, 199, 170, 6, 189, 99, 185, 137, 62, 86, 229, 189, 62, 242, 202, 90, 61, 26, 140, 29, 190, 215, 234, 240, 189, 26, 50, 209, 190, 209, 60, 158, 62, 223, 219, 105, 62, 209, 159, 151, 190, 106, 27, 19, 188, 88, 56, 68, 190, 119, 169, 200, 190, 87, 85, 54, 190, 250, 181, 30, 190, 27, 166, 161, 189, 241, 5, 29, 62, 101, 114, 141, 190, 46, 106, 131, 190, 45, 202, 50, 189, 165, 75, 57, 61, 197, 43, 26, 62, 254, 222, 198, 190, 187, 108, 204, 190, 26, 17, 98, 62, 6, 104, 14, 191, 59, 174, 64, 62, 252, 239, 46, 191, 155, 18, 44, 62, 128, 121, 93, 62, 149, 30, 2, 62, 158, 141, 204, 190, 233, 188, 140, 62, 64, 139, 55, 191, 63, 99, 77, 190, 66, 81, 170, 61, 87, 145, 65, 62, 191, 238, 125, 60, 42, 145, 157, 62, 105, 226, 108, 190, 73, 137, 3, 191, 100, 81, 223, 62, 219, 26, 13, 62, 24, 142, 139, 62, 46, 157, 54, 61, 221, 158, 115, 62, 140, 123, 150, 188, 40, 56, 129, 62, 101, 201, 229, 187, 197, 98, 139, 62, 147, 223, 13, 62, 206, 212, 26, 189, 120, 49, 92, 190, 237, 179, 224, 61, 225, 211, 47, 62, 4, 202, 143, 61, 55, 255, 152, 188, 126, 180, 218, 189, 10, 174, 61, 62, 106, 141, 153, 61, 187, 114, 96, 62, 44, 81, 246, 61, 209, 126, 163, 60, 146, 74, 247, 189, 112, 239, 24, 190, 54, 9, 33, 190, 238, 238, 107, 61, 61, 37, 37, 62, 54, 217, 74, 62, 116, 214, 69, 61, 213, 200, 18, 190, 41, 156, 234, 61, 57, 40, 121, 188, 133, 32, 130, 61, 208, 50, 221, 188, 125, 111, 187, 188, 92, 179, 188, 61, 31, 157, 244, 60, 255, 17, 146, 61, 189, 225, 74, 62, 80, 112, 90, 62, 196, 217, 106, 189, 111, 224, 235, 189, 119, 123, 142, 61, 107, 183, 248, 189, 151, 94, 218, 61, 29, 229, 136, 61, 51, 239, 196, 188, 78, 222, 248, 61, 78, 230, 211, 61, 65, 212, 242, 189, 159, 115, 53, 190, 239, 187, 27, 62, 133, 153, 93, 191, 148, 186, 226, 60, 84, 186, 55, 189, 86, 119, 134, 62, 214, 213, 252, 61, 181, 10, 51, 189, 141, 80, 245, 61, 9, 162, 20, 62, 78, 235, 99, 62, 208, 55, 8, 62, 198, 146, 179, 189, 129, 149, 34, 62, 224, 105, 32, 62, 26, 13, 244, 190, 192, 92, 36, 62, 57, 45, 210, 62, 154, 94, 58, 190, 102, 50, 83, 189, 201, 162, 111, 62, 179, 225, 25, 190, 95, 117, 147, 61, 96, 47, 68, 62, 29, 31, 110, 190, 105, 46, 191, 61, 145, 229, 114, 61, 184, 232, 57, 190, 85, 65, 210, 189, 21, 11, 32, 189, 198, 113, 128, 189, 191, 83, 19, 189, 86, 17, 166, 60, 237, 206, 191, 60, 80, 183, 163, 189, 168, 157, 194, 61, 84, 129, 98, 189, 160, 115, 101, 189, 126, 191, 17, 61, 244, 134, 161, 189, 41, 155, 50, 61, 222, 103, 251, 61, 72, 159, 168, 61, 172, 231, 88, 188, 173, 25, 254, 188, 184, 200, 51, 190, 244, 31, 226, 188, 112, 212, 123, 189, 61, 90, 206, 188, 237, 37, 210, 61, 217, 180, 223, 61, 117, 31, 241, 61, 33, 166, 247, 189, 35, 91, 230, 60, 194, 6, 41, 62, 39, 23, 169, 58, 160, 11, 60, 190, 183, 15, 4, 191, 195, 195, 131, 190, 36, 53, 51, 62, 111, 234, 159, 190, 45, 248, 21, 191, 213, 96, 42, 62, 57, 6, 250, 61, 167, 26, 176, 62, 218, 78, 190, 190, 222, 191, 12, 63, 134, 180, 9, 190, 164, 95, 171, 190, 206, 139, 46, 190, 9, 167, 1, 189, 166, 172, 191, 61, 137, 109, 201, 59, 92, 151, 13, 61, 165, 76, 156, 190, 76, 9, 112, 61, 59, 70, 152, 62, 156, 105, 65, 189, 128, 206, 39, 189, 161, 126, 58, 188, 10, 37, 130, 61, 131, 153, 5, 190, 107, 179, 189, 61, 238, 220, 151, 190, 140, 225, 161, 62, 82, 57, 52, 62, 217, 214, 1, 191, 153, 240, 100, 190, 183, 16, 68, 190, 80, 4, 34, 60, 23, 216, 17, 190, 172, 44, 21, 62, 98, 169, 26, 190, 235, 81, 168, 189, 159, 7, 240, 188, 38, 148, 177, 188, 48, 225, 3, 190, 183, 240, 33, 190, 40, 252, 206, 58, 36, 96, 249, 189, 178, 101, 52, 62, 175, 110, 8, 190, 171, 224, 105, 59, 166, 106, 175, 61, 177, 219, 0, 190, 147, 81, 27, 190, 60, 67, 242, 187, 69, 8, 74, 188, 184, 114, 41, 189, 92, 112, 131, 188, 91, 169, 65, 61, 142, 81, 228, 189, 5, 32, 217, 61, 133, 247, 47, 189, 159, 144, 171, 189, 41, 184, 215, 189, 81, 82, 140, 189, 117, 163, 146, 189, 244, 105, 19, 190, 17, 160, 129, 189, 205, 221, 135, 61, 117, 31, 168, 190, 92, 227, 119, 190, 194, 16, 31, 62, 218, 18, 157, 62, 246, 178, 166, 188, 212, 32, 163, 62, 232, 220, 224, 189, 83, 224, 200, 62, 73, 26, 170, 189, 7, 51, 133, 61, 84, 124, 128, 190, 152, 1, 161, 189, 186, 57, 8, 191, 186, 235, 237, 62, 129, 253, 84, 61, 179, 85, 90, 61, 79, 14, 193, 188, 182, 217, 221, 189, 100, 26, 156, 190, 27, 33, 144, 62, 142, 147, 55, 190, 76, 229, 162, 190, 61, 58, 182, 61, 14, 82, 22, 61, 125, 90, 116, 190, 123, 167, 201, 189, 200, 152, 176, 61, 124, 36, 98, 60, 123, 59, 41, 61, 19, 208, 101, 189, 24, 23, 221, 189, 114, 81, 8, 62, 130, 227, 163, 189, 38, 95, 75, 61, 213, 122, 23, 190, 15, 3, 149, 189, 206, 127, 112, 61, 8, 145, 7, 190, 78, 238, 95, 61, 107, 10, 145, 189, 126, 76, 226, 59, 253, 51, 77, 61, 28, 211, 50, 60, 197, 83, 123, 188, 123, 202, 184, 60, 172, 82, 13, 190, 218, 113, 16, 60, 138, 118, 94, 62, 83, 149, 16, 62, 67, 252, 128, 188, 186, 171, 16, 61, 218, 18, 64, 62, 221, 8, 206, 190, 80, 60, 133, 190, 39, 140, 182, 62, 251, 99, 131, 189, 79, 227, 113, 190, 123, 15, 30, 61, 126, 245, 80, 189, 189, 164, 139, 189, 15, 148, 184, 189, 140, 245, 27, 190, 81, 191, 63, 190, 248, 48, 212, 61, 145, 141, 54, 62, 1, 24, 221, 188, 188, 45, 72, 61, 244, 105, 35, 190, 14, 170, 191, 188, 22, 51, 65, 190, 27, 153, 155, 62, 172, 5, 177, 190, 21, 74, 157, 61, 25, 166, 190, 62, 183, 186, 157, 62, 147, 74, 19, 190, 199, 83, 158, 188, 237, 180, 11, 190, 236, 74, 255, 189, 185, 245, 127, 62, 174, 25, 141, 62, 8, 116, 40, 62, 202, 174, 119, 62, 72, 123, 74, 190, 110, 34, 136, 190, 193, 47, 112, 62, 114, 236, 205, 189, 16, 127, 133, 62, 33, 0, 22, 190, 71, 69, 143, 59, 48, 251, 17, 189, 21, 129, 129, 62, 198, 198, 253, 188, 214, 0, 35, 62, 229, 107, 5, 59, 145, 101, 86, 61, 232, 215, 189, 190, 114, 144, 9, 190, 224, 65, 13, 62, 186, 200, 159, 190, 213, 12, 192, 190, 114, 232, 137, 62, 108, 144, 81, 62, 100, 216, 134, 61, 7, 235, 192, 189, 8, 44, 151, 62, 178, 175, 229, 189, 127, 247, 79, 189, 82, 177, 80, 60, 157, 240, 73, 62, 136, 9, 253, 61, 164, 75, 38, 62, 87, 73, 49, 188, 75, 225, 165, 190, 242, 1, 51, 189, 52, 242, 130, 188, 159, 184, 131, 189, 97, 193, 4, 60, 186, 107, 218, 59, 2, 178, 37, 62, 73, 88, 173, 190, 14, 70, 82, 61, 115, 88, 13, 190, 62, 189, 149, 60, 4, 247, 167, 61, 206, 54, 212, 189, 202, 103, 117, 189, 17, 112, 175, 190};
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
                alignas(float) const unsigned char memory[] = {102, 64, 76, 189, 152, 54, 199, 189, 91, 39, 155, 61, 146, 93, 244, 189, 59, 226, 163, 188, 74, 59, 136, 62, 0, 194, 130, 190, 14, 94, 236, 188, 246, 193, 59, 62, 111, 249, 184, 61, 176, 115, 102, 61, 200, 28, 128, 188, 139, 157, 73, 190, 177, 85, 31, 188, 18, 2, 54, 189, 55, 101, 32, 188, 92, 117, 10, 62, 32, 171, 244, 60, 242, 37, 99, 189, 1, 74, 248, 188, 89, 197, 62, 190, 63, 194, 153, 62, 189, 45, 146, 61, 205, 13, 92, 62, 232, 32, 37, 190, 69, 141, 30, 190, 63, 178, 177, 188, 79, 206, 158, 189, 49, 6, 64, 189, 208, 177, 199, 61, 212, 194, 250, 61, 243, 35, 130, 188};
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
                alignas(float) const unsigned char memory[] = {27, 121, 173, 190, 163, 102, 35, 62, 91, 163, 136, 62, 22, 200, 151, 62, 169, 183, 212, 62, 180, 235, 44, 62, 131, 146, 155, 190, 38, 14, 40, 190, 18, 85, 187, 190, 18, 32, 125, 191, 20, 208, 154, 190, 246, 29, 26, 188, 241, 11, 190, 190, 153, 104, 89, 61, 246, 186, 232, 190, 171, 176, 144, 62, 46, 157, 224, 62, 217, 131, 179, 189, 121, 159, 32, 61, 183, 6, 226, 190, 26, 23, 96, 190, 231, 94, 35, 191, 88, 27, 6, 63, 58, 65, 48, 61, 221, 109, 159, 190, 241, 235, 33, 190, 142, 77, 6, 191, 183, 130, 250, 60, 228, 30, 220, 190, 56, 99, 197, 61, 123, 8, 169, 62, 158, 176, 107, 190, 145, 190, 219, 61, 251, 159, 243, 189, 178, 73, 13, 62, 138, 22, 171, 62, 73, 117, 9, 59, 199, 34, 40, 190, 190, 147, 28, 62, 165, 196, 203, 61, 97, 56, 144, 60, 167, 243, 53, 189, 91, 220, 52, 61, 210, 102, 192, 189, 171, 121, 62, 62, 182, 161, 106, 61, 15, 50, 200, 189, 72, 204, 178, 189, 184, 33, 182, 188, 144, 146, 12, 62, 21, 2, 202, 61, 247, 29, 223, 61, 163, 112, 71, 61, 98, 27, 14, 190, 60, 220, 55, 62, 142, 87, 76, 190, 104, 135, 22, 62, 20, 139, 0, 190, 178, 11, 196, 188, 96, 240, 15, 61, 147, 222, 131, 62, 240, 115, 115, 189, 47, 233, 9, 189, 193, 66, 54, 190};
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
                alignas(float) const unsigned char memory[] = {110, 84, 114, 62, 166, 120, 148, 190};
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
    alignas(float) const unsigned char memory[] = {224, 165, 91, 191, 111, 139, 47, 191, 247, 220, 223, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {166, 216, 193, 191, 26, 137, 50, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0033/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
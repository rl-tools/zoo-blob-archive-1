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
                alignas(float) const unsigned char memory[] = {86, 237, 244, 190, 165, 194, 177, 62, 254, 196, 199, 190, 205, 178, 41, 62, 70, 8, 26, 63, 182, 35, 6, 191, 246, 62, 2, 63, 156, 225, 35, 63, 208, 140, 9, 191, 122, 21, 110, 191, 172, 49, 79, 63, 74, 203, 147, 62, 205, 63, 254, 62, 190, 140, 142, 189, 26, 180, 186, 190, 114, 101, 164, 190, 29, 233, 115, 63, 23, 140, 56, 61, 100, 236, 172, 62, 172, 221, 93, 63, 117, 115, 208, 61, 139, 208, 161, 189, 249, 244, 104, 191, 168, 31, 155, 189, 62, 77, 199, 62, 215, 111, 130, 62, 195, 173, 232, 190, 5, 175, 105, 63, 22, 198, 25, 191, 226, 93, 71, 61, 27, 217, 32, 63, 131, 85, 127, 63, 2, 95, 137, 62, 57, 136, 202, 190, 113, 50, 244, 190, 11, 84, 180, 62, 156, 24, 191, 190, 225, 205, 118, 62, 159, 91, 226, 61, 22, 84, 66, 191, 2, 12, 128, 191, 48, 210, 86, 189, 254, 93, 42, 63, 130, 109, 171, 62, 162, 26, 144, 62, 62, 49, 18, 191, 2, 35, 119, 191, 72, 185, 161, 62, 251, 118, 214, 62, 204, 174, 174, 62, 223, 87, 49, 62, 52, 32, 67, 62, 126, 170, 55, 191, 10, 219, 176, 62, 131, 50, 180, 62, 118, 212, 141, 63, 136, 150, 5, 63, 249, 206, 1, 191, 2, 13, 82, 190, 215, 37, 44, 63, 25, 241, 131, 62, 96, 92, 146, 63, 182, 62, 243, 62, 24, 161, 148, 190, 253, 109, 175, 63, 0, 210, 163, 62, 155, 103, 54, 190, 237, 26, 55, 63, 169, 142, 153, 62, 92, 248, 136, 62, 41, 15, 205, 62, 8, 131, 246, 188, 48, 93, 158, 190, 161, 17, 169, 63, 74, 76, 150, 62, 41, 47, 43, 191, 43, 88, 212, 61, 73, 127, 78, 191, 25, 145, 25, 62, 194, 33, 176, 191, 123, 141, 223, 190, 79, 81, 52, 63, 87, 218, 161, 191, 126, 36, 163, 190, 77, 86, 27, 190, 115, 175, 98, 62, 180, 217, 47, 191, 107, 86, 251, 190, 15, 18, 157, 191, 198, 36, 144, 190, 151, 57, 129, 191, 103, 201, 38, 190, 74, 114, 72, 62, 248, 181, 82, 190, 39, 60, 181, 189, 90, 82, 38, 63};
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
                alignas(float) const unsigned char memory[] = {145, 157, 30, 191, 185, 243, 139, 191, 49, 207, 122, 190, 88, 218, 206, 62, 241, 227, 217, 190, 120, 17, 252, 62, 185, 125, 106, 188, 66, 55, 152, 62, 18, 46, 162, 190, 91, 178, 44, 61, 159, 141, 111, 61, 141, 33, 188, 190, 19, 228, 30, 63, 2, 113, 153, 62, 36, 123, 37, 191, 188, 255, 166, 190, 94, 127, 32, 191, 88, 125, 19, 62, 55, 189, 170, 190, 57, 231, 165, 190, 35, 43, 160, 189, 64, 207, 131, 62, 203, 155, 12, 63, 113, 19, 221, 62, 255, 22, 167, 188, 177, 153, 182, 189, 176, 96, 14, 61, 238, 122, 134, 190, 230, 128, 73, 189, 244, 117, 36, 63, 119, 219, 247, 189, 141, 42, 136, 190};
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
                alignas(float) const unsigned char memory[] = {95, 137, 180, 61, 219, 159, 249, 62, 123, 79, 164, 62, 122, 137, 139, 62, 131, 228, 177, 61, 4, 215, 7, 63, 245, 173, 232, 190, 197, 177, 151, 60, 197, 44, 108, 62, 209, 168, 183, 62, 18, 196, 64, 190, 2, 105, 147, 61, 101, 10, 118, 188, 245, 126, 7, 191, 129, 243, 137, 191, 249, 140, 223, 57, 31, 59, 142, 191, 8, 251, 51, 62, 84, 68, 250, 190, 11, 85, 91, 62, 161, 37, 188, 190, 41, 23, 33, 62, 108, 92, 240, 61, 148, 159, 0, 63, 122, 234, 179, 62, 162, 180, 104, 60, 26, 68, 189, 190, 13, 25, 135, 62, 237, 128, 138, 189, 131, 116, 150, 190, 36, 68, 39, 62, 42, 94, 251, 61, 102, 243, 57, 190, 151, 247, 83, 62, 89, 83, 193, 62, 180, 203, 143, 190, 212, 155, 7, 189, 167, 42, 172, 62, 206, 224, 151, 62, 214, 220, 24, 190, 87, 233, 130, 61, 19, 240, 65, 190, 152, 203, 128, 62, 242, 228, 19, 190, 194, 40, 14, 62, 30, 5, 203, 62, 57, 109, 33, 191, 70, 231, 73, 190, 231, 172, 13, 191, 48, 57, 202, 190, 52, 106, 46, 191, 71, 172, 144, 190, 202, 139, 148, 190, 75, 225, 179, 190, 175, 221, 80, 190, 188, 17, 255, 61, 48, 28, 145, 191, 100, 196, 232, 188, 227, 54, 36, 190, 129, 182, 131, 191, 189, 29, 179, 189, 77, 63, 139, 190, 125, 195, 43, 190, 149, 195, 47, 190, 210, 135, 132, 61, 3, 180, 11, 63, 46, 81, 40, 62, 137, 240, 30, 189, 222, 238, 154, 189, 49, 50, 168, 62, 220, 58, 175, 62, 235, 171, 157, 190, 78, 151, 190, 61, 153, 145, 31, 189, 79, 246, 182, 62, 35, 135, 88, 189, 233, 197, 142, 62, 188, 132, 114, 190, 201, 53, 176, 62, 161, 239, 44, 62, 47, 83, 209, 61, 95, 198, 160, 61, 114, 236, 121, 189, 24, 46, 179, 61, 95, 167, 213, 61, 183, 152, 59, 62, 127, 94, 119, 62, 193, 170, 169, 62, 197, 182, 8, 190, 74, 218, 154, 61, 217, 22, 129, 190, 103, 172, 52, 191, 164, 184, 134, 190, 12, 221, 108, 191, 228, 141, 134, 188, 44, 233, 173, 189, 173, 253, 84, 189, 243, 117, 199, 61, 147, 50, 72, 61, 188, 78, 254, 189, 54, 125, 124, 61, 151, 230, 48, 61, 227, 139, 18, 62, 217, 182, 135, 189, 105, 180, 134, 189, 226, 252, 76, 61, 180, 203, 91, 60, 216, 168, 7, 62, 239, 252, 77, 61, 99, 217, 184, 189, 164, 232, 41, 62, 240, 168, 50, 190, 111, 130, 50, 61, 92, 160, 24, 190, 190, 59, 14, 62, 231, 239, 54, 188, 232, 38, 40, 190, 63, 21, 255, 189, 193, 219, 59, 190, 90, 135, 40, 190, 173, 226, 19, 62, 216, 85, 42, 190, 212, 92, 162, 61, 91, 38, 245, 61, 157, 62, 168, 189, 247, 52, 254, 189, 222, 145, 159, 61, 252, 220, 218, 61, 23, 113, 68, 61, 150, 87, 29, 58, 253, 192, 66, 190, 158, 41, 198, 60, 68, 87, 10, 190, 103, 201, 193, 61, 209, 99, 229, 61, 230, 24, 31, 61, 170, 188, 1, 190, 233, 197, 138, 61, 235, 204, 173, 62, 28, 233, 121, 189, 118, 253, 114, 62, 208, 159, 126, 62, 210, 190, 159, 188, 102, 181, 98, 190, 216, 220, 207, 59, 252, 65, 155, 189, 100, 15, 185, 189, 132, 116, 8, 190, 236, 111, 230, 61, 111, 12, 160, 61, 202, 134, 82, 62, 251, 202, 19, 62, 110, 78, 52, 61, 208, 41, 33, 62, 20, 74, 253, 61, 145, 255, 84, 190, 129, 66, 143, 62, 127, 120, 205, 60, 106, 131, 227, 187, 119, 211, 247, 187, 61, 170, 45, 188, 101, 191, 161, 189, 238, 45, 186, 60, 78, 220, 182, 189, 209, 161, 16, 190, 46, 177, 229, 189, 152, 217, 1, 190, 156, 156, 167, 60, 200, 218, 170, 188, 35, 220, 182, 189, 35, 156, 7, 188, 115, 107, 30, 190, 159, 20, 81, 190, 49, 33, 64, 61, 4, 81, 54, 189, 195, 108, 159, 189, 20, 190, 159, 189, 95, 239, 2, 188, 251, 67, 116, 189, 230, 187, 70, 189, 36, 167, 217, 188, 66, 92, 18, 188, 30, 201, 177, 61, 76, 217, 74, 190, 190, 151, 47, 190, 191, 109, 152, 189, 158, 96, 55, 189, 88, 20, 245, 188, 84, 191, 201, 61, 113, 192, 25, 188, 229, 123, 190, 189, 204, 207, 55, 61, 7, 140, 9, 62, 74, 46, 190, 190, 70, 15, 151, 188, 86, 222, 129, 191, 56, 111, 111, 61, 219, 112, 86, 189, 123, 66, 243, 62, 162, 142, 72, 62, 194, 253, 173, 190, 115, 76, 224, 189, 197, 247, 141, 62, 208, 85, 13, 62, 214, 200, 208, 61, 49, 55, 116, 62, 117, 105, 239, 62, 123, 51, 124, 62, 79, 67, 21, 61, 119, 82, 43, 62, 214, 172, 152, 60, 215, 251, 239, 189, 162, 196, 61, 60, 154, 237, 200, 60, 213, 217, 135, 189, 211, 25, 7, 62, 255, 178, 164, 191, 92, 40, 168, 62, 1, 116, 80, 60, 130, 18, 79, 191, 191, 36, 248, 61, 17, 195, 253, 60, 111, 19, 227, 190, 92, 56, 159, 189, 2, 3, 88, 191, 18, 218, 242, 189, 51, 29, 227, 190, 239, 122, 217, 62, 70, 105, 9, 61, 216, 215, 170, 62, 0, 252, 50, 61, 129, 11, 73, 190, 74, 186, 242, 190, 214, 8, 237, 189, 34, 171, 67, 190, 218, 252, 223, 190, 160, 255, 56, 62, 231, 242, 219, 189, 250, 167, 254, 61, 138, 202, 190, 190, 11, 158, 9, 62, 1, 170, 161, 190, 23, 230, 157, 189, 110, 32, 140, 190, 19, 176, 133, 61, 87, 89, 7, 61, 254, 194, 38, 61, 97, 24, 14, 62, 115, 161, 143, 62, 198, 190, 144, 190, 227, 21, 168, 60, 152, 100, 181, 61, 57, 163, 13, 191, 102, 161, 94, 190, 47, 113, 240, 190, 86, 19, 101, 190, 179, 133, 35, 190, 234, 11, 133, 190, 155, 202, 152, 190, 220, 110, 117, 190, 147, 187, 5, 60, 116, 186, 120, 191, 73, 240, 111, 190, 234, 194, 101, 62, 62, 252, 44, 61, 254, 199, 139, 62, 75, 189, 182, 61, 140, 6, 90, 61, 72, 216, 28, 190, 100, 25, 26, 61, 50, 15, 14, 190, 171, 42, 252, 61, 59, 92, 8, 62, 240, 190, 49, 62, 98, 201, 146, 189, 67, 71, 38, 60, 56, 136, 103, 190, 81, 213, 170, 189, 85, 43, 182, 189, 120, 203, 123, 190, 200, 157, 109, 61, 36, 137, 174, 61, 3, 250, 78, 61, 14, 188, 19, 61, 242, 15, 143, 58, 227, 20, 155, 61, 123, 56, 97, 190, 149, 86, 28, 62, 144, 161, 200, 61, 212, 12, 142, 60, 217, 57, 62, 190, 19, 157, 141, 61, 41, 25, 16, 190, 85, 153, 97, 189, 21, 145, 7, 189, 112, 59, 227, 189, 184, 173, 182, 187, 148, 158, 22, 190, 141, 171, 62, 190, 73, 190, 234, 61, 77, 171, 179, 189, 54, 181, 147, 189, 1, 67, 92, 61, 34, 127, 2, 62, 103, 18, 33, 190, 210, 188, 187, 189, 32, 44, 19, 190, 101, 156, 179, 60, 128, 43, 189, 189, 59, 46, 185, 60, 255, 191, 132, 61, 25, 58, 74, 190, 155, 39, 62, 187, 46, 224, 3, 62, 47, 20, 198, 189, 202, 252, 42, 190, 94, 218, 189, 189, 179, 59, 33, 62, 127, 190, 151, 189, 82, 66, 58, 190, 30, 83, 41, 188, 47, 205, 154, 189, 98, 21, 84, 62, 224, 35, 34, 190, 76, 237, 222, 189, 205, 77, 67, 60, 211, 17, 143, 61, 122, 250, 228, 61, 92, 39, 124, 61, 72, 131, 194, 62, 77, 57, 214, 62, 210, 1, 166, 187, 107, 248, 124, 62, 171, 69, 223, 190, 78, 57, 130, 62, 250, 146, 171, 189, 199, 7, 62, 62, 102, 205, 39, 62, 189, 204, 147, 189, 211, 202, 58, 60, 233, 32, 78, 62, 99, 224, 87, 61, 119, 115, 84, 61, 154, 217, 226, 62, 254, 58, 182, 188, 191, 106, 239, 59, 74, 185, 215, 189, 166, 109, 153, 190, 76, 129, 16, 189, 139, 243, 236, 190, 165, 3, 165, 190, 62, 169, 144, 62, 0, 239, 59, 62, 28, 179, 221, 190, 10, 74, 203, 189, 54, 106, 68, 191, 246, 102, 89, 190, 117, 249, 131, 61, 210, 45, 2, 63, 81, 250, 113, 62, 224, 82, 211, 190, 154, 252, 172, 189, 66, 69, 202, 62, 207, 82, 91, 188, 57, 111, 156, 188, 114, 191, 27, 62, 163, 115, 228, 62, 126, 194, 234, 62, 141, 233, 5, 63, 68, 206, 72, 189, 111, 91, 125, 62, 30, 108, 214, 189, 124, 37, 4, 61, 40, 24, 81, 190, 54, 48, 136, 189, 181, 83, 28, 62, 8, 231, 10, 191, 57, 25, 170, 62, 139, 26, 223, 61, 55, 208, 102, 191, 231, 228, 47, 62, 52, 56, 140, 188, 101, 141, 169, 190, 112, 230, 150, 190, 35, 40, 4, 62, 124, 142, 233, 189, 175, 224, 77, 190, 13, 13, 84, 191, 254, 146, 168, 190, 46, 155, 58, 62, 111, 97, 198, 62, 29, 120, 140, 61, 26, 242, 184, 190, 88, 113, 138, 62, 46, 76, 188, 62, 65, 248, 188, 190, 84, 92, 130, 62, 109, 43, 123, 62, 80, 5, 217, 62, 119, 173, 189, 62, 241, 145, 104, 62, 10, 253, 42, 190, 30, 52, 5, 63, 92, 26, 122, 191, 220, 122, 21, 62, 107, 112, 10, 191, 26, 73, 35, 190, 34, 55, 8, 62, 208, 251, 148, 191, 82, 225, 101, 62, 231, 121, 67, 190, 150, 115, 87, 191, 232, 116, 135, 62, 214, 165, 3, 62, 203, 254, 47, 190, 104, 27, 219, 190, 150, 53, 124, 62, 121, 57, 43, 62, 176, 63, 60, 190, 251, 174, 54, 190, 175, 36, 3, 189, 43, 217, 173, 60, 29, 70, 144, 190, 66, 156, 2, 62, 18, 236, 162, 61, 97, 254, 62, 191, 26, 21, 169, 59, 44, 181, 52, 190, 212, 17, 48, 190, 254, 253, 9, 62, 176, 107, 93, 189, 237, 50, 251, 62, 59, 238, 44, 190, 155, 112, 67, 190, 119, 74, 180, 188, 82, 150, 172, 190, 122, 41, 142, 186, 227, 12, 87, 191, 188, 184, 6, 190, 51, 80, 130, 190, 21, 157, 38, 191, 151, 81, 207, 61, 100, 245, 95, 62, 84, 146, 24, 62, 46, 200, 83, 187, 219, 193, 135, 62, 22, 145, 93, 63, 200, 33, 5, 191, 157, 43, 199, 190, 147, 102, 53, 189, 90, 21, 144, 62, 175, 229, 122, 61, 100, 200, 45, 62, 84, 61, 169, 60, 154, 199, 217, 190, 121, 239, 214, 187, 33, 184, 104, 62, 27, 102, 14, 63, 216, 49, 18, 190, 30, 33, 58, 61, 230, 182, 18, 62, 42, 46, 154, 189, 157, 50, 72, 191, 222, 120, 146, 189, 2, 57, 78, 191, 176, 14, 54, 62, 145, 69, 37, 191, 43, 191, 62, 62, 251, 144, 177, 190, 222, 34, 31, 190, 170, 11, 186, 189, 222, 56, 216, 61, 80, 246, 253, 189, 230, 250, 161, 190, 58, 104, 192, 190, 175, 104, 82, 190, 208, 37, 186, 190, 76, 207, 135, 190, 119, 123, 23, 62, 80, 96, 128, 62, 114, 119, 235, 61, 27, 234, 243, 60, 159, 91, 223, 189, 154, 228, 168, 190, 31, 62, 191, 190, 76, 126, 98, 190, 86, 56, 215, 61, 99, 20, 229, 60, 219, 127, 5, 190, 29, 46, 150, 191, 126, 118, 125, 189, 26, 232, 89, 190, 57, 39, 16, 62, 10, 224, 155, 62, 247, 58, 58, 189, 90, 72, 176, 60, 138, 107, 52, 62, 71, 149, 143, 190, 10, 173, 29, 190, 12, 123, 36, 191, 120, 130, 132, 61, 18, 221, 7, 191, 206, 227, 10, 191, 106, 118, 91, 190, 160, 47, 202, 190, 105, 122, 254, 61, 169, 78, 195, 61, 209, 148, 128, 190, 195, 49, 37, 61, 102, 194, 9, 62, 165, 105, 10, 190, 78, 120, 114, 190, 93, 15, 157, 190, 42, 161, 171, 62, 150, 219, 160, 61, 204, 35, 54, 189, 228, 173, 142, 62, 108, 142, 230, 61, 162, 109, 218, 190, 3, 188, 31, 190, 30, 221, 221, 62, 20, 234, 182, 62, 21, 58, 111, 190, 39, 145, 69, 189, 101, 66, 82, 189, 249, 221, 6, 191, 76, 167, 221, 190, 192, 50, 255, 61, 34, 203, 243, 190, 152, 167, 88, 62, 88, 80, 221, 189, 74, 230, 136, 62, 149, 253, 170, 190, 194, 224, 129, 190, 136, 177, 172, 61, 13, 241, 2, 62, 232, 243, 20, 189, 131, 106, 47, 190, 12, 46, 51, 61, 254, 29, 239, 62, 85, 12, 81, 190, 161, 213, 66, 61, 1, 79, 30, 190, 253, 128, 136, 62, 158, 97, 129, 62, 228, 3, 48, 189, 126, 87, 8, 62, 210, 150, 137, 62, 212, 251, 204, 190, 89, 67, 199, 62, 172, 77, 229, 190, 202, 112, 229, 189, 223, 248, 92, 189, 153, 193, 104, 62, 163, 9, 16, 189, 67, 230, 3, 190, 225, 226, 84, 62, 5, 56, 223, 189, 85, 5, 39, 191, 219, 153, 186, 190, 49, 50, 18, 191, 235, 91, 115, 190, 220, 76, 70, 190, 179, 31, 45, 62, 163, 154, 152, 190, 177, 14, 153, 61, 181, 196, 59, 62, 186, 152, 0, 190, 82, 10, 56, 62, 226, 103, 65, 62, 78, 119, 7, 192, 97, 152, 241, 190, 168, 113, 127, 62, 199, 53, 25, 62, 218, 98, 40, 62, 227, 85, 239, 61, 249, 242, 52, 61, 5, 84, 120, 190, 34, 104, 74, 190, 168, 11, 204, 189, 220, 113, 193, 189, 184, 8, 128, 62, 28, 55, 37, 62, 34, 115, 136, 60, 210, 1, 137, 190, 153, 218, 58, 189, 79, 147, 58, 62, 239, 36, 152, 190, 90, 131, 133, 62, 16, 176, 133, 61, 141, 68, 141, 61, 79, 125, 56, 190, 140, 38, 81, 190, 4, 187, 147, 189, 9, 214, 169, 189, 123, 68, 186, 190, 74, 248, 186, 62, 68, 133, 171, 61, 228, 99, 73, 189, 202, 132, 187, 62, 165, 216, 176, 189, 83, 164, 149, 62, 250, 184, 89, 187, 104, 212, 47, 191, 171, 212, 130, 61, 56, 53, 216, 189, 43, 177, 52, 191, 235, 103, 102, 190, 195, 208, 139, 189, 38, 1, 102, 60, 78, 211, 145, 61, 220, 10, 145, 188, 1, 146, 78, 190, 31, 19, 179, 60, 255, 192, 197, 188, 111, 58, 255, 189, 249, 252, 172, 189, 72, 157, 120, 189, 64, 248, 61, 189, 187, 158, 16, 62, 106, 148, 9, 62, 50, 26, 81, 188, 150, 200, 15, 189, 104, 114, 180, 188, 10, 56, 29, 190, 183, 139, 84, 187, 152, 143, 36, 190, 143, 175, 105, 189, 129, 247, 165, 60, 18, 152, 236, 188, 248, 181, 145, 61, 105, 14, 187, 61, 161, 23, 66, 190, 102, 131, 212, 61, 7, 90, 59, 189, 241, 138, 211, 189, 191, 206, 71, 190, 218, 99, 112, 60, 152, 162, 136, 61, 205, 37, 198, 189, 149, 231, 179, 61, 134, 21, 156, 190, 240, 113, 146, 189, 214, 79, 18, 190, 170, 176, 95, 187, 125, 173, 40, 189, 78, 123, 211, 62, 49, 119, 56, 62, 150, 255, 20, 190, 217, 230, 30, 61, 165, 173, 174, 62, 171, 108, 98, 61, 27, 150, 172, 61, 242, 48, 192, 188, 201, 54, 174, 189, 20, 39, 137, 62, 44, 78, 88, 190, 120, 15, 160, 58, 122, 156, 42, 190, 221, 79, 44, 188, 194, 19, 94, 59, 81, 145, 134, 190, 32, 169, 62, 62, 119, 108, 31, 62, 74, 32, 185, 190, 201, 228, 129, 62, 175, 132, 250, 188, 115, 160, 70, 191, 97, 109, 223, 61, 151, 112, 254, 189, 30, 15, 0, 191, 210, 66, 29, 190, 251, 193, 69, 190, 231, 206, 38, 189, 37, 195, 212, 61, 172, 34, 156, 190, 23, 102, 137, 62, 124, 102, 53, 191, 27, 239, 18, 191, 231, 28, 67, 62, 71, 30, 194, 188, 147, 210, 102, 62, 122, 98, 175, 191, 110, 45, 51, 62, 96, 137, 180, 190, 131, 157, 141, 188, 201, 254, 95, 190, 152, 94, 212, 62, 225, 44, 136, 62, 236, 34, 64, 61, 203, 131, 56, 190, 178, 229, 181, 187, 205, 211, 83, 190, 196, 254, 132, 190, 183, 12, 4, 191, 237, 154, 0, 190, 109, 212, 52, 190, 4, 203, 213, 189, 206, 88, 204, 62, 156, 71, 15, 63, 78, 194, 30, 190, 85, 202, 77, 62, 180, 189, 166, 62, 128, 72, 140, 190, 90, 25, 47, 62, 66, 243, 116, 189, 86, 54, 151, 190, 221, 166, 70, 191, 65, 140, 125, 60, 158, 96, 33, 62, 234, 210, 58, 63, 102, 231, 205, 61, 200, 213, 172, 190, 205, 95, 117, 190, 250, 119, 214, 62, 90, 22, 178, 60, 228, 55, 67, 61, 86, 79, 215, 62, 106, 218, 171, 188, 17, 42, 18, 63, 202, 33, 6, 190, 138, 53, 240, 190, 110, 143, 227, 61, 187, 113, 67, 191, 206, 92, 131, 62, 119, 140, 43, 191, 196, 105, 54, 191, 152, 81, 19, 62, 143, 213, 9, 191, 14, 36, 148, 62, 140, 206, 223, 189, 230, 203, 65, 191, 223, 84, 215, 61, 115, 167, 6, 62, 48, 79, 54, 190, 17, 193, 190, 190, 37, 11, 191, 190, 53, 9, 152, 189, 232, 145, 191, 190, 91, 56, 145, 60, 76, 102, 38, 190, 246, 112, 79, 62, 134, 190, 33, 60, 185, 107, 153, 190, 201, 188, 182, 189, 188, 45, 53, 191, 106, 84, 187, 189, 120, 38, 9, 191, 76, 28, 127, 189, 71, 149, 211, 61, 28, 106, 67, 190, 41, 147, 124, 62, 37, 254, 27, 190, 217, 77, 215, 190, 59, 170, 17, 62, 250, 118, 46, 191, 190, 223, 103, 188, 82, 89, 247, 190, 107, 6, 91, 190, 56, 36, 208, 190, 56, 165, 140, 190, 44, 171, 255, 189, 241, 148, 254, 190, 157, 235, 14, 191, 134, 99, 35, 191, 41, 50, 106, 61, 77, 226, 141, 62, 92, 52, 188, 190, 219, 236, 169, 60, 126, 106, 21, 61, 157, 67, 74, 62, 154, 120, 10, 187, 229, 208, 173, 188, 85, 165, 225, 62, 29, 197, 18, 189, 51, 121, 223, 190, 222, 180, 59, 62, 75, 206, 177, 190, 252, 201, 215, 189, 158, 100, 128, 190, 202, 14, 103, 62, 123, 71, 148, 189, 9, 60, 18, 191, 75, 62, 19, 190, 83, 180, 76, 191, 32, 194, 3, 191, 196, 175, 133, 190, 41, 58, 241, 190, 31, 246, 191, 190, 26, 24, 35, 190, 21, 73, 157, 190, 140, 163, 143, 61, 39, 30, 140, 190, 89, 143, 9, 190, 17, 8, 5, 191, 201, 156, 106, 191, 128, 167, 40, 62, 195, 43, 141, 190, 137, 22, 17, 59, 90, 186, 34, 190, 185, 144, 205, 190, 213, 203, 209, 61, 33, 27, 188, 62, 206, 32, 198, 62, 7, 127, 39, 62, 155, 89, 6, 62, 118, 2, 48, 191, 162, 15, 119, 61, 126, 115, 129, 62, 219, 90, 254, 62, 235, 255, 213, 190, 221, 181, 222, 61, 234, 37, 167, 61, 80, 46, 192, 190, 219, 33, 91, 191, 95, 64, 156, 190, 176, 145, 55, 191, 96, 19, 109, 61, 162, 82, 4, 191, 133, 102, 78, 62, 20, 137, 184, 190, 36, 58, 165, 61, 89, 82, 211, 61, 191, 102, 189, 62, 61, 201, 106, 62, 206, 241, 148, 188, 251, 119, 203, 61, 72, 88, 213, 62, 204, 250, 106, 190, 73, 24, 106, 190, 28, 47, 126, 61, 139, 181, 241, 61, 170, 165, 4, 63, 49, 222, 190, 62, 23, 140, 224, 61, 201, 210, 202, 189, 27, 244, 9, 190, 214, 10, 211, 61, 24, 153, 163, 62, 70, 50, 50, 191, 51, 119, 6, 189, 254, 94, 250, 188, 215, 17, 118, 62, 223, 84, 16, 190, 209, 239, 97, 190, 63, 33, 22, 190, 137, 201, 5, 63, 149, 255, 197, 60, 167, 181, 69, 62, 90, 53, 156, 189, 90, 100, 208, 61, 186, 217, 35, 190, 117, 252, 148, 62, 11, 157, 123, 189, 56, 157, 37, 60, 83, 251, 136, 62, 216, 109, 65, 61, 46, 14, 183, 61, 71, 29, 39, 191, 230, 204, 13, 191, 79, 2, 124, 190, 156, 139, 128, 191, 201, 127, 165, 62, 101, 207, 9, 62, 100, 95, 135, 190, 185, 144, 254, 61, 230, 83, 245, 62, 251, 23, 166, 61, 23, 23, 201, 62, 78, 183, 56, 190, 88, 223, 241, 190, 13, 9, 158, 61, 2, 160, 116, 62, 196, 82, 190, 62, 252, 166, 142, 190, 1, 209, 57, 62, 161, 165, 74, 60, 182, 167, 57, 190, 31, 205, 194, 190, 108, 6, 74, 62, 37, 188, 65, 191, 198, 75, 135, 62, 81, 131, 27, 191, 14, 14, 26, 189, 138, 220, 192, 190, 222, 199, 212, 189, 176, 217, 181, 61, 181, 190, 136, 62, 140, 133, 82, 190, 100, 248, 245, 189, 254, 64, 211, 60, 154, 190, 192, 62, 32, 23, 176, 190, 27, 105, 160, 189, 251, 92, 194, 62, 119, 56, 250, 61, 191, 207, 227, 189, 173, 169, 30, 189, 52, 75, 9, 189, 119, 171, 226, 189, 165, 119, 125, 61, 11, 117, 130, 190, 218, 77, 2, 61, 81, 242, 158, 61, 168, 163, 48, 190, 129, 221, 183, 191, 10, 22, 32, 190, 236, 32, 220, 190, 176, 203, 149, 189, 19, 170, 34, 62, 101, 202, 102, 189, 249, 90, 232, 62, 58, 190, 33, 188, 163, 53, 162, 190, 43, 138, 39, 62, 165, 115, 120, 191, 42, 99, 199, 189, 201, 136, 245, 190, 52, 195, 108, 190, 52, 159, 7, 191, 238, 80, 215, 190, 0, 59, 245, 188, 118, 121, 61, 61, 39, 16, 198, 61, 15, 196, 110, 189, 77, 179, 32, 62, 11, 132, 209, 60, 60, 64, 183, 190, 60, 222, 229, 190, 28, 208, 38, 61, 26, 9, 173, 62, 15, 112, 226, 62, 189, 149, 170, 61, 46, 116, 85, 61, 184, 84, 174, 190, 222, 50, 99, 62, 81, 151, 87, 62, 196, 59, 18, 63, 117, 35, 38, 190, 154, 25, 248, 189, 53, 107, 59, 61, 134, 136, 51, 62, 128, 192, 178, 190, 133, 116, 197, 190, 243, 216, 67, 191, 217, 51, 86, 62, 142, 90, 55, 191, 167, 245, 104, 62, 75, 207, 50, 191, 47, 221, 99, 190, 62, 95, 30, 62, 16, 248, 229, 188, 252, 83, 79, 190, 161, 79, 207, 190, 28, 111, 242, 189, 226, 252, 16, 63, 255, 246, 155, 190, 242, 200, 173, 62, 166, 116, 252, 61, 234, 170, 93, 62, 27, 77, 58, 62, 107, 251, 149, 190, 63, 156, 185, 190, 192, 124, 152, 62, 25, 201, 91, 191, 77, 15, 158, 62, 188, 229, 40, 62, 57, 44, 170, 59, 105, 251, 147, 190, 180, 203, 30, 190, 161, 121, 226, 189, 145, 40, 9, 62, 150, 215, 249, 61, 62, 98, 96, 62, 167, 37, 11, 62, 79, 46, 12, 191, 250, 100, 155, 62, 97, 155, 4, 190, 26, 152, 173, 60, 181, 100, 52, 61, 163, 170, 67, 190, 188, 103, 109, 62, 200, 168, 28, 62, 172, 127, 150, 58, 52, 189, 199, 62, 145, 138, 112, 62, 94, 121, 184, 190, 72, 96, 145, 191, 40, 230, 185, 62, 181, 235, 165, 62, 150, 3, 155, 61, 79, 178, 172, 188, 155, 153, 17, 62, 107, 16, 165, 189, 146, 114, 193, 189, 252, 132, 135, 190, 20, 115, 185, 189, 233, 119, 199, 62, 32, 56, 39, 62, 218, 226, 151, 190, 147, 197, 1, 190, 169, 82, 167, 190, 61, 78, 29, 62, 28, 129, 126, 190, 197, 254, 151, 62, 106, 156, 218, 61, 75, 80, 16, 63, 63, 238, 197, 190, 219, 210, 175, 61, 104, 145, 38, 62, 34, 182, 140, 62, 68, 56, 13, 191, 251, 56, 129, 62, 15, 56, 205, 189, 96, 199, 158, 60, 163, 155, 173, 62, 229, 47, 250, 61, 184, 127, 44, 62, 179, 142, 137, 190, 166, 178, 179, 191, 250, 22, 80, 62, 197, 201, 214, 190, 47, 201, 50, 191, 164, 71, 82, 190};
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
                alignas(float) const unsigned char memory[] = {121, 134, 161, 61, 3, 63, 22, 62, 94, 206, 91, 62, 20, 38, 173, 189, 145, 99, 224, 62, 184, 41, 203, 61, 45, 167, 249, 61, 251, 142, 230, 60, 167, 229, 53, 190, 236, 158, 236, 189, 242, 60, 145, 62, 161, 73, 72, 62, 213, 248, 168, 62, 107, 123, 18, 190, 169, 166, 157, 62, 6, 56, 68, 190, 117, 35, 255, 189, 164, 82, 181, 189, 28, 224, 168, 62, 154, 194, 80, 190, 150, 245, 129, 62, 95, 44, 15, 190, 114, 136, 146, 61, 143, 79, 9, 62, 217, 74, 107, 61, 15, 183, 167, 61, 95, 166, 9, 61, 77, 224, 219, 189, 69, 223, 6, 190, 199, 240, 47, 62, 230, 233, 41, 62, 218, 38, 186, 61};
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
                alignas(float) const unsigned char memory[] = {45, 64, 200, 62, 41, 228, 65, 191, 204, 179, 234, 190, 33, 91, 162, 61, 139, 28, 125, 60, 137, 62, 150, 189, 139, 171, 232, 190, 3, 3, 76, 191, 242, 103, 106, 62, 176, 101, 218, 189, 119, 68, 230, 188, 251, 209, 9, 191, 64, 211, 88, 191, 67, 107, 92, 62, 101, 119, 78, 62, 175, 169, 186, 190, 83, 196, 115, 62, 49, 90, 132, 63, 45, 233, 215, 190, 162, 80, 94, 61, 233, 184, 94, 190, 128, 225, 57, 191, 223, 198, 76, 191, 27, 235, 131, 191, 128, 189, 38, 191, 235, 247, 163, 62, 50, 68, 98, 62, 91, 193, 169, 62, 223, 217, 65, 191, 51, 123, 74, 63, 203, 128, 68, 63, 211, 169, 100, 191, 202, 250, 88, 190, 86, 19, 179, 190, 21, 0, 74, 189, 39, 222, 2, 190, 199, 43, 153, 190, 160, 62, 104, 61, 248, 95, 159, 61, 185, 140, 5, 190, 154, 118, 1, 62, 237, 158, 148, 61, 111, 191, 201, 190, 66, 48, 166, 62, 252, 161, 120, 189, 107, 83, 99, 190, 18, 63, 8, 191, 133, 97, 212, 189, 207, 51, 31, 60, 239, 159, 115, 62, 37, 145, 97, 190, 227, 0, 141, 60, 118, 178, 138, 190, 53, 109, 171, 62, 61, 18, 123, 62, 43, 175, 73, 62, 149, 149, 159, 61, 235, 127, 160, 189, 63, 172, 21, 63, 19, 203, 211, 61, 178, 145, 142, 190, 250, 71, 23, 62, 93, 134, 139, 188, 155, 232, 11, 63};
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
                alignas(float) const unsigned char memory[] = {194, 86, 104, 61, 62, 165, 172, 190};
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
    alignas(float) const unsigned char memory[] = {225, 147, 79, 191, 155, 34, 196, 191, 214, 157, 0, 192};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {11, 179, 90, 192, 0, 1, 32, 189};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0061/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
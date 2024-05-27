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
                alignas(float) const unsigned char memory[] = {228, 32, 143, 62, 51, 226, 236, 190, 177, 135, 47, 191, 232, 67, 2, 62, 35, 123, 20, 61, 244, 43, 104, 62, 90, 60, 65, 63, 220, 147, 75, 191, 196, 137, 47, 190, 17, 242, 5, 191, 39, 116, 20, 63, 36, 56, 247, 188, 132, 99, 55, 191, 151, 63, 209, 190, 221, 207, 44, 189, 49, 34, 196, 190, 40, 15, 55, 63, 1, 72, 183, 61, 226, 136, 243, 190, 130, 95, 208, 190, 221, 208, 36, 63, 215, 14, 255, 61, 172, 36, 40, 63, 220, 251, 72, 190, 122, 98, 53, 62, 246, 208, 147, 62, 177, 198, 179, 59, 219, 61, 159, 188, 177, 34, 110, 63, 15, 207, 189, 62, 158, 96, 132, 190, 124, 59, 153, 191, 215, 98, 143, 190, 114, 72, 152, 62, 252, 102, 255, 190, 164, 12, 246, 62, 90, 222, 60, 190, 66, 138, 68, 63, 84, 23, 181, 61, 44, 163, 188, 62, 251, 201, 13, 63, 16, 72, 240, 62, 133, 60, 199, 189, 61, 244, 146, 62, 101, 181, 32, 191, 20, 134, 55, 63, 142, 44, 156, 191, 164, 56, 189, 190, 12, 11, 34, 191, 87, 234, 143, 191, 3, 169, 143, 190, 74, 62, 225, 61, 112, 49, 148, 60, 248, 12, 47, 189, 173, 16, 41, 63, 47, 241, 47, 191, 75, 52, 255, 190, 229, 243, 100, 63, 239, 205, 129, 63, 73, 110, 119, 62, 245, 121, 30, 189, 195, 223, 121, 191, 158, 248, 250, 190, 75, 25, 252, 190, 235, 93, 225, 62, 120, 43, 212, 190, 68, 198, 250, 190, 178, 148, 249, 189, 122, 99, 152, 62, 10, 215, 49, 63, 5, 3, 50, 63, 127, 115, 79, 62, 238, 113, 227, 60, 3, 158, 13, 191, 139, 194, 229, 61, 196, 204, 90, 190, 181, 125, 111, 191, 187, 223, 63, 190, 180, 29, 252, 190, 142, 78, 165, 191, 80, 74, 51, 191, 91, 32, 113, 191, 251, 169, 132, 190, 188, 141, 220, 189, 146, 60, 195, 189, 180, 255, 3, 63, 158, 244, 2, 191, 14, 184, 222, 189, 140, 189, 47, 191, 219, 63, 223, 62, 79, 137, 191, 189, 209, 183, 62, 191, 133, 212, 41, 62, 198, 229, 17, 63, 80, 203, 102, 189, 104, 88, 177, 189};
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
                alignas(float) const unsigned char memory[] = {13, 58, 64, 191, 217, 123, 33, 189, 43, 101, 138, 59, 18, 25, 119, 190, 204, 82, 193, 59, 247, 177, 208, 185, 174, 225, 143, 60, 196, 146, 192, 62, 179, 107, 193, 190, 121, 107, 130, 190, 159, 141, 40, 189, 27, 147, 72, 62, 251, 229, 49, 62, 249, 11, 54, 190, 18, 68, 248, 190, 54, 67, 22, 190, 65, 106, 115, 62, 226, 102, 199, 190, 8, 87, 203, 188, 100, 128, 134, 62, 81, 14, 164, 62, 232, 75, 106, 189, 156, 27, 23, 63, 158, 33, 117, 190, 112, 242, 69, 189, 231, 218, 183, 62, 187, 19, 70, 190, 98, 28, 74, 62, 145, 197, 26, 190, 86, 199, 169, 62, 126, 23, 127, 190, 31, 203, 71, 63};
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
                alignas(float) const unsigned char memory[] = {143, 240, 182, 189, 190, 27, 34, 190, 83, 112, 174, 62, 241, 192, 41, 62, 212, 75, 92, 190, 76, 231, 13, 62, 201, 184, 66, 189, 234, 10, 89, 62, 119, 93, 239, 189, 66, 78, 170, 189, 108, 160, 138, 191, 194, 160, 128, 61, 107, 84, 208, 61, 250, 82, 131, 189, 12, 35, 165, 61, 57, 158, 67, 190, 168, 130, 213, 190, 44, 207, 37, 62, 197, 252, 155, 62, 19, 117, 39, 62, 152, 137, 69, 190, 118, 242, 62, 61, 219, 107, 14, 61, 146, 122, 201, 189, 19, 214, 30, 190, 57, 71, 210, 190, 248, 115, 143, 190, 127, 77, 154, 190, 74, 176, 131, 62, 196, 11, 93, 60, 198, 7, 62, 190, 101, 115, 163, 62, 196, 241, 14, 190, 49, 211, 248, 189, 245, 144, 32, 189, 41, 253, 18, 190, 169, 222, 151, 62, 217, 240, 87, 62, 83, 146, 223, 190, 73, 35, 162, 61, 138, 129, 207, 60, 206, 200, 89, 62, 135, 155, 143, 190, 2, 253, 195, 188, 247, 36, 230, 61, 209, 14, 106, 62, 119, 187, 15, 189, 79, 116, 211, 190, 82, 7, 151, 189, 180, 154, 33, 62, 170, 185, 107, 190, 61, 189, 37, 62, 63, 175, 154, 189, 13, 237, 34, 62, 101, 201, 124, 187, 35, 53, 137, 62, 94, 127, 200, 61, 1, 156, 26, 189, 201, 134, 110, 61, 169, 102, 174, 190, 245, 136, 79, 62, 243, 189, 206, 190, 172, 218, 132, 190, 135, 241, 5, 62, 104, 42, 204, 189, 204, 48, 183, 189, 161, 28, 14, 190, 75, 152, 176, 62, 96, 173, 89, 189, 247, 90, 87, 188, 124, 187, 211, 61, 31, 51, 64, 62, 124, 68, 10, 189, 31, 68, 73, 61, 246, 124, 138, 62, 163, 77, 249, 61, 8, 71, 121, 185, 152, 29, 132, 187, 89, 34, 169, 61, 209, 74, 136, 61, 88, 56, 46, 62, 34, 219, 14, 189, 22, 65, 197, 189, 90, 69, 225, 189, 205, 216, 39, 190, 157, 162, 46, 191, 81, 187, 216, 61, 233, 6, 43, 62, 231, 118, 128, 62, 161, 91, 187, 190, 15, 80, 227, 190, 173, 102, 153, 190, 44, 170, 80, 62, 168, 234, 135, 62, 209, 41, 147, 61, 193, 174, 209, 189, 46, 59, 167, 190, 216, 228, 113, 190, 72, 90, 132, 191, 75, 254, 10, 62, 119, 206, 92, 191, 14, 70, 145, 62, 185, 138, 105, 189, 184, 179, 178, 62, 167, 171, 124, 60, 74, 170, 7, 190, 60, 132, 63, 191, 170, 245, 65, 190, 112, 61, 183, 62, 114, 69, 125, 61, 250, 10, 112, 189, 41, 141, 68, 191, 146, 0, 35, 190, 247, 59, 12, 189, 191, 38, 22, 191, 227, 21, 57, 62, 225, 146, 232, 190, 143, 66, 43, 62, 72, 252, 157, 190, 209, 136, 20, 62, 211, 220, 196, 190, 164, 241, 231, 190, 210, 118, 176, 190, 47, 54, 231, 61, 156, 48, 133, 62, 126, 41, 78, 189, 174, 53, 241, 190, 108, 24, 14, 62, 237, 28, 122, 190, 87, 148, 4, 189, 148, 125, 82, 62, 2, 67, 114, 62, 217, 136, 153, 188, 207, 116, 127, 61, 228, 181, 140, 188, 76, 60, 159, 62, 197, 173, 150, 61, 45, 24, 27, 190, 27, 107, 125, 190, 67, 107, 203, 61, 188, 167, 97, 189, 158, 106, 227, 189, 179, 30, 242, 61, 176, 6, 115, 190, 22, 153, 22, 188, 69, 175, 200, 61, 248, 74, 78, 62, 175, 131, 42, 62, 79, 61, 137, 60, 125, 194, 35, 62, 106, 162, 105, 61, 226, 138, 124, 188, 115, 240, 61, 61, 210, 77, 200, 61, 205, 136, 25, 62, 175, 222, 28, 190, 92, 200, 120, 188, 148, 140, 34, 62, 195, 23, 204, 61, 84, 69, 84, 62, 133, 23, 114, 189, 194, 173, 112, 190, 214, 211, 222, 189, 233, 15, 4, 62, 171, 249, 144, 61, 12, 165, 151, 61, 49, 40, 72, 190, 9, 104, 243, 60, 85, 129, 193, 188, 205, 254, 32, 191, 177, 99, 11, 62, 111, 142, 101, 62, 121, 69, 9, 62, 190, 161, 2, 190, 235, 202, 12, 62, 232, 48, 105, 190, 112, 201, 17, 62, 232, 255, 40, 189, 112, 221, 93, 190, 112, 4, 142, 190, 64, 205, 3, 61, 68, 46, 75, 62, 82, 252, 122, 188, 22, 235, 224, 190, 211, 127, 94, 63, 122, 26, 4, 190, 200, 193, 239, 61, 128, 146, 7, 62, 195, 185, 174, 62, 170, 16, 243, 189, 204, 126, 115, 63, 228, 165, 105, 60, 18, 60, 156, 62, 106, 169, 137, 190, 170, 180, 248, 61, 28, 204, 59, 190, 156, 68, 111, 62, 196, 86, 175, 189, 159, 250, 50, 62, 160, 90, 117, 188, 69, 229, 247, 60, 115, 136, 56, 190, 132, 182, 168, 190, 56, 127, 229, 61, 64, 81, 0, 190, 114, 18, 97, 190, 180, 21, 141, 62, 217, 167, 227, 62, 241, 107, 106, 190, 191, 211, 198, 189, 129, 108, 84, 62, 236, 88, 145, 190, 102, 223, 193, 61, 205, 41, 4, 190, 2, 92, 235, 188, 137, 247, 61, 191, 232, 211, 138, 190, 18, 18, 167, 189, 46, 1, 149, 190, 171, 134, 132, 187, 53, 74, 160, 190, 247, 87, 129, 62, 227, 33, 164, 190, 109, 59, 55, 62, 56, 42, 46, 190, 135, 164, 22, 189, 237, 12, 238, 60, 136, 0, 18, 188, 173, 117, 34, 190, 74, 42, 48, 190, 100, 141, 240, 189, 197, 153, 11, 62, 25, 172, 43, 61, 208, 103, 73, 59, 14, 21, 223, 189, 61, 115, 231, 61, 251, 248, 81, 60, 196, 121, 138, 61, 118, 118, 31, 61, 43, 26, 158, 61, 151, 12, 192, 61, 56, 153, 157, 189, 164, 208, 15, 189, 235, 113, 216, 189, 244, 158, 128, 61, 127, 143, 88, 190, 19, 21, 6, 61, 159, 206, 161, 188, 59, 156, 71, 62, 23, 60, 31, 190, 236, 214, 125, 189, 100, 176, 196, 61, 253, 118, 106, 189, 159, 36, 65, 189, 3, 229, 22, 190, 161, 234, 58, 190, 181, 82, 201, 189, 84, 54, 51, 188, 66, 245, 247, 189, 218, 185, 127, 189, 241, 85, 69, 190, 250, 48, 134, 60, 221, 124, 158, 60, 134, 168, 8, 186, 191, 89, 31, 62, 158, 165, 252, 189, 193, 27, 179, 60, 229, 168, 4, 62, 198, 84, 217, 61, 135, 242, 42, 61, 71, 236, 46, 190, 25, 30, 66, 190, 101, 124, 240, 61, 90, 75, 122, 189, 183, 205, 178, 61, 155, 128, 193, 189, 197, 151, 38, 190, 129, 172, 29, 190, 159, 184, 9, 62, 41, 155, 57, 61, 132, 68, 127, 61, 9, 27, 6, 190, 155, 125, 195, 189, 23, 242, 41, 61, 197, 119, 154, 189, 61, 35, 72, 190, 133, 33, 82, 190, 167, 155, 117, 188, 6, 33, 50, 190, 0, 133, 232, 189, 197, 30, 93, 189, 129, 45, 201, 189, 226, 187, 246, 61, 251, 245, 3, 61, 164, 206, 48, 190, 212, 241, 108, 60, 209, 35, 47, 62, 131, 4, 32, 190, 129, 250, 40, 62, 151, 21, 43, 190, 20, 229, 206, 189, 126, 32, 3, 190, 145, 205, 241, 189, 2, 159, 3, 62, 159, 76, 200, 61, 81, 5, 195, 61, 49, 58, 184, 189, 21, 177, 153, 189, 202, 153, 28, 190, 205, 212, 1, 61, 75, 153, 147, 189, 136, 233, 1, 187, 188, 36, 169, 189, 52, 189, 5, 189, 68, 248, 88, 189, 74, 218, 29, 189, 113, 177, 48, 187, 224, 8, 113, 189, 9, 61, 17, 190, 151, 78, 29, 190, 211, 231, 221, 189, 193, 249, 69, 188, 161, 214, 128, 188, 120, 133, 137, 62, 194, 206, 249, 60, 127, 10, 82, 61, 92, 142, 145, 62, 20, 183, 60, 61, 147, 40, 150, 189, 84, 77, 179, 190, 154, 185, 156, 60, 43, 98, 141, 62, 156, 58, 139, 190, 210, 85, 86, 190, 38, 152, 220, 190, 155, 112, 145, 62, 48, 229, 156, 190, 173, 96, 12, 62, 86, 162, 50, 190, 38, 112, 57, 190, 191, 68, 89, 190, 162, 11, 219, 190, 200, 131, 195, 188, 135, 17, 174, 189, 173, 154, 144, 62, 173, 101, 173, 190, 248, 140, 227, 190, 221, 101, 61, 61, 244, 112, 141, 190, 170, 54, 131, 62, 160, 46, 161, 62, 197, 154, 112, 189, 2, 26, 191, 189, 193, 27, 133, 62, 119, 53, 243, 189, 212, 76, 142, 189, 101, 211, 181, 61, 60, 103, 131, 62, 166, 55, 148, 190, 118, 99, 59, 61, 153, 129, 129, 61, 33, 182, 199, 61, 129, 121, 137, 62, 43, 79, 5, 191, 198, 241, 88, 62, 130, 234, 78, 62, 7, 197, 133, 190, 216, 164, 202, 189, 26, 104, 67, 62, 73, 96, 229, 189, 36, 109, 151, 189, 235, 106, 61, 188, 22, 58, 137, 62, 196, 175, 72, 62, 200, 72, 112, 62, 239, 195, 162, 61, 170, 38, 139, 190, 184, 42, 168, 60, 249, 72, 131, 61, 200, 0, 92, 62, 75, 159, 24, 62, 82, 200, 9, 191, 61, 0, 108, 190, 12, 135, 99, 60, 202, 34, 230, 190, 254, 75, 202, 60, 106, 249, 128, 190, 129, 17, 6, 61, 129, 156, 51, 189, 71, 181, 246, 189, 94, 98, 200, 60, 141, 187, 148, 189, 128, 60, 5, 62, 14, 141, 168, 188, 228, 34, 246, 62, 214, 92, 77, 61, 10, 40, 239, 189, 226, 15, 231, 60, 237, 100, 127, 190, 7, 149, 4, 191, 37, 213, 154, 62, 65, 116, 167, 188, 182, 114, 151, 189, 24, 110, 60, 62, 55, 83, 224, 61, 3, 9, 154, 62, 116, 21, 71, 190, 91, 195, 129, 62, 144, 232, 189, 62, 233, 137, 193, 188, 210, 6, 178, 61, 144, 249, 189, 189, 67, 243, 156, 62, 155, 157, 37, 190, 163, 178, 142, 62, 225, 155, 145, 62, 13, 112, 229, 190, 34, 236, 176, 61, 99, 40, 255, 188, 174, 37, 118, 187, 126, 220, 133, 61, 78, 228, 180, 189, 187, 143, 53, 190, 158, 79, 157, 61, 218, 255, 27, 190, 47, 147, 39, 190, 120, 133, 24, 62, 143, 17, 103, 61, 120, 67, 196, 189, 150, 63, 94, 62, 197, 117, 137, 190, 1, 33, 215, 190, 209, 235, 152, 62, 230, 42, 27, 190, 171, 164, 112, 190, 97, 208, 115, 62, 203, 224, 212, 60, 23, 249, 166, 61, 49, 29, 20, 190, 144, 88, 18, 62, 134, 35, 71, 62, 69, 203, 88, 61, 4, 202, 135, 62, 216, 214, 85, 189, 252, 2, 197, 62, 238, 117, 150, 190, 48, 93, 153, 62, 152, 193, 33, 62, 86, 150, 244, 189, 156, 225, 190, 189, 0, 196, 244, 61, 67, 93, 18, 62, 246, 226, 215, 189, 182, 191, 215, 188, 253, 239, 46, 60, 148, 155, 26, 190, 8, 147, 12, 190, 15, 195, 251, 60, 209, 163, 145, 188, 203, 2, 66, 189, 81, 116, 251, 61, 202, 192, 245, 189, 176, 225, 234, 189, 4, 132, 234, 59, 101, 225, 157, 61, 229, 102, 246, 189, 85, 122, 11, 190, 203, 152, 122, 187, 6, 191, 163, 61, 50, 17, 136, 189, 246, 142, 244, 189, 168, 159, 18, 62, 115, 56, 186, 189, 46, 218, 44, 190, 30, 224, 1, 190, 239, 86, 171, 189, 80, 167, 195, 188, 224, 196, 1, 190, 198, 205, 214, 189, 3, 124, 168, 60, 141, 20, 4, 191, 112, 207, 203, 61, 78, 61, 91, 190, 240, 28, 151, 61, 92, 31, 139, 62, 183, 213, 43, 62, 243, 27, 218, 190, 27, 118, 33, 62, 114, 15, 27, 190, 3, 83, 161, 190, 63, 63, 181, 62, 29, 78, 146, 62, 111, 116, 19, 62, 20, 226, 141, 61, 225, 168, 115, 190, 241, 59, 228, 190, 91, 222, 171, 62, 19, 236, 33, 189, 20, 188, 113, 190, 146, 189, 58, 62, 164, 142, 184, 61, 62, 92, 147, 62, 70, 14, 254, 61, 119, 0, 151, 61, 38, 186, 87, 62, 144, 173, 22, 61, 186, 31, 171, 61, 178, 222, 22, 61, 92, 205, 104, 62, 75, 233, 214, 190, 46, 79, 16, 63, 21, 91, 208, 62, 35, 76, 211, 62, 121, 191, 35, 61, 230, 239, 0, 63, 180, 231, 75, 190, 49, 243, 37, 190, 158, 165, 167, 62, 172, 251, 59, 62, 88, 66, 140, 59, 204, 244, 77, 61, 108, 237, 225, 187, 77, 204, 1, 191, 147, 34, 145, 189, 81, 255, 153, 62, 143, 103, 67, 190, 127, 205, 120, 62, 40, 39, 175, 62, 213, 39, 116, 190, 85, 31, 253, 61, 105, 159, 1, 63, 231, 183, 19, 190, 130, 101, 212, 187, 37, 216, 63, 61, 40, 141, 147, 62, 67, 124, 200, 190, 111, 26, 191, 190, 189, 15, 230, 61, 78, 53, 150, 190, 162, 102, 28, 190, 83, 115, 236, 190, 102, 228, 130, 62, 201, 63, 197, 190, 88, 133, 188, 189, 208, 184, 232, 189, 86, 194, 88, 61, 234, 65, 243, 189, 224, 222, 15, 190, 155, 192, 184, 60, 50, 192, 16, 61, 5, 41, 146, 188, 51, 247, 93, 189, 247, 33, 2, 189, 152, 11, 213, 189, 145, 213, 51, 189, 195, 135, 47, 189, 253, 18, 119, 189, 71, 17, 51, 190, 248, 220, 32, 61, 89, 130, 156, 188, 23, 46, 150, 189, 78, 151, 230, 60, 135, 136, 13, 61, 59, 237, 13, 190, 189, 253, 221, 61, 240, 237, 164, 189, 25, 242, 200, 189, 250, 156, 197, 189, 202, 166, 231, 60, 74, 249, 181, 61, 167, 43, 11, 189, 30, 168, 134, 189, 248, 35, 17, 62, 14, 239, 32, 189, 138, 74, 169, 61, 11, 101, 45, 190, 40, 1, 239, 189, 156, 183, 48, 61, 252, 177, 182, 61, 72, 252, 76, 57, 198, 122, 246, 189, 26, 211, 151, 61, 206, 30, 79, 62, 84, 171, 29, 62, 52, 54, 164, 61, 125, 81, 77, 190, 117, 119, 66, 190, 59, 231, 103, 61, 134, 82, 74, 189, 50, 191, 102, 61, 242, 160, 234, 59, 170, 158, 57, 61, 45, 197, 218, 60, 180, 33, 46, 189, 219, 132, 38, 61, 184, 83, 14, 62, 166, 69, 150, 61, 46, 74, 0, 189, 104, 133, 238, 189, 223, 172, 153, 190, 159, 40, 7, 190, 220, 157, 49, 62, 42, 248, 58, 61, 47, 214, 194, 189, 67, 61, 99, 189, 107, 177, 127, 62, 203, 67, 178, 190, 64, 209, 78, 62, 52, 138, 190, 190, 214, 131, 200, 190, 19, 171, 56, 190, 223, 7, 170, 62, 188, 80, 43, 191, 182, 151, 149, 62, 163, 140, 132, 189, 208, 55, 88, 62, 218, 95, 161, 188, 40, 19, 133, 191, 239, 228, 160, 191, 145, 75, 50, 190, 54, 239, 152, 62, 128, 234, 237, 190, 147, 232, 125, 62, 242, 164, 181, 190, 47, 240, 61, 190, 197, 145, 21, 190, 248, 139, 25, 191, 151, 173, 12, 191, 31, 187, 5, 191, 14, 6, 42, 62, 166, 12, 218, 188, 18, 74, 169, 189, 10, 4, 40, 189, 244, 58, 196, 190, 101, 174, 38, 191, 65, 77, 206, 188, 108, 172, 22, 62, 176, 38, 142, 190, 41, 211, 137, 61, 68, 69, 38, 62, 100, 33, 183, 62, 73, 75, 138, 189, 87, 245, 38, 62, 226, 211, 124, 190, 221, 203, 169, 61, 173, 196, 111, 190, 9, 248, 85, 62, 18, 110, 19, 60, 87, 54, 35, 62, 0, 135, 3, 191, 103, 218, 4, 191, 65, 147, 84, 190, 245, 178, 180, 190, 121, 252, 244, 190, 42, 97, 136, 62, 241, 135, 126, 62, 161, 45, 106, 190, 2, 4, 200, 60, 213, 248, 172, 62, 238, 130, 70, 190, 173, 252, 181, 61, 3, 65, 218, 189, 158, 136, 2, 62, 236, 113, 33, 191, 64, 1, 10, 190, 52, 144, 50, 62, 198, 113, 221, 189, 85, 240, 48, 190, 242, 102, 190, 190, 66, 123, 243, 62, 42, 43, 161, 189, 70, 226, 238, 61, 127, 30, 56, 189, 242, 231, 133, 190, 41, 88, 248, 62, 202, 121, 186, 189, 122, 27, 7, 62, 37, 53, 67, 62, 110, 105, 43, 62, 75, 209, 151, 190, 168, 173, 172, 61, 184, 41, 158, 189, 25, 255, 49, 191, 53, 211, 228, 189, 40, 88, 96, 62, 87, 214, 192, 190, 63, 233, 33, 62, 108, 3, 134, 62, 192, 119, 229, 190, 163, 103, 29, 190, 162, 131, 99, 189, 35, 128, 128, 189, 76, 251, 250, 190, 216, 217, 34, 189, 243, 213, 129, 62, 169, 146, 81, 191, 103, 124, 56, 190, 187, 247, 151, 62, 56, 185, 67, 191, 47, 38, 151, 62, 183, 15, 73, 191, 23, 111, 139, 62, 79, 16, 178, 190, 40, 248, 87, 60, 204, 23, 211, 60, 60, 189, 2, 189, 135, 175, 29, 62, 235, 208, 166, 61, 77, 242, 138, 187, 17, 92, 3, 62, 118, 119, 26, 61, 36, 150, 206, 188, 84, 183, 10, 190, 143, 247, 188, 61, 111, 98, 225, 61, 24, 55, 52, 190, 114, 155, 215, 189, 5, 125, 162, 189, 233, 126, 152, 61, 28, 203, 237, 189, 132, 176, 28, 62, 173, 132, 56, 60, 197, 58, 6, 62, 50, 89, 182, 61, 250, 80, 254, 189, 254, 208, 9, 189, 205, 254, 220, 188, 87, 158, 11, 190, 21, 186, 7, 62, 172, 50, 44, 189, 165, 86, 51, 190, 4, 187, 43, 190, 93, 164, 218, 189, 64, 194, 198, 188, 118, 50, 243, 61, 76, 183, 27, 189, 108, 186, 162, 61, 64, 213, 132, 61, 58, 83, 194, 61, 146, 70, 17, 190, 249, 24, 109, 189, 207, 156, 211, 61, 168, 144, 64, 189, 139, 101, 56, 61, 154, 223, 206, 60, 223, 201, 40, 62, 17, 158, 211, 189, 123, 119, 214, 59, 112, 231, 63, 61, 64, 89, 145, 61, 243, 122, 162, 189, 115, 42, 27, 190, 38, 197, 214, 189, 241, 190, 103, 189, 93, 210, 17, 62, 175, 200, 47, 190, 145, 187, 36, 190, 54, 132, 24, 190, 43, 107, 220, 189, 90, 51, 196, 189, 96, 139, 62, 189, 3, 144, 24, 190, 253, 195, 32, 190, 194, 224, 184, 189, 228, 22, 228, 189, 131, 97, 233, 189, 205, 230, 83, 189, 27, 196, 208, 189, 170, 24, 249, 190, 206, 81, 103, 189, 61, 216, 37, 62, 112, 174, 65, 62, 204, 5, 129, 190, 252, 64, 185, 61, 19, 159, 99, 62, 10, 166, 38, 62, 223, 234, 12, 190, 151, 208, 209, 60, 108, 20, 112, 191, 213, 13, 182, 189, 138, 237, 38, 189, 67, 91, 25, 60, 9, 87, 36, 191, 213, 44, 78, 62, 113, 52, 69, 191, 94, 28, 182, 61, 131, 24, 82, 62, 9, 140, 144, 188, 172, 74, 17, 60, 148, 11, 24, 190, 115, 73, 86, 62, 222, 63, 40, 190, 47, 110, 200, 190, 187, 198, 11, 62, 51, 77, 70, 191, 169, 55, 148, 189, 247, 4, 31, 191, 179, 27, 140, 62, 178, 155, 113, 190, 15, 221, 133, 62, 67, 133, 198, 190, 66, 3, 12, 188, 204, 169, 110, 62, 199, 233, 183, 62, 226, 132, 101, 190, 47, 207, 219, 61, 61, 108, 105, 62, 132, 250, 99, 62, 172, 150, 107, 189, 193, 81, 22, 191, 122, 237, 132, 191, 45, 69, 13, 190, 128, 176, 28, 190, 117, 144, 141, 190, 53, 105, 170, 189, 22, 229, 173, 62, 30, 151, 47, 191, 73, 244, 138, 189, 185, 94, 148, 62, 216, 54, 8, 190, 197, 38, 30, 189, 57, 145, 161, 62, 195, 89, 224, 61, 119, 132, 23, 191, 3, 3, 42, 190, 57, 63, 45, 62, 16, 147, 62, 191, 170, 200, 128, 188, 53, 248, 230, 190, 13, 39, 149, 62, 58, 30, 210, 189, 198, 159, 121, 61, 111, 25, 115, 62, 248, 153, 26, 190, 211, 14, 7, 190, 75, 160, 1, 189, 219, 191, 211, 190, 131, 80, 46, 61, 177, 117, 169, 188, 163, 77, 143, 61, 85, 43, 187, 61, 96, 158, 46, 62, 129, 210, 202, 61, 80, 255, 147, 190, 30, 153, 60, 62, 173, 161, 65, 62, 61, 170, 151, 62, 28, 56, 137, 189, 226, 114, 203, 61, 108, 10, 32, 190, 118, 220, 160, 62, 178, 178, 5, 62, 5, 235, 176, 186, 59, 166, 163, 189, 26, 34, 177, 189, 133, 114, 11, 62, 2, 103, 246, 189, 7, 160, 214, 189, 132, 156, 156, 188, 139, 162, 192, 190, 70, 61, 251, 60, 106, 28, 246, 190, 76, 93, 196, 59, 75, 86, 100, 60, 95, 50, 191, 189, 31, 100, 192, 189, 130, 165, 114, 190, 149, 254, 29, 61, 252, 217, 113, 61, 251, 8, 35, 190, 220, 236, 164, 189, 78, 2, 178, 189, 137, 188, 32, 190, 116, 125, 155, 62, 74, 47, 4, 61, 7, 67, 9, 190, 70, 254, 91, 61, 185, 185, 134, 61, 1, 102, 39, 62, 109, 164, 190, 189, 38, 28, 13, 189, 110, 209, 229, 189, 153, 145, 152, 190, 244, 148, 95, 62, 112, 71, 66, 190, 231, 233, 178, 188, 58, 135, 10, 190, 141, 28, 214, 188, 185, 163, 220, 61, 114, 160, 69, 190, 80, 235, 73, 190, 117, 29, 104, 189, 136, 25, 73, 62, 2, 131, 70, 61, 227, 101, 118, 59, 114, 223, 66, 61, 3, 63, 167, 190, 253, 27, 18, 189, 242, 248, 145, 190, 95, 244, 109, 62, 67, 96, 239, 61, 201, 253, 134, 61, 116, 68, 154, 190, 107, 235, 139, 62, 149, 128, 191, 59, 229, 74, 122, 189, 184, 4, 78, 189, 219, 147, 59, 62, 0, 116, 187, 61, 31, 189, 108, 59, 180, 69, 220, 190, 116, 117, 247, 190, 30, 67, 200, 60, 115, 235, 172, 61, 164, 45, 102, 190, 32, 97, 21, 62, 113, 3, 255, 60, 52, 55, 188, 62, 88, 52, 10, 189, 48, 22, 43, 62, 147, 185, 160, 62, 99, 8, 167, 190, 250, 238, 133, 189, 198, 57, 37, 62, 38, 235, 221, 62, 45, 177, 132, 189, 38, 187, 28, 62, 77, 111, 142, 62, 146, 208, 233, 189, 103, 76, 40, 189, 107, 81, 121, 190, 232, 136, 69, 61, 32, 4, 168, 190, 79, 119, 77, 190, 160, 131, 182, 61, 166, 51, 215, 62, 71, 215, 241, 189, 24, 98, 140, 190, 95, 145, 39, 191, 60, 188, 81, 62, 172, 219, 8, 190, 139, 99, 154, 61, 14, 254, 215, 61, 11, 158, 2, 191, 48, 109, 101, 190, 160, 188, 8, 62, 51, 183, 91, 190, 185, 0, 158, 62, 40, 151, 152, 190, 176, 17, 144, 61, 70, 109, 15, 61, 239, 86, 88, 62, 209, 38, 147, 62, 80, 141, 67, 191, 116, 30, 18, 189, 90, 83, 136, 191, 14, 232, 124, 62, 50, 130, 59, 190, 8, 198, 65, 189, 192, 167, 99, 62, 37, 229, 97, 62, 28, 167, 131, 61, 60, 77, 200, 62, 238, 0, 180, 189, 176, 113, 27, 190, 159, 121, 199, 62, 124, 97, 228, 61, 65, 60, 149, 189, 221, 82, 254, 188, 106, 5, 49, 189, 128, 21, 115, 191, 49, 201, 54, 190, 60, 80, 6, 62, 70, 126, 188, 189, 151, 139, 210, 62, 226, 73, 7, 63, 108, 69, 1, 191, 118, 121, 198, 188, 108, 139, 210, 62, 128, 109, 81, 190, 248, 166, 136, 190, 63, 230, 9, 62, 72, 198, 186, 62, 172, 224, 89, 191, 237, 238, 233, 190, 28, 109, 123, 62, 167, 47, 11, 191, 161, 102, 57, 61, 63, 108, 27, 191, 142, 100, 128, 62, 99, 144, 134, 190, 196, 168, 177, 61, 221, 192, 247, 61, 14, 213, 156, 189, 35, 33, 22, 59, 66, 70, 46, 63, 184, 246, 71, 187, 76, 0, 109, 62, 186, 99, 45, 62, 175, 184, 106, 190, 74, 55, 236, 189, 86, 251, 164, 189, 102, 183, 13, 190, 168, 2, 134, 189, 204, 105, 251, 62, 17, 210, 130, 190, 62, 133, 35, 190, 43, 234, 117, 62, 35, 120, 75, 190, 182, 112, 239, 189, 82, 226, 145, 62, 60, 122, 242, 190, 146, 42, 157, 190, 242, 118, 75, 191, 5, 122, 47, 62, 94, 236, 27, 191, 60, 129, 48, 190, 79, 164, 159, 190, 90, 248, 58, 191, 37, 143, 145, 61, 220, 136, 61, 191, 172, 55, 180, 61, 176, 151, 172, 190, 11, 165, 169, 190};
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
                alignas(float) const unsigned char memory[] = {177, 179, 221, 61, 196, 208, 149, 61, 10, 14, 62, 189, 253, 44, 129, 62, 138, 19, 168, 62, 231, 232, 26, 190, 112, 157, 55, 62, 200, 135, 55, 190, 98, 5, 29, 190, 206, 31, 173, 189, 182, 226, 52, 62, 218, 72, 194, 188, 129, 68, 153, 61, 137, 167, 138, 62, 161, 60, 193, 189, 170, 181, 31, 62, 187, 235, 133, 189, 225, 8, 234, 189, 33, 25, 146, 62, 167, 223, 141, 187, 108, 221, 143, 60, 199, 221, 131, 62, 23, 175, 79, 190, 31, 77, 18, 190, 111, 237, 105, 62, 246, 84, 222, 61, 2, 148, 38, 190, 228, 165, 10, 62, 89, 68, 158, 61, 58, 54, 244, 189, 36, 164, 117, 62, 149, 13, 13, 190};
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
                alignas(float) const unsigned char memory[] = {253, 152, 26, 190, 197, 69, 131, 190, 80, 119, 134, 190, 221, 33, 115, 63, 132, 152, 61, 189, 94, 199, 231, 62, 80, 90, 2, 63, 2, 141, 248, 61, 225, 244, 3, 62, 137, 38, 104, 189, 195, 129, 254, 190, 198, 73, 135, 190, 103, 198, 11, 191, 82, 169, 193, 190, 167, 125, 13, 190, 226, 222, 78, 191, 194, 65, 52, 63, 182, 56, 38, 190, 175, 255, 134, 61, 90, 170, 158, 63, 227, 88, 28, 63, 99, 125, 131, 63, 219, 245, 8, 62, 105, 162, 3, 60, 226, 75, 142, 62, 103, 234, 89, 63, 128, 246, 155, 190, 105, 156, 1, 62, 49, 57, 238, 190, 87, 26, 58, 191, 223, 62, 129, 63, 205, 225, 80, 191, 106, 216, 1, 191, 154, 192, 54, 61, 54, 161, 13, 62, 142, 61, 231, 61, 79, 82, 170, 190, 138, 208, 131, 60, 111, 56, 208, 61, 92, 70, 151, 61, 140, 65, 206, 61, 186, 12, 43, 62, 121, 165, 11, 190, 251, 71, 223, 189, 59, 114, 154, 62, 156, 162, 144, 61, 161, 211, 35, 61, 52, 94, 214, 60, 254, 126, 147, 62, 121, 93, 155, 60, 201, 228, 111, 190, 113, 108, 217, 61, 49, 194, 40, 187, 42, 43, 253, 60, 63, 66, 226, 187, 171, 69, 33, 61, 81, 24, 161, 190, 75, 248, 133, 189, 67, 87, 137, 61, 55, 104, 47, 62, 72, 21, 135, 61, 251, 59, 182, 62, 135, 229, 143, 62, 229, 165, 227, 60};
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
                alignas(float) const unsigned char memory[] = {101, 249, 33, 190, 2, 116, 172, 190};
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
    alignas(float) const unsigned char memory[] = {84, 151, 128, 62, 65, 31, 21, 192, 83, 181, 4, 192};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {64, 23, 156, 62, 114, 129, 241, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0034/steps/000000000010000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
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
                alignas(float) const unsigned char memory[] = {34, 70, 255, 190, 100, 125, 186, 62, 24, 220, 204, 190, 112, 117, 50, 62, 90, 180, 18, 63, 21, 36, 1, 191, 128, 231, 241, 62, 198, 76, 55, 63, 53, 42, 10, 191, 238, 41, 108, 191, 17, 214, 89, 63, 143, 103, 158, 62, 254, 229, 243, 62, 55, 200, 31, 189, 23, 140, 192, 190, 223, 245, 163, 190, 234, 66, 117, 63, 171, 13, 148, 61, 124, 132, 182, 62, 54, 53, 92, 63, 158, 211, 198, 61, 176, 15, 63, 190, 54, 197, 125, 191, 25, 131, 105, 189, 97, 136, 190, 62, 33, 65, 149, 62, 40, 247, 237, 190, 214, 114, 103, 63, 20, 228, 26, 191, 45, 70, 158, 60, 242, 231, 35, 63, 242, 186, 126, 63, 11, 245, 130, 62, 105, 179, 12, 191, 115, 112, 11, 191, 217, 168, 169, 62, 168, 215, 200, 190, 103, 164, 121, 62, 220, 149, 4, 62, 115, 19, 79, 191, 45, 91, 131, 191, 36, 79, 42, 189, 2, 229, 33, 63, 182, 6, 183, 62, 152, 168, 135, 62, 239, 123, 23, 191, 176, 86, 109, 191, 31, 229, 176, 62, 6, 183, 191, 62, 91, 21, 152, 62, 203, 9, 113, 62, 78, 117, 12, 62, 13, 242, 97, 191, 38, 109, 211, 62, 204, 100, 203, 62, 234, 205, 140, 63, 255, 111, 251, 62, 152, 6, 41, 191, 210, 170, 81, 190, 134, 162, 34, 63, 67, 55, 139, 62, 18, 129, 147, 63, 60, 97, 238, 62, 40, 254, 140, 190, 77, 179, 179, 63, 50, 145, 173, 62, 153, 53, 83, 190, 226, 213, 53, 63, 216, 36, 168, 62, 241, 191, 99, 62, 4, 5, 183, 62, 231, 245, 165, 60, 143, 18, 2, 191, 125, 10, 169, 63, 119, 225, 139, 62, 79, 229, 44, 191, 246, 56, 29, 62, 37, 160, 77, 191, 216, 39, 44, 62, 239, 82, 179, 191, 177, 0, 232, 190, 88, 240, 52, 63, 148, 123, 162, 191, 17, 69, 166, 190, 251, 68, 107, 190, 12, 169, 78, 62, 205, 243, 42, 191, 166, 84, 24, 191, 186, 174, 168, 191, 116, 208, 140, 190, 35, 247, 150, 191, 87, 2, 51, 190, 190, 151, 8, 62, 207, 21, 202, 189, 137, 199, 242, 189, 80, 34, 36, 63};
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
                alignas(float) const unsigned char memory[] = {200, 209, 14, 191, 26, 213, 144, 191, 59, 237, 150, 190, 63, 22, 191, 62, 221, 154, 232, 190, 210, 220, 249, 62, 208, 84, 4, 60, 88, 176, 141, 62, 192, 188, 171, 190, 121, 76, 33, 61, 181, 233, 144, 61, 11, 122, 169, 190, 219, 26, 26, 63, 67, 166, 125, 62, 103, 21, 49, 191, 93, 137, 213, 190, 252, 27, 35, 191, 223, 140, 186, 61, 236, 98, 153, 190, 56, 92, 172, 190, 187, 209, 148, 189, 191, 19, 151, 62, 163, 118, 9, 63, 20, 173, 194, 62, 179, 6, 140, 189, 110, 112, 196, 189, 123, 44, 79, 61, 10, 197, 133, 190, 140, 209, 5, 190, 44, 225, 17, 63, 187, 86, 51, 190, 139, 23, 73, 190};
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
                alignas(float) const unsigned char memory[] = {198, 100, 171, 61, 52, 176, 244, 62, 229, 241, 168, 62, 211, 232, 119, 62, 255, 153, 154, 61, 208, 131, 13, 63, 8, 234, 224, 190, 228, 85, 18, 187, 196, 99, 117, 62, 71, 59, 178, 62, 157, 231, 49, 190, 229, 200, 135, 61, 189, 197, 136, 187, 149, 27, 16, 191, 183, 194, 141, 191, 113, 175, 6, 60, 199, 88, 164, 191, 216, 104, 54, 62, 35, 119, 241, 190, 239, 235, 91, 62, 78, 244, 182, 190, 195, 235, 46, 62, 197, 201, 245, 61, 244, 33, 1, 63, 240, 76, 165, 62, 233, 94, 118, 59, 123, 52, 224, 190, 247, 246, 76, 62, 18, 50, 142, 189, 168, 188, 160, 190, 198, 53, 6, 62, 138, 134, 8, 62, 106, 9, 75, 190, 75, 54, 79, 62, 159, 253, 192, 62, 236, 121, 173, 190, 82, 189, 29, 189, 147, 129, 178, 62, 180, 149, 149, 62, 40, 99, 36, 190, 84, 24, 128, 61, 203, 183, 130, 190, 17, 122, 84, 62, 242, 228, 19, 190, 71, 8, 5, 62, 103, 161, 168, 62, 142, 209, 32, 191, 70, 231, 73, 190, 231, 172, 13, 191, 254, 80, 168, 190, 63, 17, 63, 191, 71, 172, 144, 190, 173, 228, 183, 190, 4, 64, 156, 190, 203, 43, 92, 190, 82, 35, 234, 61, 44, 80, 138, 191, 217, 229, 32, 189, 177, 160, 76, 190, 12, 166, 141, 191, 87, 245, 197, 189, 210, 216, 157, 190, 8, 6, 105, 190, 149, 195, 47, 190, 197, 59, 101, 61, 21, 99, 12, 63, 11, 88, 26, 62, 71, 134, 214, 187, 238, 121, 146, 189, 21, 160, 145, 62, 90, 44, 169, 62, 132, 111, 136, 190, 237, 81, 161, 61, 119, 39, 5, 188, 199, 89, 191, 62, 196, 228, 164, 60, 196, 85, 153, 62, 251, 245, 55, 190, 25, 109, 231, 62, 31, 79, 125, 62, 143, 222, 96, 62, 165, 10, 63, 62, 192, 242, 187, 188, 220, 178, 36, 62, 49, 159, 17, 62, 107, 167, 59, 62, 34, 83, 145, 62, 248, 114, 172, 62, 104, 163, 11, 190, 170, 93, 148, 61, 179, 143, 110, 190, 239, 210, 43, 191, 215, 62, 139, 190, 64, 34, 129, 191, 216, 37, 65, 188, 3, 92, 164, 187, 173, 253, 84, 189, 243, 117, 199, 61, 147, 50, 72, 61, 188, 78, 254, 189, 54, 125, 124, 61, 151, 230, 48, 61, 227, 139, 18, 62, 217, 182, 135, 189, 105, 180, 134, 189, 226, 252, 76, 61, 180, 203, 91, 60, 216, 168, 7, 62, 239, 252, 77, 61, 99, 217, 184, 189, 164, 232, 41, 62, 240, 168, 50, 190, 111, 130, 50, 61, 92, 160, 24, 190, 190, 59, 14, 62, 231, 239, 54, 188, 232, 38, 40, 190, 63, 21, 255, 189, 193, 219, 59, 190, 90, 135, 40, 190, 173, 226, 19, 62, 216, 85, 42, 190, 212, 92, 162, 61, 91, 38, 245, 61, 157, 62, 168, 189, 247, 52, 254, 189, 222, 145, 159, 61, 252, 220, 218, 61, 7, 120, 6, 190, 254, 254, 18, 190, 30, 55, 121, 190, 113, 62, 185, 60, 94, 91, 39, 190, 190, 163, 178, 61, 38, 165, 30, 62, 99, 29, 103, 61, 135, 42, 36, 190, 114, 17, 69, 187, 247, 121, 195, 62, 191, 98, 7, 190, 161, 196, 81, 62, 236, 44, 154, 62, 247, 38, 41, 60, 71, 197, 158, 190, 207, 33, 65, 61, 141, 21, 22, 190, 92, 131, 167, 189, 87, 252, 40, 190, 78, 160, 241, 61, 236, 85, 203, 61, 221, 14, 83, 62, 61, 186, 224, 61, 74, 179, 154, 61, 108, 202, 230, 61, 236, 187, 22, 62, 5, 176, 74, 190, 96, 212, 120, 62, 198, 231, 35, 61, 155, 11, 170, 189, 95, 234, 223, 188, 61, 170, 45, 188, 101, 191, 161, 189, 238, 45, 186, 60, 78, 220, 182, 189, 209, 161, 16, 190, 46, 177, 229, 189, 152, 217, 1, 190, 156, 156, 167, 60, 200, 218, 170, 188, 35, 220, 182, 189, 35, 156, 7, 188, 115, 107, 30, 190, 159, 20, 81, 190, 49, 33, 64, 61, 4, 81, 54, 189, 195, 108, 159, 189, 20, 190, 159, 189, 95, 239, 2, 188, 251, 67, 116, 189, 230, 187, 70, 189, 36, 167, 217, 188, 66, 92, 18, 188, 30, 201, 177, 61, 76, 217, 74, 190, 190, 151, 47, 190, 191, 109, 152, 189, 158, 96, 55, 189, 88, 20, 245, 188, 84, 191, 201, 61, 113, 192, 25, 188, 229, 123, 190, 189, 204, 207, 55, 61, 232, 82, 18, 62, 62, 6, 186, 190, 54, 242, 196, 188, 114, 98, 126, 191, 26, 205, 75, 61, 18, 93, 128, 189, 235, 212, 244, 62, 156, 125, 43, 62, 205, 61, 179, 190, 216, 80, 194, 189, 4, 167, 145, 62, 48, 211, 33, 62, 82, 217, 237, 61, 230, 163, 90, 62, 237, 75, 5, 63, 164, 162, 133, 62, 32, 27, 67, 62, 111, 128, 93, 62, 25, 42, 151, 60, 192, 147, 206, 189, 16, 73, 124, 60, 122, 150, 19, 59, 65, 74, 80, 189, 207, 46, 12, 62, 194, 33, 156, 191, 96, 130, 167, 62, 48, 19, 126, 188, 108, 112, 83, 191, 193, 219, 234, 61, 112, 98, 179, 187, 58, 30, 189, 190, 15, 192, 120, 189, 74, 138, 95, 191, 18, 218, 242, 189, 236, 225, 13, 191, 67, 106, 231, 62, 252, 164, 9, 61, 215, 71, 179, 62, 169, 130, 247, 60, 52, 162, 69, 190, 100, 158, 43, 191, 74, 214, 13, 190, 216, 112, 87, 190, 17, 226, 1, 191, 191, 241, 73, 62, 54, 110, 135, 61, 61, 203, 13, 62, 29, 165, 14, 191, 62, 194, 24, 62, 14, 189, 162, 190, 186, 128, 179, 189, 152, 98, 153, 190, 236, 197, 108, 61, 164, 9, 43, 61, 95, 89, 56, 61, 0, 133, 0, 62, 235, 74, 152, 62, 222, 65, 119, 190, 227, 21, 168, 60, 152, 100, 181, 61, 182, 184, 14, 191, 102, 177, 5, 190, 159, 38, 28, 191, 84, 60, 120, 190, 20, 123, 44, 190, 197, 0, 172, 190, 197, 79, 207, 190, 83, 249, 152, 190, 224, 89, 241, 188, 239, 108, 153, 191, 106, 130, 172, 190, 124, 38, 201, 62, 245, 237, 123, 60, 250, 112, 189, 62, 232, 111, 52, 61, 128, 194, 196, 60, 75, 79, 9, 190, 241, 224, 246, 61, 111, 235, 129, 190, 214, 82, 209, 61, 84, 42, 146, 189, 158, 151, 97, 62, 180, 87, 46, 190, 97, 66, 164, 188, 117, 0, 160, 190, 236, 11, 95, 190, 100, 141, 216, 189, 201, 121, 69, 190, 2, 230, 51, 189, 246, 41, 29, 62, 246, 172, 39, 62, 154, 218, 92, 62, 147, 191, 116, 61, 187, 218, 114, 62, 28, 162, 151, 190, 231, 188, 254, 61, 144, 161, 200, 61, 212, 12, 142, 60, 217, 57, 62, 190, 19, 157, 141, 61, 41, 25, 16, 190, 85, 153, 97, 189, 21, 145, 7, 189, 112, 59, 227, 189, 184, 173, 182, 187, 148, 158, 22, 190, 141, 171, 62, 190, 73, 190, 234, 61, 77, 171, 179, 189, 54, 181, 147, 189, 1, 67, 92, 61, 34, 127, 2, 62, 103, 18, 33, 190, 210, 188, 187, 189, 32, 44, 19, 190, 101, 156, 179, 60, 128, 43, 189, 189, 59, 46, 185, 60, 255, 191, 132, 61, 25, 58, 74, 190, 155, 39, 62, 187, 46, 224, 3, 62, 47, 20, 198, 189, 202, 252, 42, 190, 94, 218, 189, 189, 179, 59, 33, 62, 127, 190, 151, 189, 82, 66, 58, 190, 111, 183, 119, 189, 177, 86, 224, 189, 230, 38, 98, 62, 114, 119, 28, 190, 236, 157, 73, 189, 81, 162, 93, 60, 70, 249, 203, 61, 2, 102, 202, 61, 85, 17, 196, 61, 255, 226, 183, 62, 236, 23, 225, 62, 221, 23, 64, 189, 210, 80, 112, 62, 6, 137, 220, 190, 190, 189, 131, 62, 145, 20, 17, 190, 180, 2, 69, 62, 21, 240, 24, 62, 168, 166, 174, 189, 3, 32, 89, 187, 16, 47, 67, 62, 43, 144, 121, 61, 207, 124, 121, 61, 131, 113, 231, 62, 94, 212, 167, 59, 168, 42, 5, 189, 53, 140, 241, 189, 219, 101, 151, 190, 131, 98, 61, 189, 92, 77, 6, 191, 185, 76, 193, 190, 154, 32, 141, 62, 26, 222, 87, 62, 243, 211, 210, 190, 208, 99, 224, 189, 58, 38, 80, 191, 219, 182, 94, 190, 63, 148, 215, 60, 229, 135, 247, 62, 45, 185, 91, 62, 38, 215, 216, 190, 108, 205, 144, 189, 201, 115, 195, 62, 142, 54, 24, 61, 150, 123, 164, 188, 91, 140, 16, 62, 35, 72, 232, 62, 123, 233, 0, 63, 186, 246, 21, 63, 97, 227, 108, 60, 119, 37, 76, 62, 165, 39, 159, 189, 141, 55, 13, 59, 40, 169, 161, 190, 221, 198, 147, 189, 67, 136, 20, 62, 45, 50, 36, 191, 254, 86, 176, 62, 158, 62, 173, 61, 240, 161, 107, 191, 25, 83, 50, 62, 81, 110, 30, 189, 7, 59, 89, 190, 209, 143, 140, 190, 243, 0, 253, 61, 77, 82, 245, 189, 104, 167, 88, 190, 93, 84, 103, 191, 32, 221, 173, 190, 196, 152, 42, 62, 210, 19, 197, 62, 71, 36, 24, 61, 24, 52, 192, 190, 231, 68, 144, 62, 153, 170, 187, 62, 246, 126, 210, 190, 137, 27, 128, 62, 178, 217, 96, 62, 48, 180, 216, 62, 163, 99, 159, 62, 131, 225, 165, 62, 234, 233, 9, 190, 223, 0, 224, 62, 76, 131, 117, 191, 254, 78, 254, 61, 167, 164, 35, 191, 202, 32, 31, 190, 189, 211, 9, 62, 146, 177, 145, 191, 166, 202, 96, 62, 104, 95, 99, 190, 213, 36, 89, 191, 159, 53, 131, 62, 124, 246, 184, 61, 216, 200, 238, 189, 232, 126, 199, 190, 201, 135, 84, 62, 134, 156, 10, 62, 121, 205, 97, 190, 77, 174, 213, 189, 106, 150, 99, 189, 199, 216, 175, 188, 71, 65, 243, 190, 114, 237, 142, 62, 112, 93, 79, 61, 2, 95, 56, 191, 68, 70, 30, 190, 63, 183, 149, 190, 138, 221, 45, 190, 253, 76, 156, 62, 176, 107, 93, 189, 206, 216, 250, 62, 59, 238, 44, 190, 187, 174, 88, 190, 119, 74, 180, 188, 63, 83, 227, 190, 122, 41, 142, 186, 66, 171, 73, 191, 225, 12, 168, 189, 207, 234, 170, 190, 227, 22, 18, 191, 197, 141, 218, 61, 148, 68, 167, 62, 89, 140, 147, 62, 244, 232, 238, 187, 41, 134, 197, 62, 127, 53, 83, 63, 54, 13, 42, 191, 186, 7, 28, 191, 166, 188, 13, 190, 128, 236, 196, 62, 21, 140, 41, 61, 21, 219, 145, 62, 129, 244, 117, 61, 255, 57, 207, 190, 61, 95, 38, 189, 183, 38, 205, 62, 34, 33, 12, 63, 6, 135, 244, 189, 89, 59, 122, 61, 33, 221, 24, 62, 41, 77, 7, 190, 226, 78, 74, 191, 164, 98, 115, 189, 194, 231, 107, 191, 250, 89, 63, 62, 209, 208, 40, 191, 46, 191, 89, 62, 54, 223, 180, 190, 197, 90, 7, 190, 189, 56, 154, 189, 30, 51, 247, 61, 157, 247, 133, 190, 124, 167, 161, 190, 46, 181, 231, 190, 118, 93, 131, 190, 102, 240, 115, 190, 79, 234, 175, 190, 71, 34, 229, 61, 79, 180, 147, 62, 35, 247, 6, 62, 139, 225, 12, 61, 170, 235, 216, 189, 68, 70, 175, 190, 121, 24, 193, 190, 212, 106, 81, 190, 175, 204, 215, 61, 11, 139, 78, 60, 215, 141, 3, 190, 165, 86, 175, 191, 126, 118, 125, 189, 80, 11, 153, 190, 157, 189, 64, 62, 101, 76, 164, 62, 247, 58, 58, 189, 200, 45, 24, 188, 138, 107, 52, 62, 248, 38, 167, 190, 10, 173, 29, 190, 72, 229, 69, 191, 120, 130, 132, 61, 32, 254, 52, 191, 219, 224, 51, 191, 220, 178, 101, 190, 23, 199, 5, 191, 152, 50, 15, 62, 234, 240, 187, 61, 157, 125, 159, 190, 178, 23, 84, 61, 110, 79, 19, 62, 180, 33, 29, 189, 41, 224, 121, 190, 238, 36, 139, 190, 226, 248, 186, 62, 138, 28, 120, 61, 61, 33, 185, 189, 56, 1, 142, 62, 31, 59, 143, 61, 114, 205, 3, 191, 89, 79, 22, 190, 86, 55, 223, 62, 63, 184, 155, 62, 69, 18, 154, 190, 119, 146, 133, 189, 227, 228, 192, 189, 28, 249, 10, 191, 240, 88, 234, 190, 1, 186, 233, 61, 104, 204, 17, 191, 93, 203, 104, 62, 142, 92, 15, 190, 219, 199, 130, 62, 240, 2, 196, 190, 54, 178, 165, 190, 197, 154, 19, 61, 91, 116, 147, 61, 224, 74, 206, 189, 181, 55, 16, 190, 14, 7, 200, 60, 153, 19, 209, 62, 240, 164, 50, 190, 250, 12, 139, 61, 217, 82, 73, 190, 218, 143, 138, 62, 37, 202, 138, 62, 160, 192, 111, 189, 63, 194, 8, 62, 238, 130, 151, 62, 28, 103, 226, 190, 46, 113, 212, 62, 6, 197, 200, 190, 6, 143, 90, 190, 178, 116, 103, 189, 224, 35, 45, 62, 29, 46, 205, 60, 134, 140, 238, 189, 37, 112, 102, 62, 153, 245, 39, 190, 15, 0, 24, 191, 87, 225, 189, 190, 25, 207, 247, 190, 32, 201, 114, 190, 13, 11, 10, 190, 253, 216, 68, 62, 98, 50, 123, 190, 177, 15, 232, 61, 89, 58, 87, 62, 253, 213, 232, 189, 209, 136, 100, 62, 136, 25, 68, 62, 100, 56, 7, 192, 102, 155, 242, 190, 18, 146, 128, 62, 133, 53, 73, 62, 134, 186, 72, 62, 251, 26, 16, 62, 116, 158, 0, 61, 165, 176, 129, 190, 217, 66, 92, 190, 221, 252, 162, 189, 204, 140, 197, 189, 101, 108, 111, 62, 255, 197, 29, 62, 118, 109, 126, 61, 2, 106, 145, 190, 112, 216, 213, 188, 109, 19, 53, 62, 142, 60, 194, 190, 238, 104, 136, 62, 238, 24, 15, 62, 196, 36, 144, 61, 10, 126, 202, 190, 94, 186, 68, 190, 11, 234, 232, 188, 22, 97, 3, 190, 236, 235, 193, 190, 33, 183, 174, 62, 212, 203, 78, 61, 100, 27, 51, 189, 142, 2, 188, 62, 77, 68, 147, 189, 83, 68, 148, 62, 223, 149, 173, 60, 190, 102, 39, 191, 240, 63, 101, 61, 148, 148, 177, 189, 12, 218, 56, 191, 185, 209, 102, 190, 195, 208, 139, 189, 38, 1, 102, 60, 78, 211, 145, 61, 220, 10, 145, 188, 1, 146, 78, 190, 31, 19, 179, 60, 255, 192, 197, 188, 111, 58, 255, 189, 249, 252, 172, 189, 72, 157, 120, 189, 64, 248, 61, 189, 187, 158, 16, 62, 106, 148, 9, 62, 50, 26, 81, 188, 150, 200, 15, 189, 104, 114, 180, 188, 10, 56, 29, 190, 183, 139, 84, 187, 152, 143, 36, 190, 143, 175, 105, 189, 129, 247, 165, 60, 18, 152, 236, 188, 248, 181, 145, 61, 105, 14, 187, 61, 161, 23, 66, 190, 102, 131, 212, 61, 7, 90, 59, 189, 241, 138, 211, 189, 191, 206, 71, 190, 218, 99, 112, 60, 152, 162, 136, 61, 205, 37, 198, 189, 80, 195, 109, 61, 116, 175, 168, 190, 126, 97, 197, 189, 165, 90, 66, 190, 208, 234, 19, 188, 8, 202, 203, 189, 223, 141, 199, 62, 169, 58, 65, 62, 81, 104, 42, 190, 43, 151, 109, 61, 72, 129, 169, 62, 163, 155, 11, 61, 68, 174, 98, 61, 237, 144, 40, 189, 46, 195, 50, 189, 5, 198, 99, 62, 49, 63, 246, 189, 46, 166, 199, 60, 72, 16, 99, 190, 122, 189, 9, 188, 92, 208, 24, 189, 255, 112, 178, 190, 58, 185, 46, 62, 219, 106, 23, 62, 100, 162, 218, 190, 25, 138, 110, 62, 82, 30, 82, 188, 216, 250, 62, 191, 175, 238, 178, 61, 10, 101, 20, 190, 240, 177, 245, 190, 215, 226, 17, 190, 184, 87, 19, 190, 31, 48, 147, 60, 96, 19, 22, 62, 71, 34, 184, 190, 222, 197, 159, 62, 7, 241, 60, 191, 107, 178, 22, 191, 253, 66, 20, 62, 141, 211, 52, 59, 82, 182, 144, 62, 220, 197, 203, 191, 74, 10, 161, 62, 42, 148, 177, 190, 113, 192, 235, 189, 44, 184, 150, 190, 8, 123, 7, 63, 60, 48, 112, 62, 161, 133, 3, 62, 42, 197, 174, 190, 118, 79, 185, 61, 56, 36, 203, 190, 49, 133, 186, 190, 21, 130, 15, 191, 48, 21, 10, 189, 54, 4, 99, 190, 91, 68, 55, 190, 44, 253, 175, 62, 2, 221, 7, 63, 189, 253, 84, 190, 66, 246, 13, 62, 60, 147, 217, 62, 78, 234, 59, 190, 8, 131, 53, 62, 65, 150, 74, 189, 18, 162, 142, 190, 202, 174, 86, 191, 117, 161, 170, 60, 211, 78, 71, 62, 55, 21, 88, 63, 75, 225, 152, 61, 180, 41, 166, 190, 200, 206, 224, 190, 144, 23, 200, 62, 38, 49, 130, 189, 165, 41, 181, 61, 213, 190, 216, 62, 197, 233, 97, 189, 133, 47, 6, 63, 202, 33, 6, 190, 83, 108, 1, 191, 21, 23, 235, 61, 54, 80, 94, 191, 44, 26, 120, 62, 97, 212, 27, 191, 155, 200, 88, 191, 199, 94, 40, 62, 184, 114, 230, 190, 19, 103, 154, 62, 23, 43, 5, 190, 188, 242, 90, 191, 80, 173, 240, 61, 245, 214, 240, 61, 242, 13, 5, 190, 143, 219, 201, 190, 37, 11, 191, 190, 53, 9, 152, 189, 232, 145, 191, 190, 91, 56, 145, 60, 76, 102, 38, 190, 246, 112, 79, 62, 134, 190, 33, 60, 185, 107, 153, 190, 201, 188, 182, 189, 188, 45, 53, 191, 106, 84, 187, 189, 120, 38, 9, 191, 76, 28, 127, 189, 71, 149, 211, 61, 28, 106, 67, 190, 41, 147, 124, 62, 37, 254, 27, 190, 217, 77, 215, 190, 59, 170, 17, 62, 250, 118, 46, 191, 190, 223, 103, 188, 82, 89, 247, 190, 107, 6, 91, 190, 56, 36, 208, 190, 56, 165, 140, 190, 44, 171, 255, 189, 241, 148, 254, 190, 157, 235, 14, 191, 134, 99, 35, 191, 41, 50, 106, 61, 77, 226, 141, 62, 92, 52, 188, 190, 158, 209, 83, 59, 30, 47, 43, 61, 81, 71, 75, 62, 79, 224, 164, 189, 157, 143, 174, 188, 111, 36, 226, 62, 16, 119, 118, 188, 119, 13, 248, 190, 156, 183, 59, 62, 157, 125, 225, 190, 33, 189, 30, 190, 158, 100, 128, 190, 13, 181, 76, 62, 92, 123, 102, 190, 9, 60, 18, 191, 75, 62, 19, 190, 83, 180, 76, 191, 32, 194, 3, 191, 85, 170, 128, 190, 41, 58, 241, 190, 82, 135, 196, 190, 187, 100, 48, 190, 50, 93, 184, 190, 105, 141, 133, 61, 229, 4, 138, 190, 16, 1, 18, 190, 166, 205, 12, 191, 80, 58, 126, 191, 138, 156, 33, 62, 45, 100, 161, 190, 57, 29, 107, 189, 90, 186, 34, 190, 6, 179, 206, 190, 48, 216, 202, 61, 23, 158, 187, 62, 108, 207, 170, 62, 98, 71, 31, 62, 42, 233, 224, 61, 171, 202, 51, 191, 179, 185, 142, 61, 134, 122, 131, 62, 150, 67, 249, 62, 1, 21, 214, 190, 146, 189, 250, 61, 228, 29, 152, 61, 25, 144, 184, 190, 212, 175, 76, 191, 162, 58, 143, 190, 162, 81, 85, 191, 117, 111, 166, 61, 252, 145, 242, 190, 24, 197, 103, 62, 99, 179, 175, 190, 185, 205, 113, 61, 216, 47, 200, 61, 72, 24, 183, 62, 133, 68, 252, 61, 255, 232, 95, 188, 57, 254, 158, 61, 153, 15, 195, 62, 160, 81, 100, 190, 122, 1, 107, 190, 227, 166, 8, 61, 14, 94, 41, 62, 0, 66, 251, 62, 125, 13, 167, 62, 168, 198, 175, 61, 122, 88, 228, 189, 0, 13, 135, 190, 36, 69, 2, 62, 176, 56, 184, 62, 187, 21, 81, 191, 188, 30, 232, 189, 5, 111, 237, 59, 155, 91, 140, 62, 213, 157, 19, 190, 88, 9, 73, 190, 230, 110, 140, 190, 4, 181, 233, 62, 11, 247, 184, 60, 37, 214, 4, 62, 137, 36, 23, 190, 150, 32, 195, 61, 6, 72, 65, 190, 231, 104, 152, 62, 81, 223, 132, 189, 253, 41, 112, 60, 249, 153, 156, 62, 188, 135, 222, 60, 43, 24, 226, 60, 93, 216, 65, 191, 238, 236, 14, 191, 244, 150, 168, 190, 147, 241, 139, 191, 162, 204, 208, 62, 203, 23, 175, 61, 167, 104, 129, 190, 227, 207, 12, 62, 138, 31, 235, 62, 254, 197, 128, 60, 40, 190, 193, 62, 71, 194, 81, 190, 13, 61, 11, 191, 8, 74, 205, 61, 154, 212, 109, 62, 186, 30, 159, 62, 99, 5, 175, 190, 35, 200, 38, 62, 196, 32, 168, 188, 204, 127, 50, 190, 124, 140, 183, 190, 113, 239, 69, 62, 217, 10, 106, 191, 165, 50, 139, 62, 254, 175, 28, 191, 118, 21, 59, 189, 164, 80, 209, 190, 74, 179, 25, 190, 47, 135, 33, 61, 32, 77, 89, 62, 201, 118, 187, 190, 139, 87, 219, 189, 85, 119, 154, 187, 23, 32, 151, 62, 198, 84, 169, 190, 200, 91, 80, 189, 5, 151, 157, 62, 40, 232, 9, 62, 124, 214, 160, 189, 12, 29, 154, 188, 23, 93, 49, 189, 202, 96, 28, 190, 2, 121, 234, 60, 61, 59, 140, 190, 218, 77, 2, 61, 36, 250, 139, 61, 65, 236, 72, 190, 94, 202, 203, 191, 10, 22, 32, 190, 0, 239, 255, 190, 56, 110, 80, 189, 0, 84, 37, 62, 101, 202, 102, 189, 181, 34, 231, 62, 58, 190, 33, 188, 5, 143, 166, 190, 43, 138, 39, 62, 187, 6, 140, 191, 42, 99, 199, 189, 213, 236, 245, 190, 52, 145, 191, 190, 46, 58, 13, 191, 238, 80, 215, 190, 108, 53, 162, 188, 223, 105, 11, 61, 232, 229, 89, 61, 57, 232, 92, 189, 44, 245, 29, 62, 160, 226, 193, 61, 208, 49, 195, 190, 149, 81, 32, 191, 122, 152, 69, 188, 74, 51, 180, 62, 89, 40, 188, 62, 38, 135, 138, 61, 176, 233, 176, 61, 184, 239, 167, 190, 141, 65, 136, 62, 123, 44, 109, 62, 18, 6, 15, 63, 148, 166, 37, 190, 40, 196, 2, 190, 254, 41, 95, 61, 98, 37, 113, 62, 198, 90, 190, 190, 67, 126, 191, 190, 42, 198, 124, 191, 166, 213, 75, 62, 248, 143, 48, 191, 53, 230, 99, 62, 32, 182, 48, 191, 172, 134, 86, 190, 109, 145, 22, 62, 18, 70, 248, 188, 164, 151, 249, 190, 15, 152, 196, 190, 15, 170, 2, 190, 230, 21, 10, 63, 218, 108, 140, 190, 32, 158, 206, 62, 208, 194, 253, 60, 185, 115, 94, 62, 218, 70, 36, 62, 218, 187, 154, 190, 217, 169, 181, 190, 193, 188, 166, 62, 226, 29, 105, 191, 208, 100, 180, 62, 53, 24, 58, 62, 231, 53, 214, 189, 164, 132, 148, 190, 209, 116, 61, 190, 196, 57, 229, 189, 145, 206, 250, 61, 66, 208, 3, 62, 70, 124, 19, 62, 13, 79, 184, 61, 57, 150, 16, 191, 41, 9, 140, 62, 44, 155, 51, 190, 240, 227, 177, 60, 178, 183, 0, 61, 100, 132, 65, 190, 161, 71, 129, 62, 182, 203, 32, 62, 25, 166, 20, 187, 6, 63, 216, 62, 203, 255, 52, 62, 198, 152, 230, 190, 185, 51, 154, 191, 82, 87, 160, 62, 128, 167, 153, 62, 227, 18, 9, 62, 216, 175, 42, 189, 192, 40, 25, 62, 212, 59, 85, 189, 17, 160, 231, 189, 80, 145, 146, 190, 63, 133, 174, 189, 15, 145, 179, 62, 80, 75, 246, 61, 151, 21, 101, 190, 178, 90, 7, 190, 41, 36, 187, 190, 23, 234, 230, 61, 92, 169, 134, 190, 218, 239, 133, 62, 102, 168, 81, 60, 189, 13, 37, 63, 168, 219, 209, 190, 181, 17, 20, 62, 211, 83, 134, 62, 104, 252, 152, 62, 17, 31, 11, 191, 24, 187, 133, 62, 111, 186, 236, 189, 150, 125, 72, 59, 207, 172, 149, 62, 199, 165, 244, 61, 180, 49, 63, 62, 180, 149, 144, 190, 225, 86, 187, 191, 217, 215, 88, 62, 225, 92, 221, 190, 214, 242, 106, 191, 153, 136, 44, 190};
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
                alignas(float) const unsigned char memory[] = {247, 163, 146, 61, 69, 165, 5, 62, 249, 200, 111, 62, 20, 38, 173, 189, 205, 187, 205, 62, 184, 41, 203, 61, 34, 235, 6, 62, 6, 237, 206, 60, 192, 94, 168, 189, 236, 158, 236, 189, 17, 27, 145, 62, 94, 175, 72, 62, 24, 237, 171, 62, 8, 205, 244, 189, 1, 181, 156, 62, 28, 174, 63, 190, 214, 200, 60, 190, 48, 37, 184, 189, 188, 38, 176, 62, 154, 194, 80, 190, 166, 50, 130, 62, 66, 151, 7, 190, 134, 81, 181, 61, 143, 79, 9, 62, 120, 79, 52, 61, 113, 194, 135, 61, 148, 51, 129, 61, 51, 108, 43, 190, 150, 120, 11, 190, 55, 117, 45, 62, 5, 160, 16, 62, 202, 132, 54, 61};
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
                alignas(float) const unsigned char memory[] = {165, 126, 190, 62, 23, 171, 72, 191, 85, 11, 248, 190, 33, 91, 162, 61, 119, 19, 175, 60, 137, 62, 150, 189, 96, 104, 208, 190, 100, 217, 99, 191, 155, 252, 214, 62, 176, 101, 218, 189, 87, 195, 98, 189, 240, 245, 252, 190, 97, 106, 86, 191, 89, 25, 145, 62, 225, 173, 58, 62, 148, 73, 233, 190, 51, 153, 130, 62, 139, 184, 127, 63, 150, 63, 206, 190, 162, 80, 94, 61, 61, 95, 66, 190, 24, 112, 62, 191, 101, 9, 100, 191, 27, 235, 131, 191, 7, 68, 61, 191, 75, 29, 120, 62, 212, 130, 170, 62, 25, 64, 131, 62, 183, 195, 93, 191, 3, 244, 67, 63, 66, 127, 72, 63, 63, 121, 131, 191, 254, 35, 124, 190, 85, 26, 190, 190, 125, 26, 188, 188, 39, 222, 2, 190, 180, 28, 172, 190, 160, 62, 104, 61, 241, 206, 134, 62, 13, 154, 70, 190, 154, 74, 191, 61, 237, 158, 148, 61, 216, 74, 207, 190, 235, 76, 2, 63, 253, 41, 129, 61, 234, 46, 194, 190, 246, 94, 62, 191, 30, 203, 69, 188, 139, 28, 188, 61, 32, 154, 154, 62, 233, 128, 34, 190, 227, 0, 141, 60, 166, 4, 103, 190, 202, 241, 190, 62, 67, 151, 174, 62, 43, 175, 73, 62, 130, 56, 14, 62, 203, 210, 158, 189, 49, 73, 17, 63, 251, 192, 234, 61, 213, 19, 162, 190, 232, 189, 226, 61, 5, 184, 128, 189, 141, 230, 233, 62};
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
                alignas(float) const unsigned char memory[] = {108, 242, 20, 61, 141, 8, 168, 190};
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
    alignas(float) const unsigned char memory[] = {182, 30, 156, 190, 120, 43, 177, 190, 255, 102, 131, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {79, 21, 50, 191, 110, 108, 21, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0061/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
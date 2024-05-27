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
                alignas(float) const unsigned char memory[] = {237, 41, 104, 190, 160, 144, 219, 62, 118, 71, 91, 188, 252, 88, 249, 190, 216, 251, 24, 62, 80, 54, 59, 63, 149, 154, 150, 189, 86, 213, 136, 63, 1, 242, 234, 62, 49, 64, 35, 63, 200, 248, 133, 191, 67, 136, 119, 190, 150, 124, 220, 190, 177, 73, 217, 62, 7, 27, 9, 62, 50, 185, 143, 190, 71, 185, 169, 191, 126, 65, 193, 190, 72, 248, 220, 62, 194, 72, 168, 190, 159, 42, 120, 190, 111, 168, 141, 190, 110, 24, 228, 62, 250, 91, 240, 190, 105, 127, 146, 62, 181, 197, 124, 191, 184, 141, 147, 190, 209, 83, 49, 63, 6, 118, 225, 62, 229, 220, 225, 190, 120, 116, 130, 190, 77, 74, 160, 190, 6, 56, 56, 63, 189, 134, 7, 63, 121, 158, 9, 62, 188, 175, 5, 191, 232, 57, 239, 62, 223, 97, 174, 190, 109, 164, 229, 62, 118, 245, 202, 62, 76, 126, 25, 63, 191, 195, 241, 190, 128, 230, 132, 189, 92, 168, 137, 62, 240, 216, 97, 60, 191, 191, 55, 63, 241, 50, 160, 63, 182, 147, 211, 62, 0, 150, 128, 190, 188, 243, 73, 190, 128, 169, 131, 190, 93, 186, 101, 63, 32, 88, 79, 63, 41, 175, 46, 62, 83, 245, 10, 63, 213, 105, 115, 190, 2, 164, 37, 61, 194, 120, 44, 190, 143, 208, 180, 191, 21, 172, 175, 190, 249, 90, 227, 190, 153, 120, 2, 191, 89, 191, 135, 60, 53, 242, 25, 63, 37, 219, 55, 191, 66, 136, 234, 190, 205, 199, 128, 190, 25, 96, 119, 63, 136, 71, 88, 62, 238, 101, 142, 62, 159, 89, 32, 63, 220, 148, 184, 190, 144, 44, 89, 189, 35, 226, 209, 62, 52, 196, 1, 191, 234, 132, 113, 62, 92, 166, 99, 191, 157, 201, 47, 190, 71, 127, 25, 190, 181, 205, 112, 191, 212, 226, 166, 62, 246, 45, 187, 190, 173, 33, 149, 63, 19, 49, 57, 62, 144, 85, 217, 190, 245, 162, 189, 190, 138, 92, 219, 190, 102, 159, 43, 189, 156, 228, 47, 63, 32, 125, 173, 190, 197, 158, 83, 63, 135, 44, 11, 191, 159, 250, 84, 190, 171, 236, 74, 63, 22, 194, 135, 62, 144, 239, 25, 63};
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
                alignas(float) const unsigned char memory[] = {221, 102, 25, 191, 156, 199, 238, 189, 132, 230, 222, 62, 212, 254, 162, 62, 21, 21, 11, 63, 141, 49, 127, 190, 149, 218, 61, 191, 219, 28, 135, 190, 239, 255, 46, 190, 191, 29, 175, 61, 56, 207, 157, 190, 201, 12, 46, 190, 157, 95, 62, 63, 222, 48, 133, 62, 145, 151, 198, 190, 138, 45, 166, 188, 91, 80, 247, 189, 144, 159, 64, 62, 198, 127, 31, 63, 215, 110, 249, 189, 158, 121, 213, 62, 86, 7, 32, 189, 134, 234, 1, 63, 206, 73, 138, 62, 63, 170, 21, 191, 97, 23, 232, 61, 106, 36, 43, 63, 62, 139, 115, 62, 232, 135, 192, 62, 74, 214, 83, 62, 62, 75, 146, 190, 222, 205, 230, 189};
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
                alignas(float) const unsigned char memory[] = {77, 30, 42, 62, 71, 33, 126, 188, 236, 62, 45, 190, 77, 54, 152, 62, 51, 4, 52, 191, 1, 135, 26, 61, 129, 127, 97, 62, 89, 233, 92, 60, 53, 181, 211, 61, 3, 156, 248, 61, 229, 93, 18, 190, 130, 140, 56, 62, 171, 2, 202, 62, 32, 40, 47, 62, 29, 143, 147, 61, 81, 99, 186, 190, 98, 83, 228, 189, 239, 215, 136, 190, 65, 89, 149, 61, 165, 245, 240, 60, 169, 76, 111, 61, 191, 224, 29, 62, 157, 150, 70, 191, 193, 106, 180, 189, 11, 217, 62, 62, 190, 47, 45, 63, 71, 193, 5, 63, 234, 118, 57, 191, 179, 40, 104, 189, 141, 191, 157, 60, 53, 159, 132, 62, 31, 155, 162, 190, 191, 154, 168, 61, 76, 236, 48, 190, 152, 244, 72, 61, 232, 223, 60, 188, 58, 77, 226, 60, 137, 105, 150, 188, 193, 193, 133, 61, 161, 45, 195, 189, 218, 130, 209, 189, 151, 108, 3, 190, 144, 217, 187, 189, 234, 55, 33, 190, 139, 72, 157, 61, 51, 194, 13, 190, 173, 89, 123, 189, 184, 84, 91, 189, 98, 158, 38, 188, 158, 36, 100, 189, 178, 45, 126, 61, 34, 108, 163, 189, 48, 111, 14, 190, 207, 27, 195, 189, 106, 192, 199, 189, 2, 61, 72, 189, 167, 151, 13, 62, 222, 75, 80, 61, 157, 161, 244, 189, 172, 107, 21, 59, 149, 5, 123, 61, 246, 250, 253, 60, 183, 72, 75, 190, 170, 104, 30, 189, 219, 146, 188, 60, 234, 132, 151, 188, 49, 86, 18, 62, 132, 178, 144, 189, 46, 36, 96, 62, 12, 187, 150, 191, 66, 217, 71, 187, 246, 46, 162, 189, 31, 134, 237, 60, 233, 177, 51, 191, 84, 48, 127, 190, 41, 93, 206, 190, 68, 199, 95, 190, 19, 210, 100, 190, 38, 49, 88, 189, 78, 29, 207, 189, 15, 132, 222, 188, 157, 223, 249, 190, 251, 8, 7, 191, 70, 198, 91, 191, 249, 205, 80, 62, 206, 236, 135, 190, 137, 199, 70, 62, 145, 28, 132, 189, 16, 90, 55, 191, 31, 112, 224, 190, 23, 246, 151, 190, 95, 224, 150, 62, 204, 175, 62, 61, 139, 78, 116, 62, 81, 141, 37, 190, 194, 243, 102, 189, 70, 253, 48, 62, 134, 180, 118, 62, 22, 66, 197, 61, 71, 8, 18, 62, 163, 148, 210, 61, 73, 44, 10, 61, 186, 82, 186, 61, 125, 111, 35, 61, 68, 194, 185, 62, 24, 175, 35, 190, 237, 27, 140, 62, 226, 190, 66, 62, 230, 153, 29, 190, 96, 210, 232, 61, 167, 129, 137, 61, 81, 133, 232, 189, 154, 50, 85, 190, 252, 115, 159, 188, 238, 47, 138, 62, 208, 56, 234, 62, 16, 95, 4, 62, 87, 247, 186, 62, 158, 186, 24, 190, 133, 36, 177, 190, 255, 252, 239, 189, 223, 242, 131, 61, 224, 84, 149, 62, 16, 248, 5, 190, 103, 222, 109, 62, 192, 227, 196, 190, 185, 48, 185, 61, 233, 170, 42, 62, 152, 161, 157, 61, 171, 48, 4, 61, 55, 138, 161, 189, 142, 157, 165, 187, 85, 17, 53, 62, 45, 53, 102, 191, 19, 82, 219, 189, 242, 142, 193, 190, 70, 211, 229, 190, 39, 181, 6, 62, 66, 234, 222, 61, 176, 98, 128, 62, 61, 40, 226, 61, 243, 159, 154, 189, 179, 39, 17, 190, 250, 91, 141, 189, 55, 123, 160, 189, 131, 232, 108, 189, 184, 248, 210, 188, 189, 98, 209, 190, 124, 204, 53, 190, 200, 175, 82, 62, 28, 237, 244, 61, 116, 230, 237, 189, 160, 75, 3, 191, 15, 3, 20, 61, 178, 5, 115, 62, 66, 145, 66, 189, 202, 49, 205, 190, 151, 71, 60, 61, 245, 168, 151, 62, 255, 213, 6, 61, 176, 131, 235, 61, 141, 244, 69, 61, 65, 242, 23, 190, 133, 231, 103, 62, 100, 253, 30, 191, 5, 129, 236, 61, 139, 189, 123, 61, 216, 142, 15, 62, 222, 137, 140, 61, 56, 120, 28, 62, 124, 85, 23, 189, 159, 55, 70, 62, 130, 102, 90, 62, 212, 67, 53, 62, 51, 206, 191, 186, 224, 57, 214, 61, 8, 51, 33, 190, 94, 0, 30, 190, 150, 204, 53, 62, 169, 240, 178, 61, 166, 155, 154, 189, 50, 74, 190, 61, 133, 195, 19, 191, 193, 7, 22, 190, 163, 72, 217, 189, 85, 37, 57, 62, 27, 172, 112, 61, 5, 96, 26, 191, 188, 67, 230, 186, 239, 191, 28, 62, 78, 39, 142, 186, 118, 142, 254, 188, 146, 184, 130, 61, 58, 136, 200, 189, 107, 237, 59, 190, 25, 207, 7, 190, 94, 135, 229, 189, 39, 129, 67, 62, 189, 227, 212, 190, 115, 119, 70, 61, 188, 226, 19, 190, 121, 48, 34, 62, 36, 210, 95, 189, 24, 227, 91, 190, 127, 43, 128, 189, 197, 192, 19, 62, 198, 111, 19, 62, 197, 214, 158, 61, 75, 13, 186, 189, 62, 129, 252, 61, 183, 115, 222, 61, 217, 14, 55, 189, 200, 110, 176, 188, 192, 116, 156, 190, 240, 197, 75, 61, 249, 28, 35, 62, 32, 155, 47, 61, 122, 132, 43, 191, 250, 232, 145, 190, 188, 70, 141, 188, 248, 199, 235, 61, 108, 7, 10, 62, 212, 49, 176, 190, 179, 22, 240, 188, 174, 221, 166, 61, 205, 66, 138, 189, 44, 125, 123, 61, 136, 209, 170, 190, 133, 137, 230, 61, 31, 198, 155, 62, 44, 147, 217, 190, 15, 159, 27, 190, 29, 94, 195, 190, 123, 29, 135, 189, 14, 197, 167, 189, 153, 30, 31, 190, 100, 104, 169, 61, 254, 13, 34, 62, 123, 144, 45, 190, 67, 208, 88, 62, 138, 151, 32, 62, 103, 113, 17, 63, 127, 104, 227, 61, 207, 14, 156, 61, 152, 69, 135, 61, 189, 185, 64, 190, 8, 221, 148, 62, 26, 136, 103, 62, 4, 243, 22, 61, 89, 133, 243, 190, 203, 186, 25, 189, 106, 169, 27, 62, 61, 211, 94, 186, 143, 231, 69, 62, 11, 160, 62, 190, 122, 34, 114, 62, 238, 100, 248, 189, 58, 43, 76, 191, 148, 40, 173, 190, 82, 143, 192, 190, 177, 52, 52, 62, 129, 198, 186, 61, 14, 25, 163, 190, 218, 145, 117, 190, 245, 10, 146, 190, 146, 83, 120, 190, 81, 244, 122, 191, 164, 61, 193, 190, 3, 226, 196, 190, 187, 144, 111, 190, 72, 115, 146, 189, 180, 22, 237, 190, 255, 119, 145, 188, 181, 62, 175, 190, 202, 169, 164, 190, 86, 186, 22, 189, 227, 26, 242, 61, 176, 253, 153, 190, 80, 130, 185, 188, 40, 10, 60, 190, 109, 76, 130, 190, 167, 18, 37, 191, 105, 65, 95, 61, 165, 245, 199, 190, 150, 84, 50, 62, 17, 182, 33, 189, 92, 203, 49, 62, 70, 49, 205, 190, 209, 224, 234, 189, 243, 86, 14, 62, 181, 255, 160, 188, 198, 82, 136, 62, 92, 42, 129, 190, 49, 58, 155, 190, 171, 158, 53, 62, 231, 234, 29, 62, 245, 98, 133, 61, 105, 232, 238, 189, 32, 234, 217, 188, 171, 77, 133, 62, 121, 126, 207, 187, 230, 175, 201, 189, 246, 174, 20, 189, 52, 193, 143, 190, 211, 120, 83, 61, 197, 172, 252, 190, 237, 15, 95, 62, 227, 42, 123, 190, 237, 92, 133, 58, 58, 141, 126, 62, 128, 130, 176, 189, 191, 18, 187, 188, 78, 25, 184, 190, 253, 249, 60, 62, 128, 47, 85, 62, 92, 147, 191, 188, 87, 104, 146, 61, 187, 109, 62, 62, 229, 107, 214, 62, 10, 109, 28, 190, 39, 77, 9, 61, 90, 176, 123, 189, 33, 50, 240, 188, 167, 177, 26, 190, 94, 57, 49, 190, 72, 162, 118, 189, 24, 82, 180, 189, 152, 77, 138, 60, 234, 18, 10, 61, 227, 221, 6, 62, 68, 241, 188, 189, 99, 71, 216, 61, 31, 132, 124, 61, 157, 218, 12, 190, 87, 191, 17, 189, 125, 205, 35, 62, 10, 248, 185, 61, 18, 36, 34, 190, 36, 62, 254, 189, 13, 240, 100, 189, 124, 71, 3, 62, 21, 86, 35, 190, 195, 82, 135, 189, 207, 35, 144, 61, 166, 114, 65, 190, 40, 78, 79, 189, 48, 52, 191, 189, 190, 199, 112, 189, 185, 157, 208, 189, 32, 43, 35, 62, 44, 173, 217, 189, 255, 255, 206, 185, 144, 63, 215, 61, 77, 76, 52, 190, 137, 140, 186, 61, 86, 95, 78, 189, 128, 219, 4, 62, 36, 229, 64, 62, 46, 147, 8, 191, 12, 216, 217, 189, 214, 30, 132, 190, 249, 241, 29, 189, 238, 250, 234, 60, 109, 16, 197, 60, 41, 161, 173, 61, 110, 169, 146, 188, 207, 105, 22, 61, 42, 47, 182, 62, 107, 184, 121, 187, 172, 80, 244, 62, 152, 78, 4, 190, 81, 42, 11, 59, 15, 162, 97, 190, 187, 138, 22, 190, 162, 57, 82, 62, 41, 59, 100, 61, 97, 93, 124, 62, 157, 4, 249, 190, 87, 249, 24, 188, 167, 88, 214, 189, 152, 239, 86, 189, 112, 173, 161, 62, 11, 212, 5, 191, 205, 215, 140, 62, 194, 44, 204, 188, 51, 34, 140, 61, 14, 27, 198, 189, 85, 178, 254, 189, 67, 15, 237, 60, 226, 172, 4, 190, 248, 12, 156, 189, 28, 104, 135, 189, 86, 16, 31, 187, 95, 28, 9, 190, 13, 143, 54, 189, 87, 22, 187, 61, 41, 47, 18, 190, 190, 79, 247, 189, 66, 68, 52, 190, 118, 68, 32, 62, 18, 182, 59, 61, 47, 193, 38, 190, 32, 12, 207, 189, 172, 217, 12, 61, 183, 52, 231, 189, 250, 55, 245, 61, 222, 115, 233, 188, 165, 32, 215, 61, 78, 36, 37, 62, 248, 57, 22, 62, 72, 3, 242, 186, 245, 1, 164, 61, 190, 69, 44, 189, 146, 79, 2, 190, 23, 41, 34, 190, 39, 118, 143, 187, 24, 180, 37, 190, 88, 8, 49, 190, 48, 15, 37, 190, 217, 246, 34, 59, 232, 169, 172, 61, 147, 126, 231, 189, 248, 230, 51, 61, 132, 154, 95, 189, 239, 55, 39, 190, 237, 235, 7, 190, 87, 170, 159, 61, 11, 162, 139, 60, 138, 37, 24, 190, 222, 96, 148, 61, 180, 156, 4, 61, 227, 15, 110, 60, 226, 224, 66, 190, 192, 33, 86, 188, 205, 61, 210, 61, 85, 222, 1, 62, 221, 248, 208, 189, 12, 106, 36, 190, 232, 169, 226, 60, 252, 219, 120, 60, 208, 192, 11, 61, 5, 21, 119, 61, 227, 254, 22, 190, 232, 173, 143, 189, 245, 48, 213, 61, 24, 133, 186, 60, 125, 27, 160, 189, 177, 22, 3, 190, 197, 63, 112, 61, 177, 130, 157, 61, 255, 218, 70, 62, 71, 210, 238, 190, 142, 40, 151, 62, 173, 105, 175, 191, 162, 14, 186, 189, 41, 2, 141, 189, 176, 253, 45, 61, 117, 169, 155, 190, 224, 232, 42, 188, 202, 162, 80, 61, 72, 125, 12, 190, 108, 205, 104, 61, 115, 149, 46, 62, 250, 168, 42, 190, 29, 128, 179, 61, 184, 190, 43, 191, 53, 71, 185, 190, 117, 204, 139, 191, 33, 130, 200, 60, 1, 40, 57, 190, 55, 97, 49, 62, 81, 145, 114, 62, 176, 185, 130, 59, 212, 66, 43, 190, 87, 6, 42, 62, 254, 114, 167, 62, 92, 65, 18, 189, 229, 169, 199, 61, 54, 95, 67, 190, 137, 47, 13, 190, 166, 225, 18, 190, 19, 201, 201, 61, 255, 22, 31, 62, 66, 60, 83, 190, 158, 192, 82, 62, 45, 11, 164, 191, 117, 5, 149, 61, 209, 209, 242, 61, 18, 22, 48, 190, 105, 14, 93, 191, 134, 180, 78, 61, 106, 223, 16, 191, 110, 216, 118, 190, 255, 54, 56, 189, 140, 19, 210, 61, 227, 84, 15, 190, 76, 152, 73, 189, 38, 133, 195, 190, 32, 80, 20, 190, 74, 98, 77, 191, 121, 168, 153, 62, 190, 94, 227, 190, 196, 195, 56, 62, 103, 34, 147, 189, 32, 196, 31, 191, 18, 85, 206, 59, 183, 25, 41, 60, 36, 2, 173, 62, 111, 118, 232, 190, 227, 125, 176, 62, 202, 103, 78, 61, 253, 99, 73, 190, 249, 67, 90, 60, 109, 197, 2, 190, 96, 203, 203, 59, 184, 182, 132, 62, 210, 165, 29, 62, 55, 246, 218, 189, 40, 149, 45, 189, 228, 246, 36, 187, 203, 49, 177, 60, 101, 140, 226, 61, 3, 40, 160, 61, 58, 243, 81, 61, 96, 47, 181, 60, 32, 128, 60, 190, 42, 15, 113, 60, 217, 37, 86, 189, 245, 110, 17, 60, 195, 235, 27, 190, 201, 153, 70, 62, 195, 249, 128, 190, 193, 87, 57, 190, 36, 186, 49, 62, 64, 109, 69, 62, 117, 150, 97, 61, 116, 47, 103, 190, 113, 198, 152, 61, 123, 25, 42, 62, 35, 5, 133, 61, 178, 33, 148, 61, 126, 1, 38, 62, 41, 100, 27, 190, 249, 158, 45, 190, 66, 248, 184, 189, 94, 145, 146, 190, 194, 136, 108, 190, 116, 198, 88, 190, 48, 218, 149, 62, 203, 107, 110, 60, 45, 23, 15, 191, 69, 21, 93, 189, 49, 38, 164, 190, 89, 251, 212, 61, 63, 159, 75, 190, 253, 134, 157, 189, 246, 48, 241, 59, 106, 118, 9, 60, 8, 228, 160, 61, 112, 86, 70, 189, 220, 121, 226, 61, 183, 159, 223, 62, 255, 162, 130, 61, 196, 162, 147, 61, 131, 166, 84, 188, 9, 244, 172, 190, 90, 95, 223, 61, 150, 18, 53, 62, 164, 10, 100, 189, 103, 136, 212, 190, 15, 23, 19, 62, 115, 61, 110, 62, 142, 122, 69, 62, 46, 4, 231, 60, 233, 40, 138, 190, 38, 117, 201, 60, 154, 3, 233, 189, 154, 146, 153, 187, 182, 237, 158, 190, 66, 78, 35, 189, 114, 129, 171, 190, 27, 106, 145, 62, 135, 76, 48, 62, 108, 171, 183, 189, 132, 5, 136, 62, 109, 203, 42, 190, 216, 138, 211, 189, 80, 104, 212, 188, 50, 82, 239, 188, 39, 116, 98, 189, 212, 104, 11, 62, 30, 186, 71, 190, 10, 143, 37, 62, 241, 234, 79, 191, 221, 173, 58, 190, 13, 37, 215, 61, 209, 76, 141, 62, 92, 42, 107, 189, 207, 203, 104, 190, 147, 111, 202, 188, 37, 241, 33, 189, 76, 225, 194, 62, 214, 63, 151, 62, 208, 159, 145, 191, 235, 232, 155, 61, 236, 105, 41, 62, 87, 188, 238, 190, 128, 5, 170, 190, 161, 232, 118, 61, 236, 21, 127, 189, 158, 64, 25, 189, 14, 139, 200, 62, 15, 212, 132, 62, 72, 179, 24, 191, 177, 72, 245, 188, 176, 42, 47, 62, 214, 240, 140, 189, 51, 17, 221, 60, 220, 241, 129, 61, 83, 56, 210, 62, 93, 15, 229, 188, 126, 245, 4, 190, 204, 163, 39, 189, 154, 141, 212, 190, 26, 131, 108, 190, 163, 57, 25, 191, 121, 204, 123, 62, 212, 38, 142, 190, 107, 110, 79, 62, 93, 254, 109, 62, 177, 216, 173, 189, 12, 203, 50, 190, 146, 212, 59, 191, 71, 40, 10, 63, 155, 226, 60, 62, 141, 6, 130, 60, 229, 229, 164, 189, 67, 151, 139, 61, 13, 7, 84, 62, 87, 0, 12, 190, 35, 46, 144, 189, 155, 65, 212, 61, 88, 27, 231, 61, 224, 208, 17, 61, 101, 32, 176, 61, 187, 173, 98, 191, 2, 163, 43, 61, 171, 215, 244, 187, 157, 16, 147, 189, 173, 165, 47, 190, 245, 212, 205, 61, 222, 212, 95, 190, 181, 191, 64, 190, 205, 63, 170, 61, 63, 45, 27, 62, 80, 212, 22, 61, 42, 255, 236, 61, 239, 79, 237, 189, 101, 243, 156, 189, 240, 109, 87, 191, 164, 38, 61, 61, 85, 183, 34, 190, 236, 45, 221, 61, 131, 164, 128, 62, 62, 147, 123, 190, 169, 131, 149, 61, 136, 163, 185, 61, 181, 217, 187, 62, 121, 237, 60, 189, 107, 215, 139, 62, 83, 172, 185, 189, 65, 184, 19, 61, 144, 14, 36, 62, 232, 151, 137, 190, 117, 66, 198, 190, 195, 93, 53, 189, 97, 71, 39, 189, 131, 148, 188, 62, 54, 50, 221, 189, 125, 238, 65, 190, 118, 209, 140, 62, 145, 202, 248, 189, 253, 218, 184, 60, 153, 125, 50, 190, 145, 217, 69, 62, 204, 161, 33, 190, 97, 154, 236, 61, 117, 196, 14, 62, 171, 141, 172, 61, 78, 175, 254, 61, 36, 168, 199, 59, 224, 145, 246, 62, 217, 135, 32, 62, 113, 125, 31, 62, 117, 235, 91, 60, 57, 200, 127, 61, 55, 181, 157, 61, 55, 81, 247, 61, 250, 46, 117, 62, 177, 144, 77, 191, 156, 96, 94, 62, 193, 125, 16, 190, 164, 89, 38, 62, 234, 163, 97, 62, 144, 21, 219, 61, 52, 77, 53, 191, 62, 165, 13, 191, 227, 54, 100, 190, 193, 203, 101, 59, 190, 223, 105, 61, 92, 221, 183, 190, 6, 95, 187, 189, 112, 83, 70, 190, 69, 217, 162, 61, 242, 47, 97, 191, 196, 137, 60, 190, 20, 75, 196, 189, 193, 221, 77, 62, 158, 106, 24, 190, 99, 179, 19, 62, 207, 178, 32, 62, 198, 220, 102, 62, 35, 49, 43, 62, 62, 192, 172, 189, 226, 60, 123, 189, 170, 8, 160, 190, 189, 36, 55, 62, 91, 135, 245, 61, 122, 75, 118, 189, 157, 63, 40, 191, 31, 147, 208, 190, 213, 217, 18, 61, 39, 40, 136, 61, 173, 46, 32, 62, 118, 207, 188, 190, 24, 55, 155, 189, 157, 21, 194, 189, 7, 57, 11, 189, 209, 3, 21, 62, 60, 36, 73, 62, 249, 182, 160, 61, 204, 176, 225, 190, 188, 171, 1, 62, 108, 12, 170, 188, 23, 39, 63, 190, 62, 45, 149, 190, 106, 77, 82, 189, 73, 204, 185, 190, 137, 132, 104, 61, 212, 180, 155, 189, 201, 222, 103, 189, 95, 196, 7, 189, 202, 214, 153, 62, 187, 219, 174, 188, 186, 214, 216, 188, 190, 226, 9, 190, 29, 211, 36, 62, 91, 4, 131, 190, 214, 25, 117, 60, 170, 218, 21, 190, 33, 172, 40, 190, 245, 116, 176, 62, 130, 84, 158, 61, 78, 176, 134, 62, 139, 202, 66, 59, 80, 5, 121, 62, 30, 172, 163, 189, 211, 164, 145, 61, 142, 183, 142, 188, 181, 47, 59, 190, 167, 227, 93, 189, 140, 17, 110, 62, 105, 59, 34, 190, 129, 47, 114, 189, 20, 38, 178, 190, 205, 68, 186, 190, 246, 94, 53, 191, 136, 32, 141, 189, 166, 53, 151, 190, 0, 214, 9, 61, 66, 25, 125, 62, 116, 193, 236, 189, 137, 4, 216, 61, 118, 163, 160, 188, 91, 67, 90, 189, 238, 32, 10, 62, 34, 96, 160, 62, 158, 59, 114, 191, 227, 174, 216, 190, 101, 90, 93, 188, 211, 26, 23, 190, 19, 63, 17, 62, 242, 126, 232, 60, 63, 21, 35, 190, 116, 195, 57, 62, 68, 86, 1, 191, 247, 193, 77, 61, 84, 87, 151, 189, 250, 16, 168, 187, 240, 234, 220, 61, 238, 65, 13, 190, 180, 235, 84, 189, 91, 115, 240, 189, 93, 94, 114, 62, 241, 60, 45, 62, 56, 5, 245, 59, 206, 3, 98, 190, 170, 180, 132, 60, 226, 50, 234, 189, 36, 212, 64, 62, 24, 51, 21, 61, 170, 222, 134, 186, 145, 21, 123, 61, 10, 41, 208, 60, 55, 104, 39, 190, 57, 133, 247, 61, 213, 205, 30, 190, 52, 133, 254, 186, 166, 82, 195, 62, 162, 45, 76, 61, 132, 22, 156, 61, 251, 230, 55, 62, 121, 241, 132, 62, 10, 10, 247, 59, 52, 70, 45, 190, 93, 42, 168, 189, 107, 85, 55, 62, 73, 142, 91, 189, 151, 89, 8, 61, 55, 255, 221, 189, 55, 65, 223, 61, 53, 71, 8, 190, 190, 217, 22, 62, 70, 116, 1, 62, 26, 71, 65, 62, 83, 175, 25, 62, 231, 107, 252, 61, 206, 139, 147, 190, 122, 235, 132, 188, 12, 15, 241, 188, 134, 6, 97, 189, 131, 154, 175, 61, 250, 237, 170, 189, 243, 51, 5, 62, 2, 44, 27, 190, 155, 62, 176, 61, 8, 81, 23, 62, 111, 33, 64, 190, 143, 3, 174, 189, 31, 177, 149, 190, 41, 203, 85, 62, 121, 48, 185, 190, 219, 208, 230, 61, 90, 225, 150, 188, 155, 140, 20, 59, 31, 127, 131, 62, 254, 179, 152, 61, 184, 160, 139, 62, 48, 37, 20, 62, 62, 221, 250, 61, 140, 135, 250, 61, 126, 35, 6, 190, 146, 69, 111, 62, 207, 101, 172, 60, 38, 58, 65, 189, 156, 95, 202, 61, 51, 72, 84, 189, 25, 24, 82, 189, 234, 94, 179, 190, 204, 226, 85, 189, 234, 194, 33, 188, 141, 229, 138, 188, 46, 102, 190, 60, 178, 137, 222, 61, 93, 64, 97, 190, 210, 218, 60, 189, 70, 163, 14, 190, 187, 126, 216, 189, 8, 209, 224, 61, 84, 125, 193, 189, 187, 103, 77, 61, 154, 1, 38, 190, 126, 114, 3, 190, 164, 94, 208, 189, 244, 170, 111, 189, 75, 113, 242, 61, 53, 119, 169, 190, 106, 50, 108, 190, 246, 114, 150, 190, 68, 177, 235, 61, 189, 159, 91, 62, 33, 27, 41, 191, 202, 212, 142, 61, 1, 235, 208, 61, 76, 234, 227, 189, 27, 175, 170, 190, 95, 140, 187, 188, 39, 4, 242, 189, 80, 73, 234, 61, 23, 176, 208, 190, 164, 55, 159, 189, 203, 215, 1, 191, 171, 172, 176, 189, 200, 126, 4, 61, 173, 196, 42, 190, 160, 100, 163, 61, 0, 212, 208, 187, 48, 160, 144, 189, 73, 73, 248, 60, 78, 210, 77, 189, 94, 131, 38, 62, 44, 101, 34, 62, 193, 216, 44, 62, 247, 205, 146, 62, 162, 59, 188, 60, 213, 39, 106, 190, 200, 162, 169, 61, 78, 175, 173, 190, 10, 148, 173, 188, 120, 140, 187, 188, 47, 162, 159, 188, 98, 248, 236, 190, 153, 4, 71, 190, 228, 253, 60, 62, 251, 29, 32, 62, 248, 7, 41, 62, 36, 119, 243, 190, 145, 210, 13, 61, 252, 86, 122, 61, 76, 67, 49, 61, 16, 124, 128, 61, 113, 9, 210, 62, 102, 12, 250, 189, 105, 242, 176, 190, 141, 169, 73, 62, 161, 0, 126, 62, 253, 236, 250, 189, 101, 150, 245, 189, 158, 251, 34, 61, 119, 99, 68, 62, 24, 6, 250, 61, 136, 189, 11, 189, 67, 82, 254, 61, 247, 151, 98, 190, 8, 141, 17, 190, 82, 47, 52, 191, 179, 238, 79, 61, 240, 94, 197, 190, 114, 115, 84, 61, 31, 155, 136, 62, 83, 207, 167, 188, 194, 92, 174, 61, 84, 151, 223, 190, 151, 70, 243, 61, 99, 182, 95, 62, 128, 132, 100, 190, 23, 131, 249, 189, 96, 160, 16, 62, 189, 109, 207, 62, 166, 153, 129, 190, 44, 125, 71, 61, 172, 144, 93, 190, 116, 90, 224, 189, 97, 11, 8, 62, 193, 199, 199, 189, 185, 68, 26, 190, 251, 46, 21, 189, 182, 149, 184, 189, 182, 204, 75, 190, 203, 109, 32, 189, 4, 96, 168, 189, 6, 88, 240, 187, 169, 184, 136, 62, 212, 237, 13, 62, 93, 4, 34, 62, 74, 83, 163, 189, 72, 88, 234, 61, 6, 95, 212, 61, 80, 6, 83, 62, 36, 123, 160, 60, 133, 198, 132, 62, 227, 109, 14, 61, 97, 9, 192, 189, 163, 4, 209, 61, 60, 164, 144, 187, 228, 110, 202, 61, 113, 37, 173, 61, 164, 84, 162, 190, 149, 225, 64, 62, 235, 177, 4, 62, 255, 73, 66, 62, 204, 177, 111, 189, 221, 19, 33, 62, 24, 223, 135, 60, 152, 218, 110, 61, 169, 225, 71, 62, 103, 129, 137, 189, 122, 90, 182, 190, 33, 152, 135, 190, 72, 201, 248, 189, 152, 246, 21, 190, 70, 143, 96, 190, 167, 229, 118, 61, 122, 65, 75, 61, 74, 240, 239, 189, 34, 213, 182, 61, 106, 255, 220, 61, 16, 100, 73, 190, 227, 115, 89, 190, 98, 186, 142, 188, 193, 189, 19, 62, 202, 113, 59, 190, 18, 158, 141, 62, 182, 162, 197, 61, 127, 201, 181, 189, 26, 20, 203, 189, 3, 194, 248, 190, 222, 110, 174, 62, 239, 57, 50, 62, 244, 234, 89, 190, 170, 25, 91, 190, 179, 49, 233, 188, 240, 159, 27, 62, 67, 204, 99, 190};
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
                alignas(float) const unsigned char memory[] = {146, 158, 171, 61, 38, 137, 223, 61, 236, 202, 25, 62, 113, 245, 47, 190, 109, 8, 110, 62, 153, 226, 210, 188, 119, 78, 201, 61, 53, 221, 106, 189, 44, 10, 80, 62, 104, 164, 47, 62, 163, 192, 179, 189, 69, 120, 227, 61, 156, 195, 27, 190, 253, 45, 153, 189, 73, 118, 129, 61, 236, 161, 111, 62, 138, 115, 182, 62, 35, 249, 195, 62, 66, 28, 150, 62, 84, 63, 172, 62, 61, 114, 180, 187, 128, 85, 172, 62, 204, 147, 245, 61, 192, 154, 200, 61, 190, 53, 119, 189, 99, 99, 147, 62, 208, 95, 145, 62, 156, 250, 189, 189, 198, 53, 34, 186, 81, 196, 135, 62, 247, 247, 144, 62, 62, 47, 111, 62};
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
                alignas(float) const unsigned char memory[] = {139, 36, 229, 62, 180, 198, 147, 61, 73, 16, 76, 63, 56, 22, 184, 190, 233, 120, 178, 62, 82, 201, 117, 62, 109, 220, 131, 190, 21, 214, 199, 190, 124, 79, 22, 191, 86, 130, 178, 62, 116, 103, 33, 190, 115, 109, 130, 190, 21, 202, 23, 61, 186, 41, 250, 189, 43, 160, 32, 63, 59, 181, 47, 63, 236, 252, 35, 188, 133, 74, 64, 191, 253, 109, 91, 62, 106, 53, 115, 63, 117, 74, 152, 62, 215, 24, 229, 190, 187, 7, 2, 191, 131, 210, 188, 61, 67, 50, 200, 189, 22, 75, 154, 189, 121, 122, 115, 61, 3, 116, 235, 61, 4, 68, 145, 62, 179, 183, 254, 62, 125, 172, 22, 188, 190, 222, 214, 62, 137, 122, 112, 62, 173, 243, 35, 61, 140, 254, 170, 61, 246, 133, 16, 62, 88, 106, 77, 190, 73, 97, 26, 190, 11, 142, 165, 60, 103, 89, 122, 61, 204, 168, 146, 62, 249, 232, 115, 62, 7, 46, 140, 188, 142, 189, 177, 60, 236, 28, 251, 61, 118, 255, 167, 189, 8, 166, 30, 61, 97, 181, 185, 61, 192, 180, 34, 190, 71, 226, 179, 61, 92, 210, 40, 190, 27, 194, 128, 61, 223, 252, 36, 61, 67, 161, 69, 190, 86, 207, 92, 185, 126, 100, 49, 190, 51, 224, 211, 190, 241, 2, 125, 190, 25, 11, 111, 190, 138, 118, 221, 59, 53, 204, 30, 60, 19, 56, 94, 188, 196, 224, 181, 190, 243, 64, 11, 59};
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
                alignas(float) const unsigned char memory[] = {237, 114, 54, 190, 196, 131, 19, 190};
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
    alignas(float) const unsigned char memory[] = {68, 176, 26, 190, 170, 29, 51, 189, 69, 161, 74, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {225, 241, 34, 63, 73, 94, 72, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0024/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
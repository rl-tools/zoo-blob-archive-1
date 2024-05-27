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
                alignas(float) const unsigned char memory[] = {150, 1, 0, 191, 148, 172, 124, 190, 89, 246, 66, 63, 106, 43, 214, 59, 131, 220, 3, 191, 227, 110, 204, 62, 137, 190, 26, 63, 142, 31, 241, 190, 49, 192, 1, 191, 50, 246, 145, 190, 105, 153, 76, 191, 194, 218, 179, 190, 131, 57, 9, 191, 159, 44, 146, 62, 198, 5, 149, 190, 115, 187, 13, 63, 43, 8, 162, 189, 53, 88, 245, 61, 35, 243, 49, 191, 151, 192, 1, 190, 54, 76, 34, 61, 45, 183, 33, 63, 38, 119, 200, 190, 140, 189, 25, 191, 39, 60, 13, 190, 107, 63, 131, 62, 119, 2, 150, 190, 27, 12, 187, 190, 2, 116, 103, 63, 19, 98, 171, 190, 179, 54, 194, 62, 58, 109, 3, 63, 231, 49, 31, 191, 185, 2, 91, 190, 23, 57, 222, 62, 152, 124, 188, 60, 248, 105, 193, 61, 45, 174, 162, 190, 252, 242, 6, 63, 176, 172, 233, 190, 35, 117, 46, 62, 163, 132, 233, 61, 35, 133, 147, 62, 203, 131, 193, 190, 158, 69, 126, 190, 18, 185, 53, 191, 55, 105, 145, 190, 180, 196, 41, 189, 41, 195, 12, 63, 10, 81, 69, 191, 143, 112, 204, 62, 191, 101, 64, 61, 40, 110, 90, 191, 127, 229, 5, 62, 14, 56, 20, 190, 100, 2, 232, 189, 172, 204, 233, 62, 231, 127, 123, 190, 32, 175, 99, 191, 63, 98, 202, 190, 2, 147, 113, 190, 119, 168, 195, 190, 208, 154, 20, 63, 244, 34, 153, 62, 108, 236, 58, 63, 1, 78, 208, 62, 92, 207, 202, 62, 87, 40, 183, 62, 80, 24, 219, 190, 192, 83, 57, 191, 164, 201, 129, 61, 148, 51, 237, 189, 170, 255, 100, 189, 94, 171, 217, 190, 239, 151, 252, 62, 58, 159, 192, 61, 220, 230, 50, 191, 213, 176, 187, 62, 131, 187, 241, 190, 27, 94, 125, 190, 188, 73, 6, 190, 14, 29, 56, 63, 252, 97, 110, 63, 211, 95, 243, 62, 27, 66, 154, 62, 228, 88, 188, 61, 104, 128, 41, 190, 78, 135, 50, 63, 131, 4, 246, 62, 12, 134, 207, 189, 143, 87, 185, 190, 126, 8, 76, 191, 76, 121, 215, 62, 69, 83, 10, 63, 40, 224, 105, 63, 71, 97, 251, 62};
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
                alignas(float) const unsigned char memory[] = {200, 68, 79, 190, 187, 2, 61, 190, 23, 211, 141, 61, 192, 247, 203, 190, 72, 5, 57, 62, 241, 53, 149, 62, 171, 122, 206, 189, 23, 100, 203, 189, 69, 17, 58, 191, 203, 225, 172, 189, 254, 12, 237, 62, 37, 69, 69, 62, 233, 12, 240, 190, 98, 91, 55, 63, 180, 90, 241, 62, 251, 108, 70, 62, 144, 43, 50, 63, 116, 77, 65, 62, 180, 188, 232, 190, 253, 28, 152, 62, 178, 75, 104, 189, 197, 119, 164, 189, 108, 69, 4, 63, 225, 223, 218, 189, 96, 180, 24, 62, 4, 160, 234, 187, 148, 29, 114, 62, 244, 218, 27, 191, 11, 149, 215, 190, 140, 38, 107, 62, 162, 78, 20, 190, 3, 27, 255, 190};
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
                alignas(float) const unsigned char memory[] = {245, 37, 124, 189, 209, 43, 221, 189, 114, 212, 154, 187, 91, 218, 6, 189, 80, 152, 84, 189, 68, 185, 33, 61, 76, 131, 6, 188, 98, 85, 20, 62, 205, 38, 167, 59, 136, 8, 59, 190, 141, 235, 193, 189, 81, 94, 101, 189, 173, 176, 205, 61, 109, 92, 33, 190, 247, 213, 21, 189, 9, 217, 226, 60, 156, 238, 197, 188, 232, 62, 51, 190, 217, 239, 150, 189, 184, 94, 139, 190, 63, 60, 27, 62, 107, 206, 91, 62, 84, 190, 78, 61, 243, 201, 80, 190, 250, 158, 235, 60, 114, 55, 126, 190, 130, 211, 181, 189, 33, 19, 56, 62, 169, 255, 139, 62, 13, 174, 19, 62, 30, 170, 109, 190, 144, 118, 170, 62, 16, 66, 169, 190, 239, 137, 9, 62, 167, 165, 99, 190, 153, 173, 193, 188, 225, 43, 3, 62, 121, 140, 12, 62, 77, 119, 153, 61, 175, 74, 111, 189, 78, 173, 82, 189, 138, 247, 49, 62, 225, 230, 9, 189, 138, 103, 209, 187, 171, 124, 159, 189, 140, 158, 196, 188, 99, 77, 250, 189, 56, 14, 168, 185, 174, 215, 31, 190, 135, 231, 248, 61, 119, 202, 163, 189, 68, 227, 184, 61, 8, 116, 235, 190, 98, 208, 248, 60, 137, 154, 41, 62, 41, 131, 8, 62, 12, 52, 80, 190, 68, 26, 7, 62, 1, 139, 85, 190, 210, 42, 37, 188, 245, 191, 23, 61, 92, 8, 133, 61, 64, 33, 128, 190, 173, 71, 217, 189, 182, 116, 30, 61, 245, 254, 117, 189, 1, 11, 233, 61, 18, 45, 28, 62, 57, 60, 176, 189, 139, 111, 239, 61, 198, 80, 94, 61, 58, 144, 139, 62, 102, 243, 94, 62, 255, 62, 62, 190, 37, 206, 19, 190, 178, 187, 122, 190, 92, 106, 163, 190, 107, 66, 3, 190, 40, 135, 152, 61, 196, 185, 40, 188, 12, 183, 83, 62, 66, 159, 132, 62, 69, 246, 93, 188, 110, 203, 54, 61, 102, 203, 59, 62, 166, 59, 138, 190, 211, 94, 82, 61, 81, 80, 102, 62, 134, 99, 214, 188, 22, 99, 229, 189, 228, 146, 209, 189, 143, 36, 42, 190, 38, 30, 182, 186, 72, 97, 156, 61, 214, 19, 165, 62, 254, 225, 119, 190, 201, 182, 142, 60, 115, 229, 171, 189, 242, 200, 51, 189, 131, 90, 87, 188, 94, 104, 255, 189, 191, 199, 178, 188, 52, 68, 119, 61, 70, 238, 9, 62, 12, 84, 223, 61, 167, 226, 22, 62, 18, 110, 169, 188, 74, 255, 234, 189, 243, 49, 136, 189, 48, 169, 143, 61, 67, 68, 122, 61, 160, 151, 65, 190, 87, 65, 162, 190, 183, 195, 39, 186, 110, 86, 239, 61, 101, 51, 41, 189, 12, 186, 249, 189, 244, 252, 44, 61, 195, 58, 62, 190, 77, 223, 89, 190, 201, 183, 129, 190, 48, 185, 135, 189, 177, 225, 69, 190, 173, 97, 26, 62, 144, 235, 215, 61, 62, 40, 79, 62, 77, 217, 144, 187, 243, 138, 44, 61, 64, 111, 16, 189, 242, 74, 90, 189, 147, 222, 248, 60, 10, 174, 199, 189, 211, 82, 154, 60, 243, 202, 67, 62, 163, 137, 58, 62, 145, 199, 155, 60, 78, 189, 94, 186, 156, 73, 199, 60, 15, 223, 2, 62, 50, 52, 113, 61, 35, 86, 27, 190, 57, 2, 34, 62, 238, 124, 176, 189, 55, 33, 159, 189, 142, 9, 3, 62, 238, 159, 4, 62, 98, 87, 250, 189, 68, 23, 219, 61, 46, 13, 174, 189, 21, 13, 238, 61, 135, 215, 40, 62, 207, 107, 118, 62, 200, 68, 222, 60, 51, 248, 1, 61, 135, 98, 118, 61, 166, 65, 90, 190, 165, 201, 153, 190, 230, 86, 140, 189, 251, 194, 225, 61, 219, 6, 129, 60, 151, 21, 22, 62, 143, 15, 21, 189, 161, 184, 8, 62, 87, 40, 97, 60, 189, 168, 205, 61, 88, 106, 233, 189, 244, 85, 203, 61, 219, 194, 48, 190, 16, 242, 128, 61, 37, 83, 67, 60, 173, 145, 198, 189, 115, 126, 30, 189, 238, 177, 15, 62, 18, 232, 168, 189, 98, 190, 216, 61, 226, 4, 65, 188, 73, 225, 38, 190, 248, 226, 16, 190, 47, 105, 213, 189, 32, 100, 86, 189, 151, 129, 142, 189, 40, 198, 219, 61, 3, 15, 209, 60, 166, 52, 84, 61, 123, 229, 26, 62, 187, 55, 196, 188, 53, 205, 178, 189, 214, 190, 201, 189, 176, 21, 37, 62, 106, 220, 170, 189, 127, 24, 41, 60, 34, 100, 14, 190, 86, 162, 94, 189, 72, 184, 115, 190, 118, 94, 101, 62, 66, 142, 185, 189, 252, 79, 117, 189, 119, 190, 113, 61, 0, 47, 53, 60, 43, 1, 147, 62, 120, 255, 143, 61, 32, 242, 169, 190, 64, 12, 98, 189, 117, 130, 111, 190, 170, 98, 117, 190, 232, 107, 115, 189, 79, 45, 240, 61, 17, 154, 20, 190, 60, 31, 228, 62, 9, 193, 146, 62, 254, 189, 21, 61, 137, 204, 35, 62, 238, 9, 81, 62, 102, 195, 60, 190, 230, 2, 130, 61, 121, 171, 42, 190, 110, 21, 79, 62, 14, 44, 46, 188, 158, 129, 81, 188, 35, 15, 15, 190, 227, 48, 166, 189, 252, 221, 227, 188, 242, 138, 226, 61, 184, 26, 207, 190, 197, 55, 27, 190, 181, 190, 204, 190, 224, 1, 91, 190, 48, 98, 37, 190, 252, 209, 215, 189, 212, 208, 72, 62, 200, 53, 106, 190, 104, 117, 109, 61, 19, 155, 138, 61, 203, 111, 176, 61, 100, 13, 68, 62, 207, 140, 6, 62, 148, 49, 45, 190, 42, 218, 13, 190, 225, 93, 222, 61, 39, 183, 129, 189, 93, 195, 116, 62, 221, 74, 12, 190, 148, 117, 34, 190, 51, 177, 220, 190, 146, 35, 167, 61, 225, 95, 76, 62, 117, 159, 90, 61, 162, 122, 196, 190, 33, 75, 55, 189, 187, 120, 192, 190, 166, 0, 179, 188, 249, 104, 149, 61, 248, 171, 35, 189, 59, 156, 225, 62, 200, 78, 145, 190, 197, 19, 140, 62, 46, 155, 3, 189, 198, 22, 138, 61, 222, 173, 5, 190, 93, 46, 238, 188, 75, 236, 182, 188, 248, 120, 235, 61, 118, 57, 185, 62, 244, 112, 114, 60, 86, 217, 232, 189, 111, 9, 217, 61, 62, 80, 79, 62, 239, 30, 94, 187, 29, 247, 10, 61, 73, 243, 207, 61, 138, 77, 208, 61, 29, 175, 72, 62, 74, 88, 78, 190, 244, 192, 72, 190, 244, 222, 20, 62, 233, 204, 202, 189, 228, 188, 5, 190, 181, 66, 176, 62, 29, 236, 69, 61, 201, 136, 161, 61, 9, 83, 18, 188, 133, 82, 19, 62, 170, 199, 115, 189, 191, 198, 81, 188, 241, 26, 41, 190, 21, 215, 158, 62, 20, 174, 112, 190, 15, 17, 112, 62, 132, 247, 227, 189, 142, 101, 146, 189, 33, 206, 86, 62, 122, 17, 89, 188, 97, 236, 245, 61, 41, 23, 4, 60, 102, 67, 45, 189, 57, 254, 133, 62, 244, 77, 242, 189, 95, 178, 76, 190, 197, 136, 216, 60, 240, 50, 146, 189, 254, 98, 100, 59, 93, 128, 117, 62, 2, 206, 14, 60, 86, 168, 89, 62, 185, 16, 177, 62, 189, 75, 119, 189, 15, 107, 0, 190, 177, 96, 35, 60, 135, 50, 79, 62, 151, 220, 251, 61, 115, 73, 4, 61, 253, 250, 92, 61, 19, 250, 170, 61, 140, 76, 8, 61, 65, 34, 156, 189, 255, 243, 173, 189, 156, 1, 172, 190, 228, 34, 12, 61, 152, 111, 63, 62, 41, 246, 169, 190, 113, 242, 88, 188, 171, 165, 148, 190, 81, 158, 84, 60, 234, 229, 187, 61, 146, 196, 143, 190, 126, 90, 138, 62, 240, 133, 9, 61, 56, 135, 52, 190, 124, 236, 166, 188, 134, 123, 228, 189, 184, 7, 236, 61, 49, 112, 177, 189, 84, 231, 51, 190, 107, 65, 97, 190, 111, 7, 155, 61, 237, 194, 7, 190, 16, 251, 148, 61, 60, 22, 139, 190, 23, 49, 13, 60, 159, 247, 193, 189, 234, 230, 224, 189, 218, 57, 129, 61, 250, 21, 17, 62, 40, 136, 181, 190, 93, 177, 9, 190, 83, 19, 137, 189, 48, 103, 112, 190, 10, 42, 100, 62, 67, 194, 25, 190, 249, 92, 98, 62, 182, 91, 170, 190, 180, 60, 139, 62, 4, 146, 28, 190, 126, 141, 0, 62, 177, 199, 117, 190, 94, 67, 23, 190, 195, 171, 40, 62, 207, 83, 34, 62, 151, 231, 13, 190, 137, 12, 117, 189, 19, 135, 251, 189, 224, 189, 162, 61, 255, 16, 1, 62, 244, 56, 28, 61, 94, 8, 108, 61, 9, 40, 191, 59, 55, 8, 56, 62, 23, 121, 155, 60, 74, 177, 157, 190, 209, 124, 229, 188, 173, 216, 110, 188, 38, 142, 156, 61, 140, 167, 4, 190, 180, 58, 74, 189, 206, 186, 3, 62, 138, 17, 42, 190, 0, 28, 158, 190, 189, 227, 78, 62, 210, 26, 247, 61, 195, 192, 250, 189, 7, 17, 141, 61, 255, 222, 228, 187, 113, 28, 180, 190, 222, 45, 251, 189, 230, 159, 156, 190, 146, 214, 87, 62, 174, 49, 14, 190, 209, 43, 24, 62, 17, 247, 80, 62, 93, 202, 179, 59, 111, 156, 65, 62, 120, 192, 37, 190, 154, 8, 62, 190, 100, 171, 133, 61, 30, 221, 134, 190, 195, 209, 69, 190, 59, 30, 24, 60, 219, 177, 192, 189, 215, 179, 179, 61, 94, 18, 161, 188, 133, 188, 218, 189, 15, 141, 23, 62, 204, 127, 249, 187, 208, 226, 52, 62, 235, 134, 249, 190, 52, 170, 217, 57, 98, 110, 163, 189, 190, 42, 9, 62, 44, 31, 3, 191, 243, 96, 181, 187, 238, 114, 56, 62, 124, 103, 172, 189, 47, 125, 210, 190, 255, 129, 78, 190, 110, 224, 244, 189, 152, 157, 95, 190, 177, 119, 252, 188, 164, 49, 54, 62, 245, 116, 196, 189, 222, 212, 158, 61, 174, 99, 38, 62, 79, 158, 205, 189, 242, 38, 43, 61, 194, 21, 137, 61, 194, 210, 58, 190, 101, 156, 65, 189, 69, 235, 126, 61, 145, 155, 58, 187, 145, 98, 26, 62, 14, 128, 41, 62, 151, 136, 229, 189, 90, 159, 15, 61, 134, 0, 87, 190, 110, 231, 110, 61, 173, 117, 9, 62, 187, 177, 178, 189, 37, 104, 184, 60, 253, 190, 250, 189, 20, 248, 139, 189, 116, 137, 158, 61, 255, 74, 116, 189, 72, 33, 255, 61, 19, 108, 234, 61, 35, 117, 47, 61, 168, 53, 253, 189, 168, 136, 126, 62, 228, 125, 178, 189, 179, 83, 61, 60, 35, 55, 234, 189, 91, 93, 199, 189, 127, 208, 87, 190, 120, 167, 51, 61, 216, 226, 162, 61, 120, 201, 5, 62, 50, 84, 47, 188, 197, 46, 73, 190, 244, 188, 169, 189, 6, 142, 202, 61, 16, 198, 136, 189, 251, 136, 151, 60, 251, 63, 40, 190, 52, 170, 89, 189, 91, 207, 23, 189, 244, 102, 44, 62, 171, 156, 111, 60, 156, 233, 109, 61, 96, 134, 126, 189, 46, 24, 91, 62, 63, 244, 215, 188, 129, 253, 69, 62, 203, 120, 129, 61, 58, 141, 122, 62, 184, 188, 250, 189, 19, 151, 245, 61, 228, 98, 90, 62, 255, 12, 238, 61, 164, 136, 124, 189, 105, 192, 34, 61, 86, 26, 134, 60, 119, 229, 8, 62, 139, 189, 246, 188, 250, 31, 128, 189, 234, 164, 225, 190, 225, 109, 51, 188, 51, 102, 154, 190, 213, 244, 172, 59, 10, 145, 127, 62, 103, 133, 212, 190, 176, 59, 93, 61, 182, 110, 200, 190, 240, 195, 73, 62, 73, 176, 18, 62, 56, 203, 74, 60, 196, 65, 149, 61, 1, 136, 37, 61, 229, 192, 178, 61, 8, 209, 164, 62, 86, 128, 43, 61, 98, 53, 83, 62, 46, 141, 133, 62, 118, 8, 64, 62, 205, 130, 1, 189, 17, 142, 151, 187, 186, 30, 163, 59, 129, 183, 207, 61, 164, 242, 63, 62, 173, 215, 129, 61, 186, 177, 245, 61, 78, 208, 18, 190, 110, 29, 31, 62, 173, 142, 81, 61, 23, 160, 222, 60, 90, 31, 134, 191, 222, 140, 129, 190, 167, 86, 58, 190, 115, 115, 87, 190, 141, 216, 127, 62, 28, 7, 133, 62, 203, 42, 152, 62, 189, 214, 161, 190, 18, 200, 70, 188, 24, 134, 179, 62, 101, 139, 129, 189, 70, 164, 31, 61, 143, 85, 28, 190, 33, 89, 94, 62, 74, 212, 218, 61, 236, 197, 166, 61, 106, 116, 240, 190, 197, 128, 66, 62, 131, 71, 217, 190, 224, 50, 231, 61, 34, 219, 127, 191, 224, 67, 251, 61, 214, 211, 181, 61, 179, 130, 3, 62, 111, 120, 237, 190, 140, 5, 51, 62, 190, 84, 4, 62, 186, 252, 41, 189, 252, 97, 57, 190, 171, 214, 110, 62, 38, 152, 160, 190, 28, 189, 108, 62, 244, 111, 131, 62, 148, 214, 171, 61, 202, 50, 135, 188, 243, 183, 89, 62, 75, 89, 180, 190, 219, 79, 244, 189, 129, 51, 101, 62, 179, 61, 157, 190, 241, 237, 71, 189, 251, 204, 31, 191, 246, 190, 90, 190, 20, 9, 193, 61, 76, 35, 77, 62, 30, 54, 92, 60, 7, 160, 150, 62, 41, 251, 133, 62, 38, 80, 110, 61, 88, 36, 184, 189, 135, 211, 84, 62, 161, 214, 164, 62, 208, 175, 51, 188, 172, 49, 74, 189, 81, 185, 160, 190, 172, 128, 166, 187, 165, 65, 119, 62, 251, 248, 99, 188, 88, 179, 146, 62, 91, 236, 129, 61, 166, 139, 30, 189, 158, 152, 203, 190, 235, 33, 71, 62, 27, 231, 164, 60, 154, 18, 85, 62, 66, 199, 124, 188, 126, 181, 84, 62, 71, 1, 193, 61, 56, 101, 43, 62, 254, 245, 132, 62, 45, 176, 51, 62, 65, 23, 240, 188, 16, 156, 13, 190, 239, 114, 200, 189, 64, 110, 197, 189, 50, 20, 68, 62, 89, 238, 20, 190, 85, 24, 44, 62, 3, 73, 84, 62, 12, 69, 207, 61, 228, 86, 117, 62, 224, 58, 102, 189, 70, 232, 154, 61, 10, 48, 185, 61, 16, 253, 48, 61, 159, 128, 124, 189, 138, 162, 43, 62, 120, 247, 162, 61, 175, 153, 52, 62, 32, 164, 68, 190, 246, 26, 130, 61, 187, 13, 170, 190, 33, 44, 88, 190, 72, 171, 43, 189, 245, 105, 155, 61, 225, 41, 136, 190, 177, 229, 30, 190, 100, 253, 74, 188, 253, 72, 31, 62, 231, 155, 41, 62, 219, 142, 246, 61, 79, 40, 40, 61, 195, 36, 194, 189, 51, 183, 73, 61, 128, 111, 78, 61, 156, 94, 168, 189, 141, 218, 145, 189, 143, 140, 228, 189, 186, 235, 77, 189, 242, 38, 124, 60, 83, 104, 221, 188, 46, 86, 163, 188, 235, 102, 207, 62, 129, 250, 38, 62, 236, 177, 45, 188, 62, 56, 27, 62, 111, 147, 239, 60, 234, 229, 80, 62, 55, 4, 82, 61, 128, 23, 224, 188, 86, 147, 12, 62, 170, 104, 161, 61, 230, 54, 151, 189, 51, 216, 24, 190, 96, 70, 113, 190, 8, 165, 210, 61, 147, 35, 22, 61, 33, 19, 168, 189, 168, 58, 243, 190, 5, 1, 34, 190, 200, 34, 103, 190, 138, 95, 222, 189, 149, 186, 139, 62, 244, 130, 141, 61, 247, 193, 247, 188, 39, 11, 169, 190, 187, 156, 2, 189, 227, 37, 181, 62, 244, 255, 145, 189, 103, 124, 187, 189, 155, 31, 68, 190, 138, 57, 74, 189, 62, 117, 155, 189, 169, 76, 61, 61, 15, 168, 216, 190, 208, 90, 5, 188, 60, 201, 86, 190, 107, 122, 79, 189, 62, 28, 224, 190, 163, 209, 175, 189, 25, 193, 116, 62, 157, 227, 135, 62, 125, 180, 198, 190, 23, 212, 161, 189, 58, 241, 78, 62, 115, 36, 114, 62, 126, 201, 86, 189, 171, 95, 196, 62, 179, 92, 155, 190, 219, 79, 6, 62, 4, 26, 37, 189, 39, 53, 22, 190, 117, 192, 247, 188, 67, 251, 170, 190, 247, 180, 173, 189, 122, 105, 239, 61, 112, 208, 130, 188, 125, 247, 169, 189, 248, 165, 140, 189, 173, 89, 143, 190, 148, 139, 19, 191, 89, 46, 232, 61, 63, 191, 124, 189, 142, 197, 95, 62, 15, 180, 16, 191, 9, 217, 240, 61, 165, 25, 28, 62, 76, 239, 129, 62, 120, 165, 170, 189, 18, 62, 113, 190, 132, 197, 4, 62, 166, 96, 134, 61, 161, 18, 189, 190, 32, 134, 154, 62, 153, 72, 76, 62, 63, 13, 37, 61, 25, 146, 162, 60, 111, 75, 3, 61, 92, 101, 44, 61, 138, 134, 45, 61, 38, 234, 68, 62, 217, 181, 51, 190, 68, 2, 7, 190, 111, 82, 109, 62, 165, 16, 188, 61, 27, 158, 147, 61, 181, 52, 66, 62, 111, 176, 66, 62, 97, 190, 141, 61, 254, 85, 61, 190, 61, 222, 137, 188, 60, 2, 197, 61, 93, 183, 113, 189, 84, 69, 226, 61, 132, 31, 246, 61, 171, 31, 228, 61, 34, 174, 17, 62, 209, 224, 36, 190, 28, 87, 48, 190, 92, 35, 19, 190, 59, 216, 35, 62, 102, 178, 171, 189, 65, 121, 130, 190, 208, 100, 55, 62, 218, 224, 15, 61, 112, 151, 234, 60, 19, 139, 78, 190, 148, 22, 23, 61, 77, 242, 226, 189, 166, 195, 116, 62, 237, 224, 173, 60, 9, 43, 76, 62, 69, 233, 88, 189, 115, 142, 132, 62, 100, 101, 255, 60, 138, 82, 160, 190, 211, 237, 189, 190, 43, 182, 186, 190, 40, 68, 202, 60, 215, 123, 128, 61, 125, 32, 148, 62, 166, 252, 250, 189, 127, 108, 148, 60, 132, 100, 58, 190, 216, 31, 48, 191, 232, 36, 151, 62, 119, 130, 205, 189, 11, 150, 6, 62, 62, 107, 249, 190, 239, 77, 26, 62, 140, 70, 158, 190, 175, 144, 5, 61, 65, 84, 221, 189, 108, 33, 152, 190, 5, 253, 247, 61, 24, 81, 37, 188, 235, 159, 27, 191, 76, 9, 188, 62, 98, 194, 168, 61, 174, 146, 1, 191, 250, 134, 15, 61, 150, 114, 160, 190, 252, 177, 247, 189, 12, 36, 141, 190, 119, 89, 136, 61, 178, 150, 7, 190, 222, 8, 30, 191, 31, 13, 61, 190, 214, 183, 158, 189, 226, 230, 135, 190, 229, 81, 32, 62, 160, 222, 219, 61, 220, 143, 1, 62, 43, 21, 131, 190, 78, 248, 156, 190, 168, 82, 106, 62, 63, 170, 237, 189, 101, 216, 139, 189, 1, 109, 93, 61, 160, 128, 2, 62, 85, 212, 31, 62, 17, 203, 63, 62, 232, 136, 58, 190, 22, 194, 197, 61, 81, 103, 109, 190, 23, 83, 247, 61, 142, 154, 71, 191, 206, 47, 44, 61, 111, 59, 40, 62, 95, 44, 140, 61, 18, 10, 22, 191, 184, 75, 150, 189, 87, 242, 5, 59, 3, 207, 109, 62, 196, 121, 43, 190, 182, 247, 139, 62, 178, 14, 26, 190, 186, 237, 199, 61, 49, 45, 201, 61, 191, 18, 87, 190, 190, 75, 115, 62, 64, 59, 123, 190, 66, 245, 224, 61, 217, 191, 132, 61, 46, 186, 28, 61, 54, 217, 39, 62, 189, 225, 147, 189, 140, 19, 239, 189, 37, 179, 77, 190, 82, 115, 15, 62, 172, 76, 232, 61, 215, 101, 156, 189, 75, 204, 167, 189, 231, 97, 89, 61, 13, 249, 248, 62, 85, 238, 10, 61, 18, 93, 33, 190, 147, 102, 7, 189, 147, 210, 10, 62, 49, 114, 11, 190, 114, 45, 128, 190, 243, 124, 98, 60, 156, 37, 181, 62, 172, 194, 47, 188, 213, 224, 217, 189, 236, 148, 149, 190, 249, 190, 128, 190, 82, 69, 190, 189, 33, 23, 44, 62, 44, 116, 110, 189, 100, 78, 51, 190, 68, 45, 36, 62, 78, 183, 6, 190, 79, 6, 203, 61, 70, 43, 133, 61, 244, 243, 8, 62, 25, 166, 250, 188, 255, 53, 171, 190, 249, 34, 34, 190, 179, 51, 65, 62, 3, 185, 228, 61, 78, 246, 214, 61, 188, 131, 126, 62, 124, 137, 205, 61, 190, 188, 55, 60, 182, 228, 163, 189, 175, 122, 8, 190, 98, 47, 9, 190, 240, 82, 46, 62, 195, 154, 3, 61, 83, 161, 80, 190, 142, 121, 171, 61, 90, 194, 113, 62, 34, 1, 186, 188, 50, 34, 232, 189, 203, 5, 182, 60, 191, 187, 121, 189, 252, 60, 130, 62, 46, 33, 53, 190, 246, 59, 106, 60, 68, 247, 0, 190, 56, 27, 73, 62, 177, 114, 53, 191, 125, 30, 164, 190, 193, 226, 199, 189, 215, 140, 114, 189, 189, 209, 143, 61, 121, 239, 179, 61, 191, 46, 206, 186, 73, 38, 70, 190, 97, 61, 31, 60, 154, 187, 11, 189, 245, 17, 187, 61, 135, 110, 94, 61, 85, 184, 37, 190, 224, 164, 172, 61, 46, 202, 81, 62, 45, 158, 209, 60, 42, 163, 150, 190, 215, 22, 3, 62, 118, 166, 217, 188, 180, 142, 42, 189, 112, 67, 27, 191, 8, 8, 24, 188, 206, 199, 76, 62, 237, 88, 60, 62, 66, 197, 155, 190, 124, 38, 194, 190, 105, 159, 10, 62, 62, 119, 83, 62, 212, 166, 155, 61, 190, 23, 199, 62, 183, 141, 101, 190, 173, 186, 224, 61, 100, 205, 236, 61, 245, 208, 49, 190, 185, 253, 5, 190, 136, 21, 216, 189, 219, 179, 234, 61, 92, 212, 160, 60, 25, 96, 170, 189, 227, 26, 140, 60, 134, 90, 187, 59, 47, 175, 147, 189, 183, 85, 50, 190, 238, 66, 30, 61, 84, 52, 48, 190, 87, 154, 31, 190, 26, 8, 41, 188, 69, 245, 255, 60, 128, 211, 77, 61, 249, 5, 26, 190, 134, 15, 47, 60, 36, 171, 167, 60, 161, 212, 154, 189, 83, 125, 33, 62, 6, 222, 50, 188, 253, 33, 15, 62, 95, 131, 149, 60, 16, 22, 212, 61, 139, 63, 43, 189, 192, 100, 20, 190, 81, 48, 225, 188, 213, 124, 176, 61, 129, 149, 19, 189, 9, 28, 10, 190, 33, 149, 186, 188, 178, 167, 220, 60, 54, 190, 247, 189, 86, 222, 209, 187, 77, 31, 1, 190, 247, 203, 62, 62, 164, 202, 213, 61, 137, 31, 55, 189, 185, 112, 219, 189, 152, 187, 132, 61, 16, 87, 179, 189, 247, 233, 209, 189, 230, 214, 17, 62, 239, 131, 214, 61, 99, 203, 40, 189, 221, 150, 27, 190, 141, 186, 56, 188, 211, 49, 77, 190, 169, 79, 8, 190, 140, 115, 165, 60, 48, 187, 130, 190, 123, 52, 7, 189, 142, 122, 131, 62, 202, 162, 72, 190, 192, 186, 233, 189, 219, 4, 40, 62, 141, 200, 236, 59, 32, 200, 238, 189, 196, 39, 49, 190, 200, 18, 153, 62, 134, 237, 139, 190, 255, 179, 175, 61, 66, 172, 40, 190, 79, 69, 12, 62, 143, 157, 146, 189, 241, 176, 53, 190, 46, 193, 111, 61, 151, 134, 161, 189, 215, 53, 163, 189, 5, 114, 32, 62, 249, 126, 234, 60, 228, 125, 102, 190, 47, 135, 150, 188, 105, 70, 7, 190, 61, 107, 94, 189, 219, 44, 160, 188, 232, 101, 1, 62, 123, 204, 161, 189, 222, 137, 124, 189, 91, 164, 8, 62, 17, 96, 54, 190, 28, 2, 43, 62, 131, 102, 24, 189, 229, 166, 16, 60, 207, 134, 35, 61, 120, 131, 9, 190, 125, 14, 10, 188, 218, 168, 28, 62, 134, 7, 222, 189, 33, 23, 19, 190, 2, 60, 204, 61, 221, 164, 209, 188, 249, 70, 115, 58, 92, 76, 32, 62, 85, 154, 129, 59, 115, 153, 213, 59, 228, 46, 131, 189, 139, 34, 157, 61, 143, 214, 8, 189, 61, 225, 4, 189, 228, 227, 140, 189, 143, 58, 191, 189, 208, 38, 16, 190, 33, 93, 80, 189, 142, 205, 23, 62, 209, 138, 175, 189, 196, 116, 205, 60, 57, 129, 160, 61, 250, 175, 63, 189, 8, 170, 89, 189, 250, 119, 17, 190, 187, 118, 90, 61, 88, 160, 213, 58, 198, 158, 23, 62, 12, 126, 60, 61, 48, 195, 14, 190, 0, 207, 64, 190, 183, 53, 249, 188, 108, 192, 28, 189, 83, 234, 174, 189, 213, 49, 34, 189, 77, 239, 170, 58, 195, 124, 152, 187, 97, 236, 63, 60, 50, 98, 45, 190, 78, 27, 191, 58};
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
                alignas(float) const unsigned char memory[] = {201, 126, 117, 187, 254, 221, 87, 62, 178, 232, 48, 190, 35, 158, 206, 60, 194, 13, 125, 62, 80, 76, 44, 190, 91, 151, 210, 189, 250, 221, 149, 188, 154, 224, 144, 62, 91, 11, 77, 62, 73, 10, 2, 190, 32, 87, 36, 62, 176, 217, 37, 62, 97, 239, 48, 62, 192, 206, 249, 188, 227, 42, 232, 188, 237, 180, 228, 59, 140, 66, 216, 189, 107, 11, 102, 188, 231, 103, 139, 62, 220, 70, 214, 61, 126, 62, 147, 61, 67, 170, 193, 60, 244, 183, 13, 62, 90, 58, 154, 61, 160, 110, 104, 62, 72, 80, 94, 61, 91, 192, 87, 62, 115, 52, 45, 189, 228, 198, 70, 62, 59, 176, 46, 189, 192, 159, 151, 189};
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
                alignas(float) const unsigned char memory[] = {137, 37, 147, 190, 142, 122, 47, 190, 10, 51, 142, 62, 140, 100, 31, 62, 28, 151, 183, 61, 12, 243, 209, 61, 252, 48, 183, 62, 107, 7, 205, 190, 28, 141, 229, 189, 231, 170, 33, 62, 196, 123, 147, 190, 178, 173, 3, 190, 121, 229, 239, 190, 209, 242, 49, 188, 200, 153, 160, 189, 138, 233, 57, 190, 178, 185, 34, 191, 153, 0, 53, 190, 223, 87, 38, 62, 12, 156, 224, 61, 203, 78, 178, 190, 159, 187, 161, 62, 13, 24, 30, 190, 181, 2, 78, 63, 191, 121, 244, 190, 196, 24, 145, 62, 182, 107, 152, 190, 91, 84, 62, 190, 66, 11, 9, 62, 208, 133, 192, 189, 216, 75, 224, 60, 99, 115, 49, 189, 25, 236, 144, 62, 26, 52, 218, 187, 172, 247, 118, 62, 79, 81, 217, 61, 92, 64, 128, 190, 169, 239, 210, 61, 198, 105, 179, 61, 176, 215, 102, 189, 0, 225, 190, 190, 187, 80, 129, 190, 221, 86, 177, 189, 244, 9, 88, 189, 226, 7, 32, 190, 7, 60, 164, 189, 75, 15, 146, 189, 68, 119, 2, 190, 51, 17, 7, 62, 33, 96, 78, 61, 53, 117, 100, 190, 17, 165, 82, 190, 91, 112, 182, 62, 22, 82, 66, 62, 0, 6, 240, 60, 220, 218, 140, 189, 12, 44, 22, 61, 125, 184, 29, 61, 221, 231, 187, 61, 83, 237, 132, 188, 160, 228, 92, 189, 165, 70, 67, 190, 71, 255, 80, 62, 55, 71, 192, 60};
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
                alignas(float) const unsigned char memory[] = {48, 226, 12, 62, 217, 35, 84, 58};
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
    alignas(float) const unsigned char memory[] = {24, 199, 52, 191, 117, 67, 133, 190, 198, 192, 178, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {160, 45, 128, 63, 159, 203, 73, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0003/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
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
                alignas(float) const unsigned char memory[] = {203, 205, 110, 190, 175, 3, 247, 62, 186, 135, 237, 190, 123, 96, 20, 190, 194, 77, 15, 63, 101, 249, 65, 191, 217, 26, 182, 190, 121, 210, 41, 191, 83, 60, 11, 63, 235, 220, 125, 189, 214, 239, 171, 190, 183, 148, 117, 190, 106, 100, 14, 191, 76, 38, 163, 190, 140, 217, 211, 62, 204, 89, 170, 62, 69, 235, 198, 62, 20, 166, 4, 191, 152, 145, 119, 188, 233, 224, 16, 63, 64, 62, 27, 191, 162, 126, 176, 61, 85, 130, 170, 190, 244, 94, 25, 191, 175, 241, 15, 63, 127, 167, 42, 63, 147, 61, 11, 63, 53, 86, 154, 62, 165, 158, 3, 62, 172, 57, 129, 190, 132, 184, 239, 190, 243, 130, 209, 61, 173, 72, 74, 62, 24, 254, 172, 190, 97, 199, 155, 190, 88, 105, 254, 190, 167, 225, 71, 188, 36, 78, 22, 191, 251, 176, 241, 190, 27, 91, 237, 189, 77, 219, 225, 60, 81, 168, 33, 63, 186, 226, 36, 62, 26, 229, 251, 190, 77, 240, 144, 62, 224, 236, 151, 190, 153, 19, 247, 62, 204, 112, 39, 190, 70, 86, 138, 62, 36, 37, 5, 191, 143, 254, 32, 63, 61, 227, 199, 190, 151, 12, 146, 191, 66, 47, 32, 190, 12, 0, 220, 188, 100, 140, 213, 190, 132, 205, 115, 62, 161, 250, 72, 190, 62, 225, 70, 63, 2, 191, 107, 191, 58, 179, 57, 190, 93, 230, 1, 63, 232, 237, 145, 62, 242, 49, 159, 61, 255, 52, 20, 63, 192, 127, 252, 190, 30, 102, 83, 190, 93, 117, 248, 62, 92, 138, 130, 62, 191, 151, 138, 62, 97, 161, 31, 63, 238, 174, 5, 191, 147, 196, 50, 190, 99, 205, 212, 190, 129, 207, 153, 62, 22, 254, 49, 62, 105, 251, 70, 191, 33, 212, 121, 62, 146, 58, 190, 190, 107, 223, 135, 62, 147, 97, 46, 191, 128, 40, 26, 63, 247, 153, 59, 191, 234, 237, 21, 190, 175, 109, 96, 190, 56, 160, 37, 191, 193, 110, 236, 187, 170, 13, 175, 62, 38, 48, 54, 191, 35, 60, 104, 62, 222, 233, 164, 189, 20, 1, 247, 190, 133, 29, 124, 61, 99, 71, 105, 62, 0, 131, 143, 190, 157, 81, 16, 191};
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
                alignas(float) const unsigned char memory[] = {32, 128, 183, 190, 191, 35, 211, 189, 89, 230, 188, 60, 199, 161, 225, 62, 101, 214, 96, 190, 254, 135, 114, 62, 209, 27, 39, 188, 107, 225, 85, 190, 179, 57, 234, 190, 244, 170, 120, 62, 111, 250, 7, 190, 123, 244, 94, 190, 65, 129, 205, 190, 223, 6, 9, 63, 206, 98, 54, 62, 189, 103, 94, 63, 78, 17, 235, 61, 44, 156, 162, 62, 189, 119, 167, 61, 234, 206, 19, 190, 138, 212, 240, 62, 233, 114, 135, 61, 153, 46, 32, 63, 22, 201, 134, 62, 31, 149, 144, 189, 122, 189, 6, 62, 42, 5, 153, 190, 100, 5, 122, 61, 105, 224, 18, 190, 195, 134, 172, 62, 77, 107, 11, 63, 60, 140, 212, 190};
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
                alignas(float) const unsigned char memory[] = {233, 236, 148, 189, 31, 225, 200, 189, 115, 223, 66, 189, 34, 190, 190, 189, 244, 196, 40, 61, 34, 208, 254, 189, 122, 187, 203, 189, 246, 110, 24, 62, 4, 215, 219, 189, 89, 149, 32, 61, 156, 214, 149, 59, 43, 112, 155, 61, 204, 111, 32, 190, 222, 34, 118, 189, 158, 22, 226, 189, 220, 205, 206, 189, 127, 63, 240, 189, 182, 23, 9, 62, 171, 54, 41, 61, 189, 151, 25, 60, 123, 87, 183, 59, 251, 206, 144, 188, 3, 108, 69, 189, 76, 66, 175, 189, 44, 253, 125, 189, 151, 176, 131, 189, 132, 239, 79, 189, 210, 117, 173, 189, 254, 47, 148, 189, 241, 202, 38, 190, 147, 125, 80, 61, 195, 178, 85, 189, 223, 104, 1, 62, 240, 8, 150, 62, 120, 235, 136, 190, 226, 226, 161, 61, 155, 56, 170, 187, 239, 147, 132, 62, 185, 172, 157, 62, 175, 226, 115, 189, 148, 136, 81, 61, 109, 168, 181, 188, 212, 158, 17, 189, 209, 232, 19, 62, 61, 166, 86, 62, 148, 250, 244, 189, 180, 32, 48, 188, 198, 32, 197, 61, 42, 101, 247, 61, 44, 25, 68, 190, 246, 199, 11, 190, 109, 19, 188, 62, 7, 97, 134, 62, 10, 141, 200, 61, 106, 31, 42, 61, 22, 230, 48, 61, 28, 254, 36, 190, 191, 147, 181, 190, 216, 11, 66, 62, 91, 165, 191, 190, 186, 138, 72, 62, 209, 107, 221, 190, 152, 234, 192, 190, 148, 249, 70, 187, 147, 5, 54, 189, 233, 109, 65, 62, 77, 106, 23, 62, 113, 27, 159, 189, 3, 32, 61, 62, 83, 175, 121, 62, 216, 252, 153, 61, 9, 185, 194, 187, 182, 127, 77, 61, 74, 201, 106, 62, 4, 87, 116, 188, 140, 210, 58, 189, 3, 132, 121, 60, 215, 209, 115, 61, 202, 80, 232, 61, 20, 48, 99, 190, 44, 49, 123, 62, 56, 51, 177, 61, 104, 1, 20, 62, 31, 58, 211, 188, 25, 137, 163, 189, 58, 142, 29, 62, 255, 154, 233, 61, 251, 29, 193, 61, 52, 186, 182, 62, 29, 172, 77, 60, 180, 72, 154, 190, 27, 85, 11, 190, 156, 224, 48, 62, 54, 59, 139, 62, 222, 236, 7, 189, 102, 228, 247, 189, 194, 121, 58, 189, 14, 146, 186, 191, 203, 241, 39, 62, 202, 149, 10, 189, 66, 88, 151, 62, 3, 111, 43, 62, 253, 177, 105, 191, 82, 71, 159, 60, 38, 57, 23, 191, 23, 66, 111, 62, 226, 95, 155, 61, 187, 31, 210, 190, 95, 16, 45, 190, 182, 237, 68, 62, 95, 6, 17, 190, 83, 204, 172, 62, 190, 0, 129, 190, 48, 194, 157, 189, 112, 247, 191, 62, 28, 233, 135, 191, 235, 191, 34, 62, 165, 25, 97, 191, 66, 210, 4, 59, 1, 204, 166, 191, 212, 23, 65, 62, 81, 203, 119, 62, 81, 133, 121, 191, 164, 124, 174, 62, 234, 192, 151, 190, 231, 59, 117, 62, 96, 220, 148, 62, 207, 161, 253, 189, 131, 55, 63, 62, 94, 194, 25, 190, 96, 186, 173, 61, 198, 29, 43, 190, 200, 169, 15, 62, 37, 57, 99, 62, 171, 117, 132, 189, 204, 61, 101, 60, 84, 181, 132, 190, 63, 134, 131, 62, 252, 197, 39, 62, 75, 12, 5, 190, 214, 99, 130, 188, 104, 109, 174, 189, 18, 129, 38, 62, 121, 204, 146, 61, 96, 219, 212, 61, 89, 178, 18, 188, 240, 164, 104, 62, 243, 155, 158, 190, 6, 238, 24, 189, 152, 110, 198, 190, 142, 166, 85, 189, 104, 82, 132, 190, 176, 180, 117, 61, 57, 142, 124, 62, 223, 147, 23, 190, 214, 92, 190, 61, 19, 226, 68, 190, 224, 32, 136, 62, 22, 131, 212, 61, 151, 217, 85, 61, 157, 191, 209, 61, 14, 254, 255, 189, 175, 111, 211, 189, 178, 220, 232, 60, 161, 212, 193, 189, 64, 123, 150, 189, 114, 160, 0, 190, 117, 168, 1, 61, 81, 152, 26, 190, 228, 4, 121, 184, 81, 134, 59, 189, 144, 155, 16, 190, 222, 199, 111, 59, 240, 0, 94, 189, 157, 226, 26, 189, 194, 173, 230, 61, 84, 140, 53, 190, 163, 249, 25, 190, 153, 174, 170, 189, 235, 155, 29, 61, 42, 13, 208, 61, 116, 106, 244, 188, 76, 194, 88, 190, 11, 186, 104, 61, 109, 123, 40, 189, 146, 36, 6, 190, 252, 157, 5, 190, 94, 37, 38, 189, 233, 142, 40, 190, 198, 179, 193, 189, 15, 70, 70, 61, 41, 43, 241, 189, 87, 64, 46, 62, 156, 152, 88, 62, 0, 230, 37, 190, 187, 14, 20, 62, 31, 28, 72, 61, 134, 3, 37, 61, 103, 175, 62, 62, 5, 77, 59, 62, 56, 117, 122, 190, 216, 132, 3, 62, 11, 188, 139, 190, 222, 50, 151, 60, 51, 196, 145, 61, 148, 20, 122, 190, 62, 183, 149, 59, 74, 13, 188, 61, 253, 186, 1, 190, 170, 54, 159, 189, 69, 148, 137, 61, 224, 43, 7, 61, 129, 4, 130, 60, 236, 216, 171, 61, 113, 23, 23, 61, 135, 145, 91, 62, 101, 146, 34, 61, 83, 120, 40, 62, 185, 15, 147, 61, 237, 218, 239, 189, 173, 175, 5, 190, 207, 198, 214, 189, 94, 199, 97, 189, 143, 197, 188, 61, 59, 131, 171, 189, 223, 189, 175, 62, 238, 193, 106, 189, 186, 36, 203, 189, 205, 222, 230, 61, 122, 34, 93, 60, 161, 122, 105, 62, 92, 36, 12, 190, 212, 163, 212, 61, 131, 103, 175, 61, 111, 150, 179, 189, 7, 238, 13, 190, 203, 93, 179, 190, 194, 232, 32, 62, 234, 113, 66, 62, 48, 172, 176, 62, 17, 170, 31, 62, 2, 18, 218, 60, 244, 137, 240, 189, 116, 82, 162, 62, 157, 207, 172, 61, 0, 40, 153, 62, 224, 173, 38, 62, 205, 178, 224, 62, 9, 128, 223, 190, 100, 67, 185, 190, 218, 35, 158, 62, 240, 242, 106, 190, 240, 154, 237, 60, 245, 176, 190, 187, 235, 127, 81, 62, 37, 160, 86, 190, 226, 34, 43, 189, 248, 45, 36, 191, 213, 51, 156, 62, 75, 95, 69, 61, 43, 145, 217, 62, 148, 67, 113, 188, 75, 97, 20, 191, 2, 173, 165, 189, 85, 16, 234, 190, 110, 4, 226, 61, 112, 79, 146, 62, 210, 163, 65, 190, 237, 138, 3, 62, 252, 227, 2, 61, 84, 31, 237, 189, 194, 51, 93, 62, 14, 232, 221, 190, 59, 163, 108, 190, 157, 33, 15, 62, 20, 110, 152, 190, 125, 254, 2, 60, 124, 153, 246, 190, 97, 69, 123, 189, 31, 71, 135, 190, 42, 1, 132, 62, 20, 210, 28, 62, 64, 153, 242, 190, 27, 2, 21, 61, 90, 35, 159, 190, 138, 35, 86, 61, 0, 250, 116, 62, 200, 41, 6, 62, 241, 213, 203, 190, 127, 159, 145, 61, 56, 83, 254, 190, 221, 59, 82, 61, 190, 15, 211, 190, 65, 151, 150, 61, 38, 168, 72, 62, 247, 153, 145, 189, 151, 48, 14, 63, 250, 109, 51, 190, 91, 56, 208, 189, 247, 184, 27, 61, 96, 100, 112, 61, 50, 197, 201, 189, 205, 78, 34, 189, 130, 84, 74, 61, 33, 251, 71, 62, 6, 201, 37, 62, 200, 35, 151, 190, 91, 191, 134, 59, 107, 137, 113, 61, 81, 13, 192, 62, 11, 238, 192, 61, 86, 4, 197, 62, 133, 142, 67, 191, 183, 7, 14, 191, 171, 20, 38, 61, 158, 35, 205, 185, 128, 119, 150, 61, 142, 243, 139, 190, 72, 82, 143, 62, 155, 15, 85, 61, 249, 191, 210, 61, 48, 52, 103, 190, 55, 106, 67, 62, 255, 52, 201, 188, 55, 1, 151, 62, 11, 47, 4, 190, 23, 202, 203, 61, 9, 240, 25, 190, 113, 132, 96, 62, 113, 191, 153, 61, 219, 176, 65, 62, 22, 95, 184, 61, 38, 145, 42, 62, 34, 169, 10, 189, 64, 78, 68, 62, 140, 62, 46, 190, 45, 6, 184, 59, 198, 151, 229, 61, 45, 234, 133, 62, 141, 153, 56, 61, 25, 196, 27, 190, 147, 158, 58, 190, 215, 237, 164, 61, 14, 226, 112, 190, 137, 91, 134, 62, 178, 98, 143, 62, 13, 22, 244, 189, 28, 160, 98, 190, 96, 243, 27, 62, 117, 135, 12, 60, 73, 122, 180, 188, 4, 36, 67, 62, 149, 67, 171, 59, 165, 145, 142, 190, 36, 158, 252, 61, 59, 116, 183, 188, 153, 226, 10, 62, 210, 3, 10, 60, 29, 100, 58, 190, 114, 187, 174, 60, 186, 66, 37, 61, 236, 131, 11, 62, 244, 237, 157, 61, 57, 2, 16, 60, 95, 214, 231, 60, 151, 29, 74, 62, 179, 59, 214, 190, 117, 227, 154, 61, 75, 186, 249, 190, 224, 116, 251, 60, 3, 97, 242, 189, 76, 14, 78, 189, 91, 52, 142, 188, 116, 20, 182, 190, 135, 149, 63, 189, 190, 18, 148, 189, 171, 118, 52, 62, 105, 135, 132, 189, 83, 178, 185, 189, 53, 242, 132, 189, 74, 202, 55, 190, 2, 29, 166, 61, 134, 165, 158, 189, 61, 249, 39, 62, 146, 60, 212, 189, 142, 29, 86, 188, 173, 207, 158, 61, 142, 207, 215, 61, 227, 139, 191, 189, 28, 229, 144, 61, 89, 68, 21, 190, 204, 233, 99, 61, 231, 221, 72, 189, 218, 152, 105, 61, 79, 46, 226, 189, 40, 183, 25, 62, 225, 78, 209, 189, 55, 145, 117, 190, 37, 146, 93, 62, 179, 180, 193, 61, 100, 185, 145, 189, 80, 65, 50, 189, 43, 36, 57, 61, 124, 26, 208, 61, 61, 210, 22, 190, 137, 88, 239, 61, 26, 17, 138, 190, 35, 38, 74, 61, 201, 206, 255, 61, 215, 113, 153, 58, 172, 50, 37, 189, 118, 68, 152, 189, 202, 178, 102, 190, 3, 87, 33, 62, 178, 132, 151, 189, 111, 222, 54, 61, 155, 87, 6, 62, 184, 46, 8, 190, 169, 146, 11, 189, 159, 134, 123, 61, 37, 3, 189, 61, 142, 206, 238, 189, 181, 97, 164, 188, 42, 109, 21, 190, 95, 120, 71, 61, 77, 115, 252, 189, 129, 178, 45, 190, 101, 94, 164, 189, 137, 15, 190, 189, 10, 215, 217, 61, 6, 193, 69, 190, 134, 155, 19, 190, 137, 241, 138, 189, 13, 196, 151, 189, 185, 168, 105, 61, 173, 217, 9, 189, 154, 34, 195, 60, 252, 219, 239, 189, 11, 201, 12, 190, 203, 131, 25, 62, 203, 183, 225, 61, 51, 49, 165, 61, 27, 25, 69, 188, 77, 110, 218, 60, 239, 129, 214, 188, 144, 0, 45, 61, 77, 75, 23, 190, 112, 221, 138, 188, 206, 203, 3, 190, 202, 160, 103, 189, 198, 154, 36, 190, 118, 242, 26, 62, 42, 69, 148, 190, 222, 185, 55, 189, 39, 83, 12, 62, 113, 223, 81, 61, 11, 147, 195, 62, 42, 185, 220, 61, 200, 58, 194, 60, 150, 219, 117, 61, 220, 217, 236, 189, 246, 111, 44, 60, 161, 113, 222, 61, 144, 14, 225, 189, 189, 199, 202, 60, 38, 214, 22, 62, 42, 94, 50, 60, 254, 79, 23, 189, 161, 34, 57, 61, 45, 213, 231, 61, 170, 97, 50, 62, 85, 221, 17, 62, 207, 174, 41, 190, 53, 84, 41, 190, 29, 187, 19, 62, 4, 246, 212, 61, 75, 1, 16, 62, 165, 151, 9, 190, 188, 132, 73, 189, 139, 182, 24, 61, 153, 200, 150, 62, 86, 228, 31, 191, 68, 173, 30, 62, 242, 178, 197, 61, 46, 23, 8, 62, 248, 183, 83, 62, 140, 46, 131, 190, 91, 179, 162, 61, 210, 49, 18, 191, 69, 10, 160, 62, 140, 64, 178, 61, 40, 70, 195, 189, 112, 76, 23, 62, 94, 174, 156, 61, 78, 54, 121, 190, 64, 16, 191, 60, 136, 7, 17, 189, 224, 246, 47, 187, 162, 196, 21, 62, 142, 101, 224, 190, 214, 252, 203, 189, 83, 102, 218, 190, 204, 14, 48, 62, 215, 129, 225, 190, 167, 154, 2, 62, 3, 88, 69, 62, 7, 166, 177, 190, 85, 162, 135, 62, 182, 118, 197, 189, 85, 12, 218, 61, 246, 162, 7, 62, 115, 147, 136, 189, 51, 74, 142, 62, 53, 222, 166, 190, 222, 61, 169, 62, 22, 247, 61, 61, 71, 108, 41, 62, 113, 86, 126, 62, 107, 181, 162, 190, 167, 201, 131, 62, 252, 67, 10, 191, 80, 143, 45, 59, 144, 140, 47, 62, 199, 38, 189, 187, 20, 181, 125, 62, 132, 236, 17, 62, 39, 229, 45, 190, 14, 146, 101, 62, 225, 44, 228, 189, 192, 243, 140, 190, 147, 18, 218, 186, 67, 59, 206, 190, 170, 194, 45, 190, 69, 66, 201, 189, 54, 53, 150, 189, 127, 153, 246, 189, 46, 181, 110, 62, 153, 51, 236, 187, 211, 223, 207, 190, 173, 35, 37, 62, 239, 169, 190, 187, 24, 10, 42, 62, 118, 171, 119, 186, 201, 187, 163, 61, 115, 139, 37, 61, 149, 118, 202, 61, 93, 225, 51, 62, 220, 112, 8, 190, 46, 219, 7, 188, 107, 95, 130, 189, 247, 130, 104, 189, 136, 51, 47, 190, 194, 166, 19, 190, 243, 7, 36, 190, 52, 165, 90, 61, 76, 69, 33, 190, 77, 203, 213, 61, 87, 173, 50, 190, 246, 236, 168, 61, 205, 163, 75, 60, 220, 157, 87, 189, 64, 110, 18, 190, 229, 83, 157, 61, 58, 205, 118, 189, 249, 118, 240, 189, 43, 120, 26, 62, 8, 75, 63, 188, 15, 77, 31, 188, 77, 186, 147, 189, 102, 154, 18, 58, 222, 92, 22, 190, 236, 254, 233, 189, 140, 170, 23, 190, 105, 83, 113, 61, 165, 227, 158, 189, 53, 111, 216, 188, 51, 4, 172, 188, 60, 238, 140, 189, 82, 197, 163, 189, 156, 207, 10, 190, 63, 137, 151, 188, 57, 202, 252, 189, 69, 100, 245, 61, 183, 94, 184, 188, 138, 148, 44, 61, 156, 51, 195, 188, 37, 106, 191, 61, 95, 126, 112, 60, 217, 227, 158, 189, 92, 40, 7, 189, 241, 19, 12, 62, 168, 244, 64, 189, 178, 252, 18, 190, 78, 200, 11, 62, 81, 23, 90, 61, 39, 149, 49, 61, 38, 127, 116, 187, 214, 115, 252, 189, 147, 28, 120, 61, 181, 113, 40, 190, 233, 168, 202, 61, 81, 254, 172, 60, 86, 131, 69, 189, 10, 151, 215, 189, 29, 19, 138, 189, 56, 195, 187, 60, 237, 86, 28, 190, 48, 173, 155, 61, 169, 162, 154, 189, 181, 94, 243, 189, 186, 12, 75, 189, 238, 134, 40, 188, 73, 119, 212, 189, 70, 253, 16, 60, 117, 46, 232, 189, 108, 79, 221, 189, 38, 206, 182, 188, 64, 246, 32, 188, 26, 163, 49, 189, 182, 196, 231, 61, 66, 159, 204, 189, 61, 252, 194, 61, 175, 210, 205, 189, 242, 3, 31, 190, 3, 46, 172, 189, 180, 41, 181, 185, 252, 77, 122, 61, 87, 0, 25, 62, 186, 255, 228, 189, 160, 207, 99, 61, 226, 27, 143, 189, 247, 242, 207, 61, 241, 107, 150, 61, 56, 156, 206, 60, 117, 17, 219, 188, 100, 145, 195, 189, 249, 74, 94, 61, 214, 56, 255, 61, 130, 32, 55, 190, 160, 19, 227, 61, 180, 209, 20, 190, 139, 84, 19, 61, 239, 18, 149, 61, 23, 254, 72, 188, 227, 165, 38, 62, 226, 126, 133, 60, 144, 67, 40, 61, 50, 68, 156, 189, 80, 138, 228, 190, 54, 83, 70, 190, 36, 127, 32, 61, 207, 152, 202, 61, 218, 196, 9, 62, 236, 136, 214, 189, 184, 199, 142, 61, 166, 44, 183, 61, 23, 7, 19, 189, 118, 106, 163, 61, 181, 17, 11, 189, 218, 241, 82, 190, 85, 31, 106, 189, 134, 87, 45, 189, 54, 214, 87, 189, 1, 171, 15, 190, 137, 6, 205, 62, 96, 130, 12, 61, 190, 212, 228, 61, 208, 40, 234, 189, 127, 167, 183, 61, 154, 163, 100, 62, 150, 180, 213, 60, 190, 63, 209, 61, 238, 5, 213, 189, 230, 58, 82, 191, 58, 125, 144, 62, 30, 193, 201, 59, 110, 177, 225, 61, 211, 107, 92, 61, 131, 169, 7, 191, 24, 69, 19, 189, 78, 109, 138, 190, 42, 34, 251, 61, 5, 74, 119, 62, 186, 17, 74, 190, 217, 242, 112, 62, 37, 45, 132, 61, 32, 245, 2, 190, 41, 140, 132, 62, 156, 216, 234, 190, 140, 37, 0, 189, 130, 243, 73, 61, 196, 191, 46, 191, 132, 210, 38, 190, 106, 90, 51, 191, 205, 116, 197, 61, 103, 114, 202, 190, 125, 197, 17, 62, 74, 74, 183, 62, 101, 75, 35, 191, 63, 95, 201, 62, 18, 43, 152, 190, 169, 53, 25, 61, 17, 233, 65, 61, 213, 227, 88, 61, 250, 90, 21, 190, 58, 50, 32, 62, 150, 104, 128, 189, 11, 253, 27, 62, 16, 207, 47, 62, 188, 132, 12, 190, 230, 30, 232, 189, 111, 56, 24, 61, 104, 65, 2, 190, 204, 230, 46, 61, 145, 39, 55, 189, 138, 21, 249, 61, 118, 21, 1, 190, 61, 58, 48, 190, 200, 233, 136, 188, 65, 225, 50, 190, 158, 204, 130, 189, 129, 235, 178, 188, 1, 180, 184, 189, 164, 21, 186, 189, 151, 197, 232, 189, 153, 133, 74, 187, 182, 102, 14, 61, 193, 23, 231, 189, 36, 145, 77, 188, 95, 69, 32, 190, 105, 48, 213, 189, 93, 80, 39, 190, 5, 177, 181, 189, 218, 175, 254, 189, 93, 42, 222, 61, 166, 53, 131, 189, 114, 187, 117, 61, 85, 75, 231, 188, 57, 217, 128, 189, 73, 49, 158, 61, 155, 179, 11, 189, 75, 235, 252, 189, 230, 127, 246, 61, 147, 102, 251, 189, 3, 253, 21, 190, 35, 55, 172, 60, 199, 233, 252, 61, 17, 250, 44, 190, 91, 41, 76, 189, 199, 55, 38, 190, 41, 177, 5, 190, 192, 254, 21, 190, 0, 81, 185, 189, 167, 34, 50, 190, 64, 200, 10, 62, 128, 168, 204, 189, 177, 121, 33, 190, 248, 208, 148, 189, 57, 24, 192, 189, 40, 50, 125, 61, 98, 198, 37, 190, 59, 180, 140, 61, 196, 99, 62, 188, 114, 33, 19, 190, 176, 76, 201, 189, 127, 59, 48, 190, 118, 140, 199, 189, 242, 9, 95, 61, 174, 56, 168, 190, 233, 180, 222, 62, 239, 148, 179, 189, 83, 224, 128, 62, 19, 53, 31, 61, 86, 237, 226, 189, 115, 233, 162, 62, 27, 8, 3, 190, 76, 144, 12, 62, 231, 96, 129, 189, 206, 39, 158, 189, 179, 205, 255, 60, 129, 93, 158, 190, 55, 61, 148, 189, 92, 14, 89, 62, 145, 198, 154, 62, 53, 149, 45, 62, 237, 133, 16, 61, 254, 50, 53, 190, 12, 7, 134, 62, 95, 63, 216, 61, 202, 241, 2, 63, 108, 47, 255, 61, 183, 23, 139, 62, 132, 220, 248, 190, 8, 203, 64, 190, 11, 82, 15, 62, 165, 63, 19, 190, 83, 79, 62, 190, 43, 31, 234, 189, 49, 242, 0, 62, 67, 121, 87, 190, 46, 193, 162, 190, 40, 139, 206, 60, 137, 56, 12, 61, 33, 89, 69, 188, 106, 175, 219, 188, 71, 71, 32, 188, 170, 211, 102, 62, 96, 211, 80, 190, 11, 109, 145, 62, 7, 150, 56, 61, 147, 248, 224, 60, 115, 175, 190, 61, 73, 118, 154, 190, 231, 219, 234, 61, 232, 13, 107, 62, 207, 137, 192, 61, 57, 80, 20, 62, 2, 50, 188, 62, 210, 192, 166, 60, 45, 32, 96, 62, 247, 74, 215, 61, 70, 62, 68, 62, 177, 237, 246, 189, 95, 178, 169, 62, 207, 0, 20, 190, 203, 9, 156, 190, 37, 94, 113, 62, 249, 170, 191, 189, 99, 90, 5, 62, 145, 143, 254, 188, 65, 131, 37, 62, 228, 39, 167, 189, 219, 122, 12, 61, 92, 192, 14, 62, 11, 128, 25, 62, 201, 148, 4, 189, 1, 195, 6, 190, 158, 37, 87, 189, 136, 217, 15, 62, 48, 181, 36, 190, 92, 141, 107, 59, 118, 134, 121, 189, 215, 247, 32, 190, 216, 63, 198, 61, 42, 175, 236, 189, 73, 205, 103, 60, 39, 112, 30, 190, 202, 29, 207, 189, 107, 17, 56, 189, 229, 19, 230, 189, 172, 35, 192, 189, 46, 180, 179, 61, 85, 19, 18, 190, 146, 123, 191, 189, 196, 87, 3, 190, 179, 184, 255, 189, 38, 139, 210, 189, 82, 90, 158, 188, 102, 27, 225, 59, 191, 205, 42, 190, 72, 178, 0, 62, 94, 104, 52, 190, 77, 80, 37, 189, 2, 183, 28, 189, 196, 139, 25, 190, 205, 62, 75, 191, 117, 33, 31, 62, 142, 175, 34, 62, 229, 225, 247, 61, 80, 53, 165, 61, 221, 236, 33, 191, 66, 179, 89, 188, 89, 131, 245, 190, 191, 58, 131, 61, 25, 18, 68, 62, 124, 125, 198, 190, 98, 161, 224, 61, 188, 247, 17, 62, 114, 32, 22, 191, 246, 192, 160, 62, 158, 224, 252, 190, 84, 20, 145, 190, 164, 244, 131, 187, 132, 52, 225, 190, 143, 153, 45, 62, 225, 252, 2, 191, 168, 4, 138, 62, 103, 111, 7, 191, 181, 36, 159, 189, 253, 71, 13, 190, 80, 25, 6, 191, 51, 63, 189, 189, 14, 88, 26, 191, 218, 216, 172, 190, 241, 224, 139, 61, 232, 214, 133, 189, 88, 40, 138, 189, 146, 117, 69, 62, 161, 50, 148, 189, 83, 130, 8, 190, 187, 155, 224, 190, 12, 65, 132, 62, 115, 129, 159, 61, 176, 118, 221, 61, 200, 129, 117, 188, 177, 212, 76, 62, 219, 180, 45, 191, 15, 45, 46, 189, 226, 38, 219, 189, 210, 239, 223, 189, 76, 21, 15, 63, 159, 109, 62, 62, 221, 92, 8, 62, 252, 52, 132, 59, 101, 6, 137, 189, 254, 168, 58, 62, 182, 245, 41, 62, 32, 75, 211, 61, 231, 204, 165, 189, 171, 179, 205, 62, 78, 153, 159, 190, 166, 192, 45, 62, 89, 93, 130, 62, 166, 10, 208, 62, 172, 242, 165, 189, 130, 197, 197, 62, 196, 75, 35, 190, 238, 64, 232, 61, 15, 107, 48, 62, 236, 217, 21, 189, 20, 118, 172, 61, 183, 130, 17, 61, 139, 169, 175, 189, 206, 223, 15, 190, 164, 170, 28, 189, 29, 145, 219, 189, 136, 86, 57, 190, 153, 3, 193, 189, 159, 162, 128, 189, 159, 51, 78, 189, 217, 206, 68, 189, 88, 247, 54, 189, 162, 112, 42, 190, 37, 110, 175, 189, 63, 176, 88, 61, 184, 194, 255, 61, 180, 99, 14, 190, 135, 237, 2, 190, 191, 240, 21, 189, 204, 84, 26, 190, 168, 106, 29, 62, 50, 210, 0, 187, 253, 196, 4, 190, 142, 250, 19, 62, 36, 87, 0, 62, 249, 177, 19, 188, 89, 26, 42, 62, 144, 33, 199, 189, 37, 100, 32, 189, 73, 157, 41, 190, 87, 240, 168, 190, 234, 89, 222, 61, 162, 13, 246, 190, 197, 208, 75, 62, 88, 155, 158, 190, 71, 49, 170, 60, 80, 59, 171, 62, 84, 197, 1, 188, 21, 34, 44, 63, 218, 215, 88, 190, 2, 167, 6, 190, 134, 246, 12, 187, 154, 76, 125, 61, 212, 155, 78, 190, 86, 194, 221, 59, 205, 206, 125, 62, 176, 72, 13, 62, 165, 61, 49, 61, 168, 204, 159, 190, 243, 87, 142, 61, 159, 113, 197, 61, 131, 14, 105, 62, 136, 110, 82, 61, 100, 142, 123, 62, 100, 49, 136, 191, 192, 146, 69, 191, 84, 180, 114, 62, 113, 116, 200, 61, 223, 6, 79, 190, 20, 44, 198, 189, 62, 132, 159, 61, 70, 167, 113, 189, 136, 79, 182, 189, 198, 127, 44, 62, 227, 25, 132, 190, 94, 124, 41, 61, 71, 187, 177, 190, 168, 251, 164, 187, 148, 176, 14, 62, 192, 179, 134, 190, 162, 97, 172, 62, 222, 8, 159, 189, 172, 152, 180, 189, 95, 178, 29, 61, 190, 73, 147, 61, 49, 54, 35, 190, 202, 179, 72, 62, 112, 43, 215, 61, 249, 50, 127, 62, 75, 177, 226, 61, 87, 14, 189, 190, 230, 255, 245, 60, 178, 41, 146, 188, 33, 150, 114, 62, 87, 20, 183, 59, 50, 66, 162, 62, 172, 249, 222, 190, 220, 155, 4, 191, 16, 219, 237, 61, 125, 25, 51, 189, 224, 130, 70, 188, 198, 250, 33, 190, 194, 33, 29, 62, 202, 117, 75, 190};
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
                alignas(float) const unsigned char memory[] = {221, 65, 50, 186, 149, 84, 129, 190, 7, 51, 155, 61, 4, 191, 160, 62, 85, 141, 68, 62, 203, 8, 124, 61, 8, 69, 226, 189, 81, 73, 206, 62, 85, 84, 40, 61, 90, 166, 61, 62, 195, 139, 161, 189, 213, 89, 39, 189, 254, 220, 164, 61, 228, 58, 45, 190, 129, 153, 15, 62, 194, 28, 4, 62, 22, 68, 68, 62, 54, 3, 226, 61, 28, 75, 151, 60, 45, 204, 98, 190, 93, 148, 4, 61, 105, 78, 137, 62, 226, 109, 48, 190, 246, 69, 22, 62, 67, 111, 182, 61, 91, 150, 131, 62, 27, 114, 135, 187, 147, 74, 77, 189, 17, 201, 176, 189, 63, 96, 221, 189, 231, 64, 41, 62, 4, 236, 121, 62};
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
                alignas(float) const unsigned char memory[] = {159, 252, 1, 187, 66, 13, 217, 62, 124, 57, 111, 190, 103, 3, 54, 63, 123, 28, 142, 62, 236, 142, 79, 189, 76, 175, 25, 62, 171, 61, 124, 190, 2, 42, 16, 63, 231, 182, 150, 190, 49, 229, 152, 190, 40, 66, 189, 62, 65, 115, 120, 61, 54, 85, 1, 62, 222, 237, 49, 190, 87, 183, 208, 62, 9, 24, 198, 62, 78, 216, 87, 61, 228, 229, 157, 60, 180, 118, 105, 61, 130, 25, 81, 190, 214, 225, 21, 63, 82, 75, 176, 189, 123, 166, 210, 188, 81, 108, 204, 190, 219, 170, 149, 190, 106, 168, 101, 189, 29, 22, 68, 63, 230, 110, 18, 63, 231, 217, 174, 188, 162, 16, 198, 190, 225, 224, 233, 190, 198, 50, 241, 189, 184, 205, 254, 61, 18, 8, 23, 189, 73, 128, 158, 189, 204, 6, 51, 190, 231, 177, 200, 61, 88, 77, 168, 189, 36, 245, 20, 190, 91, 60, 14, 62, 56, 52, 198, 59, 143, 138, 27, 62, 27, 168, 2, 190, 187, 55, 199, 189, 221, 22, 21, 61, 179, 152, 219, 61, 97, 107, 150, 189, 187, 155, 147, 60, 237, 182, 29, 190, 252, 171, 10, 62, 85, 192, 255, 189, 172, 140, 15, 61, 139, 104, 247, 60, 114, 238, 44, 62, 27, 216, 66, 60, 89, 122, 216, 61, 166, 177, 1, 190, 109, 187, 252, 61, 126, 19, 76, 61, 113, 131, 84, 61, 239, 35, 200, 61, 254, 118, 107, 189, 117, 53, 204, 189};
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
                alignas(float) const unsigned char memory[] = {19, 122, 199, 189, 140, 119, 156, 190};
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
    alignas(float) const unsigned char memory[] = {25, 97, 3, 192, 208, 15, 175, 63, 233, 150, 43, 64};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {180, 106, 132, 64, 50, 174, 17, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0041/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
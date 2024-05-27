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
                alignas(float) const unsigned char memory[] = {198, 235, 23, 63, 153, 252, 130, 61, 184, 180, 117, 62, 208, 219, 167, 62, 111, 162, 133, 191, 19, 87, 123, 190, 32, 31, 179, 190, 147, 234, 242, 191, 165, 158, 186, 190, 18, 243, 27, 191, 182, 186, 216, 62, 131, 113, 85, 191, 226, 202, 250, 61, 254, 60, 11, 63, 48, 243, 132, 63, 171, 175, 106, 191, 133, 247, 177, 63, 250, 255, 128, 62, 205, 36, 228, 62, 208, 2, 144, 191, 138, 124, 2, 191, 220, 222, 231, 190, 2, 106, 108, 191, 135, 1, 177, 62, 219, 104, 62, 63, 49, 67, 164, 190, 12, 7, 131, 190, 77, 14, 72, 189, 146, 144, 220, 190, 83, 213, 230, 62, 155, 161, 86, 189, 151, 52, 166, 191, 54, 110, 103, 190, 139, 236, 19, 190, 22, 229, 43, 191, 154, 117, 100, 61, 199, 215, 51, 63, 92, 192, 74, 191, 15, 64, 208, 189, 148, 66, 46, 63, 159, 228, 150, 63, 72, 150, 160, 62, 36, 91, 179, 187, 5, 13, 85, 63, 121, 40, 199, 190, 35, 167, 99, 62, 141, 159, 91, 63, 33, 13, 115, 190, 7, 112, 245, 62, 44, 247, 187, 189, 115, 122, 28, 191, 146, 160, 67, 62, 244, 183, 236, 60, 117, 159, 222, 190, 145, 218, 138, 190, 73, 159, 151, 191, 131, 16, 82, 190, 6, 224, 93, 190, 125, 159, 1, 63, 149, 60, 159, 61, 188, 165, 227, 190, 120, 226, 154, 191, 123, 8, 121, 190, 54, 46, 150, 191, 225, 175, 251, 61, 131, 173, 54, 61, 67, 201, 146, 191, 200, 171, 150, 62, 229, 46, 147, 189, 194, 239, 143, 61, 97, 138, 153, 62, 164, 20, 198, 190, 109, 3, 54, 63, 182, 50, 150, 63, 29, 131, 251, 62, 197, 151, 229, 61, 222, 193, 179, 63, 60, 146, 31, 63, 199, 249, 241, 62, 119, 5, 227, 61, 108, 27, 254, 62, 108, 182, 60, 62, 111, 164, 122, 191, 127, 202, 209, 62, 60, 77, 198, 190, 151, 252, 219, 63, 89, 88, 162, 62, 24, 178, 73, 63, 230, 230, 166, 62, 207, 16, 155, 186, 4, 153, 242, 190, 169, 75, 35, 190, 227, 129, 209, 62, 209, 60, 195, 190, 170, 10, 145, 191, 185, 87, 208, 190};
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
                alignas(float) const unsigned char memory[] = {22, 224, 132, 191, 188, 241, 158, 189, 37, 106, 240, 188, 129, 0, 193, 61, 244, 127, 122, 62, 147, 214, 215, 190, 87, 107, 182, 190, 125, 206, 18, 191, 72, 69, 112, 191, 161, 23, 226, 189, 208, 208, 187, 62, 42, 86, 11, 63, 88, 14, 182, 189, 146, 21, 186, 190, 206, 162, 81, 189, 49, 223, 67, 62, 193, 241, 95, 61, 81, 216, 207, 189, 59, 92, 193, 62, 229, 42, 186, 62, 116, 70, 191, 62, 74, 5, 9, 188, 96, 3, 225, 62, 196, 88, 205, 190, 158, 4, 195, 61, 109, 16, 35, 62, 70, 240, 121, 62, 211, 30, 109, 61, 215, 102, 88, 190, 122, 56, 114, 190, 212, 31, 3, 191, 97, 7, 69, 190};
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
                alignas(float) const unsigned char memory[] = {253, 140, 217, 189, 15, 21, 32, 62, 198, 253, 40, 190, 205, 189, 95, 59, 26, 98, 228, 60, 58, 44, 171, 189, 153, 13, 47, 59, 93, 48, 246, 188, 96, 225, 7, 190, 233, 144, 207, 189, 21, 239, 128, 189, 108, 94, 205, 187, 240, 31, 42, 190, 129, 197, 53, 188, 190, 51, 4, 190, 27, 24, 98, 60, 233, 57, 169, 188, 159, 94, 36, 61, 184, 52, 162, 189, 25, 128, 12, 189, 85, 112, 37, 60, 198, 168, 177, 189, 140, 67, 1, 61, 243, 39, 206, 189, 16, 147, 180, 61, 59, 0, 63, 189, 225, 28, 64, 190, 182, 22, 208, 189, 209, 191, 17, 62, 96, 90, 134, 189, 127, 133, 199, 188, 189, 219, 33, 190, 39, 129, 52, 189, 10, 224, 55, 191, 103, 123, 200, 190, 173, 200, 153, 61, 194, 182, 246, 187, 36, 48, 169, 190, 125, 243, 13, 191, 181, 157, 6, 191, 203, 3, 6, 191, 163, 234, 213, 190, 93, 155, 90, 190, 117, 12, 62, 190, 190, 217, 23, 61, 12, 167, 129, 62, 248, 180, 197, 62, 70, 247, 121, 62, 115, 142, 134, 61, 217, 22, 212, 189, 10, 164, 116, 191, 147, 152, 8, 189, 167, 182, 45, 191, 224, 155, 189, 190, 160, 214, 9, 59, 179, 39, 225, 190, 6, 71, 62, 62, 143, 36, 20, 62, 15, 145, 38, 189, 148, 126, 56, 191, 222, 215, 136, 190, 103, 139, 218, 62, 201, 12, 212, 190, 3, 15, 47, 189, 189, 5, 210, 190, 171, 79, 229, 62, 156, 134, 197, 191, 201, 79, 30, 189, 160, 254, 3, 61, 21, 0, 204, 61, 185, 176, 157, 62, 95, 241, 169, 189, 58, 130, 101, 63, 253, 241, 210, 62, 239, 116, 206, 60, 218, 110, 53, 62, 62, 114, 19, 63, 106, 116, 83, 191, 94, 228, 151, 188, 21, 118, 3, 191, 160, 138, 8, 189, 178, 0, 198, 62, 5, 188, 201, 62, 125, 137, 248, 189, 246, 109, 15, 62, 118, 61, 99, 190, 229, 247, 142, 60, 188, 57, 21, 63, 70, 154, 165, 190, 46, 222, 137, 61, 100, 38, 72, 189, 129, 225, 7, 62, 224, 180, 212, 61, 229, 2, 14, 190, 182, 13, 8, 190, 215, 196, 231, 191, 237, 133, 40, 61, 19, 21, 58, 62, 234, 249, 190, 190, 60, 0, 61, 190, 105, 234, 253, 188, 128, 239, 152, 62, 14, 73, 14, 190, 254, 48, 122, 190, 31, 45, 223, 60, 251, 196, 157, 62, 230, 233, 2, 60, 137, 220, 77, 62, 116, 219, 175, 62, 82, 90, 237, 190, 151, 82, 133, 189, 228, 103, 64, 62, 222, 202, 214, 61, 14, 113, 169, 60, 167, 87, 175, 62, 222, 27, 162, 62, 19, 140, 143, 187, 123, 222, 59, 62, 134, 32, 174, 61, 35, 23, 179, 190, 40, 98, 126, 61, 46, 108, 7, 62, 216, 99, 184, 189, 62, 55, 53, 189, 11, 42, 185, 62, 7, 54, 255, 61, 193, 21, 27, 190, 119, 71, 87, 190, 108, 114, 65, 189, 92, 106, 38, 190, 174, 42, 2, 61, 58, 229, 160, 62, 52, 54, 52, 191, 165, 240, 74, 191, 61, 212, 11, 190, 45, 39, 175, 63, 104, 115, 32, 63, 229, 240, 58, 62, 210, 176, 253, 61, 233, 221, 81, 61, 10, 148, 200, 62, 13, 175, 141, 61, 96, 236, 74, 62, 44, 55, 95, 62, 89, 236, 55, 62, 3, 238, 255, 61, 206, 70, 100, 58, 41, 217, 217, 61, 139, 5, 181, 187, 240, 192, 112, 189, 35, 3, 129, 61, 176, 252, 25, 62, 171, 217, 37, 62, 251, 231, 198, 190, 131, 118, 151, 189, 193, 44, 74, 189, 57, 150, 119, 62, 242, 64, 75, 62, 21, 86, 84, 61, 182, 124, 181, 62, 66, 138, 195, 188, 171, 236, 133, 190, 0, 75, 60, 190, 4, 252, 157, 189, 205, 3, 184, 61, 248, 54, 8, 61, 229, 115, 201, 61, 98, 121, 24, 190, 230, 61, 137, 188, 40, 205, 197, 190, 184, 241, 102, 190, 139, 7, 104, 189, 202, 62, 130, 190, 78, 14, 152, 190, 66, 183, 42, 190, 243, 75, 228, 189, 223, 225, 84, 61, 203, 125, 30, 61, 1, 165, 158, 189, 128, 216, 199, 189, 111, 44, 37, 189, 92, 30, 155, 61, 107, 247, 248, 61, 159, 199, 208, 189, 52, 119, 18, 191, 103, 190, 193, 189, 29, 50, 15, 191, 152, 9, 99, 190, 74, 36, 62, 61, 78, 69, 64, 190, 212, 145, 174, 190, 166, 77, 214, 190, 94, 55, 253, 189, 94, 218, 16, 62, 172, 92, 145, 191, 14, 50, 12, 62, 130, 64, 16, 62, 104, 61, 18, 63, 247, 119, 134, 62, 39, 175, 143, 190, 166, 45, 66, 190, 12, 130, 174, 62, 147, 30, 36, 62, 89, 181, 27, 62, 152, 246, 153, 62, 171, 44, 49, 190, 136, 228, 132, 190, 165, 147, 207, 190, 88, 152, 31, 62, 230, 154, 192, 59, 109, 210, 8, 62, 52, 27, 240, 189, 212, 117, 152, 62, 253, 194, 145, 62, 102, 171, 20, 63, 183, 208, 112, 189, 43, 142, 181, 188, 90, 10, 232, 61, 96, 40, 234, 60, 84, 123, 52, 62, 182, 126, 92, 62, 86, 157, 49, 190, 182, 52, 128, 189, 255, 143, 148, 191, 10, 163, 163, 59, 98, 25, 144, 190, 144, 236, 117, 62, 29, 223, 67, 189, 252, 109, 249, 190, 156, 247, 146, 191, 147, 30, 49, 61, 23, 6, 234, 188, 195, 181, 9, 191, 64, 11, 70, 191, 151, 103, 136, 62, 39, 36, 83, 61, 164, 113, 139, 60, 218, 199, 119, 62, 89, 242, 40, 62, 226, 231, 171, 62, 224, 1, 16, 62, 19, 44, 46, 188, 99, 4, 84, 62, 8, 205, 10, 62, 66, 24, 123, 61, 172, 124, 255, 61, 96, 62, 108, 62, 177, 82, 170, 190, 37, 181, 177, 189, 110, 251, 159, 191, 202, 252, 232, 189, 52, 150, 95, 191, 92, 180, 100, 191, 56, 172, 88, 190, 97, 148, 15, 63, 205, 143, 155, 61, 97, 191, 63, 188, 169, 138, 39, 191, 104, 140, 207, 188, 248, 228, 155, 62, 241, 115, 187, 191, 33, 162, 170, 191, 5, 118, 169, 190, 105, 169, 5, 188, 99, 225, 144, 191, 27, 14, 209, 190, 165, 40, 67, 61, 145, 106, 207, 62, 235, 18, 207, 62, 160, 97, 12, 189, 120, 244, 144, 60, 130, 235, 50, 189, 79, 151, 145, 189, 17, 117, 28, 189, 80, 221, 3, 62, 239, 137, 73, 61, 200, 203, 167, 61, 243, 212, 242, 62, 244, 132, 194, 62, 224, 151, 161, 190, 21, 105, 240, 190, 107, 219, 9, 192, 212, 130, 23, 62, 184, 46, 5, 191, 18, 233, 175, 191, 244, 102, 187, 62, 61, 101, 10, 63, 81, 193, 71, 62, 94, 102, 255, 188, 19, 145, 224, 189, 61, 62, 3, 62, 55, 195, 32, 189, 116, 208, 63, 60, 85, 155, 223, 188, 5, 73, 34, 190, 128, 60, 189, 61, 136, 205, 168, 189, 219, 32, 19, 190, 75, 249, 251, 189, 9, 127, 91, 60, 123, 241, 17, 61, 58, 177, 163, 60, 153, 46, 180, 189, 191, 169, 178, 61, 216, 58, 165, 188, 25, 247, 135, 61, 229, 136, 21, 190, 5, 244, 253, 61, 140, 111, 101, 60, 104, 62, 129, 61, 39, 114, 226, 189, 216, 218, 36, 61, 27, 200, 30, 190, 73, 90, 254, 189, 120, 59, 0, 190, 231, 117, 249, 61, 220, 134, 163, 61, 215, 179, 66, 61, 16, 209, 84, 61, 93, 171, 64, 190, 42, 121, 51, 190, 241, 25, 194, 190, 67, 86, 194, 62, 64, 182, 41, 62, 94, 97, 217, 190, 41, 67, 72, 191, 236, 143, 88, 190, 104, 52, 24, 63, 253, 183, 37, 63, 66, 93, 165, 190, 237, 182, 201, 61, 162, 20, 188, 190, 172, 246, 21, 191, 196, 157, 43, 61, 234, 62, 29, 62, 127, 5, 235, 188, 190, 3, 33, 190, 158, 4, 185, 189, 112, 226, 159, 189, 49, 148, 105, 190, 167, 212, 230, 61, 116, 85, 246, 59, 143, 53, 74, 61, 15, 39, 158, 60, 58, 112, 71, 190, 33, 207, 186, 188, 16, 127, 138, 189, 80, 149, 5, 191, 136, 109, 27, 191, 236, 235, 49, 191, 191, 76, 177, 190, 87, 246, 148, 62, 105, 253, 81, 62, 235, 210, 228, 190, 123, 18, 26, 191, 230, 240, 38, 62, 186, 140, 163, 61, 37, 82, 164, 190, 63, 90, 41, 191, 85, 71, 217, 189, 129, 231, 6, 191, 189, 77, 134, 190, 231, 172, 8, 191, 225, 163, 22, 62, 14, 92, 48, 62, 198, 217, 133, 62, 63, 145, 181, 62, 114, 156, 43, 62, 111, 109, 87, 61, 73, 221, 218, 61, 239, 136, 188, 191, 167, 88, 142, 61, 105, 29, 203, 191, 223, 179, 22, 191, 145, 188, 29, 190, 250, 74, 248, 61, 170, 61, 151, 62, 244, 44, 128, 188, 147, 146, 10, 60, 3, 208, 247, 61, 64, 126, 216, 190, 20, 61, 215, 62, 248, 52, 14, 60, 8, 247, 232, 189, 95, 207, 41, 62, 220, 200, 58, 61, 29, 245, 154, 189, 141, 172, 107, 61, 46, 109, 252, 189, 17, 165, 162, 189, 119, 196, 182, 189, 209, 87, 250, 189, 40, 80, 68, 61, 138, 151, 6, 62, 223, 219, 127, 61, 0, 56, 175, 189, 210, 219, 44, 190, 171, 208, 244, 61, 187, 167, 198, 189, 238, 41, 34, 190, 101, 246, 108, 189, 178, 180, 11, 62, 133, 177, 218, 61, 54, 44, 153, 61, 171, 101, 8, 190, 34, 189, 2, 59, 127, 136, 130, 189, 179, 108, 252, 60, 134, 243, 52, 188, 226, 225, 119, 188, 5, 71, 158, 189, 58, 253, 54, 61, 227, 202, 190, 189, 120, 44, 10, 62, 251, 204, 198, 189, 209, 65, 47, 190, 96, 176, 177, 62, 182, 105, 29, 191, 178, 185, 221, 190, 119, 66, 66, 62, 252, 67, 0, 190, 41, 99, 177, 190, 129, 63, 13, 191, 38, 100, 115, 61, 149, 138, 69, 191, 245, 79, 134, 189, 49, 47, 13, 190, 32, 144, 188, 61, 122, 117, 154, 62, 25, 137, 145, 61, 62, 194, 216, 62, 94, 205, 68, 62, 159, 145, 42, 190, 159, 32, 6, 189, 89, 93, 55, 191, 253, 173, 219, 61, 19, 25, 82, 191, 212, 137, 45, 191, 208, 197, 90, 189, 98, 191, 167, 190, 217, 103, 148, 62, 227, 175, 159, 61, 88, 134, 131, 62, 87, 13, 138, 61, 59, 102, 142, 190, 252, 5, 122, 62, 78, 204, 74, 189, 21, 34, 45, 61, 146, 14, 159, 62, 208, 191, 105, 191, 70, 214, 236, 189, 171, 204, 101, 62, 85, 63, 6, 190, 97, 104, 28, 191, 31, 38, 38, 191, 39, 60, 67, 62, 147, 36, 119, 191, 58, 200, 222, 190, 120, 198, 69, 61, 20, 254, 221, 187, 162, 235, 101, 188, 199, 189, 78, 61, 213, 166, 182, 62, 172, 96, 221, 62, 90, 102, 210, 189, 49, 119, 187, 190, 126, 58, 74, 190, 80, 218, 137, 61, 236, 50, 21, 190, 23, 52, 103, 189, 61, 189, 244, 61, 109, 177, 175, 190, 13, 62, 75, 62, 136, 36, 19, 190, 67, 78, 65, 62, 84, 3, 210, 60, 46, 203, 122, 191, 247, 71, 164, 62, 239, 187, 187, 62, 177, 223, 139, 59, 23, 26, 165, 190, 118, 156, 200, 62, 138, 22, 47, 191, 225, 59, 24, 190, 142, 200, 169, 61, 193, 104, 66, 63, 66, 84, 93, 62, 23, 243, 147, 190, 149, 235, 187, 62, 102, 186, 29, 63, 95, 63, 129, 61, 145, 160, 206, 61, 51, 175, 242, 62, 196, 46, 33, 191, 32, 45, 35, 190, 190, 30, 173, 190, 89, 230, 133, 61, 33, 137, 33, 62, 208, 7, 128, 62, 53, 205, 127, 62, 171, 129, 40, 62, 1, 179, 63, 62, 50, 88, 112, 62, 162, 47, 65, 62, 130, 131, 213, 190, 46, 238, 16, 61, 131, 142, 197, 190, 175, 145, 244, 62, 242, 208, 55, 63, 86, 52, 62, 62, 119, 252, 35, 190, 235, 19, 245, 190, 129, 250, 151, 60, 110, 190, 177, 62, 163, 148, 128, 191, 172, 138, 48, 191, 244, 238, 240, 190, 239, 188, 27, 62, 89, 213, 146, 62, 58, 115, 221, 190, 243, 135, 91, 191, 162, 228, 128, 62, 117, 21, 92, 62, 238, 31, 70, 62, 130, 42, 220, 62, 33, 198, 117, 190, 226, 215, 26, 191, 35, 219, 189, 186, 25, 241, 60, 62, 248, 26, 115, 62, 98, 105, 225, 61, 206, 139, 173, 61, 146, 86, 10, 63, 121, 134, 89, 62, 33, 20, 67, 62, 122, 45, 100, 190, 180, 2, 65, 190, 174, 22, 69, 190, 226, 97, 122, 190, 162, 24, 214, 190, 21, 121, 140, 62, 242, 131, 229, 62, 32, 35, 127, 190, 89, 33, 225, 191, 120, 76, 132, 61, 233, 147, 65, 189, 127, 129, 7, 62, 117, 70, 10, 190, 44, 206, 130, 189, 107, 247, 146, 189, 73, 187, 237, 189, 88, 11, 64, 189, 102, 90, 120, 61, 185, 101, 244, 61, 170, 9, 81, 189, 138, 238, 147, 188, 143, 17, 29, 190, 71, 67, 6, 62, 135, 213, 0, 189, 19, 143, 161, 189, 142, 136, 113, 188, 16, 151, 146, 61, 182, 239, 19, 190, 142, 216, 229, 61, 154, 246, 7, 61, 73, 146, 82, 188, 72, 71, 87, 60, 172, 119, 9, 190, 19, 4, 230, 61, 148, 75, 98, 60, 86, 137, 22, 190, 173, 44, 12, 190, 147, 224, 254, 189, 1, 250, 32, 189, 134, 39, 190, 189, 113, 143, 152, 61, 95, 166, 190, 190, 106, 111, 89, 189, 103, 213, 172, 191, 15, 193, 143, 190, 25, 155, 5, 61, 217, 93, 197, 62, 158, 159, 202, 189, 182, 196, 211, 190, 102, 53, 153, 190, 196, 226, 233, 189, 179, 70, 185, 61, 211, 81, 25, 60, 142, 96, 161, 61, 121, 174, 152, 189, 231, 212, 134, 61, 183, 10, 169, 61, 130, 194, 132, 60, 15, 121, 194, 189, 133, 119, 19, 191, 24, 9, 43, 62, 171, 174, 198, 191, 122, 196, 29, 189, 238, 141, 128, 190, 127, 88, 134, 189, 153, 99, 137, 189, 189, 53, 62, 61, 225, 216, 93, 62, 211, 222, 190, 190, 22, 139, 45, 59, 245, 141, 185, 62, 38, 112, 210, 190, 166, 14, 23, 190, 46, 11, 180, 190, 245, 141, 181, 62, 54, 12, 152, 190, 248, 40, 75, 59, 2, 78, 221, 187, 250, 49, 71, 189, 148, 85, 52, 190, 249, 253, 213, 61, 54, 134, 0, 61, 92, 70, 159, 62, 49, 120, 235, 61, 96, 97, 15, 62, 105, 14, 160, 62, 207, 104, 84, 191, 46, 139, 199, 188, 108, 129, 135, 190, 149, 212, 192, 189, 128, 239, 125, 190, 181, 134, 167, 62, 30, 161, 8, 62, 199, 229, 13, 63, 131, 3, 142, 62, 76, 19, 128, 62, 193, 26, 136, 189, 151, 127, 193, 190, 119, 216, 241, 190, 185, 77, 150, 190, 142, 159, 159, 61, 117, 254, 52, 190, 245, 140, 102, 62, 200, 227, 186, 189, 72, 198, 133, 61, 234, 187, 143, 188, 34, 119, 123, 191, 91, 85, 46, 190, 160, 229, 105, 62, 138, 99, 35, 189, 36, 215, 226, 190, 121, 128, 50, 191, 243, 201, 145, 62, 5, 123, 96, 191, 128, 49, 42, 191, 118, 175, 81, 61, 23, 220, 53, 190, 230, 41, 164, 187, 58, 186, 185, 62, 132, 221, 216, 62, 18, 224, 147, 62, 142, 75, 104, 190, 88, 142, 35, 190, 36, 53, 17, 191, 184, 114, 126, 62, 160, 65, 142, 190, 123, 132, 206, 188, 21, 92, 111, 62, 93, 222, 58, 190, 4, 88, 31, 62, 45, 245, 211, 190, 18, 231, 67, 62, 207, 232, 227, 190, 64, 219, 139, 191, 116, 102, 159, 62, 189, 38, 55, 62, 103, 213, 4, 190, 62, 18, 222, 62, 187, 49, 25, 191, 207, 16, 97, 190, 180, 216, 106, 62, 127, 36, 146, 188, 164, 39, 55, 191, 55, 101, 76, 191, 60, 235, 158, 61, 24, 40, 86, 191, 232, 192, 134, 190, 166, 147, 23, 190, 96, 233, 228, 189, 180, 201, 94, 190, 120, 189, 88, 62, 104, 28, 194, 62, 200, 223, 10, 63, 65, 220, 80, 190, 28, 46, 150, 190, 25, 165, 98, 191, 198, 41, 6, 62, 243, 204, 89, 191, 98, 151, 248, 190, 116, 97, 55, 190, 59, 44, 182, 190, 100, 38, 138, 62, 123, 217, 13, 62, 12, 56, 117, 62, 71, 163, 25, 190, 105, 107, 158, 190, 8, 99, 145, 62, 107, 138, 211, 60, 130, 139, 134, 62, 175, 10, 118, 60, 62, 128, 48, 189, 18, 154, 29, 190, 200, 61, 11, 190, 34, 169, 48, 188, 111, 200, 26, 62, 237, 170, 44, 190, 67, 169, 152, 61, 81, 227, 48, 190, 26, 44, 211, 61, 122, 101, 254, 189, 135, 238, 145, 60, 218, 97, 121, 189, 151, 207, 203, 189, 45, 53, 160, 61, 192, 74, 232, 189, 57, 250, 58, 61, 104, 50, 10, 60, 141, 227, 37, 188, 231, 138, 230, 189, 67, 142, 191, 189, 5, 233, 228, 189, 31, 192, 7, 190, 72, 13, 23, 60, 61, 135, 195, 61, 78, 136, 43, 190, 232, 111, 255, 188, 164, 131, 200, 189, 239, 192, 186, 189, 152, 155, 85, 61, 20, 72, 3, 61, 173, 181, 6, 190, 19, 7, 205, 189, 242, 113, 164, 62, 198, 188, 157, 190, 80, 185, 51, 190, 83, 119, 33, 189, 17, 138, 26, 61, 255, 91, 231, 62, 1, 186, 208, 61, 153, 238, 57, 63, 35, 117, 14, 189, 249, 95, 166, 59, 144, 121, 173, 61, 41, 190, 240, 62, 24, 1, 253, 190, 246, 14, 130, 190, 121, 173, 168, 189, 108, 249, 157, 62, 13, 128, 52, 62, 96, 149, 35, 190, 28, 80, 213, 190, 67, 101, 74, 60, 33, 102, 22, 191, 45, 109, 167, 190, 142, 148, 214, 62, 177, 248, 55, 190, 109, 52, 140, 190, 214, 80, 63, 189, 231, 223, 252, 61, 65, 105, 159, 190, 98, 64, 96, 190, 135, 184, 140, 190, 228, 37, 53, 190, 61, 46, 234, 189, 21, 223, 248, 62, 227, 79, 128, 62, 29, 221, 208, 189, 194, 155, 16, 190, 218, 209, 97, 190, 46, 28, 230, 62, 71, 82, 44, 190, 206, 135, 127, 61, 212, 166, 95, 190, 161, 45, 16, 62, 225, 110, 130, 189, 207, 209, 30, 62, 72, 241, 35, 190, 132, 168, 138, 190, 176, 54, 176, 190, 137, 109, 238, 61, 35, 105, 22, 62, 148, 241, 14, 62, 134, 68, 206, 191, 191, 113, 149, 188, 61, 19, 126, 191, 119, 85, 177, 189, 170, 12, 128, 62, 183, 109, 197, 191, 67, 226, 174, 190, 105, 242, 204, 62, 38, 94, 14, 191, 249, 137, 183, 189, 154, 67, 175, 62, 138, 228, 234, 189, 112, 172, 223, 61, 65, 100, 11, 190, 160, 177, 130, 188, 61, 158, 87, 60, 105, 233, 39, 190, 115, 241, 0, 61, 253, 228, 20, 62, 123, 162, 59, 61, 9, 145, 144, 189, 21, 99, 211, 189, 254, 102, 247, 189, 21, 17, 118, 61, 132, 217, 190, 60, 168, 189, 45, 189, 246, 226, 132, 61, 117, 1, 49, 190, 49, 95, 123, 189, 16, 101, 14, 190, 168, 188, 153, 60, 80, 46, 189, 61, 0, 162, 31, 190, 0, 62, 3, 184, 54, 52, 211, 56, 205, 61, 168, 189, 211, 131, 166, 61, 72, 112, 49, 190, 50, 201, 196, 189, 46, 210, 14, 190, 115, 35, 215, 60, 147, 132, 13, 190, 202, 105, 205, 61, 89, 7, 78, 189, 193, 43, 90, 189, 104, 105, 90, 190, 249, 46, 52, 62, 242, 136, 188, 190, 163, 172, 91, 190, 207, 169, 78, 188, 107, 95, 250, 189, 139, 17, 148, 62, 190, 94, 46, 62, 232, 191, 96, 63, 132, 45, 132, 62, 216, 187, 64, 189, 145, 176, 32, 62, 130, 105, 134, 62, 94, 168, 147, 191, 49, 13, 158, 190, 5, 222, 115, 190, 64, 241, 163, 62, 83, 119, 221, 62, 160, 122, 136, 189, 192, 199, 203, 189, 183, 75, 23, 190, 69, 225, 159, 190, 114, 98, 22, 190, 239, 163, 201, 62, 99, 181, 176, 190, 139, 119, 223, 189, 164, 166, 39, 190, 140, 215, 51, 62, 62, 214, 14, 191, 141, 0, 112, 190, 202, 53, 62, 190, 209, 112, 253, 60, 105, 146, 178, 190, 81, 83, 197, 62, 95, 76, 206, 191, 27, 81, 112, 190, 104, 234, 15, 190, 4, 110, 128, 62, 155, 139, 125, 62, 135, 219, 63, 190, 74, 223, 11, 62, 219, 125, 4, 63, 233, 89, 226, 189, 30, 131, 20, 62, 72, 46, 183, 62, 130, 16, 254, 190, 29, 42, 173, 190, 241, 248, 36, 61, 1, 68, 218, 62, 112, 170, 150, 62, 68, 41, 38, 62, 111, 65, 201, 61, 196, 134, 177, 62, 121, 171, 37, 62, 41, 91, 213, 188, 91, 67, 152, 60, 216, 239, 17, 190, 213, 210, 87, 190, 251, 12, 44, 190, 18, 195, 155, 62, 131, 42, 243, 61, 245, 85, 18, 62, 20, 169, 31, 190, 68, 221, 195, 191, 74, 205, 85, 190, 103, 41, 11, 62, 145, 248, 3, 190, 69, 8, 25, 191, 27, 43, 246, 189, 122, 144, 248, 188, 92, 148, 83, 190, 240, 98, 63, 190, 196, 169, 137, 62, 190, 213, 126, 62, 138, 139, 254, 61, 163, 39, 206, 61, 85, 10, 8, 63, 250, 116, 32, 191, 133, 13, 49, 191, 175, 255, 163, 190, 252, 177, 207, 188, 144, 216, 27, 190, 127, 63, 80, 62, 37, 156, 172, 61, 112, 167, 185, 62, 239, 169, 231, 189, 156, 61, 83, 190, 195, 125, 119, 190, 102, 216, 138, 190, 88, 208, 5, 190, 248, 244, 31, 190, 184, 211, 171, 60, 199, 211, 182, 189, 197, 30, 29, 62, 232, 99, 129, 190, 189, 121, 35, 190, 252, 167, 202, 188, 12, 29, 255, 190, 230, 159, 169, 190, 183, 186, 148, 62, 10, 232, 33, 62, 61, 38, 219, 190, 184, 230, 63, 190, 182, 95, 72, 62, 175, 245, 143, 191, 198, 132, 252, 59, 131, 239, 213, 189, 59, 244, 189, 60, 97, 138, 37, 60, 37, 150, 163, 190, 238, 19, 127, 62, 220, 31, 127, 62, 133, 185, 230, 188, 209, 176, 131, 190, 126, 91, 207, 190, 84, 64, 100, 188, 109, 155, 155, 190, 147, 153, 106, 62, 60, 168, 156, 62, 202, 123, 169, 188, 49, 69, 191, 61, 192, 40, 199, 189, 86, 150, 14, 62, 52, 243, 210, 60, 134, 153, 25, 191, 124, 141, 197, 62, 52, 96, 47, 62, 250, 135, 178, 189, 145, 229, 45, 62, 235, 195, 129, 62, 165, 122, 138, 190, 103, 215, 27, 61, 176, 42, 67, 189, 134, 182, 21, 191, 208, 164, 79, 62, 117, 139, 88, 62, 140, 36, 66, 62, 237, 87, 99, 62, 132, 66, 6, 62, 77, 88, 58, 62, 104, 106, 6, 63, 57, 165, 107, 191, 144, 27, 180, 60, 226, 44, 51, 188, 206, 44, 179, 61, 6, 149, 202, 189, 215, 174, 217, 61, 21, 193, 24, 190, 43, 106, 51, 190, 181, 106, 59, 191, 217, 229, 92, 190, 171, 83, 158, 61, 102, 46, 165, 190, 14, 156, 123, 190, 55, 74, 51, 62, 168, 177, 169, 62, 128, 122, 144, 191, 47, 223, 250, 62, 96, 16, 82, 189, 140, 162, 103, 189, 217, 40, 8, 190, 237, 14, 76, 60, 93, 185, 187, 60, 163, 55, 249, 61, 208, 217, 191, 189, 74, 73, 113, 189, 55, 237, 232, 189, 62, 53, 16, 62, 29, 44, 17, 190, 98, 136, 4, 190, 125, 2, 18, 62, 39, 164, 174, 61, 173, 203, 214, 189, 87, 220, 179, 61, 145, 141, 80, 189, 99, 224, 25, 190, 14, 55, 32, 190, 76, 89, 218, 61, 58, 199, 164, 61, 99, 65, 168, 189, 68, 100, 45, 190, 254, 99, 16, 190, 36, 17, 220, 188, 94, 151, 27, 188, 236, 105, 31, 190, 153, 254, 52, 190, 216, 76, 252, 189, 72, 26, 212, 189, 213, 191, 176, 189, 208, 117, 3, 62, 169, 161, 140, 189, 211, 22, 205, 189};
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
                alignas(float) const unsigned char memory[] = {179, 95, 27, 190, 46, 154, 173, 188, 113, 102, 157, 189, 171, 25, 162, 62, 16, 71, 137, 188, 169, 183, 168, 61, 225, 109, 243, 61, 73, 106, 59, 62, 253, 254, 219, 62, 236, 36, 157, 189, 155, 94, 197, 190, 93, 52, 239, 61, 23, 221, 32, 189, 241, 251, 166, 188, 176, 182, 5, 62, 162, 213, 144, 189, 47, 110, 20, 61, 212, 11, 202, 189, 88, 21, 23, 62, 125, 234, 145, 62, 82, 255, 166, 61, 161, 244, 55, 190, 79, 37, 239, 189, 14, 69, 146, 189, 96, 222, 23, 190, 166, 220, 48, 190, 227, 214, 238, 189, 255, 238, 240, 61, 213, 194, 130, 60, 195, 101, 68, 189, 50, 194, 215, 61, 208, 27, 50, 190};
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
                alignas(float) const unsigned char memory[] = {54, 152, 136, 61, 3, 54, 85, 191, 50, 173, 159, 63, 246, 203, 58, 62, 148, 92, 234, 62, 15, 246, 74, 62, 202, 197, 138, 62, 38, 146, 168, 190, 13, 213, 177, 191, 145, 90, 231, 60, 221, 229, 196, 62, 173, 90, 79, 191, 131, 117, 40, 190, 158, 72, 188, 190, 135, 7, 151, 190, 195, 132, 82, 63, 24, 48, 77, 63, 60, 247, 141, 189, 196, 129, 129, 189, 21, 146, 226, 62, 215, 84, 49, 191, 137, 235, 51, 191, 71, 246, 203, 61, 54, 171, 171, 62, 93, 10, 104, 191, 216, 103, 222, 61, 226, 135, 215, 62, 63, 13, 18, 63, 180, 168, 140, 62, 154, 199, 14, 190, 125, 237, 162, 62, 176, 159, 174, 189, 176, 40, 236, 61, 162, 39, 204, 62, 176, 182, 82, 63, 91, 128, 109, 190, 217, 212, 20, 190, 209, 127, 26, 62, 187, 253, 39, 189, 23, 45, 192, 190, 70, 252, 83, 62, 216, 120, 166, 61, 166, 48, 92, 62, 198, 23, 227, 189, 153, 207, 96, 61, 90, 136, 136, 190, 238, 158, 3, 190, 204, 98, 178, 62, 179, 120, 105, 190, 4, 57, 88, 189, 181, 176, 43, 191, 70, 108, 141, 59, 128, 84, 221, 62, 196, 221, 146, 62, 19, 40, 241, 189, 234, 170, 9, 61, 122, 14, 184, 187, 207, 23, 175, 61, 217, 196, 61, 62, 18, 247, 100, 190, 120, 140, 44, 190, 214, 214, 195, 190, 28, 132, 190, 190, 89, 124, 19, 62};
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
                alignas(float) const unsigned char memory[] = {28, 176, 152, 189, 208, 130, 26, 191};
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
    alignas(float) const unsigned char memory[] = {69, 105, 96, 191, 39, 77, 89, 189, 4, 247, 122, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {55, 165, 27, 192, 28, 75, 112, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0088/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
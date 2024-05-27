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
                alignas(float) const unsigned char memory[] = {94, 43, 10, 186, 225, 102, 155, 62, 113, 26, 224, 62, 95, 181, 94, 62, 222, 192, 241, 62, 251, 195, 236, 190, 40, 190, 32, 61, 64, 200, 44, 63, 74, 113, 21, 191, 28, 199, 42, 186, 214, 179, 148, 62, 46, 52, 245, 62, 171, 222, 90, 190, 100, 69, 62, 63, 60, 125, 210, 190, 175, 172, 76, 61, 188, 190, 134, 63, 148, 66, 183, 190, 196, 136, 109, 61, 226, 221, 204, 61, 199, 224, 86, 59, 55, 2, 189, 62, 148, 185, 73, 61, 159, 120, 109, 62, 41, 23, 73, 63, 80, 57, 131, 63, 203, 191, 159, 62, 55, 56, 175, 190, 160, 123, 158, 191, 60, 146, 126, 190, 242, 121, 148, 190, 238, 177, 241, 190, 95, 94, 210, 61, 223, 85, 137, 62, 15, 199, 98, 63, 13, 23, 59, 59, 36, 180, 87, 191, 157, 55, 39, 63, 68, 166, 181, 60, 170, 3, 114, 190, 73, 255, 44, 191, 193, 38, 185, 61, 221, 7, 102, 191, 127, 198, 250, 190, 234, 124, 117, 189, 148, 138, 167, 62, 168, 84, 151, 191, 133, 92, 135, 190, 0, 249, 138, 190, 189, 0, 34, 63, 1, 242, 171, 62, 200, 181, 152, 63, 13, 215, 42, 63, 145, 95, 205, 62, 82, 155, 139, 59, 84, 204, 106, 191, 204, 184, 205, 190, 200, 36, 43, 63, 15, 139, 172, 189, 173, 44, 58, 191, 104, 42, 34, 63, 191, 31, 21, 63, 254, 36, 183, 62, 140, 115, 160, 62, 42, 242, 239, 62, 147, 130, 203, 190, 24, 6, 189, 62, 221, 188, 191, 190, 32, 28, 217, 62, 126, 108, 46, 190, 18, 187, 58, 63, 221, 211, 22, 63, 42, 33, 55, 63, 94, 233, 79, 61, 52, 15, 226, 190, 189, 228, 173, 188, 79, 98, 153, 63, 27, 15, 2, 63, 221, 139, 204, 190, 102, 151, 4, 191, 209, 209, 6, 190, 141, 139, 6, 191, 207, 177, 28, 191, 178, 27, 62, 190, 204, 144, 73, 63, 249, 227, 17, 189, 246, 193, 170, 62, 182, 210, 35, 191, 246, 207, 55, 191, 237, 170, 18, 191, 235, 209, 250, 62, 215, 188, 183, 191, 66, 94, 186, 190, 97, 254, 240, 62, 189, 8, 176, 190, 90, 149, 183, 190};
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
                alignas(float) const unsigned char memory[] = {17, 219, 128, 191, 147, 162, 32, 62, 128, 198, 112, 61, 116, 202, 31, 190, 71, 242, 167, 190, 150, 179, 79, 62, 187, 166, 19, 191, 233, 2, 39, 191, 5, 142, 159, 190, 52, 52, 61, 190, 115, 148, 6, 62, 8, 85, 23, 63, 226, 54, 194, 62, 137, 190, 123, 190, 169, 161, 71, 63, 206, 58, 160, 61, 10, 201, 62, 190, 241, 224, 152, 62, 41, 51, 95, 62, 83, 193, 237, 61, 47, 64, 160, 190, 6, 133, 193, 62, 238, 233, 14, 63, 185, 172, 13, 189, 245, 222, 15, 191, 220, 195, 0, 62, 82, 76, 65, 63, 141, 174, 23, 63, 103, 5, 26, 190, 78, 229, 154, 190, 193, 180, 202, 60, 127, 142, 2, 191};
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
                alignas(float) const unsigned char memory[] = {254, 187, 60, 188, 101, 185, 89, 62, 241, 20, 76, 190, 207, 1, 8, 62, 60, 240, 181, 62, 54, 140, 76, 62, 188, 27, 9, 190, 106, 220, 33, 61, 227, 100, 129, 62, 178, 146, 239, 61, 98, 164, 10, 62, 76, 33, 40, 62, 91, 76, 3, 189, 98, 24, 144, 188, 190, 238, 175, 189, 106, 93, 103, 190, 207, 50, 35, 62, 158, 207, 94, 61, 22, 182, 166, 190, 24, 221, 198, 61, 116, 122, 230, 189, 108, 169, 229, 189, 94, 187, 206, 60, 97, 51, 20, 62, 31, 246, 19, 62, 76, 221, 206, 60, 128, 39, 207, 189, 35, 254, 229, 189, 246, 69, 64, 188, 143, 181, 238, 190, 247, 108, 159, 190, 44, 62, 124, 189, 123, 132, 145, 190, 190, 65, 33, 190, 52, 165, 178, 190, 8, 234, 109, 62, 239, 71, 87, 191, 92, 215, 173, 62, 198, 162, 35, 62, 186, 113, 228, 190, 57, 13, 45, 191, 168, 132, 210, 190, 145, 182, 49, 62, 180, 125, 164, 62, 112, 57, 172, 61, 225, 165, 25, 190, 23, 231, 172, 61, 47, 66, 161, 62, 169, 129, 170, 62, 38, 72, 220, 189, 231, 6, 77, 190, 230, 47, 149, 60, 213, 90, 178, 190, 157, 121, 144, 190, 130, 110, 163, 61, 197, 126, 42, 62, 208, 41, 255, 62, 242, 82, 2, 62, 187, 130, 175, 61, 177, 88, 105, 189, 119, 74, 132, 190, 131, 2, 221, 190, 45, 203, 83, 62, 68, 111, 164, 62, 143, 22, 44, 190, 255, 60, 50, 190, 1, 153, 63, 61, 138, 240, 7, 190, 58, 192, 9, 190, 91, 149, 214, 61, 245, 0, 37, 189, 150, 153, 209, 186, 227, 224, 17, 190, 59, 72, 1, 190, 157, 203, 224, 189, 101, 186, 221, 61, 73, 14, 67, 190, 45, 15, 47, 190, 129, 104, 29, 190, 163, 232, 160, 187, 49, 177, 238, 189, 239, 79, 46, 190, 222, 110, 14, 189, 72, 53, 5, 62, 242, 186, 211, 61, 17, 213, 1, 190, 135, 102, 1, 189, 14, 162, 1, 62, 175, 194, 149, 61, 200, 58, 155, 188, 223, 96, 46, 189, 182, 93, 60, 190, 143, 157, 17, 189, 177, 110, 202, 61, 145, 108, 47, 190, 202, 17, 53, 190, 83, 166, 204, 61, 104, 78, 129, 61, 194, 115, 150, 61, 113, 149, 152, 61, 133, 79, 209, 189, 132, 103, 65, 189, 121, 15, 184, 60, 162, 149, 246, 60, 48, 243, 38, 189, 201, 16, 110, 189, 132, 250, 157, 189, 26, 17, 51, 190, 192, 95, 143, 189, 167, 239, 253, 189, 193, 80, 238, 189, 24, 125, 107, 188, 194, 106, 187, 189, 184, 168, 206, 189, 179, 23, 19, 62, 126, 7, 28, 62, 92, 107, 196, 60, 121, 175, 62, 190, 126, 72, 53, 190, 185, 155, 40, 190, 186, 196, 7, 190, 47, 237, 92, 189, 104, 63, 32, 189, 36, 34, 190, 189, 39, 232, 9, 61, 208, 148, 114, 187, 242, 104, 66, 190, 96, 126, 3, 61, 55, 183, 221, 61, 60, 36, 161, 62, 69, 18, 180, 61, 76, 123, 209, 61, 235, 12, 145, 62, 200, 43, 211, 188, 152, 156, 120, 189, 78, 224, 47, 61, 14, 115, 86, 61, 128, 209, 199, 190, 30, 55, 25, 190, 250, 219, 234, 61, 248, 206, 113, 190, 210, 167, 169, 62, 27, 122, 50, 191, 225, 37, 1, 191, 13, 197, 227, 189, 172, 155, 103, 62, 237, 245, 205, 190, 193, 72, 168, 61, 223, 105, 218, 61, 71, 79, 54, 62, 158, 199, 160, 61, 122, 157, 150, 188, 147, 247, 59, 62, 78, 41, 89, 189, 90, 29, 181, 190, 250, 236, 103, 191, 174, 75, 186, 62, 255, 248, 164, 190, 202, 93, 156, 190, 217, 230, 185, 189, 7, 34, 186, 190, 155, 39, 113, 61, 197, 224, 39, 190, 67, 95, 66, 62, 87, 130, 11, 191, 115, 248, 103, 62, 46, 234, 250, 189, 251, 136, 199, 190, 252, 204, 21, 191, 65, 159, 215, 190, 35, 228, 101, 189, 22, 24, 176, 61, 217, 189, 2, 62, 233, 183, 58, 189, 121, 201, 228, 189, 139, 250, 128, 62, 17, 189, 167, 62, 83, 217, 0, 190, 91, 11, 1, 190, 114, 81, 95, 62, 211, 210, 121, 189, 14, 3, 149, 189, 118, 89, 197, 61, 113, 190, 159, 61, 0, 4, 194, 62, 20, 121, 226, 61, 245, 89, 189, 60, 124, 144, 15, 189, 88, 182, 45, 187, 112, 231, 141, 190, 162, 40, 192, 61, 186, 150, 234, 61, 179, 106, 44, 62, 90, 62, 12, 60, 233, 225, 85, 62, 171, 207, 62, 190, 112, 226, 138, 62, 194, 173, 164, 61, 3, 50, 209, 188, 32, 186, 8, 61, 112, 11, 189, 190, 167, 211, 50, 189, 123, 211, 174, 190, 255, 119, 74, 62, 25, 136, 143, 62, 161, 166, 224, 190, 27, 162, 144, 190, 184, 39, 106, 61, 92, 237, 38, 191, 41, 137, 118, 190, 250, 253, 228, 61, 194, 169, 133, 62, 1, 102, 204, 188, 59, 44, 35, 62, 180, 63, 100, 62, 120, 104, 230, 190, 146, 141, 91, 62, 238, 219, 93, 190, 186, 239, 141, 189, 217, 38, 15, 190, 214, 241, 27, 62, 69, 183, 39, 190, 244, 72, 34, 61, 112, 139, 20, 189, 164, 65, 103, 189, 142, 199, 86, 60, 163, 55, 87, 61, 195, 112, 25, 190, 193, 191, 159, 189, 167, 112, 181, 61, 14, 212, 19, 189, 163, 100, 241, 61, 126, 136, 49, 61, 64, 213, 14, 62, 103, 202, 28, 190, 193, 51, 179, 61, 235, 186, 245, 61, 169, 202, 2, 62, 227, 92, 179, 189, 248, 198, 205, 60, 22, 98, 24, 61, 169, 245, 42, 190, 120, 245, 133, 61, 86, 252, 168, 189, 48, 225, 117, 61, 19, 178, 24, 190, 139, 41, 17, 62, 220, 224, 15, 189, 104, 36, 119, 61, 124, 233, 241, 189, 110, 184, 132, 189, 214, 155, 15, 190, 30, 130, 74, 189, 135, 127, 213, 189, 245, 249, 34, 60, 187, 192, 9, 190, 4, 63, 2, 190, 6, 69, 44, 61, 68, 157, 23, 61, 158, 184, 238, 190, 84, 125, 199, 188, 188, 103, 230, 190, 56, 201, 239, 188, 191, 60, 55, 190, 42, 20, 23, 62, 211, 138, 222, 61, 230, 110, 25, 62, 237, 25, 94, 191, 254, 141, 217, 62, 5, 60, 148, 61, 195, 247, 26, 62, 72, 155, 134, 190, 10, 111, 161, 191, 245, 63, 126, 189, 80, 211, 255, 189, 222, 150, 45, 190, 216, 236, 42, 60, 4, 237, 35, 61, 126, 97, 217, 190, 217, 97, 150, 190, 56, 99, 142, 190, 205, 41, 94, 191, 194, 119, 239, 61, 127, 23, 111, 62, 181, 132, 53, 60, 152, 216, 95, 62, 140, 235, 147, 190, 176, 27, 255, 189, 24, 71, 115, 190, 96, 230, 88, 61, 127, 68, 51, 190, 237, 102, 60, 61, 138, 158, 70, 190, 49, 72, 28, 62, 243, 37, 187, 189, 119, 75, 15, 190, 20, 109, 166, 190, 73, 7, 244, 190, 232, 109, 64, 61, 50, 91, 228, 61, 200, 217, 176, 189, 51, 120, 246, 189, 169, 41, 30, 189, 22, 208, 111, 62, 21, 206, 158, 61, 236, 208, 19, 62, 232, 68, 50, 190, 159, 154, 96, 62, 52, 146, 175, 61, 244, 111, 76, 61, 36, 150, 225, 61, 137, 104, 76, 62, 46, 9, 74, 62, 201, 214, 51, 62, 121, 114, 24, 61, 78, 117, 31, 190, 117, 134, 7, 62, 188, 133, 12, 190, 198, 242, 143, 62, 219, 199, 55, 190, 251, 253, 208, 188, 14, 71, 54, 189, 5, 193, 177, 190, 175, 59, 188, 188, 208, 10, 218, 190, 169, 185, 171, 190, 42, 246, 48, 61, 1, 190, 4, 190, 251, 80, 156, 190, 80, 53, 73, 190, 131, 131, 57, 62, 205, 61, 143, 61, 247, 72, 244, 190, 184, 90, 195, 62, 175, 104, 22, 62, 93, 134, 55, 62, 134, 180, 166, 189, 131, 69, 250, 189, 44, 143, 48, 62, 227, 102, 37, 62, 132, 32, 11, 190, 178, 133, 82, 61, 116, 187, 143, 62, 199, 125, 54, 190, 145, 149, 102, 62, 46, 255, 144, 190, 254, 72, 133, 188, 213, 229, 72, 62, 25, 166, 8, 62, 203, 60, 193, 190, 109, 130, 193, 62, 76, 43, 202, 189, 60, 213, 218, 189, 11, 22, 246, 60, 233, 158, 162, 59, 250, 119, 14, 189, 159, 59, 50, 62, 232, 4, 82, 61, 49, 213, 31, 62, 9, 233, 149, 188, 84, 225, 40, 190, 243, 180, 148, 187, 78, 12, 187, 61, 178, 44, 12, 190, 206, 50, 58, 188, 77, 174, 88, 188, 8, 250, 45, 190, 94, 97, 198, 189, 183, 152, 253, 61, 200, 67, 202, 61, 152, 252, 6, 62, 108, 209, 46, 190, 195, 207, 3, 62, 79, 45, 202, 189, 173, 254, 28, 61, 6, 242, 125, 61, 9, 172, 254, 189, 116, 100, 7, 190, 75, 177, 74, 189, 54, 80, 19, 190, 74, 125, 218, 189, 25, 153, 182, 189, 44, 181, 14, 190, 14, 157, 141, 60, 1, 38, 114, 58, 217, 169, 248, 61, 99, 113, 192, 61, 108, 67, 25, 59, 205, 137, 168, 62, 204, 199, 187, 62, 200, 20, 133, 61, 5, 69, 163, 62, 175, 240, 150, 62, 209, 23, 56, 189, 135, 253, 172, 189, 75, 215, 202, 61, 240, 211, 20, 189, 209, 205, 106, 61, 238, 31, 40, 191, 67, 116, 62, 191, 111, 87, 205, 189, 242, 171, 72, 62, 26, 57, 237, 190, 193, 250, 204, 190, 252, 185, 166, 62, 229, 182, 149, 62, 230, 51, 170, 59, 63, 134, 177, 189, 240, 208, 41, 191, 23, 215, 36, 62, 39, 189, 138, 191, 213, 138, 224, 190, 71, 159, 220, 61, 54, 139, 32, 62, 244, 42, 100, 191, 62, 127, 61, 191, 191, 27, 210, 61, 95, 156, 51, 190, 182, 157, 62, 190, 94, 183, 145, 187, 107, 251, 144, 189, 229, 151, 239, 189, 180, 15, 19, 190, 231, 79, 46, 61, 29, 231, 180, 188, 100, 11, 200, 60, 226, 249, 158, 190, 151, 208, 211, 61, 222, 118, 139, 189, 124, 0, 31, 61, 205, 236, 170, 190, 77, 189, 130, 61, 220, 59, 13, 190, 118, 196, 19, 62, 89, 56, 37, 190, 214, 142, 99, 190, 75, 100, 115, 189, 215, 27, 164, 190, 132, 66, 120, 189, 3, 92, 8, 62, 32, 207, 238, 60, 133, 170, 210, 189, 151, 146, 100, 190, 225, 152, 43, 190, 71, 160, 24, 190, 200, 69, 15, 62, 208, 27, 189, 60, 66, 32, 66, 61, 214, 36, 187, 61, 16, 250, 26, 62, 7, 45, 163, 62, 117, 4, 103, 190, 169, 51, 241, 61, 10, 127, 1, 190, 247, 238, 251, 61, 56, 55, 31, 61, 239, 73, 181, 62, 217, 232, 17, 63, 228, 181, 242, 61, 235, 110, 2, 63, 187, 37, 208, 61, 205, 19, 132, 189, 165, 149, 254, 189, 159, 202, 65, 191, 98, 26, 50, 190, 58, 253, 186, 62, 167, 194, 65, 62, 88, 151, 148, 190, 238, 65, 104, 62, 95, 120, 22, 62, 89, 129, 201, 189, 23, 30, 109, 189, 205, 54, 195, 190, 142, 148, 241, 60, 252, 232, 204, 189, 206, 83, 171, 189, 204, 188, 230, 61, 23, 130, 108, 62, 14, 220, 2, 191, 13, 198, 28, 191, 200, 247, 37, 62, 39, 67, 1, 61, 158, 97, 118, 62, 203, 13, 143, 190, 106, 139, 41, 189, 37, 240, 132, 61, 241, 137, 34, 190, 59, 108, 169, 62, 33, 196, 143, 62, 33, 214, 171, 62, 49, 18, 236, 189, 92, 58, 181, 188, 101, 233, 0, 190, 22, 129, 129, 62, 41, 245, 217, 61, 64, 94, 143, 190, 143, 173, 254, 189, 86, 85, 167, 62, 57, 78, 49, 188, 174, 168, 13, 190, 237, 182, 147, 62, 14, 50, 151, 62, 249, 87, 27, 190, 126, 76, 41, 190, 253, 207, 230, 190, 171, 156, 154, 61, 29, 30, 164, 189, 71, 243, 18, 190, 212, 111, 83, 62, 226, 31, 67, 62, 210, 31, 159, 190, 18, 59, 58, 190, 73, 90, 6, 62, 128, 138, 199, 189, 180, 38, 125, 190, 80, 181, 117, 189, 141, 255, 210, 190, 66, 250, 155, 190, 79, 75, 188, 189, 225, 24, 108, 61, 183, 230, 71, 190, 235, 190, 252, 189, 127, 98, 117, 61, 15, 144, 98, 61, 255, 175, 195, 189, 67, 232, 112, 62, 97, 61, 84, 62, 152, 88, 237, 61, 214, 171, 34, 62, 180, 141, 190, 61, 140, 74, 100, 190, 203, 149, 192, 61, 122, 0, 32, 189, 62, 3, 143, 189, 184, 211, 153, 189, 124, 247, 201, 189, 103, 170, 190, 190, 120, 81, 250, 188, 187, 71, 110, 62, 32, 20, 73, 62, 234, 156, 59, 60, 15, 151, 218, 61, 1, 234, 195, 60, 253, 112, 142, 190, 196, 133, 180, 190, 46, 215, 75, 190, 99, 183, 161, 190, 140, 211, 25, 62, 166, 62, 23, 190, 208, 241, 32, 63, 18, 136, 185, 189, 218, 133, 245, 190, 77, 175, 178, 190, 192, 196, 185, 191, 68, 95, 181, 61, 42, 190, 45, 62, 138, 234, 217, 61, 168, 229, 3, 190, 249, 219, 206, 61, 240, 170, 197, 62, 226, 14, 149, 62, 43, 238, 115, 188, 190, 52, 237, 190, 240, 221, 58, 62, 52, 139, 200, 190, 139, 123, 101, 189, 181, 8, 41, 62, 249, 139, 30, 62, 152, 127, 75, 61, 13, 100, 231, 60, 114, 143, 175, 61, 255, 152, 22, 190, 155, 246, 38, 190, 7, 51, 22, 191, 215, 99, 158, 62, 195, 94, 95, 189, 118, 249, 230, 60, 76, 136, 139, 190, 249, 228, 94, 191, 181, 26, 33, 62, 196, 5, 164, 190, 246, 1, 146, 62, 181, 72, 150, 61, 21, 73, 33, 189, 32, 112, 194, 189, 140, 173, 115, 191, 199, 241, 139, 62, 95, 230, 167, 62, 17, 21, 219, 61, 50, 235, 243, 189, 242, 216, 216, 188, 166, 166, 89, 61, 126, 156, 113, 188, 102, 91, 136, 60, 7, 117, 124, 190, 38, 101, 190, 61, 50, 242, 128, 190, 218, 105, 72, 190, 32, 94, 74, 62, 57, 31, 199, 61, 222, 111, 220, 190, 185, 128, 37, 62, 211, 44, 110, 61, 75, 91, 2, 189, 252, 199, 115, 188, 50, 170, 229, 190, 36, 48, 42, 62, 26, 177, 61, 190, 14, 187, 164, 61, 13, 200, 231, 61, 192, 11, 206, 189, 251, 101, 57, 189, 180, 162, 44, 190, 146, 189, 236, 189, 220, 222, 9, 62, 121, 2, 8, 62, 120, 23, 232, 189, 169, 9, 4, 189, 132, 204, 136, 60, 123, 225, 160, 60, 40, 28, 183, 189, 160, 58, 22, 62, 172, 155, 253, 189, 62, 149, 114, 189, 66, 131, 37, 62, 84, 47, 5, 62, 46, 186, 191, 188, 156, 172, 40, 62, 13, 198, 135, 61, 42, 169, 243, 189, 9, 200, 152, 189, 198, 57, 119, 189, 116, 103, 167, 189, 50, 182, 6, 190, 44, 122, 198, 189, 142, 2, 209, 61, 158, 31, 223, 189, 149, 47, 219, 61, 253, 78, 229, 188, 129, 217, 159, 188, 8, 59, 223, 187, 68, 243, 58, 190, 164, 155, 39, 191, 65, 142, 212, 62, 198, 201, 0, 190, 171, 250, 27, 62, 191, 60, 255, 189, 179, 251, 28, 190, 231, 251, 150, 61, 136, 198, 74, 190, 251, 93, 64, 61, 120, 97, 104, 190, 204, 113, 25, 189, 196, 131, 129, 60, 83, 43, 27, 62, 31, 82, 137, 62, 168, 42, 3, 63, 60, 50, 89, 190, 163, 201, 22, 62, 139, 7, 141, 62, 183, 69, 88, 189, 132, 112, 43, 60, 88, 146, 68, 62, 242, 18, 171, 61, 17, 88, 254, 61, 139, 159, 128, 61, 48, 49, 191, 59, 206, 151, 29, 62, 13, 62, 134, 190, 82, 138, 241, 190, 171, 248, 63, 62, 145, 213, 178, 62, 61, 65, 170, 190, 206, 21, 28, 61, 17, 34, 229, 189, 236, 110, 43, 61, 64, 238, 137, 190, 167, 55, 8, 190, 178, 247, 31, 62, 253, 35, 177, 189, 28, 233, 174, 189, 209, 245, 184, 190, 85, 184, 57, 62, 123, 243, 14, 63, 16, 2, 42, 190, 154, 189, 168, 62, 251, 55, 140, 60, 121, 209, 21, 62, 12, 98, 173, 62, 65, 177, 110, 62, 175, 226, 128, 59, 43, 197, 156, 62, 98, 12, 247, 61, 243, 16, 6, 62, 229, 136, 65, 62, 188, 215, 162, 60, 200, 40, 9, 188, 160, 221, 236, 188, 114, 211, 197, 61, 168, 196, 155, 61, 179, 16, 130, 61, 50, 229, 130, 190, 130, 233, 192, 61, 53, 130, 20, 62, 20, 231, 68, 62, 250, 6, 20, 62, 76, 200, 162, 62, 191, 205, 210, 189, 172, 34, 168, 61, 205, 148, 186, 60, 117, 123, 44, 189, 30, 76, 234, 61, 227, 252, 95, 62, 61, 183, 138, 62, 242, 240, 33, 190, 117, 152, 48, 62, 237, 86, 188, 62, 183, 69, 233, 60, 63, 8, 137, 62, 151, 118, 184, 189, 89, 51, 141, 189, 145, 35, 188, 189, 57, 152, 117, 62, 174, 249, 145, 189, 12, 112, 237, 59, 188, 10, 48, 188, 130, 237, 176, 61, 143, 116, 167, 61, 254, 163, 41, 190, 176, 112, 21, 62, 171, 9, 38, 62, 120, 45, 146, 62, 84, 250, 252, 61, 109, 125, 184, 61, 119, 180, 218, 61, 196, 162, 1, 190, 219, 141, 86, 190, 131, 200, 184, 59, 55, 224, 85, 61, 79, 69, 7, 189, 32, 167, 212, 60, 142, 180, 54, 61, 114, 60, 25, 62, 42, 224, 187, 190, 126, 135, 160, 190, 82, 75, 217, 190, 184, 186, 31, 62, 226, 168, 2, 62, 8, 95, 30, 191, 210, 159, 176, 189, 95, 123, 6, 191, 101, 128, 199, 62, 55, 73, 90, 190, 35, 83, 18, 190, 203, 11, 153, 189, 205, 123, 212, 59, 95, 194, 24, 190, 175, 82, 95, 189, 106, 50, 179, 62, 183, 196, 197, 60, 131, 252, 161, 62, 210, 68, 208, 190, 231, 170, 231, 189, 170, 152, 94, 190, 246, 202, 147, 61, 157, 3, 5, 190, 245, 188, 173, 62, 86, 132, 110, 62, 31, 249, 135, 62, 188, 7, 252, 190, 207, 117, 248, 189, 149, 157, 169, 61, 168, 253, 185, 61, 146, 164, 69, 191, 140, 228, 52, 190, 104, 237, 166, 62, 175, 120, 129, 62, 177, 18, 18, 190, 241, 103, 21, 190, 222, 141, 147, 190, 95, 38, 25, 191, 53, 84, 129, 58, 83, 166, 133, 191, 157, 125, 99, 190, 91, 70, 6, 189, 179, 221, 186, 62, 198, 189, 24, 62, 253, 206, 60, 62, 213, 96, 250, 61, 18, 201, 129, 190, 51, 93, 202, 61, 140, 229, 162, 61, 24, 82, 191, 190, 42, 8, 0, 190, 46, 172, 215, 190, 6, 115, 131, 191, 162, 135, 205, 62, 209, 146, 99, 189, 35, 118, 165, 190, 227, 96, 138, 188, 215, 173, 158, 62, 19, 81, 180, 62, 37, 124, 226, 61, 3, 170, 109, 190, 125, 50, 2, 62, 33, 45, 128, 61, 68, 59, 13, 190, 136, 32, 102, 61, 147, 194, 7, 63, 184, 159, 132, 189, 156, 39, 79, 61, 249, 24, 72, 62, 103, 248, 92, 189, 31, 223, 78, 62, 232, 6, 151, 188, 190, 45, 97, 191, 97, 155, 128, 190, 228, 91, 55, 62, 227, 120, 189, 60, 218, 169, 156, 190, 78, 223, 183, 61, 43, 168, 35, 62, 216, 133, 190, 60, 244, 116, 162, 189, 67, 109, 200, 189, 77, 141, 132, 190, 99, 152, 53, 189, 217, 193, 169, 189, 123, 107, 175, 62, 24, 101, 39, 190, 116, 121, 173, 190, 176, 15, 155, 190, 180, 49, 237, 189, 31, 102, 208, 61, 221, 214, 131, 62, 218, 242, 70, 191, 186, 34, 107, 62, 174, 212, 235, 189, 249, 76, 47, 62, 146, 53, 126, 189, 61, 232, 92, 62, 73, 129, 105, 62, 19, 225, 71, 190, 252, 221, 163, 62, 139, 199, 161, 62, 87, 195, 162, 189, 54, 109, 19, 62, 152, 85, 239, 190, 89, 114, 40, 191, 14, 120, 54, 62, 12, 152, 151, 60, 171, 2, 115, 190, 88, 140, 198, 60, 207, 68, 93, 62, 26, 122, 206, 189, 202, 191, 208, 190, 118, 170, 19, 191, 80, 71, 144, 190, 238, 208, 160, 62, 172, 249, 88, 189, 167, 223, 230, 61, 112, 185, 181, 189, 62, 195, 249, 190, 241, 249, 246, 190, 184, 54, 23, 190, 3, 246, 188, 186, 226, 171, 41, 62, 252, 160, 41, 191, 98, 163, 137, 61, 14, 243, 36, 189, 55, 194, 222, 187, 209, 136, 198, 189, 126, 136, 51, 189, 54, 223, 165, 62, 69, 32, 7, 191, 136, 130, 11, 62, 202, 25, 255, 61, 31, 34, 26, 61, 132, 196, 230, 61, 35, 111, 238, 190, 65, 226, 38, 191, 191, 75, 143, 62, 78, 59, 53, 190, 84, 23, 120, 190, 241, 36, 26, 62, 180, 54, 26, 62, 77, 76, 168, 60, 88, 195, 89, 190, 90, 218, 18, 190, 35, 176, 15, 188, 224, 231, 183, 61, 246, 224, 197, 188, 38, 17, 120, 189, 63, 50, 53, 62, 20, 117, 56, 189, 61, 235, 65, 190, 64, 157, 54, 62, 181, 131, 84, 62, 122, 191, 149, 62, 104, 201, 214, 58, 88, 137, 46, 62, 66, 168, 93, 190, 37, 247, 70, 189, 168, 69, 251, 61, 224, 95, 29, 62, 135, 73, 84, 61, 167, 142, 172, 59, 43, 62, 67, 62, 170, 33, 196, 61, 129, 40, 5, 62, 206, 170, 218, 59, 150, 186, 20, 191, 69, 213, 229, 190, 65, 147, 148, 62, 142, 70, 9, 190, 170, 143, 9, 190, 2, 142, 48, 62, 228, 230, 141, 62, 174, 158, 135, 61, 207, 1, 95, 190, 220, 102, 179, 190, 179, 115, 218, 187, 242, 145, 30, 190, 209, 9, 72, 61, 24, 30, 9, 61, 56, 92, 89, 188, 240, 101, 235, 190, 230, 129, 220, 190, 119, 175, 51, 62, 237, 22, 169, 62, 238, 5, 175, 61, 67, 164, 2, 190, 9, 28, 121, 61, 234, 173, 134, 61, 163, 81, 162, 61, 105, 89, 144, 189, 42, 130, 225, 190, 239, 174, 156, 190, 249, 36, 146, 62, 28, 177, 136, 62, 100, 61, 242, 190, 95, 89, 226, 61, 131, 38, 62, 190, 245, 207, 88, 62, 80, 124, 17, 190, 200, 107, 129, 189, 255, 170, 49, 190, 34, 219, 166, 61, 193, 26, 133, 60, 89, 61, 159, 62, 177, 6, 177, 62, 238, 118, 168, 190, 119, 236, 250, 61, 235, 218, 13, 190, 59, 87, 75, 189, 243, 44, 143, 190, 255, 131, 62, 62, 33, 13, 22, 189, 231, 151, 127, 189, 133, 214, 113, 190, 109, 222, 190, 189, 9, 218, 86, 189, 159, 72, 127, 62, 31, 116, 224, 190, 241, 96, 207, 61, 131, 216, 33, 191, 122, 109, 249, 61, 119, 14, 22, 190, 239, 110, 118, 189, 123, 201, 163, 187, 156, 16, 166, 61, 138, 221, 140, 191, 161, 26, 164, 62, 186, 70, 98, 61, 200, 235, 74, 62, 61, 35, 18, 191, 19, 179, 103, 191, 15, 222, 70, 190, 159, 91, 129, 189, 221, 32, 15, 191, 197, 160, 165, 61, 177, 20, 48, 61, 160, 6, 90, 61, 144, 101, 182, 190, 198, 111, 28, 60, 2, 104, 89, 191, 62, 230, 102, 62, 197, 24, 3, 62, 90, 104, 150, 61, 211, 117, 20, 190, 46, 214, 10, 191, 248, 42, 16, 190, 97, 179, 95, 190, 156, 37, 25, 191, 135, 24, 175, 191, 99, 205, 47, 62, 170, 235, 124, 191, 246, 65, 126, 62, 218, 82, 0, 190, 186, 34, 88, 190, 48, 3, 56, 190, 202, 74, 164, 190, 64, 69, 75, 62, 10, 152, 14, 63, 55, 151, 183, 189, 83, 254, 129, 59, 252, 245, 176, 62, 15, 197, 60, 62, 242, 49, 197, 62, 119, 254, 7, 62, 117, 250, 145, 190, 19, 66, 15, 190, 141, 41, 31, 190, 8, 115, 225, 190, 72, 244, 88, 62, 41, 164, 139, 62, 251, 18, 51, 190, 139, 131, 140, 61, 167, 110, 160, 62, 81, 237, 185, 62, 184, 78, 151, 60, 71, 35, 48, 191, 64, 104, 240, 61, 254, 180, 67, 191};
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
                alignas(float) const unsigned char memory[] = {247, 206, 49, 190, 94, 74, 1, 62, 241, 93, 135, 189, 74, 197, 38, 60, 73, 25, 55, 61, 71, 125, 200, 189, 138, 54, 64, 190, 151, 151, 86, 189, 187, 255, 7, 190, 12, 195, 138, 62, 38, 9, 27, 62, 158, 124, 213, 189, 48, 44, 136, 190, 241, 118, 43, 189, 79, 252, 172, 61, 237, 96, 42, 189, 52, 38, 152, 61, 6, 97, 14, 61, 148, 21, 135, 189, 213, 229, 250, 189, 233, 24, 53, 190, 166, 48, 56, 62, 226, 225, 108, 62, 202, 117, 28, 188, 25, 240, 2, 190, 168, 88, 1, 62, 103, 82, 171, 62, 109, 214, 132, 61, 142, 19, 14, 61, 103, 169, 29, 189, 109, 183, 10, 190, 148, 86, 51, 62};
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
                alignas(float) const unsigned char memory[] = {74, 16, 28, 190, 146, 72, 67, 63, 203, 213, 215, 61, 67, 219, 113, 60, 48, 132, 20, 191, 108, 22, 146, 62, 21, 189, 137, 62, 74, 71, 237, 189, 215, 135, 97, 191, 5, 28, 65, 62, 83, 32, 210, 62, 51, 20, 6, 59, 43, 48, 136, 63, 91, 125, 152, 61, 227, 231, 203, 190, 19, 50, 93, 190, 45, 37, 173, 60, 209, 237, 40, 63, 152, 7, 117, 62, 158, 217, 150, 60, 131, 6, 212, 190, 244, 116, 220, 61, 27, 33, 30, 190, 40, 20, 162, 62, 179, 182, 129, 191, 253, 233, 32, 191, 180, 124, 37, 191, 133, 255, 92, 190, 135, 82, 251, 190, 242, 89, 93, 62, 21, 168, 146, 191, 191, 83, 210, 62, 21, 25, 178, 61, 166, 11, 229, 62, 12, 42, 22, 61, 144, 96, 247, 61, 115, 222, 155, 190, 80, 211, 74, 62, 1, 145, 18, 62, 209, 42, 35, 189, 28, 59, 100, 62, 72, 74, 131, 190, 232, 2, 124, 61, 16, 73, 72, 59, 165, 150, 215, 62, 171, 173, 232, 61, 66, 229, 30, 62, 235, 50, 17, 189, 117, 192, 242, 189, 133, 175, 1, 62, 69, 233, 172, 189, 184, 211, 23, 190, 129, 233, 135, 61, 69, 86, 184, 190, 84, 34, 122, 190, 159, 218, 216, 62, 18, 25, 62, 62, 166, 226, 225, 61, 57, 182, 135, 61, 36, 79, 63, 61, 254, 171, 245, 61, 203, 37, 87, 190, 165, 190, 6, 189, 197, 230, 77, 189};
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
                alignas(float) const unsigned char memory[] = {179, 148, 30, 62, 84, 236, 212, 190};
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
    alignas(float) const unsigned char memory[] = {55, 212, 24, 191, 109, 209, 149, 62, 222, 248, 147, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {113, 101, 43, 64, 40, 173, 45, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0038/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
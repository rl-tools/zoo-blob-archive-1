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
                alignas(float) const unsigned char memory[] = {117, 253, 221, 62, 153, 90, 8, 191, 215, 232, 51, 63, 210, 57, 74, 189, 109, 163, 255, 61, 31, 188, 92, 60, 2, 149, 47, 63, 65, 141, 136, 62, 146, 188, 244, 62, 117, 199, 130, 62, 68, 47, 102, 61, 138, 118, 249, 62, 69, 176, 215, 62, 178, 25, 1, 63, 232, 28, 25, 61, 123, 95, 66, 189, 70, 80, 223, 62, 90, 89, 146, 190, 25, 154, 199, 62, 100, 51, 100, 191, 156, 222, 149, 190, 104, 161, 132, 62, 34, 138, 96, 189, 227, 166, 134, 62, 242, 136, 34, 63, 171, 131, 67, 191, 134, 250, 89, 190, 59, 108, 231, 190, 87, 37, 16, 191, 212, 70, 214, 62, 196, 241, 148, 62, 81, 195, 208, 62, 80, 144, 212, 62, 42, 37, 4, 191, 117, 58, 32, 63, 226, 160, 221, 61, 16, 197, 183, 61, 38, 111, 78, 191, 78, 138, 233, 62, 69, 52, 8, 63, 219, 30, 139, 191, 106, 214, 94, 190, 240, 189, 94, 62, 141, 159, 33, 191, 167, 239, 53, 63, 79, 83, 252, 60, 76, 137, 125, 62, 179, 242, 193, 190, 149, 134, 169, 190, 68, 91, 225, 188, 246, 158, 33, 63, 76, 6, 11, 191, 24, 227, 211, 190, 40, 233, 62, 62, 22, 220, 255, 60, 181, 12, 50, 63, 90, 139, 102, 61, 152, 221, 125, 63, 75, 206, 199, 189, 204, 45, 172, 189, 189, 188, 193, 190, 91, 124, 90, 190, 123, 150, 155, 190, 82, 76, 224, 62, 108, 98, 44, 191, 104, 4, 12, 191, 71, 113, 156, 190, 192, 81, 110, 190, 51, 102, 67, 191, 195, 152, 140, 62, 117, 69, 15, 63, 219, 76, 205, 62, 158, 34, 235, 62, 150, 103, 80, 62, 165, 172, 161, 62, 168, 236, 23, 62, 126, 61, 64, 191, 62, 124, 129, 62, 75, 4, 43, 191, 57, 11, 229, 189, 65, 48, 204, 190, 249, 84, 143, 62, 247, 237, 129, 62, 154, 231, 224, 190, 141, 47, 176, 190, 19, 223, 13, 191, 54, 250, 192, 62, 100, 128, 169, 62, 22, 44, 94, 191, 140, 186, 255, 62, 55, 230, 204, 62, 174, 20, 211, 190, 67, 78, 189, 62, 53, 205, 11, 62, 114, 60, 86, 63, 41, 66, 72, 190};
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
                alignas(float) const unsigned char memory[] = {175, 137, 170, 190, 172, 41, 172, 190, 92, 237, 250, 57, 99, 118, 82, 190, 85, 90, 145, 62, 129, 219, 192, 62, 41, 170, 251, 62, 32, 139, 211, 62, 170, 225, 49, 62, 66, 44, 253, 62, 137, 167, 252, 190, 28, 70, 15, 63, 220, 14, 210, 62, 158, 160, 161, 190, 162, 89, 11, 63, 105, 226, 159, 61, 110, 111, 33, 62, 109, 74, 9, 63, 158, 110, 198, 190, 57, 136, 29, 62, 255, 148, 163, 190, 92, 107, 6, 191, 10, 5, 124, 62, 78, 143, 236, 190, 166, 111, 93, 190, 20, 1, 122, 62, 21, 133, 1, 191, 132, 171, 154, 187, 183, 70, 168, 189, 123, 207, 192, 62, 241, 118, 23, 63, 73, 218, 62, 62};
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
                alignas(float) const unsigned char memory[] = {42, 57, 63, 190, 227, 229, 25, 62, 242, 31, 68, 62, 108, 209, 49, 61, 202, 191, 149, 62, 114, 71, 166, 61, 159, 126, 129, 62, 63, 34, 96, 62, 34, 196, 108, 61, 120, 201, 214, 186, 227, 231, 128, 61, 237, 158, 205, 61, 109, 102, 171, 187, 198, 123, 164, 190, 64, 37, 156, 60, 54, 92, 208, 189, 136, 41, 98, 190, 120, 77, 45, 62, 135, 52, 217, 61, 200, 244, 1, 63, 120, 100, 16, 62, 47, 176, 76, 190, 222, 202, 243, 189, 72, 220, 207, 189, 34, 47, 185, 188, 33, 104, 106, 190, 8, 148, 18, 60, 88, 120, 73, 190, 143, 131, 63, 190, 252, 94, 92, 62, 163, 218, 15, 62, 78, 220, 67, 189, 28, 52, 161, 190, 106, 134, 23, 62, 129, 109, 224, 189, 210, 114, 246, 189, 178, 7, 182, 189, 56, 139, 13, 62, 152, 139, 11, 62, 47, 104, 156, 189, 238, 127, 93, 62, 251, 137, 19, 62, 174, 6, 165, 190, 38, 161, 22, 62, 210, 73, 128, 62, 150, 188, 242, 62, 58, 15, 169, 61, 154, 159, 243, 189, 27, 130, 64, 62, 178, 112, 17, 61, 233, 110, 171, 190, 27, 77, 100, 190, 218, 183, 70, 190, 83, 113, 207, 61, 226, 228, 146, 61, 183, 95, 139, 190, 77, 124, 35, 190, 145, 165, 160, 61, 124, 196, 59, 189, 5, 209, 11, 62, 241, 224, 133, 62, 124, 166, 46, 190, 94, 103, 101, 62, 147, 191, 114, 190, 255, 45, 152, 189, 228, 152, 192, 189, 221, 139, 60, 190, 171, 80, 45, 190, 38, 87, 114, 61, 4, 21, 216, 188, 236, 145, 152, 61, 201, 66, 77, 61, 229, 59, 241, 188, 54, 100, 71, 189, 191, 89, 91, 189, 132, 19, 79, 61, 26, 147, 129, 189, 154, 71, 43, 190, 187, 39, 23, 188, 71, 125, 153, 188, 62, 54, 253, 61, 174, 170, 31, 190, 6, 240, 176, 59, 140, 29, 241, 189, 1, 227, 4, 190, 140, 237, 199, 188, 107, 253, 240, 189, 106, 246, 135, 61, 40, 67, 2, 62, 98, 110, 156, 61, 235, 99, 148, 188, 145, 244, 110, 189, 113, 52, 111, 189, 244, 186, 232, 61, 255, 199, 208, 61, 186, 146, 253, 188, 167, 242, 35, 62, 225, 253, 238, 61, 17, 30, 163, 62, 204, 44, 214, 188, 191, 218, 51, 62, 69, 107, 64, 62, 193, 237, 158, 189, 26, 243, 19, 62, 71, 45, 247, 189, 94, 26, 18, 189, 156, 94, 147, 62, 3, 203, 132, 189, 68, 108, 60, 190, 234, 79, 11, 191, 243, 141, 165, 61, 10, 16, 125, 188, 203, 50, 199, 188, 6, 164, 181, 188, 17, 200, 210, 62, 196, 210, 221, 62, 235, 170, 93, 62, 29, 150, 74, 190, 71, 46, 124, 188, 74, 69, 53, 189, 137, 233, 128, 62, 184, 182, 224, 190, 57, 43, 130, 60, 0, 123, 63, 61, 10, 94, 247, 190, 243, 9, 101, 62, 20, 47, 50, 190, 173, 3, 174, 62, 234, 71, 225, 190, 104, 151, 169, 189, 84, 65, 189, 190, 226, 161, 191, 59, 86, 227, 43, 189, 233, 44, 51, 62, 237, 120, 252, 61, 26, 222, 113, 62, 174, 51, 29, 190, 173, 222, 132, 61, 130, 188, 161, 188, 144, 103, 134, 189, 157, 168, 210, 189, 52, 212, 14, 62, 157, 195, 129, 188, 50, 223, 78, 190, 60, 118, 168, 62, 105, 70, 115, 61, 255, 92, 137, 189, 11, 30, 237, 190, 212, 202, 139, 190, 11, 211, 72, 62, 131, 246, 162, 189, 149, 253, 166, 61, 160, 235, 170, 190, 31, 92, 145, 189, 250, 192, 112, 190, 52, 109, 115, 62, 127, 106, 23, 62, 89, 58, 37, 191, 213, 218, 37, 61, 121, 145, 115, 189, 208, 41, 124, 62, 252, 168, 38, 62, 65, 32, 16, 62, 71, 2, 3, 189, 213, 172, 131, 62, 33, 57, 147, 62, 225, 253, 84, 190, 73, 142, 134, 61, 142, 75, 211, 188, 186, 1, 43, 190, 78, 131, 8, 62, 65, 146, 137, 61, 46, 181, 50, 190, 78, 114, 245, 190, 121, 55, 49, 189, 125, 199, 217, 61, 239, 154, 154, 59, 12, 48, 73, 187, 48, 39, 78, 62, 201, 61, 16, 63, 245, 201, 195, 188, 15, 122, 81, 190, 193, 106, 140, 189, 193, 15, 102, 62, 54, 35, 58, 62, 2, 29, 34, 190, 204, 234, 102, 62, 59, 7, 119, 190, 17, 230, 124, 190, 40, 223, 111, 62, 5, 250, 64, 190, 104, 196, 224, 62, 69, 34, 148, 61, 78, 235, 196, 61, 148, 220, 187, 189, 6, 95, 58, 189, 245, 176, 23, 190, 169, 68, 218, 189, 109, 253, 64, 62, 204, 112, 193, 61, 76, 56, 101, 190, 7, 4, 66, 61, 56, 181, 150, 61, 85, 144, 27, 190, 46, 92, 124, 62, 233, 117, 147, 187, 32, 215, 158, 58, 62, 223, 64, 188, 171, 241, 217, 186, 106, 86, 23, 62, 192, 202, 134, 61, 157, 125, 254, 190, 80, 23, 220, 61, 80, 250, 154, 188, 173, 95, 41, 61, 181, 115, 133, 61, 131, 255, 7, 62, 213, 28, 38, 62, 142, 184, 129, 188, 223, 224, 79, 190, 253, 214, 172, 62, 248, 71, 238, 61, 78, 249, 45, 62, 26, 149, 249, 190, 170, 92, 183, 189, 230, 214, 73, 188, 78, 12, 237, 61, 60, 20, 66, 190, 120, 249, 28, 188, 223, 185, 11, 62, 23, 122, 11, 190, 104, 177, 52, 190, 139, 208, 231, 189, 57, 218, 18, 61, 169, 130, 63, 190, 41, 251, 217, 60, 30, 38, 49, 190, 174, 36, 243, 189, 18, 179, 134, 61, 192, 152, 181, 189, 64, 234, 165, 189, 133, 81, 114, 61, 53, 249, 31, 190, 234, 177, 114, 61, 22, 198, 238, 189, 163, 50, 234, 189, 16, 9, 103, 189, 142, 170, 240, 61, 158, 246, 175, 61, 100, 96, 13, 189, 27, 136, 168, 60, 217, 73, 240, 61, 12, 210, 36, 62, 14, 249, 134, 187, 38, 248, 127, 61, 44, 194, 7, 190, 33, 17, 201, 187, 223, 30, 138, 189, 107, 171, 91, 61, 146, 15, 83, 188, 76, 241, 140, 189, 153, 193, 60, 60, 155, 252, 176, 187, 234, 254, 59, 62, 167, 113, 24, 62, 183, 121, 154, 60, 126, 100, 204, 189, 4, 18, 156, 61, 172, 142, 87, 61, 104, 70, 178, 62, 126, 251, 97, 59, 159, 188, 164, 59, 26, 175, 211, 60, 7, 137, 8, 62, 207, 42, 89, 190, 142, 228, 145, 190, 235, 160, 6, 190, 250, 135, 93, 62, 112, 101, 134, 61, 208, 253, 132, 61, 230, 21, 68, 60, 43, 77, 169, 62, 231, 1, 183, 189, 229, 68, 171, 62, 66, 2, 189, 62, 45, 176, 12, 61, 171, 35, 163, 62, 58, 71, 105, 60, 178, 44, 217, 190, 42, 110, 145, 61, 51, 107, 67, 190, 152, 223, 98, 189, 195, 253, 59, 62, 131, 51, 12, 62, 148, 178, 198, 190, 1, 70, 252, 61, 249, 8, 6, 191, 9, 155, 141, 189, 3, 107, 55, 61, 27, 60, 177, 62, 113, 223, 253, 61, 2, 96, 212, 60, 147, 39, 155, 188, 120, 124, 112, 189, 63, 35, 36, 62, 43, 81, 221, 61, 93, 202, 46, 189, 42, 86, 80, 61, 121, 245, 119, 190, 89, 6, 167, 189, 251, 113, 111, 189, 188, 227, 6, 190, 217, 235, 60, 190, 15, 33, 120, 190, 113, 175, 41, 190, 216, 95, 136, 62, 47, 225, 43, 62, 137, 177, 29, 191, 202, 24, 37, 190, 108, 180, 186, 61, 22, 186, 238, 61, 148, 118, 129, 61, 19, 14, 147, 62, 245, 106, 103, 62, 80, 157, 41, 62, 2, 226, 58, 190, 138, 65, 178, 190, 72, 113, 1, 62, 218, 3, 197, 190, 43, 255, 20, 190, 45, 230, 252, 61, 113, 82, 47, 190, 163, 218, 213, 188, 162, 213, 174, 60, 161, 126, 223, 189, 80, 127, 8, 62, 35, 51, 177, 189, 235, 236, 167, 190, 151, 51, 194, 61, 133, 6, 241, 60, 254, 71, 34, 62, 248, 218, 10, 190, 72, 63, 49, 189, 156, 208, 119, 62, 185, 48, 144, 62, 191, 59, 62, 190, 219, 197, 9, 189, 71, 57, 209, 189, 47, 165, 104, 190, 65, 249, 114, 189, 51, 127, 247, 188, 195, 128, 112, 62, 235, 157, 164, 61, 161, 138, 219, 61, 18, 84, 127, 189, 79, 201, 233, 187, 204, 48, 90, 62, 40, 254, 4, 62, 52, 45, 132, 189, 101, 119, 37, 62, 12, 248, 127, 187, 89, 4, 74, 189, 156, 54, 49, 190, 68, 77, 69, 62, 203, 0, 179, 61, 77, 49, 235, 190, 252, 41, 9, 62, 145, 18, 188, 61, 118, 218, 145, 188, 88, 118, 64, 62, 68, 26, 24, 62, 6, 238, 144, 62, 166, 92, 11, 62, 195, 207, 86, 188, 70, 179, 196, 61, 225, 93, 208, 61, 69, 223, 23, 190, 90, 110, 19, 190, 87, 209, 14, 62, 250, 243, 85, 190, 247, 173, 245, 190, 185, 76, 68, 62, 174, 243, 156, 60, 9, 43, 231, 61, 209, 184, 155, 62, 20, 54, 245, 61, 96, 141, 69, 62, 26, 127, 96, 62, 220, 167, 216, 62, 209, 169, 51, 189, 142, 232, 236, 61, 34, 106, 196, 188, 128, 245, 96, 190, 125, 16, 34, 60, 232, 58, 184, 62, 126, 70, 35, 62, 134, 116, 137, 190, 254, 199, 30, 191, 102, 147, 13, 189, 217, 49, 70, 62, 79, 33, 63, 190, 216, 189, 57, 60, 120, 28, 169, 61, 112, 250, 29, 63, 243, 78, 60, 189, 155, 123, 60, 190, 65, 9, 248, 61, 136, 177, 17, 62, 250, 141, 88, 62, 55, 182, 21, 190, 113, 218, 133, 62, 229, 226, 247, 190, 211, 24, 6, 191, 38, 234, 25, 62, 124, 236, 48, 190, 161, 30, 155, 62, 209, 174, 190, 189, 67, 243, 182, 60, 238, 89, 248, 189, 52, 25, 170, 189, 34, 218, 98, 189, 172, 19, 221, 189, 216, 219, 82, 190, 41, 210, 33, 190, 197, 92, 146, 189, 29, 188, 171, 60, 223, 42, 1, 61, 242, 250, 133, 61, 176, 106, 159, 61, 193, 244, 178, 61, 172, 242, 136, 61, 24, 188, 93, 189, 171, 32, 243, 61, 13, 47, 96, 190, 226, 190, 94, 62, 89, 49, 22, 62, 87, 64, 252, 189, 217, 130, 137, 189, 216, 221, 83, 190, 48, 243, 214, 189, 20, 190, 69, 61, 106, 56, 104, 190, 70, 137, 54, 189, 120, 128, 18, 190, 220, 65, 82, 60, 1, 145, 141, 60, 220, 75, 7, 188, 226, 220, 152, 61, 114, 232, 68, 190, 108, 103, 106, 61, 217, 48, 250, 61, 249, 181, 249, 61, 67, 110, 93, 61, 185, 245, 225, 189, 218, 186, 235, 189, 99, 110, 31, 188, 163, 97, 228, 61, 155, 77, 112, 189, 98, 135, 48, 190, 236, 94, 54, 190, 225, 231, 45, 190, 94, 52, 47, 190, 248, 20, 170, 61, 181, 222, 29, 190, 120, 89, 209, 59, 233, 159, 60, 190, 52, 191, 151, 61, 11, 35, 42, 60, 42, 46, 193, 189, 90, 118, 195, 187, 146, 164, 103, 61, 14, 241, 136, 61, 37, 11, 53, 190, 194, 91, 52, 60, 124, 255, 213, 61, 6, 255, 171, 61, 116, 138, 50, 190, 95, 235, 178, 189, 206, 228, 33, 61, 112, 175, 156, 60, 80, 67, 160, 61, 115, 159, 16, 190, 131, 128, 152, 62, 0, 1, 121, 62, 19, 121, 141, 62, 233, 162, 157, 61, 158, 155, 45, 62, 32, 119, 7, 60, 236, 243, 222, 189, 223, 244, 227, 188, 9, 148, 92, 62, 136, 55, 135, 61, 125, 251, 55, 190, 220, 161, 74, 191, 87, 9, 14, 189, 134, 61, 23, 62, 225, 106, 148, 188, 208, 35, 75, 61, 199, 118, 206, 62, 241, 166, 216, 62, 212, 9, 71, 62, 20, 180, 208, 189, 105, 116, 133, 60, 213, 107, 22, 189, 228, 7, 75, 62, 252, 12, 121, 190, 48, 194, 250, 61, 45, 196, 133, 190, 164, 95, 41, 191, 33, 61, 51, 62, 108, 6, 86, 61, 105, 252, 43, 62, 108, 148, 41, 190, 252, 197, 43, 190, 51, 151, 177, 61, 165, 32, 101, 60, 215, 228, 106, 190, 136, 111, 178, 189, 107, 48, 4, 61, 180, 163, 30, 188, 241, 135, 119, 62, 84, 171, 210, 61, 33, 150, 40, 60, 0, 211, 122, 189, 7, 197, 49, 62, 185, 255, 169, 61, 101, 26, 213, 61, 115, 36, 23, 190, 71, 215, 76, 61, 190, 32, 52, 189, 77, 178, 34, 190, 51, 180, 135, 189, 251, 103, 224, 188, 117, 224, 144, 62, 202, 40, 124, 187, 252, 183, 79, 187, 81, 173, 105, 188, 164, 89, 7, 61, 179, 20, 73, 190, 212, 247, 37, 62, 226, 157, 118, 62, 6, 82, 94, 190, 76, 69, 164, 62, 194, 215, 20, 189, 112, 193, 77, 190, 39, 18, 231, 61, 196, 130, 204, 61, 180, 215, 221, 189, 83, 217, 130, 62, 41, 62, 191, 187, 48, 110, 9, 62, 254, 44, 187, 60, 89, 158, 23, 62, 150, 130, 182, 61, 66, 131, 116, 61, 200, 77, 249, 59, 80, 17, 204, 188, 59, 170, 195, 190, 15, 49, 203, 61, 74, 111, 213, 59, 153, 121, 164, 61, 82, 249, 1, 189, 176, 218, 121, 62, 92, 4, 33, 62, 125, 186, 243, 61, 102, 234, 61, 190, 30, 121, 6, 62, 200, 227, 125, 189, 93, 96, 106, 190, 156, 229, 176, 189, 130, 60, 6, 62, 128, 142, 7, 190, 70, 169, 53, 190, 202, 37, 51, 62, 160, 221, 3, 62, 225, 109, 1, 62, 166, 172, 101, 62, 81, 225, 153, 61, 190, 178, 238, 61, 68, 93, 159, 62, 157, 148, 150, 61, 81, 27, 227, 189, 103, 117, 11, 62, 235, 193, 58, 190, 176, 54, 252, 189, 184, 235, 214, 186, 183, 221, 114, 62, 243, 216, 143, 62, 66, 87, 141, 188, 217, 74, 95, 190, 26, 58, 159, 190, 236, 213, 104, 61, 39, 72, 151, 189, 192, 87, 79, 62, 47, 225, 143, 62, 231, 247, 234, 189, 57, 192, 132, 61, 30, 211, 23, 190, 176, 218, 9, 62, 85, 133, 180, 61, 93, 54, 177, 60, 16, 157, 162, 190, 178, 186, 123, 62, 75, 37, 223, 190, 170, 127, 209, 190, 121, 251, 139, 62, 72, 157, 241, 190, 229, 111, 13, 60, 5, 46, 242, 61, 134, 64, 35, 190, 202, 221, 64, 62, 200, 202, 57, 62, 217, 70, 252, 61, 37, 77, 73, 62, 80, 5, 24, 190, 93, 214, 213, 189, 253, 151, 62, 190, 179, 70, 224, 61, 86, 5, 27, 61, 235, 183, 23, 61, 38, 132, 181, 190, 179, 62, 233, 190, 165, 37, 126, 190, 17, 60, 112, 61, 47, 69, 248, 189, 210, 192, 67, 62, 58, 255, 130, 62, 194, 227, 133, 62, 68, 229, 3, 62, 129, 203, 152, 190, 214, 146, 249, 60, 14, 5, 148, 62, 127, 97, 55, 62, 212, 101, 215, 190, 238, 15, 233, 62, 197, 227, 190, 190, 27, 236, 201, 190, 62, 108, 194, 189, 212, 202, 223, 190, 148, 137, 59, 62, 0, 174, 236, 61, 223, 145, 205, 189, 147, 105, 248, 61, 117, 128, 226, 61, 63, 247, 6, 62, 97, 230, 41, 190, 198, 58, 156, 189, 58, 27, 142, 188, 181, 124, 158, 61, 237, 131, 31, 190, 49, 71, 29, 190, 109, 195, 50, 61, 160, 244, 233, 189, 163, 221, 176, 188, 145, 156, 242, 189, 9, 8, 5, 190, 35, 145, 142, 59, 213, 1, 6, 190, 201, 132, 20, 60, 5, 181, 181, 59, 104, 34, 14, 190, 26, 124, 243, 189, 43, 11, 183, 61, 15, 160, 96, 189, 53, 159, 132, 189, 21, 31, 5, 190, 131, 209, 170, 60, 140, 4, 198, 61, 105, 236, 132, 188, 128, 188, 247, 189, 110, 85, 29, 190, 160, 36, 56, 187, 239, 88, 101, 190, 220, 71, 221, 61, 158, 62, 240, 61, 121, 181, 173, 61, 66, 243, 47, 62, 39, 231, 86, 61, 60, 207, 149, 187, 51, 47, 89, 190, 219, 92, 18, 190, 57, 16, 147, 61, 131, 209, 217, 187, 65, 245, 162, 62, 55, 207, 50, 191, 195, 149, 116, 190, 30, 99, 60, 191, 47, 214, 149, 62, 189, 248, 165, 190, 101, 20, 86, 62, 146, 224, 222, 62, 121, 102, 173, 62, 176, 82, 59, 190, 198, 178, 62, 190, 221, 32, 8, 62, 31, 226, 42, 60, 88, 164, 209, 189, 36, 246, 6, 191, 183, 146, 22, 62, 201, 211, 158, 190, 64, 79, 143, 191, 190, 24, 255, 189, 185, 230, 89, 191, 27, 215, 153, 62, 8, 70, 214, 189, 152, 110, 4, 62, 27, 11, 233, 188, 137, 125, 237, 189, 140, 220, 40, 62, 19, 166, 8, 61, 67, 150, 235, 188, 26, 19, 255, 188, 15, 72, 122, 189, 69, 13, 204, 61, 218, 132, 6, 62, 139, 225, 142, 189, 28, 132, 52, 190, 159, 162, 68, 189, 108, 187, 31, 189, 224, 169, 130, 61, 92, 91, 255, 188, 55, 253, 136, 61, 104, 157, 189, 189, 144, 214, 192, 189, 8, 170, 241, 188, 43, 16, 0, 190, 222, 114, 22, 189, 61, 254, 225, 188, 120, 168, 22, 190, 197, 212, 62, 188, 215, 162, 226, 61, 65, 10, 21, 190, 242, 21, 235, 60, 208, 206, 129, 61, 247, 171, 142, 60, 208, 151, 1, 189, 172, 69, 228, 189, 240, 235, 134, 189, 133, 204, 127, 61, 115, 49, 90, 61, 113, 104, 6, 62, 71, 29, 52, 190, 144, 154, 175, 60, 110, 54, 162, 189, 202, 151, 254, 189, 224, 184, 176, 189, 195, 247, 41, 62, 38, 163, 40, 190, 39, 38, 22, 190, 98, 214, 173, 61, 95, 64, 1, 62, 94, 60, 220, 189, 107, 176, 10, 60, 83, 61, 123, 189, 126, 170, 164, 61, 219, 150, 207, 61, 174, 106, 7, 190, 118, 158, 45, 190, 253, 0, 128, 60, 23, 126, 201, 189, 168, 204, 255, 188, 158, 160, 157, 60, 42, 212, 185, 61, 132, 5, 5, 62, 207, 78, 208, 59, 106, 11, 2, 61, 130, 33, 29, 190, 162, 249, 232, 189, 23, 8, 30, 61, 242, 245, 26, 62, 153, 66, 80, 190, 134, 140, 124, 190, 186, 42, 132, 190, 62, 8, 241, 189, 74, 235, 120, 189, 165, 196, 47, 62, 146, 111, 144, 189, 43, 217, 36, 62, 23, 170, 71, 190, 10, 109, 168, 61, 153, 62, 119, 60, 101, 102, 3, 187, 252, 35, 97, 61, 219, 146, 166, 190, 41, 69, 153, 61, 148, 37, 119, 62, 49, 68, 201, 190, 250, 198, 255, 60, 15, 66, 51, 191, 121, 71, 26, 190, 234, 13, 124, 190, 170, 82, 94, 190, 247, 153, 80, 189, 146, 244, 50, 62, 87, 135, 183, 190, 65, 225, 30, 190, 43, 188, 143, 62, 137, 119, 121, 190, 64, 200, 0, 189, 119, 143, 44, 188, 8, 194, 37, 62, 223, 213, 33, 62, 35, 73, 8, 62, 162, 254, 133, 61, 178, 152, 186, 189, 1, 171, 252, 61, 49, 220, 129, 62, 53, 77, 129, 190, 65, 178, 162, 189, 142, 59, 229, 61, 50, 42, 163, 62, 116, 198, 213, 61, 51, 244, 151, 190, 232, 55, 166, 190, 149, 37, 159, 190, 53, 11, 137, 189, 96, 171, 0, 189, 131, 100, 84, 61, 153, 37, 1, 62, 85, 253, 164, 62, 100, 58, 74, 62, 125, 47, 243, 190, 17, 30, 100, 62, 193, 8, 81, 62, 36, 62, 180, 61, 244, 70, 6, 191, 234, 151, 48, 62, 123, 227, 252, 190, 58, 143, 30, 191, 85, 11, 15, 62, 147, 14, 1, 191, 153, 128, 45, 189, 83, 237, 120, 61, 50, 56, 165, 189, 84, 115, 68, 62, 226, 136, 60, 62, 118, 193, 187, 62, 215, 190, 105, 61, 159, 168, 132, 61, 249, 94, 30, 188, 60, 41, 90, 189, 229, 29, 25, 190, 227, 121, 29, 189, 232, 130, 41, 62, 28, 60, 125, 60, 121, 188, 56, 191, 44, 35, 37, 189, 228, 56, 138, 61, 73, 35, 123, 190, 184, 247, 10, 62, 189, 144, 2, 62, 33, 162, 52, 63, 183, 43, 190, 62, 170, 34, 207, 190, 16, 248, 166, 188, 174, 172, 19, 189, 130, 61, 131, 62, 255, 58, 209, 190, 129, 197, 146, 61, 158, 65, 227, 189, 254, 134, 45, 191, 158, 88, 10, 61, 179, 68, 61, 190, 193, 61, 129, 62, 70, 140, 239, 190, 11, 115, 244, 189, 50, 245, 181, 190, 34, 43, 23, 188, 164, 251, 143, 190, 137, 58, 108, 61, 171, 117, 108, 60, 173, 156, 128, 62, 40, 250, 177, 62, 204, 174, 117, 62, 203, 147, 181, 190, 129, 76, 26, 61, 166, 146, 157, 62, 32, 253, 239, 62, 159, 133, 22, 190, 43, 211, 228, 190, 117, 47, 183, 61, 99, 75, 179, 62, 78, 24, 64, 190, 131, 10, 47, 62, 84, 166, 137, 191, 106, 36, 28, 62, 7, 25, 200, 190, 189, 13, 168, 189, 79, 27, 219, 190, 243, 98, 240, 62, 196, 194, 8, 191, 90, 82, 153, 62, 75, 39, 237, 62, 49, 157, 54, 190, 120, 19, 113, 62, 185, 169, 217, 190, 232, 85, 145, 189, 237, 61, 135, 61, 16, 102, 129, 61, 206, 126, 28, 62, 165, 58, 22, 190, 34, 102, 0, 62, 82, 76, 222, 189, 103, 51, 213, 188, 54, 154, 83, 61, 42, 41, 212, 61, 208, 135, 230, 189, 205, 49, 167, 189, 76, 10, 235, 187, 89, 254, 5, 61, 147, 115, 247, 60, 167, 78, 47, 185, 15, 16, 89, 60, 179, 246, 224, 189, 222, 127, 16, 62, 69, 135, 65, 189, 112, 28, 152, 188, 124, 116, 227, 61, 167, 180, 17, 190, 24, 92, 56, 189, 151, 252, 117, 59, 21, 72, 151, 61, 200, 100, 237, 189, 158, 153, 209, 189, 214, 231, 110, 189, 154, 40, 253, 188, 139, 26, 68, 189, 103, 93, 7, 189, 172, 204, 210, 189, 56, 140, 29, 62, 19, 207, 73, 189, 69, 141, 2, 189, 84, 151, 194, 61, 219, 230, 157, 60, 134, 68, 43, 62, 103, 99, 95, 62, 193, 49, 9, 62, 93, 100, 40, 62, 54, 90, 225, 60, 139, 241, 141, 60, 204, 192, 98, 62, 20, 212, 58, 62, 34, 91, 13, 62, 220, 112, 171, 187, 212, 143, 41, 59, 6, 112, 164, 61, 102, 195, 31, 62, 84, 206, 43, 190, 129, 194, 223, 189, 223, 163, 15, 189, 64, 238, 196, 61, 118, 249, 11, 189, 227, 26, 10, 62, 44, 222, 71, 61, 231, 76, 138, 60, 172, 128, 98, 62, 129, 18, 221, 62, 236, 248, 37, 189, 193, 18, 197, 61, 49, 174, 77, 190, 62, 76, 40, 190, 19, 179, 187, 189, 74, 51, 12, 61, 132, 46, 247, 189, 88, 58, 214, 61, 253, 155, 208, 60, 177, 99, 206, 189, 150, 236, 142, 189, 5, 233, 15, 62, 218, 234, 211, 61, 205, 61, 115, 189, 251, 9, 128, 189, 65, 157, 242, 61, 122, 194, 7, 62, 200, 204, 140, 189, 17, 81, 8, 190, 17, 207, 142, 188, 193, 46, 104, 189, 69, 52, 94, 61, 223, 166, 156, 189, 37, 239, 199, 189, 161, 172, 97, 61, 251, 67, 28, 190, 220, 139, 216, 61, 175, 208, 11, 189, 21, 249, 64, 190, 200, 156, 65, 188, 8, 27, 136, 61, 241, 147, 191, 60, 78, 179, 14, 62, 111, 214, 184, 188, 44, 246, 58, 189, 52, 250, 40, 190, 232, 13, 146, 61, 210, 152, 87, 61, 145, 26, 124, 189, 103, 166, 209, 188, 159, 126, 131, 188, 122, 97, 235, 61, 190, 161, 64, 190, 102, 19, 53, 190, 35, 203, 123, 61, 51, 222, 98, 189, 241, 33, 22, 190, 50, 71, 22, 62, 247, 165, 10, 61, 128, 134, 29, 188, 142, 154, 230, 189, 115, 28, 202, 60, 210, 40, 52, 190, 66, 122, 106, 189, 136, 249, 35, 62, 255, 224, 176, 188, 50, 151, 34, 190, 166, 44, 89, 61, 143, 53, 45, 62, 226, 25, 187, 61, 98, 225, 156, 61, 56, 102, 13, 61, 2, 196, 148, 189, 204, 246, 154, 60, 75, 29, 52, 190, 53, 89, 50, 60, 92, 244, 134, 189};
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
                alignas(float) const unsigned char memory[] = {217, 125, 75, 62, 62, 18, 13, 61, 136, 104, 63, 190, 201, 111, 41, 62, 92, 81, 231, 60, 13, 42, 204, 188, 156, 184, 28, 61, 129, 78, 0, 190, 3, 9, 6, 62, 253, 204, 48, 62, 128, 66, 49, 189, 219, 107, 236, 61, 33, 62, 91, 61, 127, 184, 23, 188, 23, 101, 7, 190, 195, 188, 64, 61, 29, 167, 4, 62, 90, 0, 161, 62, 1, 237, 157, 60, 205, 37, 88, 60, 166, 61, 138, 189, 184, 16, 20, 62, 32, 79, 42, 190, 255, 131, 75, 189, 145, 82, 46, 62, 147, 28, 245, 61, 201, 148, 121, 62, 86, 6, 86, 62, 166, 97, 56, 190, 75, 223, 23, 61, 248, 132, 167, 189, 255, 223, 15, 189};
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
                alignas(float) const unsigned char memory[] = {155, 12, 22, 189, 118, 66, 157, 62, 156, 67, 15, 62, 96, 141, 93, 190, 28, 228, 200, 62, 252, 122, 137, 190, 86, 230, 191, 190, 62, 79, 26, 62, 179, 126, 229, 61, 247, 165, 16, 63, 207, 24, 215, 62, 136, 100, 164, 189, 51, 133, 245, 190, 130, 204, 13, 189, 19, 47, 241, 61, 10, 120, 188, 190, 207, 50, 31, 62, 9, 201, 57, 189, 147, 102, 195, 190, 64, 155, 184, 190, 28, 91, 133, 61, 148, 97, 46, 191, 125, 254, 169, 189, 208, 15, 62, 61, 225, 12, 167, 62, 70, 158, 233, 190, 7, 1, 242, 190, 212, 144, 29, 63, 105, 250, 132, 187, 76, 51, 62, 62, 106, 105, 131, 61, 146, 207, 149, 61, 94, 90, 135, 190, 58, 217, 200, 61, 7, 36, 220, 61, 142, 102, 81, 189, 241, 237, 47, 189, 45, 132, 138, 62, 16, 215, 152, 61, 152, 71, 167, 188, 124, 177, 164, 189, 224, 116, 214, 189, 64, 60, 222, 62, 250, 248, 59, 190, 119, 215, 104, 62, 167, 160, 141, 61, 239, 228, 41, 188, 157, 71, 179, 189, 3, 255, 200, 189, 65, 240, 144, 190, 232, 199, 252, 60, 84, 133, 5, 62, 191, 36, 175, 61, 211, 152, 201, 189, 198, 37, 34, 62, 236, 182, 21, 62, 37, 40, 61, 62, 29, 243, 26, 62, 138, 70, 18, 190, 81, 230, 164, 61, 99, 75, 236, 188, 79, 234, 21, 190, 47, 16, 212, 188, 255, 94, 18, 62};
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
                alignas(float) const unsigned char memory[] = {141, 134, 153, 61, 41, 117, 110, 190};
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
    alignas(float) const unsigned char memory[] = {13, 146, 41, 63, 122, 123, 185, 190, 167, 227, 61, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {240, 197, 78, 63, 22, 77, 144, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0097/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}